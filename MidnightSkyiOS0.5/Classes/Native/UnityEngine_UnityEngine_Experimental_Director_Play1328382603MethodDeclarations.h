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
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Playab70832698.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play1315979427.h"
#include "mscorlib_System_Object4170816371.h"

// System.Object UnityEngine.Experimental.Director.Playables::CastToInternal(System.Type,System.IntPtr,System.Int32)
extern "C"  Il2CppObject * Playables_CastToInternal_m3521890406 (Il2CppObject * __this /* static, unused */, Type_t * ___castType0, IntPtr_t ___handle1, int32_t ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::InternalDestroy(UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playables_InternalDestroy_m3949572482 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::INTERNAL_CALL_InternalDestroy(UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playables_INTERNAL_CALL_InternalDestroy_m1453669761 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::ConnectInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.Playable&,System.Int32,System.Int32)
extern "C"  bool Playables_ConnectInternal_m267734425 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___source0, Playable_t70832698 * ___target1, int32_t ___sourceOutputPort2, int32_t ___targetInputPort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::INTERNAL_CALL_ConnectInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.Playable&,System.Int32,System.Int32)
extern "C"  bool Playables_INTERNAL_CALL_ConnectInternal_m524648664 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___source0, Playable_t70832698 * ___target1, int32_t ___sourceOutputPort2, int32_t ___targetInputPort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::DisconnectInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  void Playables_DisconnectInternal_m4214943703 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___target0, int32_t ___inputPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::INTERNAL_CALL_DisconnectInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  void Playables_INTERNAL_CALL_DisconnectInternal_m624205270 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___target0, int32_t ___inputPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::CheckInputBounds(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  bool Playables_CheckInputBounds_m2114632179 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, int32_t ___inputIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::IsValid(UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playables_IsValid_m2470091365 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playables::GetInputCountValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t Playables_GetInputCountValidated_m1590651641 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playables::GetOutputCountValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t Playables_GetOutputCountValidated_m708466518 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playables::GetPlayStateValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t Playables_GetPlayStateValidated_m1788069712 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetPlayStateValidated(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.PlayState,System.Type)
extern "C"  void Playables_SetPlayStateValidated_m2009824181 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, int32_t ___playState1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playables::GetTimeValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  double Playables_GetTimeValidated_m2484996622 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetTimeValidated(UnityEngine.Experimental.Director.Playable,System.Double,System.Type)
extern "C"  void Playables_SetTimeValidated_m778916929 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, double ___time1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playables::GetDurationValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  double Playables_GetDurationValidated_m2822701863 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetDurationValidated(UnityEngine.Experimental.Director.Playable,System.Double,System.Type)
extern "C"  void Playables_SetDurationValidated_m2881460762 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, double ___duration1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playables::GetInputValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  Playable_t70832698  Playables_GetInputValidated_m176010709 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, int32_t ___inputPort1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playables::GetOutputValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  Playable_t70832698  Playables_GetOutputValidated_m70115406 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, int32_t ___outputPort1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetInputWeightValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Single,System.Type)
extern "C"  void Playables_SetInputWeightValidated_m799805684 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, int32_t ___inputIndex1, float ___weight2, Type_t * ___typeofPlayable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playables::GetInputWeightValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  float Playables_GetInputWeightValidated_m870617231 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___playable0, int32_t ___index1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::Equals(UnityEngine.Experimental.Director.Playable,System.Object)
extern "C"  bool Playables_Equals_m2773836346 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___isAPlayable0, Il2CppObject * ___mightBeAnythingOrNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
