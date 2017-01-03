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
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture/<InternalOnExceptionCallback>c__AnonStorey5
struct  U3CInternalOnExceptionCallbackU3Ec__AnonStorey5_t3114454115  : public Il2CppObject
{
public:
	// GvrVideoPlayerTexture GvrVideoPlayerTexture/<InternalOnExceptionCallback>c__AnonStorey5::player
	GvrVideoPlayerTexture_t4035356898 * ___player_0;
	// System.String GvrVideoPlayerTexture/<InternalOnExceptionCallback>c__AnonStorey5::type
	String_t* ___type_1;
	// System.String GvrVideoPlayerTexture/<InternalOnExceptionCallback>c__AnonStorey5::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(U3CInternalOnExceptionCallbackU3Ec__AnonStorey5_t3114454115, ___player_0)); }
	inline GvrVideoPlayerTexture_t4035356898 * get_player_0() const { return ___player_0; }
	inline GvrVideoPlayerTexture_t4035356898 ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(GvrVideoPlayerTexture_t4035356898 * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier(&___player_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(U3CInternalOnExceptionCallbackU3Ec__AnonStorey5_t3114454115, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3CInternalOnExceptionCallbackU3Ec__AnonStorey5_t3114454115, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier(&___msg_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
