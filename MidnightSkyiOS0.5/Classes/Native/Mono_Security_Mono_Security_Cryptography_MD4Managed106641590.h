﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t3230734560;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "Mono_Security_Mono_Security_Cryptography_MD4227518835.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t106641590  : public MD4_t227518835
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t3230734560* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t4260760469* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t3230734560* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t3230734560* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t4260760469* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t106641590, ___state_4)); }
	inline UInt32U5BU5D_t3230734560* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t3230734560** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t3230734560* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier(&___state_4, value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t106641590, ___buffer_5)); }
	inline ByteU5BU5D_t4260760469* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t4260760469** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t4260760469* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_5, value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t106641590, ___count_6)); }
	inline UInt32U5BU5D_t3230734560* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t3230734560** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t3230734560* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier(&___count_6, value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t106641590, ___x_7)); }
	inline UInt32U5BU5D_t3230734560* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t3230734560** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t3230734560* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier(&___x_7, value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t106641590, ___digest_8)); }
	inline ByteU5BU5D_t4260760469* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t4260760469** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t4260760469* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier(&___digest_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
