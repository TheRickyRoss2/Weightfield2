#ifndef CARRIERS_H
#define CARRIERS_H

#include "TMath.h"

#include "Field.h"

constexpr double EPSILON = 8.854e-12; // vacuum permittivity
constexpr double EPSILONR = 11.9;      // relative permittivity of silicon
constexpr double ECHARGE = 1.602177e-19;    // elementary charge in C

constexpr double FNA62 = 1;   // flag to use NA62 shaper

constexpr double kB = 1.38065e-23;  // Boltzmann constexprant (J/K)
constexpr double m0 = 9.109383e-31; // electron mass (kg)
constexpr double MU_E_300 = 0.1414;  // electron mobility in m2/Vs at 300K (Sentaurus)
constexpr double MU_H_300 = 0.0470; // hole mobility in m2/Vs at 300 K (Sentaurus)
constexpr double VESAT_300 = 1.07e5;   // 1.07e5 sentaurus electron saturation velocity in m/s
constexpr double VHSAT_300 = 8.37e4;   // sentaurus hole saturation velocity in m/s
constexpr double MU_E_D_300 = 0.18;   // Diamond electron mobility in m2/Vs at 300K
constexpr double MU_H_D_300 = 0.150;   // Diamond hole mobility in m2/Vs at 300 K
constexpr double VESAT_D_300 = 270e3;   // Diamond electron saturation velocity in m/s
constexpr double VHSAT_D_300 = 270e3;   // Diamond hole saturation velocity in m/s
constexpr double SQMUEDIVVESAT = (MU_E_300 / (VESAT_300)) * (MU_E_300 / (VESAT_300));
constexpr double MUHDIVVHSAT = (MU_H_300 / (VHSAT_300));
constexpr double RANGE_ALPHA = 30;        // Nicolo: range of alpha particles in silicon (um)
constexpr double ALPHAPRECISION = 50;      // Precision of alpha simulation
constexpr double ALPHAENERGY = 5000000;    // Fix Energy for alpha
constexpr double IONENERGY = 3.6;        // Ionization Energy in Silicon

// FBK: Dexp = 0, GAINDEPTH = +0.1, GAINLENGHT = 1 Doping 4.5 ==> 34V depletion
// CNM: Dexp = 0, GAINDEPTH = 0.3, GAINLENGHT = 2, Doping 1.3 ==> 35V V depletion Note: N*d^2 = 4.5

// CNM
constexpr double CNMGAINDEPTH = 0.;        //0
constexpr double CNMGAINLENGTH = 2;
constexpr double CNMDexp = 1;        //1 // needs to be 0!!! otherwise simulation does not work well
// FBK
constexpr double FBKGAINDEPTH = 0.62;
constexpr double FBKGAINLENGTH = 1.2;
constexpr double FBKLDGAINDEPTH = 0.72;
constexpr double FBKLDGAINLENGTH = 1.;
constexpr double FBKDexp = 0;
// ==1 calculate potential from doping
constexpr double ELECTRODE_DEPTH = 0.3;     // Depth of the electrodes, charged in this space do no generate current

constexpr double ALPHA_AVALANCHE = 0.746;     //second townsend coefficient

// TOFFEE
constexpr double TOFFEE_gm = 5E-3;    // 0.2 ns  for each det pF
constexpr double TOFFEE_gain = 500;
constexpr double TOFFEE_Cf = 70 * 1E-15;

constexpr double OSC_IN_RESISTANCE = 50;    // Ohm  osc input impedance
constexpr double BETA_0_E = 1.109;     // it was 2--> why?
constexpr double BETA_EXP_E = 0.66;
constexpr double BETA_0_H = 1.213;
constexpr double BETA_EXP_H = 0.17;
constexpr double LONGDIF = 1;       // longitudinal diffusion
constexpr double PRINTFREQUENCY = 1;
constexpr double LaserPairsPerMicron = 75;
constexpr double Laser1024Range = 1000;       // in micron 1mm absortion lenght?
constexpr double XRayRangeDef = 16;         // 10 cm absortion lenght?

class Carriers {

 private:
  double x;       // x position of carrier
  double y;       // y position of carrier
  int inside;     // if carrier inside detector, inside=1 ... if outside inside=0, if not yet created inside=-1
  double etheta;  // lorentz angle of electrons
  double htheta;  // lorentz angle of holes
  int charge;     //-1= electron +1=hole
  double vx;      //velocity along x axis
  double vy;      //velocity along y axis
  bool egain;     //if electron is a gain electron or not true=gain false=no gain
  double leftovergain;

 public:
  Carriers();            // carrier constructor
  ~Carriers();            // carrier destructor
  double Getx();            // returns x position of carrier
  double Gety();            // returns y position of carrier
  void Setx(double);        // set x position of carrier
  void Sety(double);        // set y position of carrier
  void Setinside(int);    // set inside
  int Getinside();        // returns inside
  void Setetheta(double);    // set lorentz angle of electrons
  void Seththeta(double);    // set lorentz angle of holes
  double Getetheta();        // returns lorentz angle of electrons
  double Geththeta();        // returns lorentz angle of holes
  void SetGainPart(bool);    //sets particle as gain particle
  bool GetGainPart();        //returns is gain particle
  void SetCharge(int);
  int GetCharge();
  void SetVx(double);
  void SetVy(double);
  double GetVx();
  double GetVy();
  void SetLeftovergain(double);
  double GetLeftovergain();

};

void CreateCharges(Potentials &,
                   Carriers *,
                   int,
                   void *);                            // create charges along path of particle
void CreateChargesAlphaTop(Potentials &pot,
                           Carriers *carriers,
                           int hit,
                           void *);                //creates alpha particles
void CreateChargesAlphaBottom(Potentials &pot, Carriers *carriers, int hit, void *);
void CreateChargesMipSide(Potentials &pot, Carriers *carriers, int hit, void *);
void CreateChargesLaserSide(Potentials &pot, Carriers *carriers, int hit, void *);
void CreateChargesXRay(Potentials &pot, Carriers *carriers, int hitx, int hity, void *);
void CalculateCurrents(Potentials &, Field **, Field **, Carriers *, void *, int);        // calculate currents
void SetLorentz(Potentials &, Carriers *, double, double, int);                                    // set lorentz angle

#endif
