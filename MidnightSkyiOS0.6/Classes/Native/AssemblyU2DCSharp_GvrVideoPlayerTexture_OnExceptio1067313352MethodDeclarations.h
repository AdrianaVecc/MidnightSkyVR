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

// GvrVideoPlayerTexture/OnExceptionCallback
struct OnExceptionCallback_t1067313352;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GvrVideoPlayerTexture/OnExceptionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnExceptionCallback__ctor_m578273439 (OnExceptionCallback_t1067313352 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnExceptionCallback::Invoke(System.String,System.String,System.IntPtr)
extern "C"  void OnExceptionCallback_Invoke_m3725734707 (OnExceptionCallback_t1067313352 * __this, String_t* ___type0, String_t* ___msg1, IntPtr_t ___cbdata2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GvrVideoPlayerTexture/OnExceptionCallback::BeginInvoke(System.String,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnExceptionCallback_BeginInvoke_m3042150892 (OnExceptionCallback_t1067313352 * __this, String_t* ___type0, String_t* ___msg1, IntPtr_t ___cbdata2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnExceptionCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnExceptionCallback_EndInvoke_m1858755119 (OnExceptionCallback_t1067313352 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
