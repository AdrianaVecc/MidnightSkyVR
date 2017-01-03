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

// System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>
struct IEnumerable_1_t3371745655;
// System.Object
struct Il2CppObject;
// UnityEngine.Experimental.Director.AnimationPlayable
struct AnimationPlayable_t1390812184;
struct AnimationPlayable_t1390812184_marshaled_pinvoke;
struct AnimationPlayable_t1390812184_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim1390812184.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Playab70832698.h"
#include "mscorlib_System_Object4170816371.h"

// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.AnimationPlayable::get_node()
extern "C"  Playable_t70832698  AnimationPlayable_get_node_m3540398430 (AnimationPlayable_t1390812184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimationPlayable::AddInput(UnityEngine.Experimental.Director.Playable)
extern "C"  int32_t AnimationPlayable_AddInput_m522981513 (AnimationPlayable_t1390812184 * __this, Playable_t70832698  ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayable::SetInput(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  bool AnimationPlayable_SetInput_m3182409941 (AnimationPlayable_t1390812184 * __this, Playable_t70832698  ___source0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayable::SetInputs(System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>)
extern "C"  bool AnimationPlayable_SetInputs_m2769494846 (AnimationPlayable_t1390812184 * __this, Il2CppObject* ___sources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayable::RemoveInput(System.Int32)
extern "C"  bool AnimationPlayable_RemoveInput_m2864857726 (AnimationPlayable_t1390812184 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayable::RemoveAllInputs()
extern "C"  bool AnimationPlayable_RemoveAllInputs_m624300749 (AnimationPlayable_t1390812184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayable::Equals(System.Object)
extern "C"  bool AnimationPlayable_Equals_m758693402 (AnimationPlayable_t1390812184 * __this, Il2CppObject * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimationPlayable::GetHashCode()
extern "C"  int32_t AnimationPlayable_GetHashCode_m1995312370 (AnimationPlayable_t1390812184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayable::IsValid()
extern "C"  bool AnimationPlayable_IsValid_m3295368185 (AnimationPlayable_t1390812184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimationPlayable::get_inputCount()
extern "C"  int32_t AnimationPlayable_get_inputCount_m3625682607 (AnimationPlayable_t1390812184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.AnimationPlayable::GetInput(System.Int32)
extern "C"  Playable_t70832698  AnimationPlayable_GetInput_m1254613720 (AnimationPlayable_t1390812184 * __this, int32_t ___inputPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.AnimationPlayable::op_Implicit(UnityEngine.Experimental.Director.AnimationPlayable)
extern "C"  Playable_t70832698  AnimationPlayable_op_Implicit_m679995841 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1390812184  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimationPlayable_t1390812184;
struct AnimationPlayable_t1390812184_marshaled_pinvoke;

extern "C" void AnimationPlayable_t1390812184_marshal_pinvoke(const AnimationPlayable_t1390812184& unmarshaled, AnimationPlayable_t1390812184_marshaled_pinvoke& marshaled);
extern "C" void AnimationPlayable_t1390812184_marshal_pinvoke_back(const AnimationPlayable_t1390812184_marshaled_pinvoke& marshaled, AnimationPlayable_t1390812184& unmarshaled);
extern "C" void AnimationPlayable_t1390812184_marshal_pinvoke_cleanup(AnimationPlayable_t1390812184_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimationPlayable_t1390812184;
struct AnimationPlayable_t1390812184_marshaled_com;

extern "C" void AnimationPlayable_t1390812184_marshal_com(const AnimationPlayable_t1390812184& unmarshaled, AnimationPlayable_t1390812184_marshaled_com& marshaled);
extern "C" void AnimationPlayable_t1390812184_marshal_com_back(const AnimationPlayable_t1390812184_marshaled_com& marshaled, AnimationPlayable_t1390812184& unmarshaled);
extern "C" void AnimationPlayable_t1390812184_marshal_com_cleanup(AnimationPlayable_t1390812184_marshaled_com& marshaled);
