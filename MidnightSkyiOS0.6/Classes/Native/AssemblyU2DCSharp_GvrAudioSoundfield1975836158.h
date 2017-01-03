#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t44861630;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudioSoundfield
struct  GvrAudioSoundfield_t1975836158  : public MonoBehaviour_t667441552
{
public:
	// System.Single GvrAudioSoundfield::gainDb
	float ___gainDb_2;
	// System.Boolean GvrAudioSoundfield::playOnAwake
	bool ___playOnAwake_3;
	// UnityEngine.AudioClip GvrAudioSoundfield::soundfieldClip0102
	AudioClip_t794140988 * ___soundfieldClip0102_4;
	// UnityEngine.AudioClip GvrAudioSoundfield::soundfieldClip0304
	AudioClip_t794140988 * ___soundfieldClip0304_5;
	// System.Boolean GvrAudioSoundfield::soundfieldLoop
	bool ___soundfieldLoop_6;
	// System.Boolean GvrAudioSoundfield::soundfieldMute
	bool ___soundfieldMute_7;
	// System.Single GvrAudioSoundfield::soundfieldPitch
	float ___soundfieldPitch_8;
	// System.Int32 GvrAudioSoundfield::soundfieldPriority
	int32_t ___soundfieldPriority_9;
	// System.Single GvrAudioSoundfield::soundfieldVolume
	float ___soundfieldVolume_10;
	// System.Int32 GvrAudioSoundfield::id
	int32_t ___id_11;
	// UnityEngine.AudioSource[] GvrAudioSoundfield::audioSources
	AudioSourceU5BU5D_t44861630* ___audioSources_12;
	// System.Boolean GvrAudioSoundfield::isPaused
	bool ___isPaused_13;

public:
	inline static int32_t get_offset_of_gainDb_2() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___gainDb_2)); }
	inline float get_gainDb_2() const { return ___gainDb_2; }
	inline float* get_address_of_gainDb_2() { return &___gainDb_2; }
	inline void set_gainDb_2(float value)
	{
		___gainDb_2 = value;
	}

	inline static int32_t get_offset_of_playOnAwake_3() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___playOnAwake_3)); }
	inline bool get_playOnAwake_3() const { return ___playOnAwake_3; }
	inline bool* get_address_of_playOnAwake_3() { return &___playOnAwake_3; }
	inline void set_playOnAwake_3(bool value)
	{
		___playOnAwake_3 = value;
	}

	inline static int32_t get_offset_of_soundfieldClip0102_4() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___soundfieldClip0102_4)); }
	inline AudioClip_t794140988 * get_soundfieldClip0102_4() const { return ___soundfieldClip0102_4; }
	inline AudioClip_t794140988 ** get_address_of_soundfieldClip0102_4() { return &___soundfieldClip0102_4; }
	inline void set_soundfieldClip0102_4(AudioClip_t794140988 * value)
	{
		___soundfieldClip0102_4 = value;
		Il2CppCodeGenWriteBarrier(&___soundfieldClip0102_4, value);
	}

	inline static int32_t get_offset_of_soundfieldClip0304_5() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___soundfieldClip0304_5)); }
	inline AudioClip_t794140988 * get_soundfieldClip0304_5() const { return ___soundfieldClip0304_5; }
	inline AudioClip_t794140988 ** get_address_of_soundfieldClip0304_5() { return &___soundfieldClip0304_5; }
	inline void set_soundfieldClip0304_5(AudioClip_t794140988 * value)
	{
		___soundfieldClip0304_5 = value;
		Il2CppCodeGenWriteBarrier(&___soundfieldClip0304_5, value);
	}

	inline static int32_t get_offset_of_soundfieldLoop_6() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___soundfieldLoop_6)); }
	inline bool get_soundfieldLoop_6() const { return ___soundfieldLoop_6; }
	inline bool* get_address_of_soundfieldLoop_6() { return &___soundfieldLoop_6; }
	inline void set_soundfieldLoop_6(bool value)
	{
		___soundfieldLoop_6 = value;
	}

	inline static int32_t get_offset_of_soundfieldMute_7() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___soundfieldMute_7)); }
	inline bool get_soundfieldMute_7() const { return ___soundfieldMute_7; }
	inline bool* get_address_of_soundfieldMute_7() { return &___soundfieldMute_7; }
	inline void set_soundfieldMute_7(bool value)
	{
		___soundfieldMute_7 = value;
	}

	inline static int32_t get_offset_of_soundfieldPitch_8() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___soundfieldPitch_8)); }
	inline float get_soundfieldPitch_8() const { return ___soundfieldPitch_8; }
	inline float* get_address_of_soundfieldPitch_8() { return &___soundfieldPitch_8; }
	inline void set_soundfieldPitch_8(float value)
	{
		___soundfieldPitch_8 = value;
	}

	inline static int32_t get_offset_of_soundfieldPriority_9() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___soundfieldPriority_9)); }
	inline int32_t get_soundfieldPriority_9() const { return ___soundfieldPriority_9; }
	inline int32_t* get_address_of_soundfieldPriority_9() { return &___soundfieldPriority_9; }
	inline void set_soundfieldPriority_9(int32_t value)
	{
		___soundfieldPriority_9 = value;
	}

	inline static int32_t get_offset_of_soundfieldVolume_10() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___soundfieldVolume_10)); }
	inline float get_soundfieldVolume_10() const { return ___soundfieldVolume_10; }
	inline float* get_address_of_soundfieldVolume_10() { return &___soundfieldVolume_10; }
	inline void set_soundfieldVolume_10(float value)
	{
		___soundfieldVolume_10 = value;
	}

	inline static int32_t get_offset_of_id_11() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___id_11)); }
	inline int32_t get_id_11() const { return ___id_11; }
	inline int32_t* get_address_of_id_11() { return &___id_11; }
	inline void set_id_11(int32_t value)
	{
		___id_11 = value;
	}

	inline static int32_t get_offset_of_audioSources_12() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___audioSources_12)); }
	inline AudioSourceU5BU5D_t44861630* get_audioSources_12() const { return ___audioSources_12; }
	inline AudioSourceU5BU5D_t44861630** get_address_of_audioSources_12() { return &___audioSources_12; }
	inline void set_audioSources_12(AudioSourceU5BU5D_t44861630* value)
	{
		___audioSources_12 = value;
		Il2CppCodeGenWriteBarrier(&___audioSources_12, value);
	}

	inline static int32_t get_offset_of_isPaused_13() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1975836158, ___isPaused_13)); }
	inline bool get_isPaused_13() const { return ___isPaused_13; }
	inline bool* get_address_of_isPaused_13() { return &___isPaused_13; }
	inline void set_isPaused_13(bool value)
	{
		___isPaused_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
