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

// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t4069583101;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.Stream
struct Stream_t1561764144;
// System.String
struct String_t;
// Google.ProtocolBuffers.IBuilderLite
struct IBuilderLite_t1511002218;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t3129324470;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t891541663;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_String7231557.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte3129324470.h"

// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedInputStream__ctor_m3357527409 (CodedInputStream_t4069583101 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.IO.Stream)
extern "C"  void CodedInputStream__ctor_m2622803471 (CodedInputStream_t4069583101 * __this, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_ReachedLimit()
extern "C"  bool CodedInputStream_get_ReachedLimit_m802249722 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_IsAtEnd()
extern "C"  bool CodedInputStream_get_IsAtEnd_m238754927 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.IO.Stream)
extern "C"  CodedInputStream_t4069583101 * CodedInputStream_CreateInstance_m2850959676 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[])
extern "C"  CodedInputStream_t4069583101 * CodedInputStream_CreateInstance_m361471812 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::CheckLastTagWas(System.UInt32)
extern "C"  void CodedInputStream_CheckLastTagWas_m200294519 (CodedInputStream_t4069583101 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::PeekNextTag(System.UInt32&,System.String&)
extern "C"  bool CodedInputStream_PeekNextTag_m2476726456 (CodedInputStream_t4069583101 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadTag(System.UInt32&,System.String&)
extern "C"  bool CodedInputStream_ReadTag_m1590405344 (CodedInputStream_t4069583101 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadFloat(System.Single&)
extern "C"  bool CodedInputStream_ReadFloat_m232796065 (CodedInputStream_t4069583101 * __this, float* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt64(System.Int64&)
extern "C"  bool CodedInputStream_ReadInt64_m3858450537 (CodedInputStream_t4069583101 * __this, int64_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt32(System.Int32&)
extern "C"  bool CodedInputStream_ReadInt32_m819498505 (CodedInputStream_t4069583101 * __this, int32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadMessage(Google.ProtocolBuffers.IBuilderLite,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  void CodedInputStream_ReadMessage_m1770546095 (CodedInputStream_t4069583101 * __this, Il2CppObject * ___builder0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::BeginArray(System.UInt32,System.Boolean&,System.Int32&)
extern "C"  bool CodedInputStream_BeginArray_m2258619110 (CodedInputStream_t4069583101 * __this, uint32_t ___fieldTag0, bool* ___isPacked1, int32_t* ___oldLimit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32)
extern "C"  bool CodedInputStream_ContinueArray_m3756366926 (CodedInputStream_t4069583101 * __this, uint32_t ___currentTag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32,System.Boolean,System.Int32)
extern "C"  bool CodedInputStream_ContinueArray_m1770543048 (CodedInputStream_t4069583101 * __this, uint32_t ___currentTag0, bool ___packed1, int32_t ___oldLimit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadFloatArray(System.UInt32,System.String,System.Collections.Generic.ICollection`1<System.Single>)
extern "C"  void CodedInputStream_ReadFloatArray_m2123658713 (CodedInputStream_t4069583101 * __this, uint32_t ___fieldTag0, String_t* ___fieldName1, Il2CppObject* ___list2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::SlowReadRawVarint32()
extern "C"  uint32_t CodedInputStream_SlowReadRawVarint32_m2448488201 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32()
extern "C"  uint32_t CodedInputStream_ReadRawVarint32_m3662731018 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32(System.IO.Stream)
extern "C"  uint32_t CodedInputStream_ReadRawVarint32_m3276130721 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint64()
extern "C"  uint64_t CodedInputStream_ReadRawVarint64_m364557290 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian32()
extern "C"  uint32_t CodedInputStream_ReadRawLittleEndian32_m2952990675 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian64()
extern "C"  uint64_t CodedInputStream_ReadRawLittleEndian64_m396883955 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::PushLimit(System.Int32)
extern "C"  int32_t CodedInputStream_PushLimit_m994285030 (CodedInputStream_t4069583101 * __this, int32_t ___byteLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::RecomputeBufferSizeAfterLimit()
extern "C"  void CodedInputStream_RecomputeBufferSizeAfterLimit_m488640474 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::PopLimit(System.Int32)
extern "C"  void CodedInputStream_PopLimit_m1836646151 (CodedInputStream_t4069583101 * __this, int32_t ___oldLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::RefillBuffer(System.Boolean)
extern "C"  bool CodedInputStream_RefillBuffer_m1860958645 (CodedInputStream_t4069583101 * __this, bool ___mustSucceed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Google.ProtocolBuffers.CodedInputStream::ReadRawByte()
extern "C"  uint8_t CodedInputStream_ReadRawByte_m1059326780 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Google.ProtocolBuffers.CodedInputStream::ReadRawBytes(System.Int32)
extern "C"  ByteU5BU5D_t4260760469* CodedInputStream_ReadRawBytes_m2322882316 (CodedInputStream_t4069583101 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::SkipField()
extern "C"  bool CodedInputStream_SkipField_m2087251765 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipMessage()
extern "C"  void CodedInputStream_SkipMessage_m3718327390 (CodedInputStream_t4069583101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipRawBytes(System.Int32)
extern "C"  void CodedInputStream_SkipRawBytes_m242966367 (CodedInputStream_t4069583101 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipImpl(System.Int32)
extern "C"  void CodedInputStream_SkipImpl_m789886620 (CodedInputStream_t4069583101 * __this, int32_t ___amountToSkip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
