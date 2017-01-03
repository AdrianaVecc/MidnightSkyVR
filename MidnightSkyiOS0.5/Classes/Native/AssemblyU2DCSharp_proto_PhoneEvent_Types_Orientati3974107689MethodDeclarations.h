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

// proto.PhoneEvent/Types/OrientationEvent/Builder
struct Builder_t3974107689;
// proto.PhoneEvent/Types/OrientationEvent
struct OrientationEvent_t3825228477;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t2166426326;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t2486733814;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t3129324470;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati3825228477.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte3129324470.h"

// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor()
extern "C"  void Builder__ctor_m3255399266 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor(proto.PhoneEvent/Types/OrientationEvent)
extern "C"  void Builder__ctor_m3938503603 (Builder_t3974107689 * __this, OrientationEvent_t3825228477 * ___cloneFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::get_ThisBuilder()
extern "C"  Builder_t3974107689 * Builder_get_ThisBuilder_m808211198 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::PrepareBuilder()
extern "C"  OrientationEvent_t3825228477 * Builder_PrepareBuilder_m2731125952 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_IsInitialized()
extern "C"  bool Builder_get_IsInitialized_m113207445 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::get_MessageBeingBuilt()
extern "C"  OrientationEvent_t3825228477 * Builder_get_MessageBeingBuilt_m2149015283 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::Clear()
extern "C"  Builder_t3974107689 * Builder_Clear_m536274583 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::Clone()
extern "C"  Builder_t3974107689 * Builder_Clone_m545884583 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::get_DefaultInstanceForType()
extern "C"  OrientationEvent_t3825228477 * Builder_get_DefaultInstanceForType_m4268458754 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::BuildPartial()
extern "C"  OrientationEvent_t3825228477 * Builder_BuildPartial_m1787600479 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C"  Builder_t3974107689 * Builder_MergeFrom_m1389918194 (Builder_t3974107689 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(proto.PhoneEvent/Types/OrientationEvent)
extern "C"  Builder_t3974107689 * Builder_MergeFrom_m2988631369 (Builder_t3974107689 * __this, OrientationEvent_t3825228477 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Builder_t3974107689 * Builder_MergeFrom_m2842602360 (Builder_t3974107689 * __this, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Builder_t3974107689 * Builder_MergeFrom_m307205946 (Builder_t3974107689 * __this, Il2CppObject * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasTimestamp()
extern "C"  bool Builder_get_HasTimestamp_m2777630099 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/OrientationEvent/Builder::get_Timestamp()
extern "C"  int64_t Builder_get_Timestamp_m3530155836 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Timestamp(System.Int64)
extern "C"  void Builder_set_Timestamp_m3384745995 (Builder_t3974107689 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetTimestamp(System.Int64)
extern "C"  Builder_t3974107689 * Builder_SetTimestamp_m4042265342 (Builder_t3974107689 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearTimestamp()
extern "C"  Builder_t3974107689 * Builder_ClearTimestamp_m3712708513 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasX()
extern "C"  bool Builder_get_HasX_m928024693 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_X()
extern "C"  float Builder_get_X_m1568208731 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_X(System.Single)
extern "C"  void Builder_set_X_m2264449008 (Builder_t3974107689 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetX(System.Single)
extern "C"  Builder_t3974107689 * Builder_SetX_m90892381 (Builder_t3974107689 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearX()
extern "C"  Builder_t3974107689 * Builder_ClearX_m3739656323 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasY()
extern "C"  bool Builder_get_HasY_m928025654 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_Y()
extern "C"  float Builder_get_Y_m1568209692 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Y(System.Single)
extern "C"  void Builder_set_Y_m1753914831 (Builder_t3974107689 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetY(System.Single)
extern "C"  Builder_t3974107689 * Builder_SetY_m3875325500 (Builder_t3974107689 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearY()
extern "C"  Builder_t3974107689 * Builder_ClearY_m3739657284 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasZ()
extern "C"  bool Builder_get_HasZ_m928026615 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_Z()
extern "C"  float Builder_get_Z_m1568210653 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Z(System.Single)
extern "C"  void Builder_set_Z_m1243380654 (Builder_t3974107689 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetZ(System.Single)
extern "C"  Builder_t3974107689 * Builder_SetZ_m3364791323 (Builder_t3974107689 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearZ()
extern "C"  Builder_t3974107689 * Builder_ClearZ_m3739658245 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasW()
extern "C"  bool Builder_get_HasW_m928023732 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_W()
extern "C"  float Builder_get_W_m1568207770 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_W(System.Single)
extern "C"  void Builder_set_W_m2774983185 (Builder_t3974107689 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetW(System.Single)
extern "C"  Builder_t3974107689 * Builder_SetW_m601426558 (Builder_t3974107689 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearW()
extern "C"  Builder_t3974107689 * Builder_ClearW_m3739655362 (Builder_t3974107689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
