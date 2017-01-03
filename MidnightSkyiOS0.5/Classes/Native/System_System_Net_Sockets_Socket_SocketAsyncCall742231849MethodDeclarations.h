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

// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t742231849;
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

// System.Void System.Net.Sockets.Socket/SocketAsyncCall::.ctor(System.Object,System.IntPtr)
extern "C"  void SocketAsyncCall__ctor_m641028609 (SocketAsyncCall_t742231849 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::Invoke()
extern "C"  void SocketAsyncCall_Invoke_m90963355 (SocketAsyncCall_t742231849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket/SocketAsyncCall::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SocketAsyncCall_BeginInvoke_m2857843088 (SocketAsyncCall_t742231849 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::EndInvoke(System.IAsyncResult)
extern "C"  void SocketAsyncCall_EndInvoke_m2218519697 (SocketAsyncCall_t742231849 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
