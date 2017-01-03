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


#include "codegen/il2cpp-codegen.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Wire2296981514.h"

// Google.ProtocolBuffers.WireFormat/WireType Google.ProtocolBuffers.WireFormat::GetTagWireType(System.UInt32)
extern "C"  uint32_t WireFormat_GetTagWireType_m1783698341 (Il2CppObject * __this /* static, unused */, uint32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.WireFormat::IsEndGroupTag(System.UInt32)
extern "C"  bool WireFormat_IsEndGroupTag_m4227909309 (Il2CppObject * __this /* static, unused */, uint32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.WireFormat::GetTagFieldNumber(System.UInt32)
extern "C"  int32_t WireFormat_GetTagFieldNumber_m1275894768 (Il2CppObject * __this /* static, unused */, uint32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.WireFormat::MakeTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
extern "C"  uint32_t WireFormat_MakeTag_m3371601783 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, uint32_t ___wireType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
