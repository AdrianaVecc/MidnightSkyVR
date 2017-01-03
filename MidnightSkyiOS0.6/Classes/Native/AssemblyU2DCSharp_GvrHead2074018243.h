#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// GvrHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t4119218932;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrHead
struct  GvrHead_t2074018243  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean GvrHead::trackRotation
	bool ___trackRotation_2;
	// System.Boolean GvrHead::trackPosition
	bool ___trackPosition_3;
	// UnityEngine.Transform GvrHead::target
	Transform_t1659122786 * ___target_4;
	// System.Boolean GvrHead::updateEarly
	bool ___updateEarly_5;
	// System.Boolean GvrHead::updated
	bool ___updated_6;
	// GvrHead/HeadUpdatedDelegate GvrHead::OnHeadUpdated
	HeadUpdatedDelegate_t4119218932 * ___OnHeadUpdated_7;

public:
	inline static int32_t get_offset_of_trackRotation_2() { return static_cast<int32_t>(offsetof(GvrHead_t2074018243, ___trackRotation_2)); }
	inline bool get_trackRotation_2() const { return ___trackRotation_2; }
	inline bool* get_address_of_trackRotation_2() { return &___trackRotation_2; }
	inline void set_trackRotation_2(bool value)
	{
		___trackRotation_2 = value;
	}

	inline static int32_t get_offset_of_trackPosition_3() { return static_cast<int32_t>(offsetof(GvrHead_t2074018243, ___trackPosition_3)); }
	inline bool get_trackPosition_3() const { return ___trackPosition_3; }
	inline bool* get_address_of_trackPosition_3() { return &___trackPosition_3; }
	inline void set_trackPosition_3(bool value)
	{
		___trackPosition_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(GvrHead_t2074018243, ___target_4)); }
	inline Transform_t1659122786 * get_target_4() const { return ___target_4; }
	inline Transform_t1659122786 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t1659122786 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_updateEarly_5() { return static_cast<int32_t>(offsetof(GvrHead_t2074018243, ___updateEarly_5)); }
	inline bool get_updateEarly_5() const { return ___updateEarly_5; }
	inline bool* get_address_of_updateEarly_5() { return &___updateEarly_5; }
	inline void set_updateEarly_5(bool value)
	{
		___updateEarly_5 = value;
	}

	inline static int32_t get_offset_of_updated_6() { return static_cast<int32_t>(offsetof(GvrHead_t2074018243, ___updated_6)); }
	inline bool get_updated_6() const { return ___updated_6; }
	inline bool* get_address_of_updated_6() { return &___updated_6; }
	inline void set_updated_6(bool value)
	{
		___updated_6 = value;
	}

	inline static int32_t get_offset_of_OnHeadUpdated_7() { return static_cast<int32_t>(offsetof(GvrHead_t2074018243, ___OnHeadUpdated_7)); }
	inline HeadUpdatedDelegate_t4119218932 * get_OnHeadUpdated_7() const { return ___OnHeadUpdated_7; }
	inline HeadUpdatedDelegate_t4119218932 ** get_address_of_OnHeadUpdated_7() { return &___OnHeadUpdated_7; }
	inline void set_OnHeadUpdated_7(HeadUpdatedDelegate_t4119218932 * value)
	{
		___OnHeadUpdated_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnHeadUpdated_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
