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

// System.String
struct String_t;
// Gvr.Internal.EmulatorTouchEvent/Pointer
struct Pointer_t3710907716;
struct Pointer_t3710907716_marshaled_pinvoke;
struct Pointer_t3710907716_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3710907716.h"

// System.Void Gvr.Internal.EmulatorTouchEvent/Pointer::.ctor(System.Int32,System.Single,System.Single)
extern "C"  void Pointer__ctor_m4012668546 (Pointer_t3710907716 * __this, int32_t ___fingerId0, float ___normalizedX1, float ___normalizedY2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Gvr.Internal.EmulatorTouchEvent/Pointer::ToString()
extern "C"  String_t* Pointer_ToString_m3163504678 (Pointer_t3710907716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Pointer_t3710907716;
struct Pointer_t3710907716_marshaled_pinvoke;

extern "C" void Pointer_t3710907716_marshal_pinvoke(const Pointer_t3710907716& unmarshaled, Pointer_t3710907716_marshaled_pinvoke& marshaled);
extern "C" void Pointer_t3710907716_marshal_pinvoke_back(const Pointer_t3710907716_marshaled_pinvoke& marshaled, Pointer_t3710907716& unmarshaled);
extern "C" void Pointer_t3710907716_marshal_pinvoke_cleanup(Pointer_t3710907716_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Pointer_t3710907716;
struct Pointer_t3710907716_marshaled_com;

extern "C" void Pointer_t3710907716_marshal_com(const Pointer_t3710907716& unmarshaled, Pointer_t3710907716_marshaled_com& marshaled);
extern "C" void Pointer_t3710907716_marshal_com_back(const Pointer_t3710907716_marshaled_com& marshaled, Pointer_t3710907716& unmarshaled);
extern "C" void Pointer_t3710907716_marshal_com_cleanup(Pointer_t3710907716_marshaled_com& marshaled);
