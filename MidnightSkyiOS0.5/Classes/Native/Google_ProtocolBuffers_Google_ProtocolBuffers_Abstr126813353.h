﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.AbstractMessageLite`2/SerializationSurrogate<System.Object,System.Object>
struct  SerializationSurrogate_t126813353  : public Il2CppObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.AbstractMessageLite`2/SerializationSurrogate::_message
	ByteU5BU5D_t4260760469* ____message_1;
	// System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2/SerializationSurrogate::_initialized
	bool ____initialized_2;

public:
	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(SerializationSurrogate_t126813353, ____message_1)); }
	inline ByteU5BU5D_t4260760469* get__message_1() const { return ____message_1; }
	inline ByteU5BU5D_t4260760469** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(ByteU5BU5D_t4260760469* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier(&____message_1, value);
	}

	inline static int32_t get_offset_of__initialized_2() { return static_cast<int32_t>(offsetof(SerializationSurrogate_t126813353, ____initialized_2)); }
	inline bool get__initialized_2() const { return ____initialized_2; }
	inline bool* get_address_of__initialized_2() { return &____initialized_2; }
	inline void set__initialized_2(bool value)
	{
		____initialized_2 = value;
	}
};

struct SerializationSurrogate_t126813353_StaticFields
{
public:
	// TBuilder Google.ProtocolBuffers.AbstractMessageLite`2/SerializationSurrogate::TemplateInstance
	Il2CppObject * ___TemplateInstance_0;

public:
	inline static int32_t get_offset_of_TemplateInstance_0() { return static_cast<int32_t>(offsetof(SerializationSurrogate_t126813353_StaticFields, ___TemplateInstance_0)); }
	inline Il2CppObject * get_TemplateInstance_0() const { return ___TemplateInstance_0; }
	inline Il2CppObject ** get_address_of_TemplateInstance_0() { return &___TemplateInstance_0; }
	inline void set_TemplateInstance_0(Il2CppObject * value)
	{
		___TemplateInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___TemplateInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
