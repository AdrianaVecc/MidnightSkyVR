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

// UnityEngine.Display
struct Display_t1321072632;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void UnityEngine.Display::.ctor()
extern "C"  void Display__ctor_m923501527 (Display_t1321072632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C"  void Display__ctor_m3179075037 (Display_t1321072632 * __this, IntPtr_t ___nativeDisplay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.cctor()
extern "C"  void Display__cctor_m2376647350 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern "C"  int32_t Display_get_renderingWidth_m1218826960 (Display_t1321072632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern "C"  int32_t Display_get_renderingHeight_m3927711743 (Display_t1321072632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemWidth()
extern "C"  int32_t Display_get_systemWidth_m3300090499 (Display_t1321072632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemHeight()
extern "C"  int32_t Display_get_systemHeight_m4022372012 (Display_t1321072632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  Display_RelativeMouseAt_m3466813630 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___inputMouseCoordinates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern "C"  void Display_RecreateDisplayList_m581883884 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t3228729122* ___nativeDisplay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern "C"  void Display_FireDisplaysUpdated_m3581134697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C"  void Display_GetSystemExtImpl_m3403536085 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeDisplay0, int32_t* ___w1, int32_t* ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C"  void Display_GetRenderingExtImpl_m2850673374 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeDisplay0, int32_t* ___w1, int32_t* ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C"  int32_t Display_RelativeMouseAtImpl_m3579008175 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t* ___rx2, int32_t* ___ry3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
