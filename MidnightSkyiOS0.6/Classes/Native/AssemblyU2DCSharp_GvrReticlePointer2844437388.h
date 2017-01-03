#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "AssemblyU2DCSharp_GvrBasePointer3602508009.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrReticlePointer
struct  GvrReticlePointer_t2844437388  : public GvrBasePointer_t3602508009
{
public:
	// System.Int32 GvrReticlePointer::reticleSegments
	int32_t ___reticleSegments_7;
	// System.Single GvrReticlePointer::reticleGrowthSpeed
	float ___reticleGrowthSpeed_8;
	// UnityEngine.Material GvrReticlePointer::materialComp
	Material_t3870600107 * ___materialComp_9;
	// System.Single GvrReticlePointer::reticleInnerAngle
	float ___reticleInnerAngle_10;
	// System.Single GvrReticlePointer::reticleOuterAngle
	float ___reticleOuterAngle_11;
	// System.Single GvrReticlePointer::reticleDistanceInMeters
	float ___reticleDistanceInMeters_12;
	// System.Single GvrReticlePointer::reticleInnerDiameter
	float ___reticleInnerDiameter_13;
	// System.Single GvrReticlePointer::reticleOuterDiameter
	float ___reticleOuterDiameter_14;

public:
	inline static int32_t get_offset_of_reticleSegments_7() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2844437388, ___reticleSegments_7)); }
	inline int32_t get_reticleSegments_7() const { return ___reticleSegments_7; }
	inline int32_t* get_address_of_reticleSegments_7() { return &___reticleSegments_7; }
	inline void set_reticleSegments_7(int32_t value)
	{
		___reticleSegments_7 = value;
	}

	inline static int32_t get_offset_of_reticleGrowthSpeed_8() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2844437388, ___reticleGrowthSpeed_8)); }
	inline float get_reticleGrowthSpeed_8() const { return ___reticleGrowthSpeed_8; }
	inline float* get_address_of_reticleGrowthSpeed_8() { return &___reticleGrowthSpeed_8; }
	inline void set_reticleGrowthSpeed_8(float value)
	{
		___reticleGrowthSpeed_8 = value;
	}

	inline static int32_t get_offset_of_materialComp_9() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2844437388, ___materialComp_9)); }
	inline Material_t3870600107 * get_materialComp_9() const { return ___materialComp_9; }
	inline Material_t3870600107 ** get_address_of_materialComp_9() { return &___materialComp_9; }
	inline void set_materialComp_9(Material_t3870600107 * value)
	{
		___materialComp_9 = value;
		Il2CppCodeGenWriteBarrier(&___materialComp_9, value);
	}

	inline static int32_t get_offset_of_reticleInnerAngle_10() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2844437388, ___reticleInnerAngle_10)); }
	inline float get_reticleInnerAngle_10() const { return ___reticleInnerAngle_10; }
	inline float* get_address_of_reticleInnerAngle_10() { return &___reticleInnerAngle_10; }
	inline void set_reticleInnerAngle_10(float value)
	{
		___reticleInnerAngle_10 = value;
	}

	inline static int32_t get_offset_of_reticleOuterAngle_11() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2844437388, ___reticleOuterAngle_11)); }
	inline float get_reticleOuterAngle_11() const { return ___reticleOuterAngle_11; }
	inline float* get_address_of_reticleOuterAngle_11() { return &___reticleOuterAngle_11; }
	inline void set_reticleOuterAngle_11(float value)
	{
		___reticleOuterAngle_11 = value;
	}

	inline static int32_t get_offset_of_reticleDistanceInMeters_12() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2844437388, ___reticleDistanceInMeters_12)); }
	inline float get_reticleDistanceInMeters_12() const { return ___reticleDistanceInMeters_12; }
	inline float* get_address_of_reticleDistanceInMeters_12() { return &___reticleDistanceInMeters_12; }
	inline void set_reticleDistanceInMeters_12(float value)
	{
		___reticleDistanceInMeters_12 = value;
	}

	inline static int32_t get_offset_of_reticleInnerDiameter_13() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2844437388, ___reticleInnerDiameter_13)); }
	inline float get_reticleInnerDiameter_13() const { return ___reticleInnerDiameter_13; }
	inline float* get_address_of_reticleInnerDiameter_13() { return &___reticleInnerDiameter_13; }
	inline void set_reticleInnerDiameter_13(float value)
	{
		___reticleInnerDiameter_13 = value;
	}

	inline static int32_t get_offset_of_reticleOuterDiameter_14() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2844437388, ___reticleOuterDiameter_14)); }
	inline float get_reticleOuterDiameter_14() const { return ___reticleOuterDiameter_14; }
	inline float* get_address_of_reticleOuterDiameter_14() { return &___reticleOuterDiameter_14; }
	inline void set_reticleOuterDiameter_14(float value)
	{
		___reticleOuterDiameter_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
