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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>
struct Transform_1_t2928323147;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_819872118.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type923828173.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2602390290_gshared (Transform_1_t2928323147 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2602390290(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2928323147 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2602390290_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t819872118  Transform_1_Invoke_m4292663590_gshared (Transform_1_t2928323147 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4292663590(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t819872118  (*) (Transform_1_t2928323147 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m4292663590_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m485996881_gshared (Transform_1_t2928323147 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m485996881(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2928323147 *, int32_t, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m485996881_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t819872118  Transform_1_EndInvoke_m2195370916_gshared (Transform_1_t2928323147 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2195370916(__this, ___result0, method) ((  KeyValuePair_2_t819872118  (*) (Transform_1_t2928323147 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2195370916_gshared)(__this, ___result0, method)
