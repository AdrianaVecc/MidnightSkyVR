#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "System_System_Collections_Specialized_StringDictio1159596143.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ProcessStringDictionary
struct  ProcessStringDictionary_t3809386916  : public StringDictionary_t1159596143
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.ProcessStringDictionary::table
	Hashtable_t1407064410 * ___table_1;

public:
	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(ProcessStringDictionary_t3809386916, ___table_1)); }
	inline Hashtable_t1407064410 * get_table_1() const { return ___table_1; }
	inline Hashtable_t1407064410 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t1407064410 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier(&___table_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
