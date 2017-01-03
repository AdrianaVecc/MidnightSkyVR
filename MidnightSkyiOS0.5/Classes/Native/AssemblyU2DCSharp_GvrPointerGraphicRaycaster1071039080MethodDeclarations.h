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

// GvrPointerGraphicRaycaster
struct GvrPointerGraphicRaycaster_t1071039080;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t835879620;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t2204984990;
// UnityEngine.UI.Graphic
struct Graphic_t836799438;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UnityEngine_Canvas2727140764.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic836799438.h"

// System.Void GvrPointerGraphicRaycaster::.ctor()
extern "C"  void GvrPointerGraphicRaycaster__ctor_m4262583091 (GvrPointerGraphicRaycaster_t1071039080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerGraphicRaycaster::.cctor()
extern "C"  void GvrPointerGraphicRaycaster__cctor_m2808960730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrPointerGraphicRaycaster::get_eventCamera()
extern "C"  Camera_t2727095145 * GvrPointerGraphicRaycaster_get_eventCamera_m2590403750 (GvrPointerGraphicRaycaster_t1071039080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas GvrPointerGraphicRaycaster::get_canvas()
extern "C"  Canvas_t2727140764 * GvrPointerGraphicRaycaster_get_canvas_m2377637568 (GvrPointerGraphicRaycaster_t1071039080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerGraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void GvrPointerGraphicRaycaster_Raycast_m2934293161 (GvrPointerGraphicRaycaster_t1071039080 * __this, PointerEventData_t1848751023 * ___eventData0, List_1_t835879620 * ___resultAppendList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerGraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Ray,UnityEngine.Camera,System.Single,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>,UnityEngine.Ray&)
extern "C"  void GvrPointerGraphicRaycaster_Raycast_m400807607 (Il2CppObject * __this /* static, unused */, Canvas_t2727140764 * ___canvas0, Ray_t3134616544  ___ray1, Camera_t2727095145 * ___cam2, float ___maxPointerDistance3, List_1_t2204984990 * ___results4, Ray_t3134616544 * ___finalRay5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrPointerGraphicRaycaster::<Raycast>m__4(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
extern "C"  int32_t GvrPointerGraphicRaycaster_U3CRaycastU3Em__4_m2370614859 (Il2CppObject * __this /* static, unused */, Graphic_t836799438 * ___g10, Graphic_t836799438 * ___g21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
