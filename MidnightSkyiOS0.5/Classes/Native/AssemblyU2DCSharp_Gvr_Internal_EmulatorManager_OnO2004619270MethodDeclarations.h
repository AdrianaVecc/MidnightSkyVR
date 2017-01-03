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

// Gvr.Internal.EmulatorManager/OnOrientationEvent
struct OnOrientationEvent_t2004619270;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3989687101.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Gvr.Internal.EmulatorManager/OnOrientationEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnOrientationEvent__ctor_m1309650653 (OnOrientationEvent_t2004619270 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnOrientationEvent::Invoke(Gvr.Internal.EmulatorOrientationEvent)
extern "C"  void OnOrientationEvent_Invoke_m1561636918 (OnOrientationEvent_t2004619270 * __this, EmulatorOrientationEvent_t3989687101  ___orientationEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnOrientationEvent::BeginInvoke(Gvr.Internal.EmulatorOrientationEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnOrientationEvent_BeginInvoke_m1954321613 (OnOrientationEvent_t2004619270 * __this, EmulatorOrientationEvent_t3989687101  ___orientationEvent0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnOrientationEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnOrientationEvent_EndInvoke_m3114211181 (OnOrientationEvent_t2004619270 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
