#ifndef FIELD_H
#define FIELD_H

#include "Potentials.h"

class Field {

 private:
  double x = 0;
  double y = 0;
  double abs = 0;

 public:
  Field();
  inline virtual ~Field() = default;
  inline double GetFieldx() { return x; };
  inline double GetFieldy() { return y; };
  inline double Getabs() { return abs; };
  inline void Setabs(double absValue) { abs = absValue; };
  inline void SetField(double xValue, double yValue) { x = xValue, y = yValue; }
  inline void AddField(double xValue, double yValue) { x += xValue, y += yValue; }

 ClassDef(Field, 0);
};

void CalculateFields(Potentials &, Field **, Field **);
void CalculateAbsFields(Potentials &, Field **, Field **);
//Field** RotateField(Potentials &,Field**,double);
void RotateField(Potentials &, Field **, Field **, double);

#endif