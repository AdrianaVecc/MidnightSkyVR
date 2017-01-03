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

// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t3346577219 * Collider_get_attachedRigidbody_m2821754842 (Collider_t2939674232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Internal_Raycast_m2952058962 (Il2CppObject * __this /* static, unused */, Collider_t2939674232 * ___col0, Ray_t3134616544  ___ray1, RaycastHit_t4003175726 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_INTERNAL_CALL_Internal_Raycast_m2856018931 (Il2CppObject * __this /* static, unused */, Collider_t2939674232 * ___col0, Ray_t3134616544 * ___ray1, RaycastHit_t4003175726 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Raycast_m3774073393 (Collider_t2939674232 * __this, Ray_t3134616544  ___ray0, RaycastHit_t4003175726 * ___hitInfo1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
