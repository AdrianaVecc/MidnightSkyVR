#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// proto.PhoneEvent/Types/KeyEvent
struct KeyEvent_t2095740558;

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene1446394237.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/KeyEvent/Builder
struct  Builder_t1063111930  : public GeneratedBuilderLite_2_t1446394237
{
public:
	// System.Boolean proto.PhoneEvent/Types/KeyEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent/Builder::result
	KeyEvent_t2095740558 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t1063111930, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t1063111930, ___result_1)); }
	inline KeyEvent_t2095740558 * get_result_1() const { return ___result_1; }
	inline KeyEvent_t2095740558 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(KeyEvent_t2095740558 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier(&___result_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
