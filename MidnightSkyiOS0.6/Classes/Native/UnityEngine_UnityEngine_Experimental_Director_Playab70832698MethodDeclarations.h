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

// UnityEngine.Experimental.Director.Playable[]
struct PlayableU5BU5D_t910723999;
// System.Object
struct Il2CppObject;
// UnityEngine.Experimental.Director.Playable
struct Playable_t70832698;
struct Playable_t70832698_marshaled_pinvoke;
struct Playable_t70832698_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Playab70832698.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play1315979427.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void UnityEngine.Experimental.Director.Playable::Destroy()
extern "C"  void Playable_Destroy_m3991820443 (Playable_t70832698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::IsValid()
extern "C"  bool Playable_IsValid_m4190676077 (Playable_t70832698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::IsValidInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  bool Playable_IsValidInternal_m1664100387 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_IsValidInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  bool Playable_INTERNAL_CALL_IsValidInternal_m576585442 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C"  bool Playable_Connect_m1578187905 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___source0, Playable_t70832698  ___target1, int32_t ___sourceOutputPort2, int32_t ___targetInputPort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Disconnect(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  void Playable_Disconnect_m3811503323 (Il2CppObject * __this /* static, unused */, Playable_t70832698  ___target0, int32_t ___inputPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_inputCount()
extern "C"  int32_t Playable_get_inputCount_m3038792623 (Playable_t70832698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_outputCount()
extern "C"  int32_t Playable_get_outputCount_m2666149542 (Playable_t70832698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::get_state()
extern "C"  int32_t Playable_get_state_m3392280896 (Playable_t70832698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_state(UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_set_state_m2851443923 (Playable_t70832698 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::get_time()
extern "C"  double Playable_get_time_m4261299130 (Playable_t70832698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_time(System.Double)
extern "C"  void Playable_set_time_m4095539287 (Playable_t70832698 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::GetPlayStateInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_GetPlayStateInternal_m1502071519 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetPlayStateInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_INTERNAL_CALL_GetPlayStateInternal_m1885336768 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::SetPlayStateInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_SetPlayStateInternal_m1327718134 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___playState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_SetPlayStateInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_INTERNAL_CALL_SetPlayStateInternal_m387121047 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___playState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::GetTimeInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  double Playable_GetTimeInternal_m4145233711 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetTimeInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  double Playable_INTERNAL_CALL_GetTimeInternal_m2681702190 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::SetTimeInternal(UnityEngine.Experimental.Director.Playable&,System.Double)
extern "C"  void Playable_SetTimeInternal_m3597934204 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, double ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_SetTimeInternal(UnityEngine.Experimental.Director.Playable&,System.Double)
extern "C"  void Playable_INTERNAL_CALL_SetTimeInternal_m272098683 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, double ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::get_duration()
extern "C"  double Playable_get_duration_m4046926529 (Playable_t70832698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_duration(System.Double)
extern "C"  void Playable_set_duration_m164564272 (Playable_t70832698 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::GetDurationInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  double Playable_GetDurationInternal_m31704136 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetDurationInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  double Playable_INTERNAL_CALL_GetDurationInternal_m2671113415 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::SetDurationInternal(UnityEngine.Experimental.Director.Playable&,System.Double)
extern "C"  void Playable_SetDurationInternal_m1327518549 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, double ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_SetDurationInternal(UnityEngine.Experimental.Director.Playable&,System.Double)
extern "C"  void Playable_INTERNAL_CALL_SetDurationInternal_m3818554068 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, double ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetInputCountInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_GetInputCountInternal_m3587540212 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetInputCountInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_INTERNAL_CALL_GetInputCountInternal_m3535592179 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetOutputCountInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_GetOutputCountInternal_m3807774807 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetOutputCountInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_INTERNAL_CALL_GetOutputCountInternal_m2197385784 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetInputs()
extern "C"  PlayableU5BU5D_t910723999* Playable_GetInputs_m1899129588 (Playable_t70832698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetInput(System.Int32)
extern "C"  Playable_t70832698  Playable_GetInput_m777009268 (Playable_t70832698 * __this, int32_t ___inputPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetInputInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  Playable_t70832698  Playable_GetInputInternal_m3090485450 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetInputInternal(UnityEngine.Experimental.Director.Playable&,System.Int32,UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playable_INTERNAL_CALL_GetInputInternal_m4091069890 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___index1, Playable_t70832698 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetOutput(System.Int32)
extern "C"  Playable_t70832698  Playable_GetOutput_m1666786747 (Playable_t70832698 * __this, int32_t ___outputPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetOutputInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  Playable_t70832698  Playable_GetOutputInternal_m2061023377 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetOutputInternal(UnityEngine.Experimental.Director.Playable&,System.Int32,UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playable_INTERNAL_CALL_GetOutputInternal_m382403975 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___index1, Playable_t70832698 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::SetInputWeightFromIndexInternal(UnityEngine.Experimental.Director.Playable&,System.Int32,System.Single)
extern "C"  void Playable_SetInputWeightFromIndexInternal_m1604381493 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___index1, float ___weight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_SetInputWeightFromIndexInternal(UnityEngine.Experimental.Director.Playable&,System.Int32,System.Single)
extern "C"  void Playable_INTERNAL_CALL_SetInputWeightFromIndexInternal_m3111770262 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___index1, float ___weight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeight(System.Int32,System.Single)
extern "C"  bool Playable_SetInputWeight_m2698917277 (Playable_t70832698 * __this, int32_t ___inputIndex0, float ___weight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeight(System.Int32)
extern "C"  float Playable_GetInputWeight_m837530218 (Playable_t70832698 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeightInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  float Playable_GetInputWeightInternal_m681352128 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetInputWeightInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  float Playable_INTERNAL_CALL_GetInputWeightInternal_m662708863 (Il2CppObject * __this /* static, unused */, Playable_t70832698 * ___playable0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Equals(System.Object)
extern "C"  bool Playable_Equals_m1149042830 (Playable_t70832698 * __this, Il2CppObject * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetHashCode()
extern "C"  int32_t Playable_GetHashCode_m3165087730 (Playable_t70832698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32)
extern "C"  bool Playable_CheckInputBounds_m1883207375 (Playable_t70832698 * __this, int32_t ___inputIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32,System.Boolean)
extern "C"  bool Playable_CheckInputBounds_m3596125390 (Playable_t70832698 * __this, int32_t ___inputIndex0, bool ___acceptAny1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Playable_t70832698;
struct Playable_t70832698_marshaled_pinvoke;

extern "C" void Playable_t70832698_marshal_pinvoke(const Playable_t70832698& unmarshaled, Playable_t70832698_marshaled_pinvoke& marshaled);
extern "C" void Playable_t70832698_marshal_pinvoke_back(const Playable_t70832698_marshaled_pinvoke& marshaled, Playable_t70832698& unmarshaled);
extern "C" void Playable_t70832698_marshal_pinvoke_cleanup(Playable_t70832698_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Playable_t70832698;
struct Playable_t70832698_marshaled_com;

extern "C" void Playable_t70832698_marshal_com(const Playable_t70832698& unmarshaled, Playable_t70832698_marshaled_com& marshaled);
extern "C" void Playable_t70832698_marshal_com_back(const Playable_t70832698_marshaled_com& marshaled, Playable_t70832698& unmarshaled);
extern "C" void Playable_t70832698_marshal_com_cleanup(Playable_t70832698_marshaled_com& marshaled);
