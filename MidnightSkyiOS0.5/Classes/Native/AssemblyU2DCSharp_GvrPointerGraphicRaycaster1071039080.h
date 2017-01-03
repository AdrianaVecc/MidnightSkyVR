#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t2727140764;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t2204984990;
// UnityEngine.Camera
struct Camera_t2727095145;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t3848127921;

#include "AssemblyU2DCSharp_GvrBasePointerRaycaster407851501.h"
#include "AssemblyU2DCSharp_GvrPointerGraphicRaycaster_Block2223317336.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerGraphicRaycaster
struct  GvrPointerGraphicRaycaster_t1071039080  : public GvrBasePointerRaycaster_t407851501
{
public:
	// System.Boolean GvrPointerGraphicRaycaster::ignoreReversedGraphics
	bool ___ignoreReversedGraphics_5;
	// GvrPointerGraphicRaycaster/BlockingObjects GvrPointerGraphicRaycaster::blockingObjects
	int32_t ___blockingObjects_6;
	// UnityEngine.LayerMask GvrPointerGraphicRaycaster::blockingMask
	LayerMask_t3236759763  ___blockingMask_7;
	// UnityEngine.Canvas GvrPointerGraphicRaycaster::targetCanvas
	Canvas_t2727140764 * ___targetCanvas_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> GvrPointerGraphicRaycaster::raycastResults
	List_1_t2204984990 * ___raycastResults_9;
	// UnityEngine.Camera GvrPointerGraphicRaycaster::cachedPointerEventCamera
	Camera_t2727095145 * ___cachedPointerEventCamera_10;

public:
	inline static int32_t get_offset_of_ignoreReversedGraphics_5() { return static_cast<int32_t>(offsetof(GvrPointerGraphicRaycaster_t1071039080, ___ignoreReversedGraphics_5)); }
	inline bool get_ignoreReversedGraphics_5() const { return ___ignoreReversedGraphics_5; }
	inline bool* get_address_of_ignoreReversedGraphics_5() { return &___ignoreReversedGraphics_5; }
	inline void set_ignoreReversedGraphics_5(bool value)
	{
		___ignoreReversedGraphics_5 = value;
	}

	inline static int32_t get_offset_of_blockingObjects_6() { return static_cast<int32_t>(offsetof(GvrPointerGraphicRaycaster_t1071039080, ___blockingObjects_6)); }
	inline int32_t get_blockingObjects_6() const { return ___blockingObjects_6; }
	inline int32_t* get_address_of_blockingObjects_6() { return &___blockingObjects_6; }
	inline void set_blockingObjects_6(int32_t value)
	{
		___blockingObjects_6 = value;
	}

	inline static int32_t get_offset_of_blockingMask_7() { return static_cast<int32_t>(offsetof(GvrPointerGraphicRaycaster_t1071039080, ___blockingMask_7)); }
	inline LayerMask_t3236759763  get_blockingMask_7() const { return ___blockingMask_7; }
	inline LayerMask_t3236759763 * get_address_of_blockingMask_7() { return &___blockingMask_7; }
	inline void set_blockingMask_7(LayerMask_t3236759763  value)
	{
		___blockingMask_7 = value;
	}

	inline static int32_t get_offset_of_targetCanvas_8() { return static_cast<int32_t>(offsetof(GvrPointerGraphicRaycaster_t1071039080, ___targetCanvas_8)); }
	inline Canvas_t2727140764 * get_targetCanvas_8() const { return ___targetCanvas_8; }
	inline Canvas_t2727140764 ** get_address_of_targetCanvas_8() { return &___targetCanvas_8; }
	inline void set_targetCanvas_8(Canvas_t2727140764 * value)
	{
		___targetCanvas_8 = value;
		Il2CppCodeGenWriteBarrier(&___targetCanvas_8, value);
	}

	inline static int32_t get_offset_of_raycastResults_9() { return static_cast<int32_t>(offsetof(GvrPointerGraphicRaycaster_t1071039080, ___raycastResults_9)); }
	inline List_1_t2204984990 * get_raycastResults_9() const { return ___raycastResults_9; }
	inline List_1_t2204984990 ** get_address_of_raycastResults_9() { return &___raycastResults_9; }
	inline void set_raycastResults_9(List_1_t2204984990 * value)
	{
		___raycastResults_9 = value;
		Il2CppCodeGenWriteBarrier(&___raycastResults_9, value);
	}

	inline static int32_t get_offset_of_cachedPointerEventCamera_10() { return static_cast<int32_t>(offsetof(GvrPointerGraphicRaycaster_t1071039080, ___cachedPointerEventCamera_10)); }
	inline Camera_t2727095145 * get_cachedPointerEventCamera_10() const { return ___cachedPointerEventCamera_10; }
	inline Camera_t2727095145 ** get_address_of_cachedPointerEventCamera_10() { return &___cachedPointerEventCamera_10; }
	inline void set_cachedPointerEventCamera_10(Camera_t2727095145 * value)
	{
		___cachedPointerEventCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&___cachedPointerEventCamera_10, value);
	}
};

struct GvrPointerGraphicRaycaster_t1071039080_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> GvrPointerGraphicRaycaster::sortedGraphics
	List_1_t2204984990 * ___sortedGraphics_11;
	// System.Comparison`1<UnityEngine.UI.Graphic> GvrPointerGraphicRaycaster::<>f__am$cache7
	Comparison_1_t3848127921 * ___U3CU3Ef__amU24cache7_12;

public:
	inline static int32_t get_offset_of_sortedGraphics_11() { return static_cast<int32_t>(offsetof(GvrPointerGraphicRaycaster_t1071039080_StaticFields, ___sortedGraphics_11)); }
	inline List_1_t2204984990 * get_sortedGraphics_11() const { return ___sortedGraphics_11; }
	inline List_1_t2204984990 ** get_address_of_sortedGraphics_11() { return &___sortedGraphics_11; }
	inline void set_sortedGraphics_11(List_1_t2204984990 * value)
	{
		___sortedGraphics_11 = value;
		Il2CppCodeGenWriteBarrier(&___sortedGraphics_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_12() { return static_cast<int32_t>(offsetof(GvrPointerGraphicRaycaster_t1071039080_StaticFields, ___U3CU3Ef__amU24cache7_12)); }
	inline Comparison_1_t3848127921 * get_U3CU3Ef__amU24cache7_12() const { return ___U3CU3Ef__amU24cache7_12; }
	inline Comparison_1_t3848127921 ** get_address_of_U3CU3Ef__amU24cache7_12() { return &___U3CU3Ef__amU24cache7_12; }
	inline void set_U3CU3Ef__amU24cache7_12(Comparison_1_t3848127921 * value)
	{
		___U3CU3Ef__amU24cache7_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
