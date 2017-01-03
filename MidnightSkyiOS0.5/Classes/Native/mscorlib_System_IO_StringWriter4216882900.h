#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "mscorlib_System_IO_TextWriter2304124208.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t4216882900  : public TextWriter_t2304124208
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t243639308 * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t4216882900, ___internalString_3)); }
	inline StringBuilder_t243639308 * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t243639308 ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t243639308 * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier(&___internalString_3, value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t4216882900, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
