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

// GvrVideoPlayerTexture
struct GvrVideoPlayerTexture_t4035356898;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Texture
struct Texture_t2526458961;
// System.Action`1<System.Int32>
struct Action_1_t1549654636;
// System.Action`2<System.String,System.String>
struct Action_2_t3074826119;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// GvrVideoPlayerTexture/OnVideoEventCallback
struct OnVideoEventCallback_t3220588464;
// GvrVideoPlayerTexture/OnExceptionCallback
struct OnExceptionCallback_t1067313352;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoPlaye1357341794.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_RenderComm2320763464.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_OnVideoEve3220588464.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_OnExceptio1067313352.h"

// System.Void GvrVideoPlayerTexture::.ctor()
extern "C"  void GvrVideoPlayerTexture__ctor_m1689464521 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::.cctor()
extern "C"  void GvrVideoPlayerTexture__cctor_m351696388 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::get_VideoReady()
extern "C"  bool GvrVideoPlayerTexture_get_VideoReady_m1621630424 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::get_CurrentPosition()
extern "C"  int64_t GvrVideoPlayerTexture_get_CurrentPosition_m777331983 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::set_CurrentPosition(System.Int64)
extern "C"  void GvrVideoPlayerTexture_set_CurrentPosition_m3201589982 (GvrVideoPlayerTexture_t4035356898 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::get_VideoDuration()
extern "C"  int64_t GvrVideoPlayerTexture_get_VideoDuration_m225946172 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::get_BufferedPosition()
extern "C"  int64_t GvrVideoPlayerTexture_get_BufferedPosition_m3967982813 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::get_BufferedPercentage()
extern "C"  int32_t GvrVideoPlayerTexture_get_BufferedPercentage_m3181889263 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::get_IsPaused()
extern "C"  bool GvrVideoPlayerTexture_get_IsPaused_m847620776 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrVideoPlayerTexture/VideoPlayerState GvrVideoPlayerTexture::get_PlayerState()
extern "C"  int32_t GvrVideoPlayerTexture_get_PlayerState_m3973507145 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::get_MaxVolume()
extern "C"  int32_t GvrVideoPlayerTexture_get_MaxVolume_m2606100522 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::get_CurrentVolume()
extern "C"  int32_t GvrVideoPlayerTexture_get_CurrentVolume_m1004119487 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::set_CurrentVolume(System.Int32)
extern "C"  void GvrVideoPlayerTexture_set_CurrentVolume_m3775974414 (GvrVideoPlayerTexture_t4035356898 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::Awake()
extern "C"  void GvrVideoPlayerTexture_Awake_m1927069740 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GvrVideoPlayerTexture::Start()
extern "C"  Il2CppObject * GvrVideoPlayerTexture_Start_m3406174225 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnDisable()
extern "C"  void GvrVideoPlayerTexture_OnDisable_m1954805424 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetDisplayTexture(UnityEngine.Texture)
extern "C"  void GvrVideoPlayerTexture_SetDisplayTexture_m1293930764 (GvrVideoPlayerTexture_t4035356898 * __this, Texture_t2526458961 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::CleanupVideo()
extern "C"  void GvrVideoPlayerTexture_CleanupVideo_m3905169874 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::ReInitializeVideo()
extern "C"  void GvrVideoPlayerTexture_ReInitializeVideo_m1555297535 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnEnable()
extern "C"  void GvrVideoPlayerTexture_OnEnable_m187381789 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnDestroy()
extern "C"  void GvrVideoPlayerTexture_OnDestroy_m4132337474 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnValidate()
extern "C"  void GvrVideoPlayerTexture_OnValidate_m2044813488 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnApplicationPause(System.Boolean)
extern "C"  void GvrVideoPlayerTexture_OnApplicationPause_m3787047575 (GvrVideoPlayerTexture_t4035356898 * __this, bool ___bPause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnRenderObject()
extern "C"  void GvrVideoPlayerTexture_OnRenderObject_m3960799183 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnRestartVideoEvent(System.Int32)
extern "C"  void GvrVideoPlayerTexture_OnRestartVideoEvent_m4222722087 (GvrVideoPlayerTexture_t4035356898 * __this, int32_t ___eventId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::RestartVideo()
extern "C"  void GvrVideoPlayerTexture_RestartVideo_m2463810567 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetCurrentVolume(System.Int32)
extern "C"  void GvrVideoPlayerTexture_SetCurrentVolume_m1946991133 (GvrVideoPlayerTexture_t4035356898 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::Init()
extern "C"  bool GvrVideoPlayerTexture_Init_m2758467639 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::Play()
extern "C"  bool GvrVideoPlayerTexture_Play_m2956791131 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::Pause()
extern "C"  bool GvrVideoPlayerTexture_Pause_m1169641489 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::AdjustAspectRatio()
extern "C"  void GvrVideoPlayerTexture_AdjustAspectRatio_m2942782827 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::CreateTextureForVideoMaybe()
extern "C"  void GvrVideoPlayerTexture_CreateTextureForVideoMaybe_m2914628658 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::UpdateStatusText()
extern "C"  void GvrVideoPlayerTexture_UpdateStatusText_m2690653763 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::IssuePlayerEvent(GvrVideoPlayerTexture/RenderCommand)
extern "C"  void GvrVideoPlayerTexture_IssuePlayerEvent_m484737487 (GvrVideoPlayerTexture_t4035356898 * __this, int32_t ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::Update()
extern "C"  void GvrVideoPlayerTexture_Update_m2560654692 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GvrVideoPlayerTexture::CallPluginAtEndOfFrames()
extern "C"  Il2CppObject * GvrVideoPlayerTexture_CallPluginAtEndOfFrames_m4091914531 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::RemoveOnVideoEventCallback(System.Action`1<System.Int32>)
extern "C"  void GvrVideoPlayerTexture_RemoveOnVideoEventCallback_m283721367 (GvrVideoPlayerTexture_t4035356898 * __this, Action_1_t1549654636 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetOnVideoEventCallback(System.Action`1<System.Int32>)
extern "C"  void GvrVideoPlayerTexture_SetOnVideoEventCallback_m1005375725 (GvrVideoPlayerTexture_t4035356898 * __this, Action_1_t1549654636 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::FireVideoEvent(System.Int32)
extern "C"  void GvrVideoPlayerTexture_FireVideoEvent_m3252389537 (GvrVideoPlayerTexture_t4035356898 * __this, int32_t ___eventId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::InternalOnVideoEventCallback(System.IntPtr,System.Int32)
extern "C"  void GvrVideoPlayerTexture_InternalOnVideoEventCallback_m1275788158 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cbdata0, int32_t ___eventId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_GvrVideoPlayerTexture_InternalOnVideoEventCallback_m1275788158(intptr_t ___cbdata0, int32_t ___eventId1);
// System.Void GvrVideoPlayerTexture::SetOnExceptionCallback(System.Action`2<System.String,System.String>)
extern "C"  void GvrVideoPlayerTexture_SetOnExceptionCallback_m3606157327 (GvrVideoPlayerTexture_t4035356898 * __this, Action_2_t3074826119 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::InternalOnExceptionCallback(System.String,System.String,System.IntPtr)
extern "C"  void GvrVideoPlayerTexture_InternalOnExceptionCallback_m1554115245 (Il2CppObject * __this /* static, unused */, String_t* ___type0, String_t* ___msg1, IntPtr_t ___cbdata2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_GvrVideoPlayerTexture_InternalOnExceptionCallback_m1554115245(char* ___type0, char* ___msg1, intptr_t ___cbdata2);
// System.Void GvrVideoPlayerTexture::FireOnException(System.String,System.String)
extern "C"  void GvrVideoPlayerTexture_FireOnException_m251810845 (GvrVideoPlayerTexture_t4035356898 * __this, String_t* ___type0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::ToIntPtr(System.Object)
extern "C"  IntPtr_t GvrVideoPlayerTexture_ToIntPtr_m724761012 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GvrVideoPlayerTexture::ProcessURL()
extern "C"  String_t* GvrVideoPlayerTexture_ProcessURL_m355815768 (GvrVideoPlayerTexture_t4035356898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::GetRenderEventFunc()
extern "C"  IntPtr_t GvrVideoPlayerTexture_GetRenderEventFunc_m889855512 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetExternalTextures(System.IntPtr,System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C"  void GvrVideoPlayerTexture_SetExternalTextures_m3124327722 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, Int32U5BU5D_t3230847821* ___texIds1, int32_t ___size2, int32_t ___w3, int32_t ___h4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::GetRenderableTextureId(System.IntPtr)
extern "C"  IntPtr_t GvrVideoPlayerTexture_GetRenderableTextureId_m1130487550 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::CreateVideoPlayer()
extern "C"  IntPtr_t GvrVideoPlayerTexture_CreateVideoPlayer_m1748550844 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::DestroyVideoPlayer(System.IntPtr)
extern "C"  void GvrVideoPlayerTexture_DestroyVideoPlayer_m3336210743 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetVideoPlayerEventBase(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetVideoPlayerEventBase_m1994787386 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::InitVideoPlayer(System.IntPtr,System.Int32,System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  IntPtr_t GvrVideoPlayerTexture_InitVideoPlayer_m1911773439 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, int32_t ___videoType1, String_t* ___videoURL2, String_t* ___contentID3, String_t* ___providerId4, bool ___useSecurePath5, bool ___useExisting6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetInitialResolution(System.IntPtr,System.Int32)
extern "C"  void GvrVideoPlayerTexture_SetInitialResolution_m1102920812 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, int32_t ___initialResolution1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetPlayerState(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetPlayerState_m2255267373 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetWidth(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetWidth_m2507296599 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetHeight(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetHeight_m2680604994 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::PlayVideo(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_PlayVideo_m3061972600 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::PauseVideo(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_PauseVideo_m19218850 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::IsVideoReady(System.IntPtr)
extern "C"  bool GvrVideoPlayerTexture_IsVideoReady_m3060113819 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::IsVideoPaused(System.IntPtr)
extern "C"  bool GvrVideoPlayerTexture_IsVideoPaused_m1737455290 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::GetDuration(System.IntPtr)
extern "C"  int64_t GvrVideoPlayerTexture_GetDuration_m2721010260 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::GetBufferedPosition(System.IntPtr)
extern "C"  int64_t GvrVideoPlayerTexture_GetBufferedPosition_m3157016896 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::GetCurrentPosition(System.IntPtr)
extern "C"  int64_t GvrVideoPlayerTexture_GetCurrentPosition_m1733118940 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetCurrentPosition(System.IntPtr,System.Int64)
extern "C"  void GvrVideoPlayerTexture_SetCurrentPosition_m1527560607 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, int64_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetBufferedPercentage(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetBufferedPercentage_m2570607184 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetMaxVolume(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetMaxVolume_m480538495 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetCurrentVolume(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetCurrentVolume_m3898712458 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetCurrentVolume(System.IntPtr,System.Int32)
extern "C"  void GvrVideoPlayerTexture_SetCurrentVolume_m237850831 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::SetVideoPlayerSupportClassname(System.IntPtr,System.String)
extern "C"  bool GvrVideoPlayerTexture_SetVideoPlayerSupportClassname_m106893755 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, String_t* ___classname1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::GetRawPlayer(System.IntPtr)
extern "C"  IntPtr_t GvrVideoPlayerTexture_GetRawPlayer_m1455012411 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetOnVideoEventCallback(System.IntPtr,GvrVideoPlayerTexture/OnVideoEventCallback,System.IntPtr)
extern "C"  void GvrVideoPlayerTexture_SetOnVideoEventCallback_m620701692 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, OnVideoEventCallback_t3220588464 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetOnExceptionCallback(System.IntPtr,GvrVideoPlayerTexture/OnExceptionCallback,System.IntPtr)
extern "C"  void GvrVideoPlayerTexture_SetOnExceptionCallback_m1813238872 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, OnExceptionCallback_t1067313352 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::<Awake>m__6(System.Int32)
extern "C"  void GvrVideoPlayerTexture_U3CAwakeU3Em__6_m3004911318 (GvrVideoPlayerTexture_t4035356898 * __this, int32_t ___eventId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::<Awake>m__7(System.String,System.String)
extern "C"  void GvrVideoPlayerTexture_U3CAwakeU3Em__7_m447845176 (Il2CppObject * __this /* static, unused */, String_t* ___type0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
