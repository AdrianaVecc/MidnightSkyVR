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

// GvrGaze
struct GvrGaze_t2073985384;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Camera
struct Camera_t2727095145;
// IGvrGazeResponder
struct IGvrGazeResponder_t4177935811;
// IGvrPointer
struct IGvrPointer_t448681091;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t667441552;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

// System.Void GvrGaze::.ctor()
extern "C"  void GvrGaze__ctor_m2820784899 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrGaze::get_PointerObject()
extern "C"  GameObject_t3674682005 * GvrGaze_get_PointerObject_m188477257 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::set_PointerObject(UnityEngine.GameObject)
extern "C"  void GvrGaze_set_PointerObject_m3100422808 (GvrGaze_t2073985384 * __this, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrGaze::get_cam()
extern "C"  Camera_t2727095145 * GvrGaze_get_cam_m608989896 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::set_cam(UnityEngine.Camera)
extern "C"  void GvrGaze_set_cam_m2193343511 (GvrGaze_t2073985384 * __this, Camera_t2727095145 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::Awake()
extern "C"  void GvrGaze_Awake_m3058390118 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::OnEnable()
extern "C"  void GvrGaze_OnEnable_m744391075 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::OnDisable()
extern "C"  void GvrGaze_OnDisable_m2042224106 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::LateUpdate()
extern "C"  void GvrGaze_LateUpdate_m2205413680 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::HandleGaze()
extern "C"  void GvrGaze_HandleGaze_m4102877806 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrGaze::FindGazeTarget(System.Single,IGvrGazeResponder&,UnityEngine.Vector3&,UnityEngine.Ray&)
extern "C"  GameObject_t3674682005 * GvrGaze_FindGazeTarget_m1417366701 (GvrGaze_t2073985384 * __this, float ___radius0, Il2CppObject ** ___responder1, Vector3_t4282066566 * ___intersectPosition2, Ray_t3134616544 * ___intersectionRay3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrGaze::IsGazeNearObject(System.Single,UnityEngine.GameObject,UnityEngine.Vector3&)
extern "C"  bool GvrGaze_IsGazeNearObject_m1651993731 (GvrGaze_t2073985384 * __this, float ___radius0, GameObject_t3674682005 * ___target1, Vector3_t4282066566 * ___intersectPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::HandleTrigger()
extern "C"  void GvrGaze_HandleTrigger_m2403987089 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray GvrGaze::GetRay()
extern "C"  Ray_t3134616544  GvrGaze_GetRay_m3553748213 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IGvrPointer GvrGaze::<set_PointerObject>m__2(UnityEngine.MonoBehaviour)
extern "C"  Il2CppObject * GvrGaze_U3Cset_PointerObjectU3Em__2_m3994604222 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t667441552 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrGaze::<set_PointerObject>m__3(IGvrPointer)
extern "C"  bool GvrGaze_U3Cset_PointerObjectU3Em__3_m3921305177 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
