#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorOrientationEvent
struct  EmulatorOrientationEvent_t3989687101 
{
public:
	// System.Int64 Gvr.Internal.EmulatorOrientationEvent::timestamp
	int64_t ___timestamp_0;
	// UnityEngine.Quaternion Gvr.Internal.EmulatorOrientationEvent::orientation
	Quaternion_t1553702882  ___orientation_1;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(EmulatorOrientationEvent_t3989687101, ___timestamp_0)); }
	inline int64_t get_timestamp_0() const { return ___timestamp_0; }
	inline int64_t* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(int64_t value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(EmulatorOrientationEvent_t3989687101, ___orientation_1)); }
	inline Quaternion_t1553702882  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t1553702882 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t1553702882  value)
	{
		___orientation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Gvr.Internal.EmulatorOrientationEvent
struct EmulatorOrientationEvent_t3989687101_marshaled_pinvoke
{
	int64_t ___timestamp_0;
	Quaternion_t1553702882_marshaled_pinvoke ___orientation_1;
};
// Native definition for marshalling of: Gvr.Internal.EmulatorOrientationEvent
struct EmulatorOrientationEvent_t3989687101_marshaled_com
{
	int64_t ___timestamp_0;
	Quaternion_t1553702882_marshaled_com ___orientation_1;
};
