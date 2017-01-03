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

// Gvr.Internal.EmulatorManager/OnButtonEvent
struct OnButtonEvent_t1240547244;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent200175493.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Gvr.Internal.EmulatorManager/OnButtonEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnButtonEvent__ctor_m2800235603 (OnButtonEvent_t1240547244 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnButtonEvent::Invoke(Gvr.Internal.EmulatorButtonEvent)
extern "C"  void OnButtonEvent_Invoke_m1938588608 (OnButtonEvent_t1240547244 * __this, EmulatorButtonEvent_t200175493  ___buttonEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnButtonEvent::BeginInvoke(Gvr.Internal.EmulatorButtonEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnButtonEvent_BeginInvoke_m531591797 (OnButtonEvent_t1240547244 * __this, EmulatorButtonEvent_t200175493  ___buttonEvent0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnButtonEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnButtonEvent_EndInvoke_m475056099 (OnButtonEvent_t1240547244 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
