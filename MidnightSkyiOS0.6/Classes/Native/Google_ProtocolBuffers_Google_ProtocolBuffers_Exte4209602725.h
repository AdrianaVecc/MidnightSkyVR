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

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct  ExtensionIntPair_t4209602725 
{
public:
	// System.Object Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::msgType
	Il2CppObject * ___msgType_0;
	// System.Int32 Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::number
	int32_t ___number_1;

public:
	inline static int32_t get_offset_of_msgType_0() { return static_cast<int32_t>(offsetof(ExtensionIntPair_t4209602725, ___msgType_0)); }
	inline Il2CppObject * get_msgType_0() const { return ___msgType_0; }
	inline Il2CppObject ** get_address_of_msgType_0() { return &___msgType_0; }
	inline void set_msgType_0(Il2CppObject * value)
	{
		___msgType_0 = value;
		Il2CppCodeGenWriteBarrier(&___msgType_0, value);
	}

	inline static int32_t get_offset_of_number_1() { return static_cast<int32_t>(offsetof(ExtensionIntPair_t4209602725, ___number_1)); }
	inline int32_t get_number_1() const { return ___number_1; }
	inline int32_t* get_address_of_number_1() { return &___number_1; }
	inline void set_number_1(int32_t value)
	{
		___number_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_t4209602725_marshaled_pinvoke
{
	Il2CppObject * ___msgType_0;
	int32_t ___number_1;
};
// Native definition for marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_t4209602725_marshaled_com
{
	Il2CppObject * ___msgType_0;
	int32_t ___number_1;
};
