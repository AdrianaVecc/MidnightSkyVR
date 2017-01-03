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

// proto.PhoneEvent/Types/KeyEvent
struct KeyEvent_t2095740558;
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
// proto.PhoneEvent/Types/KeyEvent/Builder
struct Builder_t1063111930;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Byte3161063139.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte3129324470.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent2095740558.h"

// System.Void proto.PhoneEvent/Types/KeyEvent::.ctor()
extern "C"  void KeyEvent__ctor_m3138650269 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/KeyEvent::.cctor()
extern "C"  void KeyEvent__cctor_m2326781616 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::get_DefaultInstance()
extern "C"  KeyEvent_t2095740558 * KeyEvent_get_DefaultInstance_m3126969741 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::get_DefaultInstanceForType()
extern "C"  KeyEvent_t2095740558 * KeyEvent_get_DefaultInstanceForType_m1902024120 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::get_ThisMessage()
extern "C"  KeyEvent_t2095740558 * KeyEvent_get_ThisMessage_m341861728 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/KeyEvent::get_HasAction()
extern "C"  bool KeyEvent_get_HasAction_m3001439350 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/KeyEvent::get_Action()
extern "C"  int32_t KeyEvent_get_Action_m3699916984 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/KeyEvent::get_HasCode()
extern "C"  bool KeyEvent_get_HasCode_m3954775597 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/KeyEvent::get_Code()
extern "C"  int32_t KeyEvent_get_Code_m1510812399 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/KeyEvent::get_IsInitialized()
extern "C"  bool KeyEvent_get_IsInitialized_m3273186640 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/KeyEvent::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
extern "C"  void KeyEvent_WriteTo_m171492038 (KeyEvent_t2095740558 * __this, Il2CppObject * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/KeyEvent::get_SerializedSize()
extern "C"  int32_t KeyEvent_get_SerializedSize_m3790207335 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/KeyEvent::GetHashCode()
extern "C"  int32_t KeyEvent_GetHashCode_m1015018778 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/KeyEvent::Equals(System.Object)
extern "C"  bool KeyEvent_Equals_m1500824450 (KeyEvent_t2095740558 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/KeyEvent::PrintTo(System.IO.TextWriter)
extern "C"  void KeyEvent_PrintTo_m3152397018 (KeyEvent_t2095740558 * __this, TextWriter_t2304124208 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(Google.ProtocolBuffers.ByteString)
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseFrom_m2501394228 (Il2CppObject * __this /* static, unused */, ByteString_t3161063139 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseFrom_m614098686 (Il2CppObject * __this /* static, unused */, ByteString_t3161063139 * ___data0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(System.Byte[])
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseFrom_m2566946988 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseFrom_m3483380870 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(System.IO.Stream)
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseFrom_m1752233684 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseFrom_m3967599454 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseDelimitedFrom(System.IO.Stream)
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseDelimitedFrom_m188724297 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseDelimitedFrom_m1659366793 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseFrom_m719696425 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t2095740558 * KeyEvent_ParseFrom_m3740339113 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::MakeReadOnly()
extern "C"  KeyEvent_t2095740558 * KeyEvent_MakeReadOnly_m294967186 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent::CreateBuilder()
extern "C"  Builder_t1063111930 * KeyEvent_CreateBuilder_m67365971 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent::ToBuilder()
extern "C"  Builder_t1063111930 * KeyEvent_ToBuilder_m1226850100 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent::CreateBuilderForType()
extern "C"  Builder_t1063111930 * KeyEvent_CreateBuilderForType_m843998258 (KeyEvent_t2095740558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent::CreateBuilder(proto.PhoneEvent/Types/KeyEvent)
extern "C"  Builder_t1063111930 * KeyEvent_CreateBuilder_m785213937 (Il2CppObject * __this /* static, unused */, KeyEvent_t2095740558 * ___prototype0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
