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

// proto.PhoneEvent/Types/AccelerometerEvent/Builder
struct Builder_t1359586634;
// proto.PhoneEvent/Types/AccelerometerEvent
struct AccelerometerEvent_t148610782;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t2166426326;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t2486733814;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t3129324470;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerome148610782.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte3129324470.h"

// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::.ctor()
extern "C"  void Builder__ctor_m3523263329 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::.ctor(proto.PhoneEvent/Types/AccelerometerEvent)
extern "C"  void Builder__ctor_m210338003 (Builder_t1359586634 * __this, AccelerometerEvent_t148610782 * ___cloneFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_ThisBuilder()
extern "C"  Builder_t1359586634 * Builder_get_ThisBuilder_m1915077756 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::PrepareBuilder()
extern "C"  AccelerometerEvent_t148610782 * Builder_PrepareBuilder_m3251449730 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_IsInitialized()
extern "C"  bool Builder_get_IsInitialized_m2581941524 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_MessageBeingBuilt()
extern "C"  AccelerometerEvent_t148610782 * Builder_get_MessageBeingBuilt_m421633521 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::Clear()
extern "C"  Builder_t1359586634 * Builder_Clear_m3792338325 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::Clone()
extern "C"  Builder_t1359586634 * Builder_Clone_m3801948325 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_DefaultInstanceForType()
extern "C"  AccelerometerEvent_t148610782 * Builder_get_DefaultInstanceForType_m4186370756 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::BuildPartial()
extern "C"  AccelerometerEvent_t148610782 * Builder_BuildPartial_m4004899233 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C"  Builder_t1359586634 * Builder_MergeFrom_m742203188 (Builder_t1359586634 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(proto.PhoneEvent/Types/AccelerometerEvent)
extern "C"  Builder_t1359586634 * Builder_MergeFrom_m347977674 (Builder_t1359586634 * __this, AccelerometerEvent_t148610782 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Builder_t1359586634 * Builder_MergeFrom_m2021277046 (Builder_t1359586634 * __this, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Builder_t1359586634 * Builder_MergeFrom_m354802428 (Builder_t1359586634 * __this, Il2CppObject * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasTimestamp()
extern "C"  bool Builder_get_HasTimestamp_m501962036 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_Timestamp()
extern "C"  int64_t Builder_get_Timestamp_m1599969403 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Timestamp(System.Int64)
extern "C"  void Builder_set_Timestamp_m816411274 (Builder_t1359586634 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetTimestamp(System.Int64)
extern "C"  Builder_t1359586634 * Builder_SetTimestamp_m2116775744 (Builder_t1359586634 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearTimestamp()
extern "C"  Builder_t1359586634 * Builder_ClearTimestamp_m700372579 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasX()
extern "C"  bool Builder_get_HasX_m115525910 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_X()
extern "C"  float Builder_get_X_m1677802586 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_X(System.Single)
extern "C"  void Builder_set_X_m3745033809 (Builder_t1359586634 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetX(System.Single)
extern "C"  Builder_t1359586634 * Builder_SetX_m2932732507 (Builder_t1359586634 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearX()
extern "C"  Builder_t1359586634 * Builder_ClearX_m1598417221 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasY()
extern "C"  bool Builder_get_HasY_m115526871 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_Y()
extern "C"  float Builder_get_Y_m1677803547 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Y(System.Single)
extern "C"  void Builder_set_Y_m3234499632 (Builder_t1359586634 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetY(System.Single)
extern "C"  Builder_t1359586634 * Builder_SetY_m2422198330 (Builder_t1359586634 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearY()
extern "C"  Builder_t1359586634 * Builder_ClearY_m1598418182 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasZ()
extern "C"  bool Builder_get_HasZ_m115527832 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_Z()
extern "C"  float Builder_get_Z_m1677804508 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Z(System.Single)
extern "C"  void Builder_set_Z_m2723965455 (Builder_t1359586634 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetZ(System.Single)
extern "C"  Builder_t1359586634 * Builder_SetZ_m1911664153 (Builder_t1359586634 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearZ()
extern "C"  Builder_t1359586634 * Builder_ClearZ_m1598419143 (Builder_t1359586634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
