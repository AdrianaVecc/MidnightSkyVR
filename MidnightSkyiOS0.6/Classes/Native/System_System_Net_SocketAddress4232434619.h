#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SocketAddress
struct  SocketAddress_t4232434619  : public Il2CppObject
{
public:
	// System.Byte[] System.Net.SocketAddress::data
	ByteU5BU5D_t4260760469* ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(SocketAddress_t4232434619, ___data_0)); }
	inline ByteU5BU5D_t4260760469* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t4260760469** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t4260760469* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
