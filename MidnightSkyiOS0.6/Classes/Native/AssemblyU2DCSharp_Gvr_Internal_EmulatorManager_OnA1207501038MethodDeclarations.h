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

// Gvr.Internal.EmulatorManager/OnAccelEvent
struct OnAccelEvent_t1207501038;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent2349426533.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Gvr.Internal.EmulatorManager/OnAccelEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnAccelEvent__ctor_m1064389 (OnAccelEvent_t1207501038 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnAccelEvent::Invoke(Gvr.Internal.EmulatorAccelEvent)
extern "C"  void OnAccelEvent_Invoke_m718084262 (OnAccelEvent_t1207501038 * __this, EmulatorAccelEvent_t2349426533  ___accelEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnAccelEvent::BeginInvoke(Gvr.Internal.EmulatorAccelEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnAccelEvent_BeginInvoke_m1866329421 (OnAccelEvent_t1207501038 * __this, EmulatorAccelEvent_t2349426533  ___accelEvent0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnAccelEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnAccelEvent_EndInvoke_m852187733 (OnAccelEvent_t1207501038 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
