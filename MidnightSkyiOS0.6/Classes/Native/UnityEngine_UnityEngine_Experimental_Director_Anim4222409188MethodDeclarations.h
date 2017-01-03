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

// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>
struct IEnumerable_1_t3371745655;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim1390812184.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Playab70832698.h"
#include "mscorlib_System_Type2863145774.h"

// System.Int32 UnityEngine.Experimental.Director.AnimationPlayableUtilities::AddInputValidated(UnityEngine.Experimental.Director.AnimationPlayable,UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t AnimationPlayableUtilities_AddInputValidated_m580261089 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1390812184  ___target0, Playable_t70832698  ___input1, Type_t * ___typeofTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::SetInputValidated(UnityEngine.Experimental.Director.AnimationPlayable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  bool AnimationPlayableUtilities_SetInputValidated_m2322495521 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1390812184  ___target0, Playable_t70832698  ___source1, int32_t ___index2, Type_t * ___typeofTarget3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::SetInputsValidated(UnityEngine.Experimental.Director.AnimationPlayable,System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>,System.Type)
extern "C"  bool AnimationPlayableUtilities_SetInputsValidated_m1364271782 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1390812184  ___target0, Il2CppObject* ___sources1, Type_t * ___typeofTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::RemoveInputValidated(UnityEngine.Experimental.Director.AnimationPlayable,System.Int32,System.Type)
extern "C"  bool AnimationPlayableUtilities_RemoveInputValidated_m1233499216 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1390812184  ___target0, int32_t ___index1, Type_t * ___typeofTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::RemoveAllInputsValidated(UnityEngine.Experimental.Director.AnimationPlayable,System.Type)
extern "C"  bool AnimationPlayableUtilities_RemoveAllInputsValidated_m870139853 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1390812184  ___target0, Type_t * ___typeofTarget1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
