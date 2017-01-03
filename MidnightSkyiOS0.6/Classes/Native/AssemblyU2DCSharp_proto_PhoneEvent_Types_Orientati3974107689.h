#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// proto.PhoneEvent/Types/OrientationEvent
struct OrientationEvent_t3825228477;

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gener129921249.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/OrientationEvent/Builder
struct  Builder_t3974107689  : public GeneratedBuilderLite_2_t129921249
{
public:
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::result
	OrientationEvent_t3825228477 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t3974107689, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t3974107689, ___result_1)); }
	inline OrientationEvent_t3825228477 * get_result_1() const { return ___result_1; }
	inline OrientationEvent_t3825228477 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(OrientationEvent_t3825228477 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier(&___result_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
