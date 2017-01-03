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

// System.Diagnostics.Process/AsyncReadHandler
struct AsyncReadHandler_t3598973689;
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

// System.Void System.Diagnostics.Process/AsyncReadHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncReadHandler__ctor_m3034715025 (AsyncReadHandler_t3598973689 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/AsyncReadHandler::Invoke()
extern "C"  void AsyncReadHandler_Invoke_m3917452075 (AsyncReadHandler_t3598973689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Diagnostics.Process/AsyncReadHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AsyncReadHandler_BeginInvoke_m4261064960 (AsyncReadHandler_t3598973689 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/AsyncReadHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncReadHandler_EndInvoke_m1646786081 (AsyncReadHandler_t3598973689 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
