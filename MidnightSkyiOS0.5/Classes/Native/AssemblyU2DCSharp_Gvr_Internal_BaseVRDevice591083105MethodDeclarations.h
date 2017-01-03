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

// Gvr.Internal.BaseVRDevice
struct BaseVRDevice_t591083105;
// GvrProfile
struct GvrProfile_t2868291302;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// System.Uri
struct Uri_t1116831938;
// Pose3D
struct Pose3D_t2396367586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrProfile2868291302.h"
#include "System_System_Uri1116831938.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye643876407.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion2578366935.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

// System.Void Gvr.Internal.BaseVRDevice::.ctor()
extern "C"  void BaseVRDevice__ctor_m309650530 (BaseVRDevice_t591083105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::.cctor()
extern "C"  void BaseVRDevice__cctor_m527135627 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile Gvr.Internal.BaseVRDevice::get_Profile()
extern "C"  GvrProfile_t2868291302 * BaseVRDevice_get_Profile_m303819351 (BaseVRDevice_t591083105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::set_Profile(GvrProfile)
extern "C"  void BaseVRDevice_set_Profile_m4252826662 (BaseVRDevice_t591083105 * __this, GvrProfile_t2868291302 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C"  bool BaseVRDevice_SupportsNativeDistortionCorrection_m469420696 (BaseVRDevice_t591083105 * __this, List_1_t1375417109 * ___diagnostics0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::RequiresNativeDistortionCorrection()
extern "C"  bool BaseVRDevice_RequiresNativeDistortionCorrection_m594657422 (BaseVRDevice_t591083105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C"  bool BaseVRDevice_SupportsNativeUILayer_m2480608234 (BaseVRDevice_t591083105 * __this, List_1_t1375417109 * ___diagnostics0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::ShouldRecreateStereoScreen(System.Int32,System.Int32)
extern "C"  bool BaseVRDevice_ShouldRecreateStereoScreen_m1329608466 (BaseVRDevice_t591083105 * __this, int32_t ___curWidth0, int32_t ___curHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Gvr.Internal.BaseVRDevice::CreateStereoScreen()
extern "C"  RenderTexture_t1963041563 * BaseVRDevice_CreateStereoScreen_m3141503645 (BaseVRDevice_t591083105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::SetDefaultDeviceProfile(System.Uri)
extern "C"  bool BaseVRDevice_SetDefaultDeviceProfile_m4157674075 (BaseVRDevice_t591083105 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::ShowSettingsDialog()
extern "C"  void BaseVRDevice_ShowSettingsDialog_m167765130 (BaseVRDevice_t591083105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Gvr.Internal.BaseVRDevice::GetHeadPose()
extern "C"  Pose3D_t2396367586 * BaseVRDevice_GetHeadPose_m3911169250 (BaseVRDevice_t591083105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Gvr.Internal.BaseVRDevice::GetEyePose(GvrViewer/Eye)
extern "C"  Pose3D_t2396367586 * BaseVRDevice_GetEyePose_m1369113064 (BaseVRDevice_t591083105 * __this, int32_t ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::GetProjection(GvrViewer/Eye,GvrViewer/Distortion)
extern "C"  Matrix4x4_t1651859333  BaseVRDevice_GetProjection_m2542522612 (BaseVRDevice_t591083105 * __this, int32_t ___eye0, int32_t ___distortion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Gvr.Internal.BaseVRDevice::GetViewport(GvrViewer/Eye,GvrViewer/Distortion)
extern "C"  Rect_t4241904616  BaseVRDevice_GetViewport_m1321390322 (BaseVRDevice_t591083105 * __this, int32_t ___eye0, int32_t ___distortion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::OnPause(System.Boolean)
extern "C"  void BaseVRDevice_OnPause_m1239234702 (BaseVRDevice_t591083105 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::OnFocus(System.Boolean)
extern "C"  void BaseVRDevice_OnFocus_m4080034672 (BaseVRDevice_t591083105 * __this, bool ___focus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::OnApplicationQuit()
extern "C"  void BaseVRDevice_OnApplicationQuit_m4050636512 (BaseVRDevice_t591083105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::Destroy()
extern "C"  void BaseVRDevice_Destroy_m2855579450 (BaseVRDevice_t591083105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::ComputeEyesFromProfile()
extern "C"  void BaseVRDevice_ComputeEyesFromProfile_m3878201480 (BaseVRDevice_t591083105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::MakeProjection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t1651859333  BaseVRDevice_MakeProjection_m1576221536 (Il2CppObject * __this /* static, unused */, float ___l0, float ___t1, float ___r2, float ___b3, float ___n4, float ___f5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.BaseVRDevice Gvr.Internal.BaseVRDevice::GetDevice()
extern "C"  BaseVRDevice_t591083105 * BaseVRDevice_GetDevice_m429772566 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
