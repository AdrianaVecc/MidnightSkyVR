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

// proto.PhoneEvent/Types/DepthMapEvent/Builder
struct Builder_t3987156410;
// proto.PhoneEvent/Types/DepthMapEvent
struct DepthMapEvent_t3758135118;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t2166426326;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t2486733814;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t3129324470;
// Google.ProtocolBuffers.Collections.IPopsicleList`1<System.Single>
struct IPopsicleList_1_t92617556;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t3297864633;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3758135118.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte3129324470.h"

// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::.ctor()
extern "C"  void Builder__ctor_m3629200929 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::.ctor(proto.PhoneEvent/Types/DepthMapEvent)
extern "C"  void Builder__ctor_m2906778771 (Builder_t3987156410 * __this, DepthMapEvent_t3758135118 * ___cloneFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::get_ThisBuilder()
extern "C"  Builder_t3987156410 * Builder_get_ThisBuilder_m389053520 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::PrepareBuilder()
extern "C"  DepthMapEvent_t3758135118 * Builder_PrepareBuilder_m991932806 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_IsInitialized()
extern "C"  bool Builder_get_IsInitialized_m833206252 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::get_MessageBeingBuilt()
extern "C"  DepthMapEvent_t3758135118 * Builder_get_MessageBeingBuilt_m3621621613 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::Clear()
extern "C"  Builder_t3987156410 * Builder_Clear_m2840407657 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::Clone()
extern "C"  Builder_t3987156410 * Builder_Clone_m2850017657 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::get_DefaultInstanceForType()
extern "C"  DepthMapEvent_t3758135118 * Builder_get_DefaultInstanceForType_m1261604552 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::BuildPartial()
extern "C"  DepthMapEvent_t3758135118 * Builder_BuildPartial_m1879645349 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C"  Builder_t3987156410 * Builder_MergeFrom_m1495263200 (Builder_t3987156410 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(proto.PhoneEvent/Types/DepthMapEvent)
extern "C"  Builder_t3987156410 * Builder_MergeFrom_m25373008 (Builder_t3987156410 * __this, DepthMapEvent_t3758135118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Builder_t3987156410 * Builder_MergeFrom_m2006319178 (Builder_t3987156410 * __this, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Builder_t3987156410 * Builder_MergeFrom_m1652315816 (Builder_t3987156410 * __this, Il2CppObject * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_HasTimestamp()
extern "C"  bool Builder_get_HasTimestamp_m3909234524 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_Timestamp()
extern "C"  int64_t Builder_get_Timestamp_m103518781 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Timestamp(System.Int64)
extern "C"  void Builder_set_Timestamp_m1186008394 (Builder_t3987156410 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetTimestamp(System.Int64)
extern "C"  Builder_t3987156410 * Builder_SetTimestamp_m2970633708 (Builder_t3987156410 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearTimestamp()
extern "C"  Builder_t3987156410 * Builder_ClearTimestamp_m928240655 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_HasWidth()
extern "C"  bool Builder_get_HasWidth_m984674956 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_Width()
extern "C"  int32_t Builder_get_Width_m3380736590 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Width(System.Int32)
extern "C"  void Builder_set_Width_m4261178105 (Builder_t3987156410 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetWidth(System.Int32)
extern "C"  Builder_t3987156410 * Builder_SetWidth_m1904559259 (Builder_t3987156410 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearWidth()
extern "C"  Builder_t3987156410 * Builder_ClearWidth_m2048846015 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_HasHeight()
extern "C"  bool Builder_get_HasHeight_m963966915 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_Height()
extern "C"  int32_t Builder_get_Height_m2227433537 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Height(System.Int32)
extern "C"  void Builder_set_Height_m273387256 (Builder_t3987156410 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetHeight(System.Int32)
extern "C"  Builder_t3987156410 * Builder_SetHeight_m232647062 (Builder_t3987156410 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearHeight()
extern "C"  Builder_t3987156410 * Builder_ClearHeight_m3888498672 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.Collections.IPopsicleList`1<System.Single> proto.PhoneEvent/Types/DepthMapEvent/Builder::get_ZDistancesList()
extern "C"  Il2CppObject* Builder_get_ZDistancesList_m496780858 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_ZDistancesCount()
extern "C"  int32_t Builder_get_ZDistancesCount_m2792464947 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/DepthMapEvent/Builder::GetZDistances(System.Int32)
extern "C"  float Builder_GetZDistances_m2498878206 (Builder_t3987156410 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetZDistances(System.Int32,System.Single)
extern "C"  Builder_t3987156410 * Builder_SetZDistances_m3142757528 (Builder_t3987156410 * __this, int32_t ___index0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::AddZDistances(System.Single)
extern "C"  Builder_t3987156410 * Builder_AddZDistances_m1909808362 (Builder_t3987156410 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::AddRangeZDistances(System.Collections.Generic.IEnumerable`1<System.Single>)
extern "C"  Builder_t3987156410 * Builder_AddRangeZDistances_m1426797836 (Builder_t3987156410 * __this, Il2CppObject* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearZDistances()
extern "C"  Builder_t3987156410 * Builder_ClearZDistances_m927202125 (Builder_t3987156410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
