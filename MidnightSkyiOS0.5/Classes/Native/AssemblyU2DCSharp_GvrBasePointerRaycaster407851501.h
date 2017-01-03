#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycas2327671059.h"
#include "AssemblyU2DCSharp_GvrBasePointerRaycaster_RaycastMo525023850.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrBasePointerRaycaster
struct  GvrBasePointerRaycaster_t407851501  : public BaseRaycaster_t2327671059
{
public:
	// GvrBasePointerRaycaster/RaycastMode GvrBasePointerRaycaster::raycastMode
	int32_t ___raycastMode_2;
	// UnityEngine.Ray GvrBasePointerRaycaster::lastRay
	Ray_t3134616544  ___lastRay_3;

public:
	inline static int32_t get_offset_of_raycastMode_2() { return static_cast<int32_t>(offsetof(GvrBasePointerRaycaster_t407851501, ___raycastMode_2)); }
	inline int32_t get_raycastMode_2() const { return ___raycastMode_2; }
	inline int32_t* get_address_of_raycastMode_2() { return &___raycastMode_2; }
	inline void set_raycastMode_2(int32_t value)
	{
		___raycastMode_2 = value;
	}

	inline static int32_t get_offset_of_lastRay_3() { return static_cast<int32_t>(offsetof(GvrBasePointerRaycaster_t407851501, ___lastRay_3)); }
	inline Ray_t3134616544  get_lastRay_3() const { return ___lastRay_3; }
	inline Ray_t3134616544 * get_address_of_lastRay_3() { return &___lastRay_3; }
	inline void set_lastRay_3(Ray_t3134616544  value)
	{
		___lastRay_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
