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

// System.IO.MonoSyncFileStream
struct MonoSyncFileStream_t1300733706;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_IO_FileAccess1610034992.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.IO.MonoSyncFileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32)
extern "C"  void MonoSyncFileStream__ctor_m503341596 (MonoSyncFileStream_t1300733706 * __this, IntPtr_t ___handle0, int32_t ___access1, bool ___ownsHandle2, int32_t ___bufferSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.MonoSyncFileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MonoSyncFileStream_BeginWrite_m42028334 (MonoSyncFileStream_t1300733706 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MonoSyncFileStream::EndWrite(System.IAsyncResult)
extern "C"  void MonoSyncFileStream_EndWrite_m1706010036 (MonoSyncFileStream_t1300733706 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.MonoSyncFileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MonoSyncFileStream_BeginRead_m614334459 (MonoSyncFileStream_t1300733706 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoSyncFileStream::EndRead(System.IAsyncResult)
extern "C"  int32_t MonoSyncFileStream_EndRead_m4255081611 (MonoSyncFileStream_t1300733706 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
