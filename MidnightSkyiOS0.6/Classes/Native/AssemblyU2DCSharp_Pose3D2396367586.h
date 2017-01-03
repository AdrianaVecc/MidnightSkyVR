#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pose3D
struct  Pose3D_t2396367586  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 Pose3D::<Position>k__BackingField
	Vector3_t4282066566  ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion Pose3D::<Orientation>k__BackingField
	Quaternion_t1553702882  ___U3COrientationU3Ek__BackingField_2;
	// UnityEngine.Matrix4x4 Pose3D::<Matrix>k__BackingField
	Matrix4x4_t1651859333  ___U3CMatrixU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Pose3D_t2396367586, ___U3CPositionU3Ek__BackingField_1)); }
	inline Vector3_t4282066566  get_U3CPositionU3Ek__BackingField_1() const { return ___U3CPositionU3Ek__BackingField_1; }
	inline Vector3_t4282066566 * get_address_of_U3CPositionU3Ek__BackingField_1() { return &___U3CPositionU3Ek__BackingField_1; }
	inline void set_U3CPositionU3Ek__BackingField_1(Vector3_t4282066566  value)
	{
		___U3CPositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COrientationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Pose3D_t2396367586, ___U3COrientationU3Ek__BackingField_2)); }
	inline Quaternion_t1553702882  get_U3COrientationU3Ek__BackingField_2() const { return ___U3COrientationU3Ek__BackingField_2; }
	inline Quaternion_t1553702882 * get_address_of_U3COrientationU3Ek__BackingField_2() { return &___U3COrientationU3Ek__BackingField_2; }
	inline void set_U3COrientationU3Ek__BackingField_2(Quaternion_t1553702882  value)
	{
		___U3COrientationU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMatrixU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Pose3D_t2396367586, ___U3CMatrixU3Ek__BackingField_3)); }
	inline Matrix4x4_t1651859333  get_U3CMatrixU3Ek__BackingField_3() const { return ___U3CMatrixU3Ek__BackingField_3; }
	inline Matrix4x4_t1651859333 * get_address_of_U3CMatrixU3Ek__BackingField_3() { return &___U3CMatrixU3Ek__BackingField_3; }
	inline void set_U3CMatrixU3Ek__BackingField_3(Matrix4x4_t1651859333  value)
	{
		___U3CMatrixU3Ek__BackingField_3 = value;
	}
};

struct Pose3D_t2396367586_StaticFields
{
public:
	// UnityEngine.Matrix4x4 Pose3D::flipZ
	Matrix4x4_t1651859333  ___flipZ_0;

public:
	inline static int32_t get_offset_of_flipZ_0() { return static_cast<int32_t>(offsetof(Pose3D_t2396367586_StaticFields, ___flipZ_0)); }
	inline Matrix4x4_t1651859333  get_flipZ_0() const { return ___flipZ_0; }
	inline Matrix4x4_t1651859333 * get_address_of_flipZ_0() { return &___flipZ_0; }
	inline void set_flipZ_0(Matrix4x4_t1651859333  value)
	{
		___flipZ_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
