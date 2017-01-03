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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioConfiguration4109410948.h"

// System.Double UnityEngine.AudioSettings::get_dspTime()
extern "C"  double AudioSettings_get_dspTime_m4286496774 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioConfiguration UnityEngine.AudioSettings::GetConfiguration()
extern "C"  AudioConfiguration_t4109410948  AudioSettings_GetConfiguration_m1435999052 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings::INTERNAL_CALL_GetConfiguration(UnityEngine.AudioConfiguration&)
extern "C"  void AudioSettings_INTERNAL_CALL_GetConfiguration_m2757117248 (Il2CppObject * __this /* static, unused */, AudioConfiguration_t4109410948 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern "C"  void AudioSettings_InvokeOnAudioConfigurationChanged_m1851666322 (Il2CppObject * __this /* static, unused */, bool ___deviceWasChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
