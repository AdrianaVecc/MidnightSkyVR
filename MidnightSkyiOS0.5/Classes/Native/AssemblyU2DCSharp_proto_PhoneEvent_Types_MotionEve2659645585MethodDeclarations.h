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

// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t2659645585;
// System.Collections.Generic.IList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct IList_1_t2885372684;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct Pointer_t190725481;
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
// proto.PhoneEvent/Types/MotionEvent/Builder
struct Builder_t2183502845;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Byte3161063139.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte3129324470.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2659645585.h"

// System.Void proto.PhoneEvent/Types/MotionEvent::.ctor()
extern "C"  void MotionEvent__ctor_m227273514 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent::.cctor()
extern "C"  void MotionEvent__cctor_m2268415427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_DefaultInstance()
extern "C"  MotionEvent_t2659645585 * MotionEvent_get_DefaultInstance_m3462003529 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_DefaultInstanceForType()
extern "C"  MotionEvent_t2659645585 * MotionEvent_get_DefaultInstanceForType_m1577956476 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_ThisMessage()
extern "C"  MotionEvent_t2659645585 * MotionEvent_get_ThisMessage_m3513833756 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_HasTimestamp()
extern "C"  bool MotionEvent_get_HasTimestamp_m1850751923 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/MotionEvent::get_Timestamp()
extern "C"  int64_t MotionEvent_get_Timestamp_m1630195590 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_HasAction()
extern "C"  bool MotionEvent_get_HasAction_m577177627 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_Action()
extern "C"  int32_t MotionEvent_get_Action_m3671431079 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer> proto.PhoneEvent/Types/MotionEvent::get_PointersList()
extern "C"  Il2CppObject* MotionEvent_get_PointersList_m1622234738 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_PointersCount()
extern "C"  int32_t MotionEvent_get_PointersCount_m1661986730 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent::GetPointers(System.Int32)
extern "C"  Pointer_t190725481 * MotionEvent_GetPointers_m3014720433 (MotionEvent_t2659645585 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_IsInitialized()
extern "C"  bool MotionEvent_get_IsInitialized_m1444755061 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
extern "C"  void MotionEvent_WriteTo_m3890782745 (MotionEvent_t2659645585 * __this, Il2CppObject * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_SerializedSize()
extern "C"  int32_t MotionEvent_get_SerializedSize_m2892296534 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::GetHashCode()
extern "C"  int32_t MotionEvent_GetHashCode_m131955723 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::Equals(System.Object)
extern "C"  bool MotionEvent_Equals_m1019701095 (MotionEvent_t2659645585 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent::PrintTo(System.IO.TextWriter)
extern "C"  void MotionEvent_PrintTo_m4270036391 (MotionEvent_t2659645585 * __this, TextWriter_t2304124208 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ByteString)
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseFrom_m3990443512 (Il2CppObject * __this /* static, unused */, ByteString_t3161063139 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseFrom_m889633978 (Il2CppObject * __this /* static, unused */, ByteString_t3161063139 * ___data0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.Byte[])
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseFrom_m2054529392 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseFrom_m2783688770 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.IO.Stream)
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseFrom_m633401232 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseFrom_m2916535842 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseDelimitedFrom(System.IO.Stream)
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseDelimitedFrom_m1649790733 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseDelimitedFrom_m1836302149 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseFrom_m2303080165 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t2659645585 * MotionEvent_ParseFrom_m3393718893 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, ExtensionRegistry_t3129324470 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::MakeReadOnly()
extern "C"  MotionEvent_t2659645585 * MotionEvent_MakeReadOnly_m1217617238 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::CreateBuilder()
extern "C"  Builder_t2183502845 * MotionEvent_CreateBuilder_m1612899687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::ToBuilder()
extern "C"  Builder_t2183502845 * MotionEvent_ToBuilder_m3794723400 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::CreateBuilderForType()
extern "C"  Builder_t2183502845 * MotionEvent_CreateBuilderForType_m3131886750 (MotionEvent_t2659645585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::CreateBuilder(proto.PhoneEvent/Types/MotionEvent)
extern "C"  Builder_t2183502845 * MotionEvent_CreateBuilder_m3590336374 (Il2CppObject * __this /* static, unused */, MotionEvent_t2659645585 * ___prototype0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
