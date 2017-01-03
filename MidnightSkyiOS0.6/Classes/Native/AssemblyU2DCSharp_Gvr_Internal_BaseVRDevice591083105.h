#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Gvr.Internal.BaseVRDevice
struct BaseVRDevice_t591083105;
// MutablePose3D
struct MutablePose3D_t1273683304;
// GvrProfile
struct GvrProfile_t2868291302;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.BaseVRDevice
struct  BaseVRDevice_t591083105  : public Il2CppObject
{
public:
	// MutablePose3D Gvr.Internal.BaseVRDevice::headPose
	MutablePose3D_t1273683304 * ___headPose_1;
	// MutablePose3D Gvr.Internal.BaseVRDevice::leftEyePose
	MutablePose3D_t1273683304 * ___leftEyePose_2;
	// MutablePose3D Gvr.Internal.BaseVRDevice::rightEyePose
	MutablePose3D_t1273683304 * ___rightEyePose_3;
	// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::leftEyeDistortedProjection
	Matrix4x4_t1651859333  ___leftEyeDistortedProjection_4;
	// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::rightEyeDistortedProjection
	Matrix4x4_t1651859333  ___rightEyeDistortedProjection_5;
	// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::leftEyeUndistortedProjection
	Matrix4x4_t1651859333  ___leftEyeUndistortedProjection_6;
	// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::rightEyeUndistortedProjection
	Matrix4x4_t1651859333  ___rightEyeUndistortedProjection_7;
	// UnityEngine.Rect Gvr.Internal.BaseVRDevice::leftEyeDistortedViewport
	Rect_t4241904616  ___leftEyeDistortedViewport_8;
	// UnityEngine.Rect Gvr.Internal.BaseVRDevice::rightEyeDistortedViewport
	Rect_t4241904616  ___rightEyeDistortedViewport_9;
	// UnityEngine.Rect Gvr.Internal.BaseVRDevice::leftEyeUndistortedViewport
	Rect_t4241904616  ___leftEyeUndistortedViewport_10;
	// UnityEngine.Rect Gvr.Internal.BaseVRDevice::rightEyeUndistortedViewport
	Rect_t4241904616  ___rightEyeUndistortedViewport_11;
	// UnityEngine.Vector2 Gvr.Internal.BaseVRDevice::recommendedTextureSize
	Vector2_t4282066565  ___recommendedTextureSize_12;
	// System.Int32 Gvr.Internal.BaseVRDevice::leftEyeOrientation
	int32_t ___leftEyeOrientation_13;
	// System.Int32 Gvr.Internal.BaseVRDevice::rightEyeOrientation
	int32_t ___rightEyeOrientation_14;
	// System.Boolean Gvr.Internal.BaseVRDevice::tilted
	bool ___tilted_15;
	// System.Boolean Gvr.Internal.BaseVRDevice::profileChanged
	bool ___profileChanged_16;
	// System.Boolean Gvr.Internal.BaseVRDevice::backButtonPressed
	bool ___backButtonPressed_17;
	// GvrProfile Gvr.Internal.BaseVRDevice::<Profile>k__BackingField
	GvrProfile_t2868291302 * ___U3CProfileU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_headPose_1() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___headPose_1)); }
	inline MutablePose3D_t1273683304 * get_headPose_1() const { return ___headPose_1; }
	inline MutablePose3D_t1273683304 ** get_address_of_headPose_1() { return &___headPose_1; }
	inline void set_headPose_1(MutablePose3D_t1273683304 * value)
	{
		___headPose_1 = value;
		Il2CppCodeGenWriteBarrier(&___headPose_1, value);
	}

	inline static int32_t get_offset_of_leftEyePose_2() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___leftEyePose_2)); }
	inline MutablePose3D_t1273683304 * get_leftEyePose_2() const { return ___leftEyePose_2; }
	inline MutablePose3D_t1273683304 ** get_address_of_leftEyePose_2() { return &___leftEyePose_2; }
	inline void set_leftEyePose_2(MutablePose3D_t1273683304 * value)
	{
		___leftEyePose_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftEyePose_2, value);
	}

	inline static int32_t get_offset_of_rightEyePose_3() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___rightEyePose_3)); }
	inline MutablePose3D_t1273683304 * get_rightEyePose_3() const { return ___rightEyePose_3; }
	inline MutablePose3D_t1273683304 ** get_address_of_rightEyePose_3() { return &___rightEyePose_3; }
	inline void set_rightEyePose_3(MutablePose3D_t1273683304 * value)
	{
		___rightEyePose_3 = value;
		Il2CppCodeGenWriteBarrier(&___rightEyePose_3, value);
	}

	inline static int32_t get_offset_of_leftEyeDistortedProjection_4() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___leftEyeDistortedProjection_4)); }
	inline Matrix4x4_t1651859333  get_leftEyeDistortedProjection_4() const { return ___leftEyeDistortedProjection_4; }
	inline Matrix4x4_t1651859333 * get_address_of_leftEyeDistortedProjection_4() { return &___leftEyeDistortedProjection_4; }
	inline void set_leftEyeDistortedProjection_4(Matrix4x4_t1651859333  value)
	{
		___leftEyeDistortedProjection_4 = value;
	}

	inline static int32_t get_offset_of_rightEyeDistortedProjection_5() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___rightEyeDistortedProjection_5)); }
	inline Matrix4x4_t1651859333  get_rightEyeDistortedProjection_5() const { return ___rightEyeDistortedProjection_5; }
	inline Matrix4x4_t1651859333 * get_address_of_rightEyeDistortedProjection_5() { return &___rightEyeDistortedProjection_5; }
	inline void set_rightEyeDistortedProjection_5(Matrix4x4_t1651859333  value)
	{
		___rightEyeDistortedProjection_5 = value;
	}

	inline static int32_t get_offset_of_leftEyeUndistortedProjection_6() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___leftEyeUndistortedProjection_6)); }
	inline Matrix4x4_t1651859333  get_leftEyeUndistortedProjection_6() const { return ___leftEyeUndistortedProjection_6; }
	inline Matrix4x4_t1651859333 * get_address_of_leftEyeUndistortedProjection_6() { return &___leftEyeUndistortedProjection_6; }
	inline void set_leftEyeUndistortedProjection_6(Matrix4x4_t1651859333  value)
	{
		___leftEyeUndistortedProjection_6 = value;
	}

	inline static int32_t get_offset_of_rightEyeUndistortedProjection_7() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___rightEyeUndistortedProjection_7)); }
	inline Matrix4x4_t1651859333  get_rightEyeUndistortedProjection_7() const { return ___rightEyeUndistortedProjection_7; }
	inline Matrix4x4_t1651859333 * get_address_of_rightEyeUndistortedProjection_7() { return &___rightEyeUndistortedProjection_7; }
	inline void set_rightEyeUndistortedProjection_7(Matrix4x4_t1651859333  value)
	{
		___rightEyeUndistortedProjection_7 = value;
	}

	inline static int32_t get_offset_of_leftEyeDistortedViewport_8() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___leftEyeDistortedViewport_8)); }
	inline Rect_t4241904616  get_leftEyeDistortedViewport_8() const { return ___leftEyeDistortedViewport_8; }
	inline Rect_t4241904616 * get_address_of_leftEyeDistortedViewport_8() { return &___leftEyeDistortedViewport_8; }
	inline void set_leftEyeDistortedViewport_8(Rect_t4241904616  value)
	{
		___leftEyeDistortedViewport_8 = value;
	}

	inline static int32_t get_offset_of_rightEyeDistortedViewport_9() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___rightEyeDistortedViewport_9)); }
	inline Rect_t4241904616  get_rightEyeDistortedViewport_9() const { return ___rightEyeDistortedViewport_9; }
	inline Rect_t4241904616 * get_address_of_rightEyeDistortedViewport_9() { return &___rightEyeDistortedViewport_9; }
	inline void set_rightEyeDistortedViewport_9(Rect_t4241904616  value)
	{
		___rightEyeDistortedViewport_9 = value;
	}

	inline static int32_t get_offset_of_leftEyeUndistortedViewport_10() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___leftEyeUndistortedViewport_10)); }
	inline Rect_t4241904616  get_leftEyeUndistortedViewport_10() const { return ___leftEyeUndistortedViewport_10; }
	inline Rect_t4241904616 * get_address_of_leftEyeUndistortedViewport_10() { return &___leftEyeUndistortedViewport_10; }
	inline void set_leftEyeUndistortedViewport_10(Rect_t4241904616  value)
	{
		___leftEyeUndistortedViewport_10 = value;
	}

	inline static int32_t get_offset_of_rightEyeUndistortedViewport_11() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___rightEyeUndistortedViewport_11)); }
	inline Rect_t4241904616  get_rightEyeUndistortedViewport_11() const { return ___rightEyeUndistortedViewport_11; }
	inline Rect_t4241904616 * get_address_of_rightEyeUndistortedViewport_11() { return &___rightEyeUndistortedViewport_11; }
	inline void set_rightEyeUndistortedViewport_11(Rect_t4241904616  value)
	{
		___rightEyeUndistortedViewport_11 = value;
	}

	inline static int32_t get_offset_of_recommendedTextureSize_12() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___recommendedTextureSize_12)); }
	inline Vector2_t4282066565  get_recommendedTextureSize_12() const { return ___recommendedTextureSize_12; }
	inline Vector2_t4282066565 * get_address_of_recommendedTextureSize_12() { return &___recommendedTextureSize_12; }
	inline void set_recommendedTextureSize_12(Vector2_t4282066565  value)
	{
		___recommendedTextureSize_12 = value;
	}

	inline static int32_t get_offset_of_leftEyeOrientation_13() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___leftEyeOrientation_13)); }
	inline int32_t get_leftEyeOrientation_13() const { return ___leftEyeOrientation_13; }
	inline int32_t* get_address_of_leftEyeOrientation_13() { return &___leftEyeOrientation_13; }
	inline void set_leftEyeOrientation_13(int32_t value)
	{
		___leftEyeOrientation_13 = value;
	}

	inline static int32_t get_offset_of_rightEyeOrientation_14() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___rightEyeOrientation_14)); }
	inline int32_t get_rightEyeOrientation_14() const { return ___rightEyeOrientation_14; }
	inline int32_t* get_address_of_rightEyeOrientation_14() { return &___rightEyeOrientation_14; }
	inline void set_rightEyeOrientation_14(int32_t value)
	{
		___rightEyeOrientation_14 = value;
	}

	inline static int32_t get_offset_of_tilted_15() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___tilted_15)); }
	inline bool get_tilted_15() const { return ___tilted_15; }
	inline bool* get_address_of_tilted_15() { return &___tilted_15; }
	inline void set_tilted_15(bool value)
	{
		___tilted_15 = value;
	}

	inline static int32_t get_offset_of_profileChanged_16() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___profileChanged_16)); }
	inline bool get_profileChanged_16() const { return ___profileChanged_16; }
	inline bool* get_address_of_profileChanged_16() { return &___profileChanged_16; }
	inline void set_profileChanged_16(bool value)
	{
		___profileChanged_16 = value;
	}

	inline static int32_t get_offset_of_backButtonPressed_17() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___backButtonPressed_17)); }
	inline bool get_backButtonPressed_17() const { return ___backButtonPressed_17; }
	inline bool* get_address_of_backButtonPressed_17() { return &___backButtonPressed_17; }
	inline void set_backButtonPressed_17(bool value)
	{
		___backButtonPressed_17 = value;
	}

	inline static int32_t get_offset_of_U3CProfileU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105, ___U3CProfileU3Ek__BackingField_18)); }
	inline GvrProfile_t2868291302 * get_U3CProfileU3Ek__BackingField_18() const { return ___U3CProfileU3Ek__BackingField_18; }
	inline GvrProfile_t2868291302 ** get_address_of_U3CProfileU3Ek__BackingField_18() { return &___U3CProfileU3Ek__BackingField_18; }
	inline void set_U3CProfileU3Ek__BackingField_18(GvrProfile_t2868291302 * value)
	{
		___U3CProfileU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CProfileU3Ek__BackingField_18, value);
	}
};

struct BaseVRDevice_t591083105_StaticFields
{
public:
	// Gvr.Internal.BaseVRDevice Gvr.Internal.BaseVRDevice::device
	BaseVRDevice_t591083105 * ___device_0;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(BaseVRDevice_t591083105_StaticFields, ___device_0)); }
	inline BaseVRDevice_t591083105 * get_device_0() const { return ___device_0; }
	inline BaseVRDevice_t591083105 ** get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(BaseVRDevice_t591083105 * value)
	{
		___device_0 = value;
		Il2CppCodeGenWriteBarrier(&___device_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
