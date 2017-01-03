#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Single[]
struct SingleU5BU5D_t2316563989;
// GvrProfile/Distortion
struct Distortion_t2316389254;
struct Distortion_t2316389254_marshaled_pinvoke;
struct Distortion_t2316389254_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion2316389254.h"

// System.Single[] GvrProfile/Distortion::get_Coef()
extern "C"  SingleU5BU5D_t2316563989* Distortion_get_Coef_m177042795 (Distortion_t2316389254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrProfile/Distortion::set_Coef(System.Single[])
extern "C"  void Distortion_set_Coef_m4180484256 (Distortion_t2316389254 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile/Distortion::distort(System.Single)
extern "C"  float Distortion_distort_m950147313 (Distortion_t2316389254 * __this, float ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile/Distortion::distortInv(System.Single)
extern "C"  float Distortion_distortInv_m553222738 (Distortion_t2316389254 * __this, float ___radius0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Distortion_t2316389254;
struct Distortion_t2316389254_marshaled_pinvoke;

extern "C" void Distortion_t2316389254_marshal_pinvoke(const Distortion_t2316389254& unmarshaled, Distortion_t2316389254_marshaled_pinvoke& marshaled);
extern "C" void Distortion_t2316389254_marshal_pinvoke_back(const Distortion_t2316389254_marshaled_pinvoke& marshaled, Distortion_t2316389254& unmarshaled);
extern "C" void Distortion_t2316389254_marshal_pinvoke_cleanup(Distortion_t2316389254_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Distortion_t2316389254;
struct Distortion_t2316389254_marshaled_com;

extern "C" void Distortion_t2316389254_marshal_com(const Distortion_t2316389254& unmarshaled, Distortion_t2316389254_marshaled_com& marshaled);
extern "C" void Distortion_t2316389254_marshal_com_back(const Distortion_t2316389254_marshaled_com& marshaled, Distortion_t2316389254& unmarshaled);
extern "C" void Distortion_t2316389254_marshal_com_cleanup(Distortion_t2316389254_marshaled_com& marshaled);
