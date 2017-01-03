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

// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t2614477363;
// System.Object
struct Il2CppObject;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GvrViewer/StereoScreenChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void StereoScreenChangeDelegate__ctor_m912330074 (StereoScreenChangeDelegate_t2614477363 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer/StereoScreenChangeDelegate::Invoke(UnityEngine.RenderTexture)
extern "C"  void StereoScreenChangeDelegate_Invoke_m3596629872 (StereoScreenChangeDelegate_t2614477363 * __this, RenderTexture_t1963041563 * ___newStereoScreen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GvrViewer/StereoScreenChangeDelegate::BeginInvoke(UnityEngine.RenderTexture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StereoScreenChangeDelegate_BeginInvoke_m189770225 (StereoScreenChangeDelegate_t2614477363 * __this, RenderTexture_t1963041563 * ___newStereoScreen0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer/StereoScreenChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void StereoScreenChangeDelegate_EndInvoke_m2478128234 (StereoScreenChangeDelegate_t2614477363 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
