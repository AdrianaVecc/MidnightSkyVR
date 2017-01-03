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

// StereoController
struct StereoController_t1637909972;
// GvrEye[]
struct GvrEyeU5BU5D_t2613429915;
// GvrHead
struct GvrHead_t2074018243;
// UnityEngine.Camera
struct Camera_t2727095145;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// GvrEye
struct GvrEye_t2145111534;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye643876407.h"
#include "AssemblyU2DCSharp_GvrEye2145111534.h"

// System.Void StereoController::.ctor()
extern "C"  void StereoController__ctor_m3477860167 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrEye[] StereoController::get_Eyes()
extern "C"  GvrEyeU5BU5D_t2613429915* StereoController_get_Eyes_m3398665077 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrHead StereoController::get_Head()
extern "C"  GvrHead_t2074018243 * StereoController_get_Head_m1091666358 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C"  void StereoController_InvalidateEyes_m1839724314 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera StereoController::get_cam()
extern "C"  Camera_t2727095145 * StereoController_get_cam_m985276906 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::set_cam(UnityEngine.Camera)
extern "C"  void StereoController_set_cam_m330901083 (StereoController_t1637909972 * __this, Camera_t2727095145 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 StereoController::ComputeStereoEyePosition(GvrViewer/Eye,System.Single,System.Single)
extern "C"  Vector3_t4282066566  StereoController_ComputeStereoEyePosition_m751579235 (StereoController_t1637909972 * __this, int32_t ___eye0, float ___proj111, float ___zScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C"  void StereoController_OnEnable_m3507732191 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C"  void StereoController_OnDisable_m1806452782 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C"  void StereoController_OnPreCull_m4010756283 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C"  Il2CppObject * StereoController_EndOfFrame_m473628192 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__0(GvrEye)
extern "C"  bool StereoController_U3Cget_EyesU3Em__0_m2283112925 (StereoController_t1637909972 * __this, GvrEye_t2145111534 * ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrHead StereoController::<get_Head>m__1(GvrEye)
extern "C"  GvrHead_t2074018243 * StereoController_U3Cget_HeadU3Em__1_m1513013532 (Il2CppObject * __this /* static, unused */, GvrEye_t2145111534 * ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
