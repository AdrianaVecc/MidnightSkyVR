﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2701878760;

#include "mscorlib_System_Exception3991598821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.UninitializedMessageException
struct  UninitializedMessageException_t37798621  : public Exception_t3991598821
{
public:
	// System.Collections.Generic.IList`1<System.String> Google.ProtocolBuffers.UninitializedMessageException::missingFields
	Il2CppObject* ___missingFields_11;

public:
	inline static int32_t get_offset_of_missingFields_11() { return static_cast<int32_t>(offsetof(UninitializedMessageException_t37798621, ___missingFields_11)); }
	inline Il2CppObject* get_missingFields_11() const { return ___missingFields_11; }
	inline Il2CppObject** get_address_of_missingFields_11() { return &___missingFields_11; }
	inline void set_missingFields_11(Il2CppObject* value)
	{
		___missingFields_11 = value;
		Il2CppCodeGenWriteBarrier(&___missingFields_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
