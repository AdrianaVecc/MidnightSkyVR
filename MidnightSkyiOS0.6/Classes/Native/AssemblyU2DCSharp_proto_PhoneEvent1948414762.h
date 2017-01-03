#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// proto.PhoneEvent
struct PhoneEvent_t1948414762;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.UInt32[]
struct UInt32U5BU5D_t3230734560;
// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t2659645585;
// proto.PhoneEvent/Types/GyroscopeEvent
struct GyroscopeEvent_t2921203048;
// proto.PhoneEvent/Types/AccelerometerEvent
struct AccelerometerEvent_t148610782;
// proto.PhoneEvent/Types/DepthMapEvent
struct DepthMapEvent_t3758135118;
// proto.PhoneEvent/Types/OrientationEvent
struct OrientationEvent_t3825228477;
// proto.PhoneEvent/Types/KeyEvent
struct KeyEvent_t2095740558;

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene2172393945.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type923828173.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent
struct  PhoneEvent_t1948414762  : public GeneratedMessageLite_2_t2172393945
{
public:
	// System.Boolean proto.PhoneEvent::hasType
	bool ___hasType_10;
	// proto.PhoneEvent/Types/Type proto.PhoneEvent::type_
	int32_t ___type__11;
	// System.Boolean proto.PhoneEvent::hasMotionEvent
	bool ___hasMotionEvent_12;
	// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent::motionEvent_
	MotionEvent_t2659645585 * ___motionEvent__13;
	// System.Boolean proto.PhoneEvent::hasGyroscopeEvent
	bool ___hasGyroscopeEvent_14;
	// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent::gyroscopeEvent_
	GyroscopeEvent_t2921203048 * ___gyroscopeEvent__15;
	// System.Boolean proto.PhoneEvent::hasAccelerometerEvent
	bool ___hasAccelerometerEvent_16;
	// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent::accelerometerEvent_
	AccelerometerEvent_t148610782 * ___accelerometerEvent__17;
	// System.Boolean proto.PhoneEvent::hasDepthMapEvent
	bool ___hasDepthMapEvent_18;
	// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent::depthMapEvent_
	DepthMapEvent_t3758135118 * ___depthMapEvent__19;
	// System.Boolean proto.PhoneEvent::hasOrientationEvent
	bool ___hasOrientationEvent_20;
	// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent::orientationEvent_
	OrientationEvent_t3825228477 * ___orientationEvent__21;
	// System.Boolean proto.PhoneEvent::hasKeyEvent
	bool ___hasKeyEvent_22;
	// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent::keyEvent_
	KeyEvent_t2095740558 * ___keyEvent__23;
	// System.Int32 proto.PhoneEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_24;

public:
	inline static int32_t get_offset_of_hasType_10() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___hasType_10)); }
	inline bool get_hasType_10() const { return ___hasType_10; }
	inline bool* get_address_of_hasType_10() { return &___hasType_10; }
	inline void set_hasType_10(bool value)
	{
		___hasType_10 = value;
	}

	inline static int32_t get_offset_of_type__11() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___type__11)); }
	inline int32_t get_type__11() const { return ___type__11; }
	inline int32_t* get_address_of_type__11() { return &___type__11; }
	inline void set_type__11(int32_t value)
	{
		___type__11 = value;
	}

	inline static int32_t get_offset_of_hasMotionEvent_12() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___hasMotionEvent_12)); }
	inline bool get_hasMotionEvent_12() const { return ___hasMotionEvent_12; }
	inline bool* get_address_of_hasMotionEvent_12() { return &___hasMotionEvent_12; }
	inline void set_hasMotionEvent_12(bool value)
	{
		___hasMotionEvent_12 = value;
	}

	inline static int32_t get_offset_of_motionEvent__13() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___motionEvent__13)); }
	inline MotionEvent_t2659645585 * get_motionEvent__13() const { return ___motionEvent__13; }
	inline MotionEvent_t2659645585 ** get_address_of_motionEvent__13() { return &___motionEvent__13; }
	inline void set_motionEvent__13(MotionEvent_t2659645585 * value)
	{
		___motionEvent__13 = value;
		Il2CppCodeGenWriteBarrier(&___motionEvent__13, value);
	}

	inline static int32_t get_offset_of_hasGyroscopeEvent_14() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___hasGyroscopeEvent_14)); }
	inline bool get_hasGyroscopeEvent_14() const { return ___hasGyroscopeEvent_14; }
	inline bool* get_address_of_hasGyroscopeEvent_14() { return &___hasGyroscopeEvent_14; }
	inline void set_hasGyroscopeEvent_14(bool value)
	{
		___hasGyroscopeEvent_14 = value;
	}

	inline static int32_t get_offset_of_gyroscopeEvent__15() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___gyroscopeEvent__15)); }
	inline GyroscopeEvent_t2921203048 * get_gyroscopeEvent__15() const { return ___gyroscopeEvent__15; }
	inline GyroscopeEvent_t2921203048 ** get_address_of_gyroscopeEvent__15() { return &___gyroscopeEvent__15; }
	inline void set_gyroscopeEvent__15(GyroscopeEvent_t2921203048 * value)
	{
		___gyroscopeEvent__15 = value;
		Il2CppCodeGenWriteBarrier(&___gyroscopeEvent__15, value);
	}

	inline static int32_t get_offset_of_hasAccelerometerEvent_16() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___hasAccelerometerEvent_16)); }
	inline bool get_hasAccelerometerEvent_16() const { return ___hasAccelerometerEvent_16; }
	inline bool* get_address_of_hasAccelerometerEvent_16() { return &___hasAccelerometerEvent_16; }
	inline void set_hasAccelerometerEvent_16(bool value)
	{
		___hasAccelerometerEvent_16 = value;
	}

	inline static int32_t get_offset_of_accelerometerEvent__17() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___accelerometerEvent__17)); }
	inline AccelerometerEvent_t148610782 * get_accelerometerEvent__17() const { return ___accelerometerEvent__17; }
	inline AccelerometerEvent_t148610782 ** get_address_of_accelerometerEvent__17() { return &___accelerometerEvent__17; }
	inline void set_accelerometerEvent__17(AccelerometerEvent_t148610782 * value)
	{
		___accelerometerEvent__17 = value;
		Il2CppCodeGenWriteBarrier(&___accelerometerEvent__17, value);
	}

	inline static int32_t get_offset_of_hasDepthMapEvent_18() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___hasDepthMapEvent_18)); }
	inline bool get_hasDepthMapEvent_18() const { return ___hasDepthMapEvent_18; }
	inline bool* get_address_of_hasDepthMapEvent_18() { return &___hasDepthMapEvent_18; }
	inline void set_hasDepthMapEvent_18(bool value)
	{
		___hasDepthMapEvent_18 = value;
	}

	inline static int32_t get_offset_of_depthMapEvent__19() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___depthMapEvent__19)); }
	inline DepthMapEvent_t3758135118 * get_depthMapEvent__19() const { return ___depthMapEvent__19; }
	inline DepthMapEvent_t3758135118 ** get_address_of_depthMapEvent__19() { return &___depthMapEvent__19; }
	inline void set_depthMapEvent__19(DepthMapEvent_t3758135118 * value)
	{
		___depthMapEvent__19 = value;
		Il2CppCodeGenWriteBarrier(&___depthMapEvent__19, value);
	}

	inline static int32_t get_offset_of_hasOrientationEvent_20() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___hasOrientationEvent_20)); }
	inline bool get_hasOrientationEvent_20() const { return ___hasOrientationEvent_20; }
	inline bool* get_address_of_hasOrientationEvent_20() { return &___hasOrientationEvent_20; }
	inline void set_hasOrientationEvent_20(bool value)
	{
		___hasOrientationEvent_20 = value;
	}

	inline static int32_t get_offset_of_orientationEvent__21() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___orientationEvent__21)); }
	inline OrientationEvent_t3825228477 * get_orientationEvent__21() const { return ___orientationEvent__21; }
	inline OrientationEvent_t3825228477 ** get_address_of_orientationEvent__21() { return &___orientationEvent__21; }
	inline void set_orientationEvent__21(OrientationEvent_t3825228477 * value)
	{
		___orientationEvent__21 = value;
		Il2CppCodeGenWriteBarrier(&___orientationEvent__21, value);
	}

	inline static int32_t get_offset_of_hasKeyEvent_22() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___hasKeyEvent_22)); }
	inline bool get_hasKeyEvent_22() const { return ___hasKeyEvent_22; }
	inline bool* get_address_of_hasKeyEvent_22() { return &___hasKeyEvent_22; }
	inline void set_hasKeyEvent_22(bool value)
	{
		___hasKeyEvent_22 = value;
	}

	inline static int32_t get_offset_of_keyEvent__23() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___keyEvent__23)); }
	inline KeyEvent_t2095740558 * get_keyEvent__23() const { return ___keyEvent__23; }
	inline KeyEvent_t2095740558 ** get_address_of_keyEvent__23() { return &___keyEvent__23; }
	inline void set_keyEvent__23(KeyEvent_t2095740558 * value)
	{
		___keyEvent__23 = value;
		Il2CppCodeGenWriteBarrier(&___keyEvent__23, value);
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_24() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762, ___memoizedSerializedSize_24)); }
	inline int32_t get_memoizedSerializedSize_24() const { return ___memoizedSerializedSize_24; }
	inline int32_t* get_address_of_memoizedSerializedSize_24() { return &___memoizedSerializedSize_24; }
	inline void set_memoizedSerializedSize_24(int32_t value)
	{
		___memoizedSerializedSize_24 = value;
	}
};

