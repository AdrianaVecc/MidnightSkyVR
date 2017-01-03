#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StereoController
struct StereoController_t1637909972;
// StereoRenderEffect
struct StereoRenderEffect_t4012593919;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye643876407.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrEye
struct  GvrEye_t2145111534  : public MonoBehaviour_t667441552
{
public:
	// GvrViewer/Eye GvrEye::eye
	int32_t ___eye_2;
	// UnityEngine.LayerMask GvrEye::toggleCullingMask
	LayerMask_t3236759763  ___toggleCullingMask_3;
	// StereoController GvrEye::controller
	StereoController_t1637909972 * ___controller_4;
	// StereoRenderEffect GvrEye::stereoEffect
	StereoRenderEffect_t4012593919 * ___stereoEffect_5;
	// UnityEngine.Camera GvrEye::monoCamera
	Camera_t2727095145 * ___monoCamera_6;
	// UnityEngine.Matrix4x4 GvrEye::realProj
	Matrix4x4_t1651859333  ___realProj_7;
	// System.Single GvrEye::interpPosition
	float ___interpPosition_8;
	// UnityEngine.Camera GvrEye::<cam>k__BackingField
	Camera_t2727095145 * ___U3CcamU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_eye_2() { return static_cast<int32_t>(offsetof(GvrEye_t2145111534, ___eye_2)); }
	inline int32_t get_eye_2() const { return ___eye_2; }
	inline int32_t* get_address_of_eye_2() { return &___eye_2; }
	inline void set_eye_2(int32_t value)
	{
		___eye_2 = value;
	}

	inline static int32_t get_offset_of_toggleCullingMask_3() { return static_cast<int32_t>(offsetof(GvrEye_t2145111534, ___toggleCullingMask_3)); }
	inline LayerMask_t3236759763  get_toggleCullingMask_3() const { return ___toggleCullingMask_3; }
	inline LayerMask_t3236759763 * get_address_of_toggleCullingMask_3() { return &___toggleCullingMask_3; }
	inline void set_toggleCullingMask_3(LayerMask_t3236759763  value)
	{
		___toggleCullingMask_3 = value;
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(GvrEye_t2145111534, ___controller_4)); }
	inline StereoController_t1637909972 * get_controller_4() const { return ___controller_4; }
	inline StereoController_t1637909972 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(StereoController_t1637909972 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}

	inline static int32_t get_offset_of_stereoEffect_5() { return static_cast<int32_t>(offsetof(GvrEye_t2145111534, ___stereoEffect_5)); }
	inline StereoRenderEffect_t4012593919 * get_stereoEffect_5() const { return ___stereoEffect_5; }
	inline StereoRenderEffect_t4012593919 ** get_address_of_stereoEffect_5() { return &___stereoEffect_5; }
	inline void set_stereoEffect_5(StereoRenderEffect_t4012593919 * value)
	{
		___stereoEffect_5 = value;
		Il2CppCodeGenWriteBarrier(&___stereoEffect_5, value);
	}

	inline static int32_t get_offset_of_monoCamera_6() { return static_cast<int32_t>(offsetof(GvrEye_t2145111534, ___monoCamera_6)); }
	inline Camera_t2727095145 * get_monoCamera_6() const { return ___monoCamera_6; }
	inline Camera_t2727095145 ** get_address_of_monoCamera_6() { return &___monoCamera_6; }
	inline void set_monoCamera_6(Camera_t2727095145 * value)
	{
		___monoCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___monoCamera_6, value);
	}

	inline static int32_t get_offset_of_realProj_7() { return static_cast<int32_t>(offsetof(GvrEye_t2145111534, ___realProj_7)); }
	inline Matrix4x4_t1651859333  get_realProj_7() const { return ___realProj_7; }
	inline Matrix4x4_t1651859333 * get_address_of_realProj_7() { return &___realProj_7; }
	inline void set_realProj_7(Matrix4x4_t1651859333  value)
	{
		___realProj_7 = value;
	}

	inline static int32_t get_offset_of_interpPosition_8() { return static_cast<int32_t>(offsetof(GvrEye_t2145111534, ___interpPosition_8)); }
	inline float get_interpPosition_8() const { return ___interpPosition_8; }
	inline float* get_address_of_interpPosition_8() { return &___interpPosition_8; }
	inline void set_interpPosition_8(float value)
	{
		___interpPosition_8 = value;
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GvrEye_t2145111534, ___U3CcamU3Ek__BackingField_9)); }
	inline Camera_t2727095145 * get_U3CcamU3Ek__BackingField_9() const { return ___U3CcamU3Ek__BackingField_9; }
	inline Camera_t2727095145 ** get_address_of_U3CcamU3Ek__BackingField_9() { return &___U3CcamU3Ek__BackingField_9; }
	inline void set_U3CcamU3Ek__BackingField_9(Camera_t2727095145 * value)
	{
		___U3CcamU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
