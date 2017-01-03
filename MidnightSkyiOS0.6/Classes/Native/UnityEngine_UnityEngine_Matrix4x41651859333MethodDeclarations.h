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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.Matrix4x4
struct Matrix4x4_t1651859333;
struct Matrix4x4_t1651859333_marshaled_pinvoke;
struct Matrix4x4_t1651859333_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m2279862332 (Matrix4x4_t1651859333 * __this, int32_t ___row0, int32_t ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m2343951137 (Matrix4x4_t1651859333 * __this, int32_t ___row0, int32_t ___column1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m1280478331 (Matrix4x4_t1651859333 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m3979676448 (Matrix4x4_t1651859333 * __this, int32_t ___index0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C"  int32_t Matrix4x4_GetHashCode_m4083477721 (Matrix4x4_t1651859333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C"  bool Matrix4x4_Equals_m3534208385 (Matrix4x4_t1651859333 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t1651859333  Matrix4x4_Inverse_m1483646919 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1651859333  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_Inverse_m362567117 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1651859333 * ___m0, Matrix4x4_t1651859333 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C"  Matrix4x4_t1651859333  Matrix4x4_get_inverse_m2596073482 (Matrix4x4_t1651859333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t4282066567  Matrix4x4_GetColumn_m786071102 (Matrix4x4_t1651859333 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  Matrix4x4_MultiplyPoint3x4_m2198174902 (Matrix4x4_t1651859333 * __this, Vector3_t4282066566  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern "C"  Matrix4x4_t1651859333  Matrix4x4_Scale_m3563471884 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern "C"  Matrix4x4_t1651859333  Matrix4x4_get_zero_m1808471152 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t1651859333  Matrix4x4_get_identity_m3946683782 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Matrix4x4_t1651859333  Matrix4x4_TRS_m3596398659 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___pos0, Quaternion_t1553702882  ___q1, Vector3_t4282066566  ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_TRS_m1769439979 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___pos0, Quaternion_t1553702882 * ___q1, Vector3_t4282066566 * ___s2, Matrix4x4_t1651859333 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m294134723 (Matrix4x4_t1651859333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t1651859333  Matrix4x4_op_Multiply_m4108203689 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1651859333  ___lhs0, Matrix4x4_t1651859333  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Matrix4x4_t1651859333;
struct Matrix4x4_t1651859333_marshaled_pinvoke;

extern "C" void Matrix4x4_t1651859333_marshal_pinvoke(const Matrix4x4_t1651859333& unmarshaled, Matrix4x4_t1651859333_marshaled_pinvoke& marshaled);
extern "C" void Matrix4x4_t1651859333_marshal_pinvoke_back(const Matrix4x4_t1651859333_marshaled_pinvoke& marshaled, Matrix4x4_t1651859333& unmarshaled);
extern "C" void Matrix4x4_t1651859333_marshal_pinvoke_cleanup(Matrix4x4_t1651859333_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Matrix4x4_t1651859333;
struct Matrix4x4_t1651859333_marshaled_com;

extern "C" void Matrix4x4_t1651859333_marshal_com(const Matrix4x4_t1651859333& unmarshaled, Matrix4x4_t1651859333_marshaled_com& marshaled);
extern "C" void Matrix4x4_t1651859333_marshal_com_back(const Matrix4x4_t1651859333_marshaled_com& marshaled, Matrix4x4_t1651859333& unmarshaled);
extern "C" void Matrix4x4_t1651859333_marshal_com_cleanup(Matrix4x4_t1651859333_marshaled_com& marshaled);
