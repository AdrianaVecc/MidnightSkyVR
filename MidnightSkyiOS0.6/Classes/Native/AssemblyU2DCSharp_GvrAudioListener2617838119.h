#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality3830609699.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudioListener
struct  GvrAudioListener_t2617838119  : public MonoBehaviour_t667441552
{
public:
	// System.Single GvrAudioListener::globalGainDb
	float ___globalGainDb_2;
	// UnityEngine.LayerMask GvrAudioListener::occlusionMask
	LayerMask_t3236759763  ___occlusionMask_3;
	// GvrAudio/Quality GvrAudioListener::quality
	int32_t ___quality_4;

public:
	inline static int32_t get_offset_of_globalGainDb_2() { return static_cast<int32_t>(offsetof(GvrAudioListener_t2617838119, ___globalGainDb_2)); }
	inline float get_globalGainDb_2() const { return ___globalGainDb_2; }
	inline float* get_address_of_globalGainDb_2() { return &___globalGainDb_2; }
	inline void set_globalGainDb_2(float value)
	{
		___globalGainDb_2 = value;
	}

	inline static int32_t get_offset_of_occlusionMask_3() { return static_cast<int32_t>(offsetof(GvrAudioListener_t2617838119, ___occlusionMask_3)); }
	inline LayerMask_t3236759763  get_occlusionMask_3() const { return ___occlusionMask_3; }
	inline LayerMask_t3236759763 * get_address_of_occlusionMask_3() { return &___occlusionMask_3; }
	inline void set_occlusionMask_3(LayerMask_t3236759763  value)
	{
		___occlusionMask_3 = value;
	}

	inline static int32_t get_offset_of_quality_4() { return static_cast<int32_t>(offsetof(GvrAudioListener_t2617838119, ___quality_4)); }
	inline int32_t get_quality_4() const { return ___quality_4; }
	inline int32_t* get_address_of_quality_4() { return &___quality_4; }
	inline void set_quality_4(int32_t value)
	{
		___quality_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
