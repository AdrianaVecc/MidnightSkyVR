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

// System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t671527814;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte4209602725.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m193768668_gshared (Transform_1_t671527814 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m193768668(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t671527814 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m193768668_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Transform_1_Invoke_m786397212_gshared (Transform_1_t671527814 * __this, ExtensionIntPair_t4209602725  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m786397212(__this, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Transform_1_t671527814 *, ExtensionIntPair_t4209602725 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m786397212_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1728688071_gshared (Transform_1_t671527814 * __this, ExtensionIntPair_t4209602725  ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1728688071(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t671527814 *, ExtensionIntPair_t4209602725 , Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1728688071_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t1751606614  Transform_1_EndInvoke_m1197358830_gshared (Transform_1_t671527814 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1197358830(__this, ___result0, method) ((  DictionaryEntry_t1751606614  (*) (Transform_1_t671527814 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1197358830_gshared)(__this, ___result0, method)
