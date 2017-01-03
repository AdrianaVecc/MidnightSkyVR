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

// GvrHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t4119218932;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GvrHead/HeadUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HeadUpdatedDelegate__ctor_m3746727627 (HeadUpdatedDelegate_t4119218932 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead/HeadUpdatedDelegate::Invoke(UnityEngine.GameObject)
extern "C"  void HeadUpdatedDelegate_Invoke_m2875826333 (HeadUpdatedDelegate_t4119218932 * __this, GameObject_t3674682005 * ___head0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GvrHead/HeadUpdatedDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HeadUpdatedDelegate_BeginInvoke_m1741573024 (HeadUpdatedDelegate_t4119218932 * __this, GameObject_t3674682005 * ___head0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead/HeadUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HeadUpdatedDelegate_EndInvoke_m1173821019 (HeadUpdatedDelegate_t4119218932 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
