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

// System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>
struct Transform_1_t1569824551;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22649903351.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte4209602725.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m465064426_gshared (Transform_1_t1569824551 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m465064426(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1569824551 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m465064426_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2649903351  Transform_1_Invoke_m457239758_gshared (Transform_1_t1569824551 * __this, ExtensionIntPair_t4209602725  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m457239758(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2649903351  (*) (Transform_1_t1569824551 *, ExtensionIntPair_t4209602725 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m457239758_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m515149433_gshared (Transform_1_t1569824551 * __this, ExtensionIntPair_t4209602725  ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m515149433(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1569824551 *, ExtensionIntPair_t4209602725 , Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m515149433_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2649903351  Transform_1_EndInvoke_m1557219068_gshared (Transform_1_t1569824551 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1557219068(__this, ___result0, method) ((  KeyValuePair_2_t2649903351  (*) (Transform_1_t1569824551 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1557219068_gshared)(__this, ___result0, method)
