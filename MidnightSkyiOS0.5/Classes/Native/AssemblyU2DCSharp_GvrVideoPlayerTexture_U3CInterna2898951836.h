#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrVideoPlayerTexture
struct GvrVideoPlayerTexture_t4035356898;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/<InternalOnVideoEventCallback>c__AnonStorey4
struct  U3CInternalOnVideoEventCallbackU3Ec__AnonStorey4_t2898951836  : public Il2CppObject
{
public:
	// GvrVideoPlayerTexture GvrVideoPlayerTexture/<InternalOnVideoEventCallback>c__AnonStorey4::player
	GvrVideoPlayerTexture_t4035356898 * ___player_0;
	// System.Int32 GvrVideoPlayerTexture/<InternalOnVideoEventCallback>c__AnonStorey4::eventId
	int32_t ___eventId_1;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(U3CInternalOnVideoEventCallbackU3Ec__AnonStorey4_t2898951836, ___player_0)); }
	inline GvrVideoPlayerTexture_t4035356898 * get_player_0() const { return ___player_0; }
	inline GvrVideoPlayerTexture_t4035356898 ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(GvrVideoPlayerTexture_t4035356898 * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier(&___player_0, value);
	}

	inline static int32_t get_offset_of_eventId_1() { return static_cast<int32_t>(offsetof(U3CInternalOnVideoEventCallbackU3Ec__AnonStorey4_t2898951836, ___eventId_1)); }
	inline int32_t get_eventId_1() const { return ___eventId_1; }
	inline int32_t* get_address_of_eventId_1() { return &___eventId_1; }
	inline void set_eventId_1(int32_t value)
	{
		___eventId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
