#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// proto.PhoneEvent/Types/DepthMapEvent
struct DepthMapEvent_t3758135118;

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene3299286653.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/DepthMapEvent/Builder
struct  Builder_t3987156410  : public GeneratedBuilderLite_2_t3299286653
{
public:
	// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::result
	DepthMapEvent_t3758135118 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t3987156410, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t3987156410, ___result_1)); }
	inline DepthMapEvent_t3758135118 * get_result_1() const { return ___result_1; }
	inline DepthMapEvent_t3758135118 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(DepthMapEvent_t3758135118 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier(&___result_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
