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

// GvrAudioListener
struct GvrAudioListener_t2617838119;
// GvrAudioSource
struct GvrAudioSource_t2139450958;
// GvrAudioRoom
struct GvrAudioRoom_t252475342;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrAudioListener2617838119.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality3830609699.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "AssemblyU2DCSharp_GvrAudioSource2139450958.h"
#include "AssemblyU2DCSharp_GvrAudioRoom252475342.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "AssemblyU2DCSharp_GvrAudio_RoomProperties3951668682.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void GvrAudio::.cctor()
extern "C"  void GvrAudio__cctor_m4258904325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_SampleRate()
extern "C"  int32_t GvrAudio_get_SampleRate_m3270880477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_NumChannels()
extern "C"  int32_t GvrAudio_get_NumChannels_m2317404805 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_FramesPerBuffer()
extern "C"  int32_t GvrAudio_get_FramesPerBuffer_m1465030534 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(GvrAudioListener,GvrAudio/Quality)
extern "C"  void GvrAudio_Initialize_m4140574142 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t2617838119 * ___listener0, int32_t ___quality1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown(GvrAudioListener)
extern "C"  void GvrAudio_Shutdown_m3896450219 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t2617838119 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioListener(System.Single,UnityEngine.LayerMask)
extern "C"  void GvrAudio_UpdateAudioListener_m747879946 (Il2CppObject * __this /* static, unused */, float ___globalGainDb0, LayerMask_t3236759763  ___occlusionMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioSoundfield()
extern "C"  int32_t GvrAudio_CreateAudioSoundfield_m1964651101 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroyAudioSoundfield(System.Int32)
extern "C"  void GvrAudio_DestroyAudioSoundfield_m3366174036 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioSource(System.Boolean)
extern "C"  int32_t GvrAudio_CreateAudioSource_m1809109092 (Il2CppObject * __this /* static, unused */, bool ___hrtfEnabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroyAudioSource(System.Int32)
extern "C"  void GvrAudio_DestroyAudioSource_m3759383460 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioSource(System.Int32,GvrAudioSource,System.Single)
extern "C"  void GvrAudio_UpdateAudioSource_m2246007774 (Il2CppObject * __this /* static, unused */, int32_t ___id0, GvrAudioSource_t2139450958 * ___source1, float ___currentOcclusion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioRoom(GvrAudioRoom,System.Boolean)
extern "C"  void GvrAudio_UpdateAudioRoom_m4154358141 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t252475342 * ___room0, bool ___roomEnabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ComputeOcclusion(UnityEngine.Transform)
extern "C"  float GvrAudio_ComputeOcclusion_m4053637503 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___sourceTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ConvertAmplitudeFromDb(System.Single)
extern "C"  float GvrAudio_ConvertAmplitudeFromDb_m1063126027 (Il2CppObject * __this /* static, unused */, float ___db0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GvrAudio::Generate2dPolarPattern(System.Single,System.Single,System.Int32)
extern "C"  Vector2U5BU5D_t4024180168* GvrAudio_Generate2dPolarPattern_m1431210773 (Il2CppObject * __this /* static, unused */, float ___alpha0, float ___order1, int32_t ___resolution2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudio::IsListenerInsideRoom(GvrAudioRoom)
extern "C"  bool GvrAudio_IsListenerInsideRoom_m1548351895 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t252475342 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void GvrAudio_ConvertAudioTransformFromUnity_m448868012 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___position0, Quaternion_t1553702882 * ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrAudio/RoomProperties GvrAudio::GetRoomProperties(GvrAudioRoom)
extern "C"  RoomProperties_t3951668682  GvrAudio_GetRoomProperties_m3565413811 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t252475342 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetListenerGain(System.Single)
extern "C"  void GvrAudio_SetListenerGain_m4290622576 (Il2CppObject * __this /* static, unused */, float ___gain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateSoundfield(System.Int32)
extern "C"  int32_t GvrAudio_CreateSoundfield_m4003300002 (Il2CppObject * __this /* static, unused */, int32_t ___numChannels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroySoundfield(System.Int32)
extern "C"  void GvrAudio_DestroySoundfield_m2253810108 (Il2CppObject * __this /* static, unused */, int32_t ___soundfieldId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateSource(System.Boolean)
extern "C"  int32_t GvrAudio_CreateSource_m919673816 (Il2CppObject * __this /* static, unused */, bool ___enableHrtf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroySource(System.Int32)
extern "C"  void GvrAudio_DestroySource_m3248276492 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceBypassRoomEffects(System.Int32,System.Boolean)
extern "C"  void GvrAudio_SetSourceBypassRoomEffects_m3470739822 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, bool ___bypassRoomEffects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceDirectivity_m275237490 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___alpha1, float ___order2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceListenerDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceListenerDirectivity_m3356753950 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___alpha1, float ___order2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceOcclusionIntensity(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSourceOcclusionIntensity_m3150654111 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___intensity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetRoomProperties(System.IntPtr)
extern "C"  void GvrAudio_SetRoomProperties_m1707827550 (Il2CppObject * __this /* static, unused */, IntPtr_t ___roomProperties0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(GvrAudio/Quality,System.Int32,System.Int32,System.Int32)
extern "C"  void GvrAudio_Initialize_m1191139374 (Il2CppObject * __this /* static, unused */, int32_t ___quality0, int32_t ___sampleRate1, int32_t ___numChannels2, int32_t ___framesPerBuffer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown()
extern "C"  void GvrAudio_Shutdown_m1565365234 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
