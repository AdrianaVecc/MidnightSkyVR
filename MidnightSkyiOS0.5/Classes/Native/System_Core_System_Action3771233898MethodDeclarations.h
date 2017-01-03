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

// System.Action
struct Action_t3771233898;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2957240604 (Action_t3771233898 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m1445970038 (Action_t3771233898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_BeginInvoke_m1056371541 (Action_t3771233898 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern "C"  void Action_EndInvoke_m2672838956 (Action_t3771233898 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
