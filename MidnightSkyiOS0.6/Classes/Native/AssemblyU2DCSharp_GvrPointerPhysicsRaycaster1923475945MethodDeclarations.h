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

// GvrPointerPhysicsRaycaster
struct GvrPointerPhysicsRaycaster_t1923475945;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t835879620;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"

// System.Void GvrPointerPhysicsRaycaster::.ctor()
extern "C"  void GvrPointerPhysicsRaycaster__ctor_m3445658834 (GvrPointerPhysicsRaycaster_t1923475945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrPointerPhysicsRaycaster::get_eventCamera()
extern "C"  Camera_t2727095145 * GvrPointerPhysicsRaycaster_get_eventCamera_m3748457349 (GvrPointerPhysicsRaycaster_t1923475945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrPointerPhysicsRaycaster::get_finalEventMask()
extern "C"  int32_t GvrPointerPhysicsRaycaster_get_finalEventMask_m480169977 (GvrPointerPhysicsRaycaster_t1923475945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask GvrPointerPhysicsRaycaster::get_eventMask()
extern "C"  LayerMask_t3236759763  GvrPointerPhysicsRaycaster_get_eventMask_m2361992864 (GvrPointerPhysicsRaycaster_t1923475945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerPhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
extern "C"  void GvrPointerPhysicsRaycaster_set_eventMask_m1851449523 (GvrPointerPhysicsRaycaster_t1923475945 * __this, LayerMask_t3236759763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerPhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void GvrPointerPhysicsRaycaster_Raycast_m1299039850 (GvrPointerPhysicsRaycaster_t1923475945 * __this, PointerEventData_t1848751023 * ___eventData0, List_1_t835879620 * ___resultAppendList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrPointerPhysicsRaycaster::<Raycast>m__5(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C"  int32_t GvrPointerPhysicsRaycaster_U3CRaycastU3Em__5_m327660395 (Il2CppObject * __this /* static, unused */, RaycastHit_t4003175726  ___r10, RaycastHit_t4003175726  ___r21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
