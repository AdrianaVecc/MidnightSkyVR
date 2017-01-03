#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t2719536913;

#include "AssemblyU2DCSharp_GvrBasePointerRaycaster407851501.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerPhysicsRaycaster
struct  GvrPointerPhysicsRaycaster_t1923475945  : public GvrBasePointerRaycaster_t407851501
{
public:
	// UnityEngine.LayerMask GvrPointerPhysicsRaycaster::raycasterEventMask
	LayerMask_t3236759763  ___raycasterEventMask_5;
	// UnityEngine.Camera GvrPointerPhysicsRaycaster::cachedEventCamera
	Camera_t2727095145 * ___cachedEventCamera_6;

public:
	inline static int32_t get_offset_of_raycasterEventMask_5() { return static_cast<int32_t>(offsetof(GvrPointerPhysicsRaycaster_t1923475945, ___raycasterEventMask_5)); }
	inline LayerMask_t3236759763  get_raycasterEventMask_5() const { return ___raycasterEventMask_5; }
	inline LayerMask_t3236759763 * get_address_of_raycasterEventMask_5() { return &___raycasterEventMask_5; }
	inline void set_raycasterEventMask_5(LayerMask_t3236759763  value)
	{
		___raycasterEventMask_5 = value;
	}

	inline static int32_t get_offset_of_cachedEventCamera_6() { return static_cast<int32_t>(offsetof(GvrPointerPhysicsRaycaster_t1923475945, ___cachedEventCamera_6)); }
	inline Camera_t2727095145 * get_cachedEventCamera_6() const { return ___cachedEventCamera_6; }
	inline Camera_t2727095145 ** get_address_of_cachedEventCamera_6() { return &___cachedEventCamera_6; }
	inline void set_cachedEventCamera_6(Camera_t2727095145 * value)
	{
		___cachedEventCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___cachedEventCamera_6, value);
	}
};

struct GvrPointerPhysicsRaycaster_t1923475945_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.RaycastHit> GvrPointerPhysicsRaycaster::<>f__am$cache2
	Comparison_1_t2719536913 * ___U3CU3Ef__amU24cache2_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_7() { return static_cast<int32_t>(offsetof(GvrPointerPhysicsRaycaster_t1923475945_StaticFields, ___U3CU3Ef__amU24cache2_7)); }
	inline Comparison_1_t2719536913 * get_U3CU3Ef__amU24cache2_7() const { return ___U3CU3Ef__amU24cache2_7; }
	inline Comparison_1_t2719536913 ** get_address_of_U3CU3Ef__amU24cache2_7() { return &___U3CU3Ef__amU24cache2_7; }
	inline void set_U3CU3Ef__amU24cache2_7(Comparison_1_t2719536913 * value)
	{
		___U3CU3Ef__amU24cache2_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
