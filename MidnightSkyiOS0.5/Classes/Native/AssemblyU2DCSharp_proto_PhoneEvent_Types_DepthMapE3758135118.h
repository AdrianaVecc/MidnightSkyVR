#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// proto.PhoneEvent/Types/DepthMapEvent
struct DepthMapEvent_t3758135118;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.UInt32[]
struct UInt32U5BU5D_t3230734560;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>
struct PopsicleList_1_t2999988165;

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene3580304961.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/DepthMapEvent
struct  DepthMapEvent_t3758135118  : public GeneratedMessageLite_2_t3580304961
{
public:
	// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::hasTimestamp
	bool ___hasTimestamp_7;
	// System.Int64 proto.PhoneEvent/Types/DepthMapEvent::timestamp_
	int64_t ___timestamp__8;
	// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::hasWidth
	bool ___hasWidth_9;
	// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::width_
	int32_t ___width__10;
	// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::hasHeight
	bool ___hasHeight_11;
	// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::height_
	int32_t ___height__12;
	// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::zDistancesMemoizedSerializedSize
	int32_t ___zDistancesMemoizedSerializedSize_13;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single> proto.PhoneEvent/Types/DepthMapEvent::zDistances_
	PopsicleList_1_t2999988165 * ___zDistances__14;
	// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_15;

public:
	inline static int32_t get_offset_of_hasTimestamp_7() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118, ___hasTimestamp_7)); }
	inline bool get_hasTimestamp_7() const { return ___hasTimestamp_7; }
	inline bool* get_address_of_hasTimestamp_7() { return &___hasTimestamp_7; }
	inline void set_hasTimestamp_7(bool value)
	{
		___hasTimestamp_7 = value;
	}

	inline static int32_t get_offset_of_timestamp__8() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118, ___timestamp__8)); }
	inline int64_t get_timestamp__8() const { return ___timestamp__8; }
	inline int64_t* get_address_of_timestamp__8() { return &___timestamp__8; }
	inline void set_timestamp__8(int64_t value)
	{
		___timestamp__8 = value;
	}

	inline static int32_t get_offset_of_hasWidth_9() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118, ___hasWidth_9)); }
	inline bool get_hasWidth_9() const { return ___hasWidth_9; }
	inline bool* get_address_of_hasWidth_9() { return &___hasWidth_9; }
	inline void set_hasWidth_9(bool value)
	{
		___hasWidth_9 = value;
	}

	inline static int32_t get_offset_of_width__10() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118, ___width__10)); }
	inline int32_t get_width__10() const { return ___width__10; }
	inline int32_t* get_address_of_width__10() { return &___width__10; }
	inline void set_width__10(int32_t value)
	{
		___width__10 = value;
	}

	inline static int32_t get_offset_of_hasHeight_11() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118, ___hasHeight_11)); }
	inline bool get_hasHeight_11() const { return ___hasHeight_11; }
	inline bool* get_address_of_hasHeight_11() { return &___hasHeight_11; }
	inline void set_hasHeight_11(bool value)
	{
		___hasHeight_11 = value;
	}

	inline static int32_t get_offset_of_height__12() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118, ___height__12)); }
	inline int32_t get_height__12() const { return ___height__12; }
	inline int32_t* get_address_of_height__12() { return &___height__12; }
	inline void set_height__12(int32_t value)
	{
		___height__12 = value;
	}

	inline static int32_t get_offset_of_zDistancesMemoizedSerializedSize_13() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118, ___zDistancesMemoizedSerializedSize_13)); }
	inline int32_t get_zDistancesMemoizedSerializedSize_13() const { return ___zDistancesMemoizedSerializedSize_13; }
	inline int32_t* get_address_of_zDistancesMemoizedSerializedSize_13() { return &___zDistancesMemoizedSerializedSize_13; }
	inline void set_zDistancesMemoizedSerializedSize_13(int32_t value)
	{
		___zDistancesMemoizedSerializedSize_13 = value;
	}

	inline static int32_t get_offset_of_zDistances__14() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118, ___zDistances__14)); }
	inline PopsicleList_1_t2999988165 * get_zDistances__14() const { return ___zDistances__14; }
	inline PopsicleList_1_t2999988165 ** get_address_of_zDistances__14() { return &___zDistances__14; }
	inline void set_zDistances__14(PopsicleList_1_t2999988165 * value)
	{
		___zDistances__14 = value;
		Il2CppCodeGenWriteBarrier(&___zDistances__14, value);
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_15() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118, ___memoizedSerializedSize_15)); }
	inline int32_t get_memoizedSerializedSize_15() const { return ___memoizedSerializedSize_15; }
	inline int32_t* get_address_of_memoizedSerializedSize_15() { return &___memoizedSerializedSize_15; }
	inline void set_memoizedSerializedSize_15(int32_t value)
	{
		___memoizedSerializedSize_15 = value;
	}
};

struct DepthMapEvent_t3758135118_StaticFields
{
public:
	// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::defaultInstance
	DepthMapEvent_t3758135118 * ___defaultInstance_4;
	// System.String[] proto.PhoneEvent/Types/DepthMapEvent::_depthMapEventFieldNames
	StringU5BU5D_t4054002952* ____depthMapEventFieldNames_5;
	// System.UInt32[] proto.PhoneEvent/Types/DepthMapEvent::_depthMapEventFieldTags
	UInt32U5BU5D_t3230734560* ____depthMapEventFieldTags_6;

public:
	inline static int32_t get_offset_of_defaultInstance_4() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118_StaticFields, ___defaultInstance_4)); }
	inline DepthMapEvent_t3758135118 * get_defaultInstance_4() const { return ___defaultInstance_4; }
	inline DepthMapEvent_t3758135118 ** get_address_of_defaultInstance_4() { return &___defaultInstance_4; }
	inline void set_defaultInstance_4(DepthMapEvent_t3758135118 * value)
	{
		___defaultInstance_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultInstance_4, value);
	}

	inline static int32_t get_offset_of__depthMapEventFieldNames_5() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118_StaticFields, ____depthMapEventFieldNames_5)); }
	inline StringU5BU5D_t4054002952* get__depthMapEventFieldNames_5() const { return ____depthMapEventFieldNames_5; }
	inline StringU5BU5D_t4054002952** get_address_of__depthMapEventFieldNames_5() { return &____depthMapEventFieldNames_5; }
	inline void set__depthMapEventFieldNames_5(StringU5BU5D_t4054002952* value)
	{
		____depthMapEventFieldNames_5 = value;
		Il2CppCodeGenWriteBarrier(&____depthMapEventFieldNames_5, value);
	}

	inline static int32_t get_offset_of__depthMapEventFieldTags_6() { return static_cast<int32_t>(offsetof(DepthMapEvent_t3758135118_StaticFields, ____depthMapEventFieldTags_6)); }
	inline UInt32U5BU5D_t3230734560* get__depthMapEventFieldTags_6() const { return ____depthMapEventFieldTags_6; }
	inline UInt32U5BU5D_t3230734560** get_address_of__depthMapEventFieldTags_6() { return &____depthMapEventFieldTags_6; }
	inline void set__depthMapEventFieldTags_6(UInt32U5BU5D_t3230734560* value)
	{
		____depthMapEventFieldTags_6 = value;
		Il2CppCodeGenWriteBarrier(&____depthMapEventFieldTags_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