struct PhoneEvent_t1948414762_StaticFields
{
public:
	// proto.PhoneEvent proto.PhoneEvent::defaultInstance
	PhoneEvent_t1948414762 * ___defaultInstance_7;
	// System.String[] proto.PhoneEvent::_phoneEventFieldNames
	StringU5BU5D_t4054002952* ____phoneEventFieldNames_8;
	// System.UInt32[] proto.PhoneEvent::_phoneEventFieldTags
	UInt32U5BU5D_t3230734560* ____phoneEventFieldTags_9;

public:
	inline static int32_t get_offset_of_defaultInstance_7() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762_StaticFields, ___defaultInstance_7)); }
	inline PhoneEvent_t1948414762 * get_defaultInstance_7() const { return ___defaultInstance_7; }
	inline PhoneEvent_t1948414762 ** get_address_of_defaultInstance_7() { return &___defaultInstance_7; }
	inline void set_defaultInstance_7(PhoneEvent_t1948414762 * value)
	{
		___defaultInstance_7 = value;
		Il2CppCodeGenWriteBarrier(&___defaultInstance_7, value);
	}

	inline static int32_t get_offset_of__phoneEventFieldNames_8() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762_StaticFields, ____phoneEventFieldNames_8)); }
	inline StringU5BU5D_t4054002952* get__phoneEventFieldNames_8() const { return ____phoneEventFieldNames_8; }
	inline StringU5BU5D_t4054002952** get_address_of__phoneEventFieldNames_8() { return &____phoneEventFieldNames_8; }
	inline void set__phoneEventFieldNames_8(StringU5BU5D_t4054002952* value)
	{
		____phoneEventFieldNames_8 = value;
		Il2CppCodeGenWriteBarrier(&____phoneEventFieldNames_8, value);
	}

	inline static int32_t get_offset_of__phoneEventFieldTags_9() { return static_cast<int32_t>(offsetof(PhoneEvent_t1948414762_StaticFields, ____phoneEventFieldTags_9)); }
	inline UInt32U5BU5D_t3230734560* get__phoneEventFieldTags_9() const { return ____phoneEventFieldTags_9; }
	inline UInt32U5BU5D_t3230734560** get_address_of__phoneEventFieldTags_9() { return &____phoneEventFieldTags_9; }
	inline void set__phoneEventFieldTags_9(UInt32U5BU5D_t3230734560* value)
	{
		____phoneEventFieldTags_9 = value;
		Il2CppCodeGenWriteBarrier(&____phoneEventFieldTags_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
