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

// GvrCameraUtils
struct GvrCameraUtils_t3751592777;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

// System.Void GvrCameraUtils::.ctor()
extern "C"  void GvrCameraUtils__ctor_m4027951986 (GvrCameraUtils_t3751592777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrCameraUtils::FixProjection(UnityEngine.Rect,System.Single,System.Single,UnityEngine.Matrix4x4&)
extern "C"  void GvrCameraUtils_FixProjection_m551508757 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___camRect0, float ___nearClipPlane1, float ___farClipPlane2, Matrix4x4_t1651859333 * ___proj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrCameraUtils::FixViewport(UnityEngine.Rect,UnityEngine.Rect,System.Boolean)
extern "C"  Rect_t4241904616  GvrCameraUtils_FixViewport_m1705395136 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, Rect_t4241904616  ___viewport1, bool ___isRightEye2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrCameraUtils::FixEditorViewport(UnityEngine.Rect,System.Single,System.Single)
extern "C"  Rect_t4241904616  GvrCameraUtils_FixEditorViewport_m3390222917 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, float ___profileAspect1, float ___windowAspect2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrCameraUtils::ZoomStereoCameras(System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
extern "C"  void GvrCameraUtils_ZoomStereoCameras_m289020374 (Il2CppObject * __this /* static, unused */, float ___matchByZoom0, float ___matchMonoFOV1, float ___monoProj112, Matrix4x4_t1651859333 * ___proj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
