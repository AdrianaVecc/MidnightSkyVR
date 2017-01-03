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
// System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>
struct List_1_t784125972;
// System.String
struct String_t;
// Gvr.Internal.EmulatorTouchEvent
struct EmulatorTouchEvent_t2112311150;
struct EmulatorTouchEvent_t2112311150_marshaled_pinvoke;
struct EmulatorTouchEvent_t2112311150_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent2112311150.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2659645585.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A926435919.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3710907716.h"

// System.Void Gvr.Internal.EmulatorTouchEvent::.ctor(proto.PhoneEvent/Types/MotionEvent,System.Int64)
extern "C"  void EmulatorTouchEvent__ctor_m460315732 (EmulatorTouchEvent_t2112311150 * __this, MotionEvent_t2659645585 * ___proto0, int64_t ___lastDownTimeMs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorTouchEvent::.ctor(Gvr.Internal.EmulatorTouchEvent/Action,System.Int32,System.Int32,System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>)
extern "C"  void EmulatorTouchEvent__ctor_m1030434664 (EmulatorTouchEvent_t2112311150 * __this, int32_t ___action0, int32_t ___pointerId1, int32_t ___relativeTimestamp2, List_1_t784125972 * ___pointers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorTouchEvent::.cctor()
extern "C"  void EmulatorTouchEvent__cctor_m1272376920 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.EmulatorTouchEvent/Action Gvr.Internal.EmulatorTouchEvent::getActionMasked()
extern "C"  int32_t EmulatorTouchEvent_getActionMasked_m2425811928 (EmulatorTouchEvent_t2112311150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.EmulatorTouchEvent/Pointer Gvr.Internal.EmulatorTouchEvent::getActionPointer()
extern "C"  Pointer_t3710907716  EmulatorTouchEvent_getActionPointer_m3680508945 (EmulatorTouchEvent_t2112311150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorTouchEvent::getActionUnmasked(Gvr.Internal.EmulatorTouchEvent/Action,System.Int32)
extern "C"  int32_t EmulatorTouchEvent_getActionUnmasked_m1743037333 (Il2CppObject * __this /* static, unused */, int32_t ___action0, int32_t ___fingerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorTouchEvent::findPointerIndex(System.Int32,System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>)
extern "C"  int32_t EmulatorTouchEvent_findPointerIndex_m839828110 (Il2CppObject * __this /* static, unused */, int32_t ___fingerId0, List_1_t784125972 * ___pointers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Gvr.Internal.EmulatorTouchEvent::ToString()
extern "C"  String_t* EmulatorTouchEvent_ToString_m3028995352 (EmulatorTouchEvent_t2112311150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EmulatorTouchEvent_t2112311150;
struct EmulatorTouchEvent_t2112311150_marshaled_pinvoke;

extern "C" void EmulatorTouchEvent_t2112311150_marshal_pinvoke(const EmulatorTouchEvent_t2112311150& unmarshaled, EmulatorTouchEvent_t2112311150_marshaled_pinvoke& marshaled);
extern "C" void EmulatorTouchEvent_t2112311150_marshal_pinvoke_back(const EmulatorTouchEvent_t2112311150_marshaled_pinvoke& marshaled, EmulatorTouchEvent_t2112311150& unmarshaled);
extern "C" void EmulatorTouchEvent_t2112311150_marshal_pinvoke_cleanup(EmulatorTouchEvent_t2112311150_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EmulatorTouchEvent_t2112311150;
struct EmulatorTouchEvent_t2112311150_marshaled_com;

extern "C" void EmulatorTouchEvent_t2112311150_marshal_com(const EmulatorTouchEvent_t2112311150& unmarshaled, EmulatorTouchEvent_t2112311150_marshaled_com& marshaled);
extern "C" void EmulatorTouchEvent_t2112311150_marshal_com_back(const EmulatorTouchEvent_t2112311150_marshaled_com& marshaled, EmulatorTouchEvent_t2112311150& unmarshaled);
extern "C" void EmulatorTouchEvent_t2112311150_marshal_com_cleanup(EmulatorTouchEvent_t2112311150_marshaled_com& marshaled);
