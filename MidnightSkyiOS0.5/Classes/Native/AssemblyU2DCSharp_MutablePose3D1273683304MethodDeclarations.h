#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MutablePose3D
struct MutablePose3D_t1273683304;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

// System.Void MutablePose3D::.ctor()
extern "C"  void MutablePose3D__ctor_m109975811 (MutablePose3D_t1273683304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void MutablePose3D_Set_m735260187 (MutablePose3D_t1273683304 * __this, Vector3_t4282066566  ___position0, Quaternion_t1553702882  ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
extern "C"  void MutablePose3D_Set_m1451198039 (MutablePose3D_t1273683304 * __this, Matrix4x4_t1651859333  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
extern "C"  void MutablePose3D_SetRightHanded_m1198386545 (MutablePose3D_t1273683304 * __this, Matrix4x4_t1651859333  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
