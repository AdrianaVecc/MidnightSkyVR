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

// proto.PhoneEvent/Types/KeyEvent
struct KeyEvent_t2095740558;
// Gvr.Internal.EmulatorButtonEvent
struct EmulatorButtonEvent_t200175493;
struct EmulatorButtonEvent_t200175493_marshaled_pinvoke;
struct EmulatorButtonEvent_t200175493_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent200175493.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent2095740558.h"

// System.Void Gvr.Internal.EmulatorButtonEvent::.ctor(proto.PhoneEvent/Types/KeyEvent)
extern "C"  void EmulatorButtonEvent__ctor_m2703334902 (EmulatorButtonEvent_t200175493 * __this, KeyEvent_t2095740558 * ___proto0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EmulatorButtonEvent_t200175493;
struct EmulatorButtonEvent_t200175493_marshaled_pinvoke;

extern "C" void EmulatorButtonEvent_t200175493_marshal_pinvoke(const EmulatorButtonEvent_t200175493& unmarshaled, EmulatorButtonEvent_t200175493_marshaled_pinvoke& marshaled);
extern "C" void EmulatorButtonEvent_t200175493_marshal_pinvoke_back(const EmulatorButtonEvent_t200175493_marshaled_pinvoke& marshaled, EmulatorButtonEvent_t200175493& unmarshaled);
extern "C" void EmulatorButtonEvent_t200175493_marshal_pinvoke_cleanup(EmulatorButtonEvent_t200175493_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EmulatorButtonEvent_t200175493;
struct EmulatorButtonEvent_t200175493_marshaled_com;

extern "C" void EmulatorButtonEvent_t200175493_marshal_com(const EmulatorButtonEvent_t200175493& unmarshaled, EmulatorButtonEvent_t200175493_marshaled_com& marshaled);
extern "C" void EmulatorButtonEvent_t200175493_marshal_com_back(const EmulatorButtonEvent_t200175493_marshaled_com& marshaled, EmulatorButtonEvent_t200175493& unmarshaled);
extern "C" void EmulatorButtonEvent_t200175493_marshal_com_cleanup(EmulatorButtonEvent_t200175493_marshaled_com& marshaled);
