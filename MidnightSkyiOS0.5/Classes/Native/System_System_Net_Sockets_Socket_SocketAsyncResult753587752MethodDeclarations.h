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

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t753587752;
// System.Net.Sockets.Socket
struct Socket_t2157335841;
// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Collections.Queue
struct Queue_t1759945451;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t742231849;
// System.Net.Sockets.Socket/Worker
struct Worker_t3140563676;
// System.Exception
struct Exception_t3991598821;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;
struct SocketAsyncResult_t753587752_marshaled_pinvoke;
struct SocketAsyncResult_t753587752_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket2157335841.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "System_System_Net_Sockets_Socket_SocketOperation4113109398.h"
#include "mscorlib_System_Collections_Queue1759945451.h"
#include "System_System_Net_Sockets_Socket_Worker3140563676.h"
#include "mscorlib_System_Exception3991598821.h"
#include "System_System_Net_Sockets_SocketError4204345479.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
extern "C"  void SocketAsyncResult__ctor_m3387632877 (SocketAsyncResult_t753587752 * __this, Socket_t2157335841 * ___sock0, Il2CppObject * ___state1, AsyncCallback_t1369114871 * ___callback2, int32_t ___operation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
extern "C"  void SocketAsyncResult_CheckIfThrowDelayedException_m3077626800 (SocketAsyncResult_t753587752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
extern "C"  void SocketAsyncResult_CompleteAllOnDispose_m1491762849 (SocketAsyncResult_t753587752 * __this, Queue_t1759945451 * ___queue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
extern "C"  void SocketAsyncResult_CompleteDisposed_m4085393076 (SocketAsyncResult_t753587752 * __this, Il2CppObject * ___unused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
extern "C"  void SocketAsyncResult_Complete_m3226188763 (SocketAsyncResult_t753587752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
extern "C"  SocketAsyncCall_t742231849 * SocketAsyncResult_GetDelegate_m3647662143 (SocketAsyncResult_t753587752 * __this, Worker_t3140563676 * ___worker0, int32_t ___op1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
extern "C"  void SocketAsyncResult_Complete_m2117042348 (SocketAsyncResult_t753587752 * __this, int32_t ___total0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
extern "C"  void SocketAsyncResult_Complete_m3130013323 (SocketAsyncResult_t753587752 * __this, Exception_t3991598821 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * SocketAsyncResult_get_AsyncState_m2775447499 (SocketAsyncResult_t753587752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * SocketAsyncResult_get_AsyncWaitHandle_m1788904497 (SocketAsyncResult_t753587752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
extern "C"  bool SocketAsyncResult_get_IsCompleted_m3245275886 (SocketAsyncResult_t753587752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
extern "C"  void SocketAsyncResult_set_IsCompleted_m1869173595 (SocketAsyncResult_t753587752 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
extern "C"  int32_t SocketAsyncResult_get_Total_m2584191947 (SocketAsyncResult_t753587752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
extern "C"  void SocketAsyncResult_set_Total_m1350627192 (SocketAsyncResult_t753587752 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
extern "C"  int32_t SocketAsyncResult_get_ErrorCode_m2754211572 (SocketAsyncResult_t753587752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SocketAsyncResult_t753587752;
struct SocketAsyncResult_t753587752_marshaled_pinvoke;

extern "C" void SocketAsyncResult_t753587752_marshal_pinvoke(const SocketAsyncResult_t753587752& unmarshaled, SocketAsyncResult_t753587752_marshaled_pinvoke& marshaled);
extern "C" void SocketAsyncResult_t753587752_marshal_pinvoke_back(const SocketAsyncResult_t753587752_marshaled_pinvoke& marshaled, SocketAsyncResult_t753587752& unmarshaled);
extern "C" void SocketAsyncResult_t753587752_marshal_pinvoke_cleanup(SocketAsyncResult_t753587752_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SocketAsyncResult_t753587752;
struct SocketAsyncResult_t753587752_marshaled_com;

extern "C" void SocketAsyncResult_t753587752_marshal_com(const SocketAsyncResult_t753587752& unmarshaled, SocketAsyncResult_t753587752_marshaled_com& marshaled);
extern "C" void SocketAsyncResult_t753587752_marshal_com_back(const SocketAsyncResult_t753587752_marshaled_com& marshaled, SocketAsyncResult_t753587752& unmarshaled);
extern "C" void SocketAsyncResult_t753587752_marshal_com_cleanup(SocketAsyncResult_t753587752_marshaled_com& marshaled);
