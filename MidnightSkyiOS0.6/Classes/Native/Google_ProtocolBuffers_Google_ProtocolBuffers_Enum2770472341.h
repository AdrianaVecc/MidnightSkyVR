#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,proto.PhoneEvent/Types/Type>
struct Dictionary_2_t921091412;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.EnumParser`1<proto.PhoneEvent/Types/Type>
struct  EnumParser_1_t2770472341  : public Il2CppObject
{
public:

public:
};

struct EnumParser_1_t2770472341_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,T> Google.ProtocolBuffers.EnumParser`1::_byNumber
	Dictionary_2_t921091412 * ____byNumber_0;

public:
	inline static int32_t get_offset_of__byNumber_0() { return static_cast<int32_t>(offsetof(EnumParser_1_t2770472341_StaticFields, ____byNumber_0)); }
	inline Dictionary_2_t921091412 * get__byNumber_0() const { return ____byNumber_0; }
	inline Dictionary_2_t921091412 ** get_address_of__byNumber_0() { return &____byNumber_0; }
	inline void set__byNumber_0(Dictionary_2_t921091412 * value)
	{
		____byNumber_0 = value;
		Il2CppCodeGenWriteBarrier(&____byNumber_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
