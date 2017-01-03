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

// Pose3D
struct Pose3D_t2396367586;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

// System.Void Pose3D::.ctor()
extern "C"  void Pose3D__ctor_m184997881 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Pose3D__ctor_m2222637201 (Pose3D_t2396367586 * __this, Vector3_t4282066566  ___position0, Quaternion_t1553702882  ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Matrix4x4)
extern "C"  void Pose3D__ctor_m3211564577 (Pose3D_t2396367586 * __this, Matrix4x4_t1651859333  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.cctor()
extern "C"  void Pose3D__cctor_m957870804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pose3D::get_Position()
extern "C"  Vector3_t4282066566  Pose3D_get_Position_m3008028055 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Position(UnityEngine.Vector3)
extern "C"  void Pose3D_set_Position_m868383016 (Pose3D_t2396367586 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Pose3D::get_Orientation()
extern "C"  Quaternion_t1553702882  Pose3D_get_Orientation_m114671670 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Orientation(UnityEngine.Quaternion)
extern "C"  void Pose3D_set_Orientation_m1189478037 (Pose3D_t2396367586 * __this, Quaternion_t1553702882  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_Matrix()
extern "C"  Matrix4x4_t1651859333  Pose3D_get_Matrix_m490356496 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Matrix(UnityEngine.Matrix4x4)
extern "C"  void Pose3D_set_Matrix_m2538359473 (Pose3D_t2396367586 * __this, Matrix4x4_t1651859333  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_RightHandedMatrix()
extern "C"  Matrix4x4_t1651859333  Pose3D_get_RightHandedMatrix_m3929304542 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Pose3D_Set_m1511997201 (Pose3D_t2396367586 * __this, Vector3_t4282066566  ___position0, Quaternion_t1553702882  ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Matrix4x4)
extern "C"  void Pose3D_Set_m27658145 (Pose3D_t2396367586 * __this, Matrix4x4_t1651859333  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
