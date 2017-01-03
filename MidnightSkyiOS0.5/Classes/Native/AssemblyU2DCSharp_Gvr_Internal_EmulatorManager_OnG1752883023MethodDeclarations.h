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

// Gvr.Internal.EmulatorManager/OnGyroEvent
struct OnGyroEvent_t1752883023;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent3657941864.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Gvr.Internal.EmulatorManager/OnGyroEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnGyroEvent__ctor_m595925110 (OnGyroEvent_t1752883023 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnGyroEvent::Invoke(Gvr.Internal.EmulatorGyroEvent)
extern "C"  void OnGyroEvent_Invoke_m2872936416 (OnGyroEvent_t1752883023 * __this, EmulatorGyroEvent_t3657941864  ___gyroEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnGyroEvent::BeginInvoke(Gvr.Internal.EmulatorGyroEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnGyroEvent_BeginInvoke_m3498426683 (OnGyroEvent_t1752883023 * __this, EmulatorGyroEvent_t3657941864  ___gyroEvent0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnGyroEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnGyroEvent_EndInvoke_m2968728966 (OnGyroEvent_t1752883023 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
