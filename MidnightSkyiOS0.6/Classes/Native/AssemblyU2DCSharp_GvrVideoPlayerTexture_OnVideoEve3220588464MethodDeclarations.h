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

// GvrVideoPlayerTexture/OnVideoEventCallback
struct OnVideoEventCallback_t3220588464;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GvrVideoPlayerTexture/OnVideoEventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnVideoEventCallback__ctor_m3416820311 (OnVideoEventCallback_t3220588464 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnVideoEventCallback::Invoke(System.IntPtr,System.Int32)
extern "C"  void OnVideoEventCallback_Invoke_m4012817204 (OnVideoEventCallback_t3220588464 * __this, IntPtr_t ___cbdata0, int32_t ___eventId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GvrVideoPlayerTexture/OnVideoEventCallback::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnVideoEventCallback_BeginInvoke_m111885129 (OnVideoEventCallback_t3220588464 * __this, IntPtr_t ___cbdata0, int32_t ___eventId1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnVideoEventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnVideoEventCallback_EndInvoke_m4086611943 (OnVideoEventCallback_t3220588464 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
