#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_GvrProfile_Lenses3379109269.h"
#include "AssemblyU2DCSharp_GvrProfile_MaxFOV3404298290.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion2316389254.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrProfile/Viewer
struct  Viewer_t3668830587 
{
public:
	// GvrProfile/Lenses GvrProfile/Viewer::lenses
	Lenses_t3379109269  ___lenses_0;
	// GvrProfile/MaxFOV GvrProfile/Viewer::maxFOV
	MaxFOV_t3404298290  ___maxFOV_1;
	// GvrProfile/Distortion GvrProfile/Viewer::distortion
	Distortion_t2316389254  ___distortion_2;
	// GvrProfile/Distortion GvrProfile/Viewer::inverse
	Distortion_t2316389254  ___inverse_3;

public:
	inline static int32_t get_offset_of_lenses_0() { return static_cast<int32_t>(offsetof(Viewer_t3668830587, ___lenses_0)); }
	inline Lenses_t3379109269  get_lenses_0() const { return ___lenses_0; }
	inline Lenses_t3379109269 * get_address_of_lenses_0() { return &___lenses_0; }
	inline void set_lenses_0(Lenses_t3379109269  value)
	{
		___lenses_0 = value;
	}

	inline static int32_t get_offset_of_maxFOV_1() { return static_cast<int32_t>(offsetof(Viewer_t3668830587, ___maxFOV_1)); }
	inline MaxFOV_t3404298290  get_maxFOV_1() const { return ___maxFOV_1; }
	inline MaxFOV_t3404298290 * get_address_of_maxFOV_1() { return &___maxFOV_1; }
	inline void set_maxFOV_1(MaxFOV_t3404298290  value)
	{
		___maxFOV_1 = value;
	}

	inline static int32_t get_offset_of_distortion_2() { return static_cast<int32_t>(offsetof(Viewer_t3668830587, ___distortion_2)); }
	inline Distortion_t2316389254  get_distortion_2() const { return ___distortion_2; }
	inline Distortion_t2316389254 * get_address_of_distortion_2() { return &___distortion_2; }
	inline void set_distortion_2(Distortion_t2316389254  value)
	{
		___distortion_2 = value;
	}

	inline static int32_t get_offset_of_inverse_3() { return static_cast<int32_t>(offsetof(Viewer_t3668830587, ___inverse_3)); }
	inline Distortion_t2316389254  get_inverse_3() const { return ___inverse_3; }
	inline Distortion_t2316389254 * get_address_of_inverse_3() { return &___inverse_3; }
	inline void set_inverse_3(Distortion_t2316389254  value)
	{
		___inverse_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: GvrProfile/Viewer
struct Viewer_t3668830587_marshaled_pinvoke
{
	Lenses_t3379109269_marshaled_pinvoke ___lenses_0;
	MaxFOV_t3404298290_marshaled_pinvoke ___maxFOV_1;
	Distortion_t2316389254_marshaled_pinvoke ___distortion_2;
	Distortion_t2316389254_marshaled_pinvoke ___inverse_3;
};
// Native definition for marshalling of: GvrProfile/Viewer
struct Viewer_t3668830587_marshaled_com
{
	Lenses_t3379109269_marshaled_com ___lenses_0;
	MaxFOV_t3404298290_marshaled_com ___maxFOV_1;
	Distortion_t2316389254_marshaled_com ___distortion_2;
	Distortion_t2316389254_marshaled_com ___inverse_3;
};
