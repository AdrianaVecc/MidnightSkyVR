#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrProfile/Distortion
struct  Distortion_t2316389254 
{
public:
	// System.Single[] GvrProfile/Distortion::coef
	SingleU5BU5D_t2316563989* ___coef_0;

public:
	inline static int32_t get_offset_of_coef_0() { return static_cast<int32_t>(offsetof(Distortion_t2316389254, ___coef_0)); }
	inline SingleU5BU5D_t2316563989* get_coef_0() const { return ___coef_0; }
	inline SingleU5BU5D_t2316563989** get_address_of_coef_0() { return &___coef_0; }
	inline void set_coef_0(SingleU5BU5D_t2316563989* value)
	{
		___coef_0 = value;
		Il2CppCodeGenWriteBarrier(&___coef_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: GvrProfile/Distortion
struct Distortion_t2316389254_marshaled_pinvoke
{
	float* ___coef_0;
};
// Native definition for marshalling of: GvrProfile/Distortion
struct Distortion_t2316389254_marshaled_com
{
	float* ___coef_0;
};
