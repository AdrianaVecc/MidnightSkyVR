#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t2659645585;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.UInt32[]
struct UInt32U5BU5D_t3230734560;
// Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct PopsicleList_1_t3193761970;

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene3218417365.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/MotionEvent
struct  MotionEvent_t2659645585  : public GeneratedMessageLite_2_t3218417365
{
public:
	// System.Boolean proto.PhoneEvent/Types/MotionEvent::hasTimestamp
	bool ___hasTimestamp_6;
	// System.Int64 proto.PhoneEvent/Types/MotionEvent::timestamp_
	int64_t ___timestamp__7;
	// System.Boolean proto.PhoneEvent/Types/MotionEvent::hasAction
	bool ___hasAction_8;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent::action_
	int32_t ___action__9;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer> proto.PhoneEvent/Types/MotionEvent::pointers_
	PopsicleList_1_t3193761970 * ___pointers__10;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_11;

public:
	inline static int32_t get_offset_of_hasTimestamp_6() { return static_cast<int32_t>(offsetof(MotionEvent_t2659645585, ___hasTimestamp_6)); }
	inline bool get_hasTimestamp_6() const { return ___hasTimestamp_6; }
	inline bool* get_address_of_hasTimestamp_6() { return &___hasTimestamp_6; }
	inline void set_hasTimestamp_6(bool value)
	{
		___hasTimestamp_6 = value;
	}

	inline static int32_t get_offset_of_timestamp__7() { return static_cast<int32_t>(offsetof(MotionEvent_t2659645585, ___timestamp__7)); }
	inline int64_t get_timestamp__7() const { return ___timestamp__7; }
	inline int64_t* get_address_of_timestamp__7() { return &___timestamp__7; }
	inline void set_timestamp__7(int64_t value)
	{
		___timestamp__7 = value;
	}

	inline static int32_t get_offset_of_hasAction_8() { return static_cast<int32_t>(offsetof(MotionEvent_t2659645585, ___hasAction_8)); }
	inline bool get_hasAction_8() const { return ___hasAction_8; }
	inline bool* get_address_of_hasAction_8() { return &___hasAction_8; }
	inline void set_hasAction_8(bool value)
	{
		___hasAction_8 = value;
	}

	inline static int32_t get_offset_of_action__9() { return static_cast<int32_t>(offsetof(MotionEvent_t2659645585, ___action__9)); }
	inline int32_t get_action__9() const { return ___action__9; }
	inline int32_t* get_address_of_action__9() { return &___action__9; }
	inline void set_action__9(int32_t value)
	{
		___action__9 = value;
	}

	inline static int32_t get_offset_of_pointers__10() { return static_cast<int32_t>(offsetof(MotionEvent_t2659645585, ___pointers__10)); }
	inline PopsicleList_1_t3193761970 * get_pointers__10() const { return ___pointers__10; }
	inline PopsicleList_1_t3193761970 ** get_address_of_pointers__10() { return &___pointers__10; }
	inline void set_pointers__10(PopsicleList_1_t3193761970 * value)
	{
		___pointers__10 = value;
		Il2CppCodeGenWriteBarrier(&___pointers__10, value);
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_11() { return static_cast<int32_t>(offsetof(MotionEvent_t2659645585, ___memoizedSerializedSize_11)); }
	inline int32_t get_memoizedSerializedSize_11() const { return ___memoizedSerializedSize_11; }
	inline int32_t* get_address_of_memoizedSerializedSize_11() { return &___memoizedSerializedSize_11; }
	inline void set_memoizedSerializedSize_11(int32_t value)
	{
		___memoizedSerializedSize_11 = value;
	}
};

struct MotionEvent_t2659645585_StaticFields
{
public:
	// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::defaultInstance
	MotionEvent_t2659645585 * ___defaultInstance_3;
	// System.String[] proto.PhoneEvent/Types/MotionEvent::_motionEventFieldNames
	StringU5BU5D_t4054002952* ____motionEventFieldNames_4;
	// System.UInt32[] proto.PhoneEvent/Types/MotionEvent::_motionEventFieldTags
	UInt32U5BU5D_t3230734560* ____motionEventFieldTags_5;

public:
	inline static int32_t get_offset_of_defaultInstance_3() { return static_cast<int32_t>(offsetof(MotionEvent_t2659645585_StaticFields, ___defaultInstance_3)); }
	inline MotionEvent_t2659645585 * get_defaultInstance_3() const { return ___defaultInstance_3; }
	inline MotionEvent_t2659645585 ** get_address_of_defaultInstance_3() { return &___defaultInstance_3; }
	inline void set_defaultInstance_3(MotionEvent_t2659645585 * value)
	{
		___defaultInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultInstance_3, value);
	}

	inline static int32_t get_offset_of__motionEventFieldNames_4() { return static_cast<int32_t>(offsetof(MotionEvent_t2659645585_StaticFields, ____motionEventFieldNames_4)); }
	inline StringU5BU5D_t4054002952* get__motionEventFieldNames_4() const { return ____motionEventFieldNames_4; }
	inline StringU5BU5D_t4054002952** get_address_of__motionEventFieldNames_4() { return &____motionEventFieldNames_4; }
	inline void set__motionEventFieldNames_4(StringU5BU5D_t4054002952* value)
	{
		____motionEventFieldNames_4 = value;
		Il2CppCodeGenWriteBarrier(&____motionEventFieldNames_4, value);
	}

	inline static int32_t get_offset_of__motionEventFieldTags_5() { return static_cast<int32_t>(offsetof(MotionEvent_t2659645585_StaticFields, ____motionEventFieldTags_5)); }
	inline UInt32U5BU5D_t3230734560* get__motionEventFieldTags_5() const { return ____motionEventFieldTags_5; }
	inline UInt32U5BU5D_t3230734560** get_address_of__motionEventFieldTags_5() { return &____motionEventFieldTags_5; }
	inline void set__motionEventFieldTags_5(UInt32U5BU5D_t3230734560* value)
	{
		____motionEventFieldTags_5 = value;
		Il2CppCodeGenWriteBarrier(&____motionEventFieldTags_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
