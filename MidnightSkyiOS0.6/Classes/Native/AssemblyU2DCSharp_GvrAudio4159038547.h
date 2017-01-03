#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<GvrAudioRoom>
struct List_1_t1620660894;
// UnityEngine.Transform
struct Transform_t1659122786;
// MutablePose3D
struct MutablePose3D_t1273683304;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudio
struct  GvrAudio_t4159038547  : public Il2CppObject
{
public:

public:
};

struct GvrAudio_t4159038547_StaticFields
{
public:
	// System.Int32 GvrAudio::sampleRate
	int32_t ___sampleRate_12;
	// System.Int32 GvrAudio::numChannels
	int32_t ___numChannels_13;
	// System.Int32 GvrAudio::framesPerBuffer
	int32_t ___framesPerBuffer_14;
	// UnityEngine.Color GvrAudio::listenerDirectivityColor
	Color_t4194546905  ___listenerDirectivityColor_15;
	// UnityEngine.Color GvrAudio::sourceDirectivityColor
	Color_t4194546905  ___sourceDirectivityColor_16;
	// UnityEngine.Bounds GvrAudio::bounds
	Bounds_t2711641849  ___bounds_17;
	// System.Collections.Generic.List`1<GvrAudioRoom> GvrAudio::enabledRooms
	List_1_t1620660894 * ___enabledRooms_18;
	// System.Boolean GvrAudio::initialized
	bool ___initialized_19;
	// UnityEngine.Transform GvrAudio::listenerTransform
	Transform_t1659122786 * ___listenerTransform_20;
	// System.Int32 GvrAudio::occlusionMaskValue
	int32_t ___occlusionMaskValue_21;
	// MutablePose3D GvrAudio::pose
	MutablePose3D_t1273683304 * ___pose_22;

public:
	inline static int32_t get_offset_of_sampleRate_12() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___sampleRate_12)); }
	inline int32_t get_sampleRate_12() const { return ___sampleRate_12; }
	inline int32_t* get_address_of_sampleRate_12() { return &___sampleRate_12; }
	inline void set_sampleRate_12(int32_t value)
	{
		___sampleRate_12 = value;
	}

	inline static int32_t get_offset_of_numChannels_13() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___numChannels_13)); }
	inline int32_t get_numChannels_13() const { return ___numChannels_13; }
	inline int32_t* get_address_of_numChannels_13() { return &___numChannels_13; }
	inline void set_numChannels_13(int32_t value)
	{
		___numChannels_13 = value;
	}

	inline static int32_t get_offset_of_framesPerBuffer_14() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___framesPerBuffer_14)); }
	inline int32_t get_framesPerBuffer_14() const { return ___framesPerBuffer_14; }
	inline int32_t* get_address_of_framesPerBuffer_14() { return &___framesPerBuffer_14; }
	inline void set_framesPerBuffer_14(int32_t value)
	{
		___framesPerBuffer_14 = value;
	}

	inline static int32_t get_offset_of_listenerDirectivityColor_15() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___listenerDirectivityColor_15)); }
	inline Color_t4194546905  get_listenerDirectivityColor_15() const { return ___listenerDirectivityColor_15; }
	inline Color_t4194546905 * get_address_of_listenerDirectivityColor_15() { return &___listenerDirectivityColor_15; }
	inline void set_listenerDirectivityColor_15(Color_t4194546905  value)
	{
		___listenerDirectivityColor_15 = value;
	}

	inline static int32_t get_offset_of_sourceDirectivityColor_16() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___sourceDirectivityColor_16)); }
	inline Color_t4194546905  get_sourceDirectivityColor_16() const { return ___sourceDirectivityColor_16; }
	inline Color_t4194546905 * get_address_of_sourceDirectivityColor_16() { return &___sourceDirectivityColor_16; }
	inline void set_sourceDirectivityColor_16(Color_t4194546905  value)
	{
		___sourceDirectivityColor_16 = value;
	}

	inline static int32_t get_offset_of_bounds_17() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___bounds_17)); }
	inline Bounds_t2711641849  get_bounds_17() const { return ___bounds_17; }
	inline Bounds_t2711641849 * get_address_of_bounds_17() { return &___bounds_17; }
	inline void set_bounds_17(Bounds_t2711641849  value)
	{
		___bounds_17 = value;
	}

	inline static int32_t get_offset_of_enabledRooms_18() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___enabledRooms_18)); }
	inline List_1_t1620660894 * get_enabledRooms_18() const { return ___enabledRooms_18; }
	inline List_1_t1620660894 ** get_address_of_enabledRooms_18() { return &___enabledRooms_18; }
	inline void set_enabledRooms_18(List_1_t1620660894 * value)
	{
		___enabledRooms_18 = value;
		Il2CppCodeGenWriteBarrier(&___enabledRooms_18, value);
	}

	inline static int32_t get_offset_of_initialized_19() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___initialized_19)); }
	inline bool get_initialized_19() const { return ___initialized_19; }
	inline bool* get_address_of_initialized_19() { return &___initialized_19; }
	inline void set_initialized_19(bool value)
	{
		___initialized_19 = value;
	}

	inline static int32_t get_offset_of_listenerTransform_20() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___listenerTransform_20)); }
	inline Transform_t1659122786 * get_listenerTransform_20() const { return ___listenerTransform_20; }
	inline Transform_t1659122786 ** get_address_of_listenerTransform_20() { return &___listenerTransform_20; }
	inline void set_listenerTransform_20(Transform_t1659122786 * value)
	{
		___listenerTransform_20 = value;
		Il2CppCodeGenWriteBarrier(&___listenerTransform_20, value);
	}

	inline static int32_t get_offset_of_occlusionMaskValue_21() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___occlusionMaskValue_21)); }
	inline int32_t get_occlusionMaskValue_21() const { return ___occlusionMaskValue_21; }
	inline int32_t* get_address_of_occlusionMaskValue_21() { return &___occlusionMaskValue_21; }
	inline void set_occlusionMaskValue_21(int32_t value)
	{
		___occlusionMaskValue_21 = value;
	}

	inline static int32_t get_offset_of_pose_22() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___pose_22)); }
	inline MutablePose3D_t1273683304 * get_pose_22() const { return ___pose_22; }
	inline MutablePose3D_t1273683304 ** get_address_of_pose_22() { return &___pose_22; }
	inline void set_pose_22(MutablePose3D_t1273683304 * value)
	{
		___pose_22 = value;
		Il2CppCodeGenWriteBarrier(&___pose_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
