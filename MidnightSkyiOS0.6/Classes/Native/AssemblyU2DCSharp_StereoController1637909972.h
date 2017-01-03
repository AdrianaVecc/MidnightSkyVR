#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// GvrEye[]
struct GvrEyeU5BU5D_t2613429915;
// GvrHead
struct GvrHead_t2074018243;
// UnityEngine.Camera
struct Camera_t2727095145;
// System.Func`2<GvrEye,GvrHead>
struct Func_2_t3887506626;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StereoController
struct  StereoController_t1637909972  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean StereoController::directRender
	bool ___directRender_2;
	// System.Boolean StereoController::keepStereoUpdated
	bool ___keepStereoUpdated_3;
	// System.Single StereoController::stereoMultiplier
	float ___stereoMultiplier_4;
	// System.Single StereoController::matchMonoFOV
	float ___matchMonoFOV_5;
	// System.Single StereoController::matchByZoom
	float ___matchByZoom_6;
	// UnityEngine.Transform StereoController::centerOfInterest
	Transform_t1659122786 * ___centerOfInterest_7;
	// System.Single StereoController::radiusOfInterest
	float ___radiusOfInterest_8;
	// System.Boolean StereoController::checkStereoComfort
	bool ___checkStereoComfort_9;
	// System.Single StereoController::stereoAdjustSmoothing
	float ___stereoAdjustSmoothing_10;
	// System.Single StereoController::screenParallax
	float ___screenParallax_11;
	// System.Single StereoController::stereoPaddingX
	float ___stereoPaddingX_12;
	// System.Single StereoController::stereoPaddingY
	float ___stereoPaddingY_13;
	// System.Boolean StereoController::renderedStereo
	bool ___renderedStereo_14;
	// GvrEye[] StereoController::eyes
	GvrEyeU5BU5D_t2613429915* ___eyes_15;
	// GvrHead StereoController::head
	GvrHead_t2074018243 * ___head_16;
	// UnityEngine.Camera StereoController::<cam>k__BackingField
	Camera_t2727095145 * ___U3CcamU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_directRender_2() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___directRender_2)); }
	inline bool get_directRender_2() const { return ___directRender_2; }
	inline bool* get_address_of_directRender_2() { return &___directRender_2; }
	inline void set_directRender_2(bool value)
	{
		___directRender_2 = value;
	}

	inline static int32_t get_offset_of_keepStereoUpdated_3() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___keepStereoUpdated_3)); }
	inline bool get_keepStereoUpdated_3() const { return ___keepStereoUpdated_3; }
	inline bool* get_address_of_keepStereoUpdated_3() { return &___keepStereoUpdated_3; }
	inline void set_keepStereoUpdated_3(bool value)
	{
		___keepStereoUpdated_3 = value;
	}

	inline static int32_t get_offset_of_stereoMultiplier_4() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___stereoMultiplier_4)); }
	inline float get_stereoMultiplier_4() const { return ___stereoMultiplier_4; }
	inline float* get_address_of_stereoMultiplier_4() { return &___stereoMultiplier_4; }
	inline void set_stereoMultiplier_4(float value)
	{
		___stereoMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_matchMonoFOV_5() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___matchMonoFOV_5)); }
	inline float get_matchMonoFOV_5() const { return ___matchMonoFOV_5; }
	inline float* get_address_of_matchMonoFOV_5() { return &___matchMonoFOV_5; }
	inline void set_matchMonoFOV_5(float value)
	{
		___matchMonoFOV_5 = value;
	}

	inline static int32_t get_offset_of_matchByZoom_6() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___matchByZoom_6)); }
	inline float get_matchByZoom_6() const { return ___matchByZoom_6; }
	inline float* get_address_of_matchByZoom_6() { return &___matchByZoom_6; }
	inline void set_matchByZoom_6(float value)
	{
		___matchByZoom_6 = value;
	}

	inline static int32_t get_offset_of_centerOfInterest_7() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___centerOfInterest_7)); }
	inline Transform_t1659122786 * get_centerOfInterest_7() const { return ___centerOfInterest_7; }
	inline Transform_t1659122786 ** get_address_of_centerOfInterest_7() { return &___centerOfInterest_7; }
	inline void set_centerOfInterest_7(Transform_t1659122786 * value)
	{
		___centerOfInterest_7 = value;
		Il2CppCodeGenWriteBarrier(&___centerOfInterest_7, value);
	}

	inline static int32_t get_offset_of_radiusOfInterest_8() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___radiusOfInterest_8)); }
	inline float get_radiusOfInterest_8() const { return ___radiusOfInterest_8; }
	inline float* get_address_of_radiusOfInterest_8() { return &___radiusOfInterest_8; }
	inline void set_radiusOfInterest_8(float value)
	{
		___radiusOfInterest_8 = value;
	}

	inline static int32_t get_offset_of_checkStereoComfort_9() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___checkStereoComfort_9)); }
	inline bool get_checkStereoComfort_9() const { return ___checkStereoComfort_9; }
	inline bool* get_address_of_checkStereoComfort_9() { return &___checkStereoComfort_9; }
	inline void set_checkStereoComfort_9(bool value)
	{
		___checkStereoComfort_9 = value;
	}

	inline static int32_t get_offset_of_stereoAdjustSmoothing_10() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___stereoAdjustSmoothing_10)); }
	inline float get_stereoAdjustSmoothing_10() const { return ___stereoAdjustSmoothing_10; }
	inline float* get_address_of_stereoAdjustSmoothing_10() { return &___stereoAdjustSmoothing_10; }
	inline void set_stereoAdjustSmoothing_10(float value)
	{
		___stereoAdjustSmoothing_10 = value;
	}

	inline static int32_t get_offset_of_screenParallax_11() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___screenParallax_11)); }
	inline float get_screenParallax_11() const { return ___screenParallax_11; }
	inline float* get_address_of_screenParallax_11() { return &___screenParallax_11; }
	inline void set_screenParallax_11(float value)
	{
		___screenParallax_11 = value;
	}

	inline static int32_t get_offset_of_stereoPaddingX_12() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___stereoPaddingX_12)); }
	inline float get_stereoPaddingX_12() const { return ___stereoPaddingX_12; }
	inline float* get_address_of_stereoPaddingX_12() { return &___stereoPaddingX_12; }
	inline void set_stereoPaddingX_12(float value)
	{
		___stereoPaddingX_12 = value;
	}

	inline static int32_t get_offset_of_stereoPaddingY_13() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___stereoPaddingY_13)); }
	inline float get_stereoPaddingY_13() const { return ___stereoPaddingY_13; }
	inline float* get_address_of_stereoPaddingY_13() { return &___stereoPaddingY_13; }
	inline void set_stereoPaddingY_13(float value)
	{
		___stereoPaddingY_13 = value;
	}

	inline static int32_t get_offset_of_renderedStereo_14() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___renderedStereo_14)); }
	inline bool get_renderedStereo_14() const { return ___renderedStereo_14; }
	inline bool* get_address_of_renderedStereo_14() { return &___renderedStereo_14; }
	inline void set_renderedStereo_14(bool value)
	{
		___renderedStereo_14 = value;
	}

	inline static int32_t get_offset_of_eyes_15() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___eyes_15)); }
	inline GvrEyeU5BU5D_t2613429915* get_eyes_15() const { return ___eyes_15; }
	inline GvrEyeU5BU5D_t2613429915** get_address_of_eyes_15() { return &___eyes_15; }
	inline void set_eyes_15(GvrEyeU5BU5D_t2613429915* value)
	{
		___eyes_15 = value;
		Il2CppCodeGenWriteBarrier(&___eyes_15, value);
	}

	inline static int32_t get_offset_of_head_16() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___head_16)); }
	inline GvrHead_t2074018243 * get_head_16() const { return ___head_16; }
	inline GvrHead_t2074018243 ** get_address_of_head_16() { return &___head_16; }
	inline void set_head_16(GvrHead_t2074018243 * value)
	{
		___head_16 = value;
		Il2CppCodeGenWriteBarrier(&___head_16, value);
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(StereoController_t1637909972, ___U3CcamU3Ek__BackingField_17)); }
	inline Camera_t2727095145 * get_U3CcamU3Ek__BackingField_17() const { return ___U3CcamU3Ek__BackingField_17; }
	inline Camera_t2727095145 ** get_address_of_U3CcamU3Ek__BackingField_17() { return &___U3CcamU3Ek__BackingField_17; }
	inline void set_U3CcamU3Ek__BackingField_17(Camera_t2727095145 * value)
	{
		___U3CcamU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_17, value);
	}
};

struct StereoController_t1637909972_StaticFields
{
public:
	// System.Func`2<GvrEye,GvrHead> StereoController::<>f__am$cache10
	Func_2_t3887506626 * ___U3CU3Ef__amU24cache10_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_18() { return static_cast<int32_t>(offsetof(StereoController_t1637909972_StaticFields, ___U3CU3Ef__amU24cache10_18)); }
	inline Func_2_t3887506626 * get_U3CU3Ef__amU24cache10_18() const { return ___U3CU3Ef__amU24cache10_18; }
	inline Func_2_t3887506626 ** get_address_of_U3CU3Ef__amU24cache10_18() { return &___U3CU3Ef__amU24cache10_18; }
	inline void set_U3CU3Ef__amU24cache10_18(Func_2_t3887506626 * value)
	{
		___U3CU3Ef__amU24cache10_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
