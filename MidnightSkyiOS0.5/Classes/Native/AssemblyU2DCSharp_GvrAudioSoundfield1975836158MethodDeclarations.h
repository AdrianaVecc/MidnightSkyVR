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

// GvrAudioSoundfield
struct GvrAudioSoundfield_t1975836158;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"

// System.Void GvrAudioSoundfield::.ctor()
extern "C"  void GvrAudioSoundfield__ctor_m1718091869 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip GvrAudioSoundfield::get_clip0102()
extern "C"  AudioClip_t794140988 * GvrAudioSoundfield_get_clip0102_m1703966663 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::set_clip0102(UnityEngine.AudioClip)
extern "C"  void GvrAudioSoundfield_set_clip0102_m1779852 (GvrAudioSoundfield_t1975836158 * __this, AudioClip_t794140988 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip GvrAudioSoundfield::get_clip0304()
extern "C"  AudioClip_t794140988 * GvrAudioSoundfield_get_clip0304_m1705815627 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::set_clip0304(UnityEngine.AudioClip)
extern "C"  void GvrAudioSoundfield_set_clip0304_m4224773256 (GvrAudioSoundfield_t1975836158 * __this, AudioClip_t794140988 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSoundfield::get_isPlaying()
extern "C"  bool GvrAudioSoundfield_get_isPlaying_m1440932770 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSoundfield::get_loop()
extern "C"  bool GvrAudioSoundfield_get_loop_m920176776 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::set_loop(System.Boolean)
extern "C"  void GvrAudioSoundfield_set_loop_m2731995583 (GvrAudioSoundfield_t1975836158 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSoundfield::get_mute()
extern "C"  bool GvrAudioSoundfield_get_mute_m954485437 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::set_mute(System.Boolean)
extern "C"  void GvrAudioSoundfield_set_mute_m3154375476 (GvrAudioSoundfield_t1975836158 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSoundfield::get_pitch()
extern "C"  float GvrAudioSoundfield_get_pitch_m639151526 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::set_pitch(System.Single)
extern "C"  void GvrAudioSoundfield_set_pitch_m632736109 (GvrAudioSoundfield_t1975836158 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudioSoundfield::get_priority()
extern "C"  int32_t GvrAudioSoundfield_get_priority_m1458695906 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::set_priority(System.Int32)
extern "C"  void GvrAudioSoundfield_set_priority_m2304806169 (GvrAudioSoundfield_t1975836158 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSoundfield::get_time()
extern "C"  float GvrAudioSoundfield_get_time_m1381851785 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::set_time(System.Single)
extern "C"  void GvrAudioSoundfield_set_time_m1621465370 (GvrAudioSoundfield_t1975836158 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudioSoundfield::get_timeSamples()
extern "C"  int32_t GvrAudioSoundfield_get_timeSamples_m1885920288 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::set_timeSamples(System.Int32)
extern "C"  void GvrAudioSoundfield_set_timeSamples_m855106507 (GvrAudioSoundfield_t1975836158 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSoundfield::get_volume()
extern "C"  float GvrAudioSoundfield_get_volume_m1023640790 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::set_volume(System.Single)
extern "C"  void GvrAudioSoundfield_set_volume_m4019512813 (GvrAudioSoundfield_t1975836158 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::Awake()
extern "C"  void GvrAudioSoundfield_Awake_m1955697088 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::OnEnable()
extern "C"  void GvrAudioSoundfield_OnEnable_m2621181449 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::Start()
extern "C"  void GvrAudioSoundfield_Start_m665229661 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::OnDisable()
extern "C"  void GvrAudioSoundfield_OnDisable_m93183556 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::OnDestroy()
extern "C"  void GvrAudioSoundfield_OnDestroy_m2270715606 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::OnApplicationPause(System.Boolean)
extern "C"  void GvrAudioSoundfield_OnApplicationPause_m1331860611 (GvrAudioSoundfield_t1975836158 * __this, bool ___pauseStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::Update()
extern "C"  void GvrAudioSoundfield_Update_m3448102480 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::OnValidate()
extern "C"  void GvrAudioSoundfield_OnValidate_m169110428 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::Pause()
extern "C"  void GvrAudioSoundfield_Pause_m1772217841 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::Play()
extern "C"  void GvrAudioSoundfield_Play_m4223155067 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::PlayDelayed(System.Single)
extern "C"  void GvrAudioSoundfield_PlayDelayed_m1631462978 (GvrAudioSoundfield_t1975836158 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::PlayScheduled(System.Double)
extern "C"  void GvrAudioSoundfield_PlayScheduled_m4210881198 (GvrAudioSoundfield_t1975836158 * __this, double ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::Stop()
extern "C"  void GvrAudioSoundfield_Stop_m21871817 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::UnPause()
extern "C"  void GvrAudioSoundfield_UnPause_m4052503192 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSoundfield::InitializeSoundfield()
extern "C"  bool GvrAudioSoundfield_InitializeSoundfield_m2527590710 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::ShutdownSoundfield()
extern "C"  void GvrAudioSoundfield_ShutdownSoundfield_m3554690760 (GvrAudioSoundfield_t1975836158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::InitializeChannelSet(UnityEngine.AudioSource,System.Int32)
extern "C"  void GvrAudioSoundfield_InitializeChannelSet_m675356341 (GvrAudioSoundfield_t1975836158 * __this, AudioSource_t1740077639 * ___source0, int32_t ___channelSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSoundfield::ShutdownChannelSet(UnityEngine.AudioSource,System.Int32)
extern "C"  void GvrAudioSoundfield_ShutdownChannelSet_m2664828667 (GvrAudioSoundfield_t1975836158 * __this, AudioSource_t1740077639 * ___source0, int32_t ___channelSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
