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

// Google.ProtocolBuffers.ByteString
struct ByteString_t3161063139;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t479507413;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t4069583101;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Byte3161063139.h"

// System.Void Google.ProtocolBuffers.ByteString::.ctor(System.Byte[])
extern "C"  void ByteString__ctor_m3954052279 (ByteString_t3161063139 * __this, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> Google.ProtocolBuffers.ByteString::GetEnumerator()
extern "C"  Il2CppObject* ByteString_GetEnumerator_m2168507865 (ByteString_t3161063139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Google.ProtocolBuffers.ByteString::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ByteString_System_Collections_IEnumerable_GetEnumerator_m740940383 (ByteString_t3161063139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.ByteString::CreateCodedInput()
extern "C"  CodedInputStream_t4069583101 * ByteString_CreateCodedInput_m74995625 (ByteString_t3161063139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(System.Object)
extern "C"  bool ByteString_Equals_m1850465767 (ByteString_t3161063139 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.ByteString::GetHashCode()
extern "C"  int32_t ByteString_GetHashCode_m3538174975 (ByteString_t3161063139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(Google.ProtocolBuffers.ByteString)
extern "C"  bool ByteString_Equals_m1393476260 (ByteString_t3161063139 * __this, ByteString_t3161063139 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.ByteString::.cctor()
extern "C"  void ByteString__cctor_m3533786523 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
