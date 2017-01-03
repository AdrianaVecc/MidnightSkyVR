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

// Gvr.Internal.EmulatorManager/OnTouchEvent
struct OnTouchEvent_t970385655;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent2112311150.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Gvr.Internal.EmulatorManager/OnTouchEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnTouchEvent__ctor_m3489699150 (OnTouchEvent_t970385655 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnTouchEvent::Invoke(Gvr.Internal.EmulatorTouchEvent)
extern "C"  void OnTouchEvent_Invoke_m2049058772 (OnTouchEvent_t970385655 * __this, EmulatorTouchEvent_t2112311150  ___touchEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnTouchEvent::BeginInvoke(Gvr.Internal.EmulatorTouchEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnTouchEvent_BeginInvoke_m2002393069 (OnTouchEvent_t970385655 * __this, EmulatorTouchEvent_t2112311150  ___touchEvent0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnTouchEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnTouchEvent_EndInvoke_m1604247134 (OnTouchEvent_t970385655 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
