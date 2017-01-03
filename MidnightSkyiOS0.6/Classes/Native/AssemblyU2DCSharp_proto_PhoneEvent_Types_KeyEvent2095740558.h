#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// proto.PhoneEvent/Types/KeyEvent
struct KeyEvent_t2095740558;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.UInt32[]
struct UInt32U5BU5D_t3230734560;

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene1727412545.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/KeyEvent
struct  KeyEvent_t2095740558  : public GeneratedMessageLite_2_t1727412545
{
public:
	// System.Boolean proto.PhoneEvent/Types/KeyEvent::hasAction
	bool ___hasAction_5;
	// System.Int32 proto.PhoneEvent/Types/KeyEvent::action_
	int32_t ___action__6;
	// System.Boolean proto.PhoneEvent/Types/KeyEvent::hasCode
	bool ___hasCode_7;
	// System.Int32 proto.PhoneEvent/Types/KeyEvent::code_
	int32_t ___code__8;
	// System.Int32 proto.PhoneEvent/Types/KeyEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_9;

public:
	inline static int32_t get_offset_of_hasAction_5() { return static_cast<int32_t>(offsetof(KeyEvent_t2095740558, ___hasAction_5)); }
	inline bool get_hasAction_5() const { return ___hasAction_5; }
	inline bool* get_address_of_hasAction_5() { return &___hasAction_5; }
	inline void set_hasAction_5(bool value)
	{
		___hasAction_5 = value;
	}

	inline static int32_t get_offset_of_action__6() { return static_cast<int32_t>(offsetof(KeyEvent_t2095740558, ___action__6)); }
	inline int32_t get_action__6() const { return ___action__6; }
	inline int32_t* get_address_of_action__6() { return &___action__6; }
	inline void set_action__6(int32_t value)
	{
		___action__6 = value;
	}

	inline static int32_t get_offset_of_hasCode_7() { return static_cast<int32_t>(offsetof(KeyEvent_t2095740558, ___hasCode_7)); }
	inline bool get_hasCode_7() const { return ___hasCode_7; }
	inline bool* get_address_of_hasCode_7() { return &___hasCode_7; }
	inline void set_hasCode_7(bool value)
	{
		___hasCode_7 = value;
	}

	inline static int32_t get_offset_of_code__8() { return static_cast<int32_t>(offsetof(KeyEvent_t2095740558, ___code__8)); }
	inline int32_t get_code__8() const { return ___code__8; }
	inline int32_t* get_address_of_code__8() { return &___code__8; }
	inline void set_code__8(int32_t value)
	{
		___code__8 = value;
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_9() { return static_cast<int32_t>(offsetof(KeyEvent_t2095740558, ___memoizedSerializedSize_9)); }
	inline int32_t get_memoizedSerializedSize_9() const { return ___memoizedSerializedSize_9; }
	inline int32_t* get_address_of_memoizedSerializedSize_9() { return &___memoizedSerializedSize_9; }
	inline void set_memoizedSerializedSize_9(int32_t value)
	{
		___memoizedSerializedSize_9 = value;
	}
};

struct KeyEvent_t2095740558_StaticFields
{
public:
	// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::defaultInstance
	KeyEvent_t2095740558 * ___defaultInstance_2;
	// System.String[] proto.PhoneEvent/Types/KeyEvent::_keyEventFieldNames
	StringU5BU5D_t4054002952* ____keyEventFieldNames_3;
	// System.UInt32[] proto.PhoneEvent/Types/KeyEvent::_keyEventFieldTags
	UInt32U5BU5D_t3230734560* ____keyEventFieldTags_4;

public:
	inline static int32_t get_offset_of_defaultInstance_2() { return static_cast<int32_t>(offsetof(KeyEvent_t2095740558_StaticFields, ___defaultInstance_2)); }
	inline KeyEvent_t2095740558 * get_defaultInstance_2() const { return ___defaultInstance_2; }
	inline KeyEvent_t2095740558 ** get_address_of_defaultInstance_2() { return &___defaultInstance_2; }
	inline void set_defaultInstance_2(KeyEvent_t2095740558 * value)
	{
		___defaultInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___defaultInstance_2, value);
	}

	inline static int32_t get_offset_of__keyEventFieldNames_3() { return static_cast<int32_t>(offsetof(KeyEvent_t2095740558_StaticFields, ____keyEventFieldNames_3)); }
	inline StringU5BU5D_t4054002952* get__keyEventFieldNames_3() const { return ____keyEventFieldNames_3; }
	inline StringU5BU5D_t4054002952** get_address_of__keyEventFieldNames_3() { return &____keyEventFieldNames_3; }
	inline void set__keyEventFieldNames_3(StringU5BU5D_t4054002952* value)
	{
		____keyEventFieldNames_3 = value;
		Il2CppCodeGenWriteBarrier(&____keyEventFieldNames_3, value);
	}

	inline static int32_t get_offset_of__keyEventFieldTags_4() { return static_cast<int32_t>(offsetof(KeyEvent_t2095740558_StaticFields, ____keyEventFieldTags_4)); }
	inline UInt32U5BU5D_t3230734560* get__keyEventFieldTags_4() const { return ____keyEventFieldTags_4; }
	inline UInt32U5BU5D_t3230734560** get_address_of__keyEventFieldTags_4() { return &____keyEventFieldTags_4; }
	inline void set__keyEventFieldTags_4(UInt32U5BU5D_t3230734560* value)
	{
		____keyEventFieldTags_4 = value;
		Il2CppCodeGenWriteBarrier(&____keyEventFieldTags_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
