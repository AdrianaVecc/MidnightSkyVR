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

// GvrAudioSource
struct GvrAudioSource_t2139450958;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode1562508899.h"
#include "UnityEngine_UnityEngine_FFTWindow2499314106.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void GvrAudioSource::.ctor()
extern "C"  void GvrAudioSource__ctor_m2301400589 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip GvrAudioSource::get_clip()
extern "C"  AudioClip_t794140988 * GvrAudioSource_get_clip_m2385048724 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void GvrAudioSource_set_clip_m599295967 (GvrAudioSource_t2139450958 * __this, AudioClip_t794140988 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSource::get_isPlaying()
extern "C"  bool GvrAudioSource_get_isPlaying_m37818194 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSource::get_loop()
extern "C"  bool GvrAudioSource_get_loop_m1591348952 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_loop(System.Boolean)
extern "C"  void GvrAudioSource_set_loop_m3984224783 (GvrAudioSource_t2139450958 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSource::get_mute()
extern "C"  bool GvrAudioSource_get_mute_m1625657613 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_mute(System.Boolean)
extern "C"  void GvrAudioSource_set_mute_m111637380 (GvrAudioSource_t2139450958 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_pitch()
extern "C"  float GvrAudioSource_get_pitch_m111928662 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_pitch(System.Single)
extern "C"  void GvrAudioSource_set_pitch_m1884965309 (GvrAudioSource_t2139450958 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudioSource::get_priority()
extern "C"  int32_t GvrAudioSource_get_priority_m2300316210 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_priority(System.Int32)
extern "C"  void GvrAudioSource_set_priority_m3106224489 (GvrAudioSource_t2139450958 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_dopplerLevel()
extern "C"  float GvrAudioSource_get_dopplerLevel_m592194178 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_dopplerLevel(System.Single)
extern "C"  void GvrAudioSource_set_dopplerLevel_m549354433 (GvrAudioSource_t2139450958 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_spread()
extern "C"  float GvrAudioSource_get_spread_m1970281279 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_spread(System.Single)
extern "C"  void GvrAudioSource_set_spread_m2593146916 (GvrAudioSource_t2139450958 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_time()
extern "C"  float GvrAudioSource_get_time_m2611770585 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_time(System.Single)
extern "C"  void GvrAudioSource_set_time_m3462975178 (GvrAudioSource_t2139450958 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudioSource::get_timeSamples()
extern "C"  int32_t GvrAudioSource_get_timeSamples_m577322704 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_timeSamples(System.Int32)
extern "C"  void GvrAudioSource_set_timeSamples_m185079163 (GvrAudioSource_t2139450958 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_volume()
extern "C"  float GvrAudioSource_get_volume_m1859601190 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_volume(System.Single)
extern "C"  void GvrAudioSource_set_volume_m4183912349 (GvrAudioSource_t2139450958 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioRolloffMode GvrAudioSource::get_rolloffMode()
extern "C"  int32_t GvrAudioSource_get_rolloffMode_m1752276208 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)
extern "C"  void GvrAudioSource_set_rolloffMode_m967223981 (GvrAudioSource_t2139450958 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_maxDistance()
extern "C"  float GvrAudioSource_get_maxDistance_m3066987919 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_maxDistance(System.Single)
extern "C"  void GvrAudioSource_set_maxDistance_m3220418596 (GvrAudioSource_t2139450958 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_minDistance()
extern "C"  float GvrAudioSource_get_minDistance_m594326781 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_minDistance(System.Single)
extern "C"  void GvrAudioSource_set_minDistance_m157713270 (GvrAudioSource_t2139450958 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Awake()
extern "C"  void GvrAudioSource_Awake_m2539005808 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnEnable()
extern "C"  void GvrAudioSource_OnEnable_m2533579353 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Start()
extern "C"  void GvrAudioSource_Start_m1248538381 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnDisable()
extern "C"  void GvrAudioSource_OnDisable_m1672485876 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnDestroy()
extern "C"  void GvrAudioSource_OnDestroy_m3850017926 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnApplicationPause(System.Boolean)
extern "C"  void GvrAudioSource_OnApplicationPause_m3407737043 (GvrAudioSource_t2139450958 * __this, bool ___pauseStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Update()
extern "C"  void GvrAudioSource_Update_m55836320 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::GetOutputData(System.Single[],System.Int32)
extern "C"  void GvrAudioSource_GetOutputData_m2997559450 (GvrAudioSource_t2139450958 * __this, SingleU5BU5D_t2316563989* ___samples0, int32_t ___channel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::GetSpectrumData(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C"  void GvrAudioSource_GetSpectrumData_m404476937 (GvrAudioSource_t2139450958 * __this, SingleU5BU5D_t2316563989* ___samples0, int32_t ___channel1, int32_t ___window2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Pause()
extern "C"  void GvrAudioSource_Pause_m2355526561 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Play()
extern "C"  void GvrAudioSource_Play_m1748119499 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::PlayDelayed(System.Single)
extern "C"  void GvrAudioSource_PlayDelayed_m2432881298 (GvrAudioSource_t2139450958 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void GvrAudioSource_PlayOneShot_m3795725484 (GvrAudioSource_t2139450958 * __this, AudioClip_t794140988 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void GvrAudioSource_PlayOneShot_m820451985 (GvrAudioSource_t2139450958 * __this, AudioClip_t794140988 * ___clip0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::PlayScheduled(System.Double)
extern "C"  void GvrAudioSource_PlayScheduled_m1279773438 (GvrAudioSource_t2139450958 * __this, double ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Stop()
extern "C"  void GvrAudioSource_Stop_m1841803545 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::UnPause()
extern "C"  void GvrAudioSource_UnPause_m1971467336 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSource::InitializeSource()
extern "C"  bool GvrAudioSource_InitializeSource_m3366788950 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::ShutdownSource()
extern "C"  void GvrAudioSource_ShutdownSource_m3448889320 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnDidApplyAnimationProperties()
extern "C"  void GvrAudioSource_OnDidApplyAnimationProperties_m2684371636 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnValidate()
extern "C"  void GvrAudioSource_OnValidate_m1882842092 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnDrawGizmosSelected()
extern "C"  void GvrAudioSource_OnDrawGizmosSelected_m3781821550 (GvrAudioSource_t2139450958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::DrawDirectivityGizmo(UnityEngine.Transform,System.Single,System.Single,System.Int32)
extern "C"  void GvrAudioSource_DrawDirectivityGizmo_m3565108845 (GvrAudioSource_t2139450958 * __this, Transform_t1659122786 * ___target0, float ___alpha1, float ___sharpness2, int32_t ___resolution3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
