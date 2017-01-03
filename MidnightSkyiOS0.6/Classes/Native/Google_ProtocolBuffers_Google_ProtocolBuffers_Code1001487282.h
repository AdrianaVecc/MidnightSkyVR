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
// System.IO.Stream
struct Stream_t1561764144;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.CodedOutputStream
struct  CodedOutputStream_t1001487282  : public Il2CppObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.CodedOutputStream::buffer
	ByteU5BU5D_t4260760469* ___buffer_1;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::limit
	int32_t ___limit_2;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::position
	int32_t ___position_3;
	// System.IO.Stream Google.ProtocolBuffers.CodedOutputStream::output
	Stream_t1561764144 * ___output_4;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1001487282, ___buffer_1)); }
	inline ByteU5BU5D_t4260760469* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t4260760469** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t4260760469* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_1, value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1001487282, ___limit_2)); }
	inline int32_t get_limit_2() const { return ___limit_2; }
	inline int32_t* get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(int32_t value)
	{
		___limit_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1001487282, ___position_3)); }
	inline int32_t get_position_3() const { return ___position_3; }
	inline int32_t* get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(int32_t value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_output_4() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1001487282, ___output_4)); }
	inline Stream_t1561764144 * get_output_4() const { return ___output_4; }
	inline Stream_t1561764144 ** get_address_of_output_4() { return &___output_4; }
	inline void set_output_4(Stream_t1561764144 * value)
	{
		___output_4 = value;
		Il2CppCodeGenWriteBarrier(&___output_4, value);
	}
};

struct CodedOutputStream_t1001487282_StaticFields
{
public:
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_0;

public:
	inline static int32_t get_offset_of_DefaultBufferSize_0() { return static_cast<int32_t>(offsetof(CodedOutputStream_t1001487282_StaticFields, ___DefaultBufferSize_0)); }
	inline int32_t get_DefaultBufferSize_0() const { return ___DefaultBufferSize_0; }
	inline int32_t* get_address_of_DefaultBufferSize_0() { return &___DefaultBufferSize_0; }
	inline void set_DefaultBufferSize_0(int32_t value)
	{
		___DefaultBufferSize_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
