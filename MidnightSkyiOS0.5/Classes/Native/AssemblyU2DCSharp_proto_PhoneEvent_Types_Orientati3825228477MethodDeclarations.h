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

// proto.PhoneEvent/Types/OrientationEvent
struct OrientationEvent_t3825228477;
// Google.ProtocolBuffers.ICodedOutputStream
struct ICodedOutputStream_t3472766937;
// System.Object
struct Il2CppObject;
// System.IO.TextWriter
struct TextWriter_t2304124208;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3161063139;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t3129324470;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.Stream
struct Stream_t1561764144;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t2486733814;
// proto.PhoneEvent/Types/OrientationEvent/Builder
struct Builder_t3974107689;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Byte3161063139.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte3129324470.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati3825228477.h"

// System.Void proto.PhoneEvent/Types/OrientationEvent::.ctor()
extern "C"  void OrientationEvent__ctor_m4052810062 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent::.cctor()
extern "C"  void OrientationEvent__cctor_m600964127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::get_DefaultInstance()
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_get_DefaultInstance_m1132291695 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::get_DefaultInstanceForType()
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_get_DefaultInstanceForType_m4105736854 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::get_ThisMessage()
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_get_ThisMessage_m2476984130 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasTimestamp()
extern "C"  bool OrientationEvent_get_HasTimestamp_m1360961575 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/OrientationEvent::get_Timestamp()
extern "C"  int64_t OrientationEvent_get_Timestamp_m1743568936 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasX()
extern "C"  bool OrientationEvent_get_HasX_m1012774665 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_X()
extern "C"  float OrientationEvent_get_X_m3750496583 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasY()
extern "C"  bool OrientationEvent_get_HasY_m1012775626 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_Y()
extern "C"  float OrientationEvent_get_Y_m3750497544 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasZ()
extern "C"  bool OrientationEvent_get_HasZ_m1012776587 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_Z()
extern "C"  float OrientationEvent_get_Z_m3750498505 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasW()
extern "C"  bool OrientationEvent_get_HasW_m1012773704 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_W()
extern "C"  float OrientationEvent_get_W_m3750495622 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_IsInitialized()
extern "C"  bool OrientationEvent_get_IsInitialized_m3441123457 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
extern "C"  void OrientationEvent_WriteTo_m3922044277 (OrientationEvent_t3825228477 * __this, Il2CppObject * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/OrientationEvent::get_SerializedSize()
extern "C"  int32_t OrientationEvent_get_SerializedSize_m1065588310 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/OrientationEvent::GetHashCode()
extern "C"  int32_t OrientationEvent_GetHashCode_m2680059659 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::Equals(System.Object)
extern "C"  bool OrientationEvent_Equals_m3974315635 (OrientationEvent_t3825228477 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent::PrintTo(System.IO.TextWriter)
extern "C"  void OrientationEvent_PrintTo_m103002315 (OrientationEvent_t3825228477 * __this, TextWriter_t2304124208 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseFrom(Google.ProtocolBuffers.ByteString)
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseFrom_m1883815954 (Il2CppObject * __this /* static, unused */, ByteString_t3161063139 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseFrom_m2747135968 (Il2CppObject * __this /* static, unused */, ByteString_t3161063139 * ___data0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseFrom(System.Byte[])
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseFrom_m4280786058 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseFrom_m1471644264 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseFrom(System.IO.Stream)
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseFrom_m160753206 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseFrom_m1051196 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseDelimitedFrom(System.IO.Stream)
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseDelimitedFrom_m372634407 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseDelimitedFrom_m2438168683 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseFrom_m90839947 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_ParseFrom_m7673991 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::MakeReadOnly()
extern "C"  OrientationEvent_t3825228477 * OrientationEvent_MakeReadOnly_m3331690736 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent::CreateBuilder()
extern "C"  Builder_t3974107689 * OrientationEvent_CreateBuilder_m282118581 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent::ToBuilder()
extern "C"  Builder_t3974107689 * OrientationEvent_ToBuilder_m2334596502 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent::CreateBuilderForType()
extern "C"  Builder_t3974107689 * OrientationEvent_CreateBuilderForType_m2415006864 (OrientationEvent_t3825228477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent::CreateBuilder(proto.PhoneEvent/Types/OrientationEvent)
extern "C"  Builder_t3974107689 * OrientationEvent_CreateBuilder_m1740230144 (Il2CppObject * __this /* static, unused */, OrientationEvent_t3825228477 * ___prototype0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
