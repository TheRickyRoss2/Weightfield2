// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME srcdIDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "include/WFGUI.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_Potentials(void *p = 0);
   static void *newArray_Potentials(Long_t size, void *p);
   static void delete_Potentials(void *p);
   static void deleteArray_Potentials(void *p);
   static void destruct_Potentials(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Potentials*)
   {
      ::Potentials *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Potentials >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Potentials", ::Potentials::Class_Version(), "include/Potentials.h", 27,
                  typeid(::Potentials), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Potentials::Dictionary, isa_proxy, 4,
                  sizeof(::Potentials) );
      instance.SetNew(&new_Potentials);
      instance.SetNewArray(&newArray_Potentials);
      instance.SetDelete(&delete_Potentials);
      instance.SetDeleteArray(&deleteArray_Potentials);
      instance.SetDestructor(&destruct_Potentials);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Potentials*)
   {
      return GenerateInitInstanceLocal((::Potentials*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Potentials*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Field(void *p = 0);
   static void *newArray_Field(Long_t size, void *p);
   static void delete_Field(void *p);
   static void deleteArray_Field(void *p);
   static void destruct_Field(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Field*)
   {
      ::Field *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Field >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Field", ::Field::Class_Version(), "include/Field.h", 7,
                  typeid(::Field), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Field::Dictionary, isa_proxy, 4,
                  sizeof(::Field) );
      instance.SetNew(&new_Field);
      instance.SetNewArray(&newArray_Field);
      instance.SetDelete(&delete_Field);
      instance.SetDeleteArray(&deleteArray_Field);
      instance.SetDestructor(&destruct_Field);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Field*)
   {
      return GenerateInitInstanceLocal((::Field*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Field*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *Carriers_Dictionary();
   static void Carriers_TClassManip(TClass*);
   static void *new_Carriers(void *p = 0);
   static void *newArray_Carriers(Long_t size, void *p);
   static void delete_Carriers(void *p);
   static void deleteArray_Carriers(void *p);
   static void destruct_Carriers(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Carriers*)
   {
      ::Carriers *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Carriers));
      static ::ROOT::TGenericClassInfo 
         instance("Carriers", "include/Carriers.h", 71,
                  typeid(::Carriers), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Carriers_Dictionary, isa_proxy, 4,
                  sizeof(::Carriers) );
      instance.SetNew(&new_Carriers);
      instance.SetNewArray(&newArray_Carriers);
      instance.SetDelete(&delete_Carriers);
      instance.SetDeleteArray(&deleteArray_Carriers);
      instance.SetDestructor(&destruct_Carriers);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Carriers*)
   {
      return GenerateInitInstanceLocal((::Carriers*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Carriers*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Carriers_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Carriers*)0x0)->GetClass();
      Carriers_TClassManip(theClass);
   return theClass;
   }

   static void Carriers_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_WFGUI(void *p);
   static void deleteArray_WFGUI(void *p);
   static void destruct_WFGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WFGUI*)
   {
      ::WFGUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WFGUI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WFGUI", ::WFGUI::Class_Version(), "include/WFGUI.h", 53,
                  typeid(::WFGUI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WFGUI::Dictionary, isa_proxy, 4,
                  sizeof(::WFGUI) );
      instance.SetDelete(&delete_WFGUI);
      instance.SetDeleteArray(&deleteArray_WFGUI);
      instance.SetDestructor(&destruct_WFGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WFGUI*)
   {
      return GenerateInitInstanceLocal((::WFGUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::WFGUI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Potentials::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Potentials::Class_Name()
{
   return "Potentials";
}

//______________________________________________________________________________
const char *Potentials::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Potentials*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Potentials::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Potentials*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Potentials::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Potentials*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Potentials::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Potentials*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Field::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Field::Class_Name()
{
   return "Field";
}

//______________________________________________________________________________
const char *Field::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Field*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Field::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Field*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Field::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Field*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Field::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Field*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WFGUI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WFGUI::Class_Name()
{
   return "WFGUI";
}

//______________________________________________________________________________
const char *WFGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WFGUI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WFGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WFGUI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WFGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WFGUI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WFGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WFGUI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Potentials::Streamer(TBuffer &R__b)
{
   // Stream an object of class Potentials.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Potentials::Class(),this);
   } else {
      R__b.WriteClassBuffer(Potentials::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Potentials(void *p) {
      return  p ? new(p) ::Potentials : new ::Potentials;
   }
   static void *newArray_Potentials(Long_t nElements, void *p) {
      return p ? new(p) ::Potentials[nElements] : new ::Potentials[nElements];
   }
   // Wrapper around operator delete
   static void delete_Potentials(void *p) {
      delete ((::Potentials*)p);
   }
   static void deleteArray_Potentials(void *p) {
      delete [] ((::Potentials*)p);
   }
   static void destruct_Potentials(void *p) {
      typedef ::Potentials current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Potentials

//______________________________________________________________________________
void Field::Streamer(TBuffer &R__b)
{
   // Stream an object of class Field.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Field::Class(),this);
   } else {
      R__b.WriteClassBuffer(Field::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Field(void *p) {
      return  p ? new(p) ::Field : new ::Field;
   }
   static void *newArray_Field(Long_t nElements, void *p) {
      return p ? new(p) ::Field[nElements] : new ::Field[nElements];
   }
   // Wrapper around operator delete
   static void delete_Field(void *p) {
      delete ((::Field*)p);
   }
   static void deleteArray_Field(void *p) {
      delete [] ((::Field*)p);
   }
   static void destruct_Field(void *p) {
      typedef ::Field current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Field

namespace ROOT {
   // Wrappers around operator new
   static void *new_Carriers(void *p) {
      return  p ? new(p) ::Carriers : new ::Carriers;
   }
   static void *newArray_Carriers(Long_t nElements, void *p) {
      return p ? new(p) ::Carriers[nElements] : new ::Carriers[nElements];
   }
   // Wrapper around operator delete
   static void delete_Carriers(void *p) {
      delete ((::Carriers*)p);
   }
   static void deleteArray_Carriers(void *p) {
      delete [] ((::Carriers*)p);
   }
   static void destruct_Carriers(void *p) {
      typedef ::Carriers current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Carriers

//______________________________________________________________________________
void WFGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class WFGUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WFGUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(WFGUI::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_WFGUI(void *p) {
      delete ((::WFGUI*)p);
   }
   static void deleteArray_WFGUI(void *p) {
      delete [] ((::WFGUI*)p);
   }
   static void destruct_WFGUI(void *p) {
      typedef ::WFGUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WFGUI

namespace {
  void TriggerDictionaryInitialization_Dict_Impl() {
    static const char* headers[] = {
"include/WFGUI.h",
0
    };
    static const char* includePaths[] = {
"/usr/local/root/include",
"/root/Documents/Weightfield2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$include/WFGUI.h")))  Potentials;
class __attribute__((annotate("$clingAutoload$include/WFGUI.h")))  Field;
class __attribute__((annotate("$clingAutoload$include/WFGUI.h")))  Carriers;
class __attribute__((annotate(R"ATTRDUMP(muss auskommentiert sein wenn .x ... .cxx+)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(muss auskommentiert sein wenn .x ... .cxx+)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(muss auskommentiert sein wenn .x ... .cxx+)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$include/WFGUI.h")))  WFGUI;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/WFGUI.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Carriers", payloadCode, "@",
"Field", payloadCode, "@",
"Potentials", payloadCode, "@",
"WFGUI", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Dict() {
  TriggerDictionaryInitialization_Dict_Impl();
}
