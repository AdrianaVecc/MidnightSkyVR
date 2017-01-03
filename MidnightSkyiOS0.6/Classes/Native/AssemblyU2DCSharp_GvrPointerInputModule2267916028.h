#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputMod15847059.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerInputModule
struct  GvrPointerInputModule_t2267916028  : public BaseInputModule_t15847059
{
public:
	// System.Boolean GvrPointerInputModule::vrModeOnly
	bool ___vrModeOnly_7;
	// UnityEngine.EventSystems.PointerEventData GvrPointerInputModule::pointerData
	PointerEventData_t1848751023 * ___pointerData_8;
	// UnityEngine.Vector2 GvrPointerInputModule::lastHeadPose
	Vector2_t4282066565  ___lastHeadPose_9;
	// System.Boolean GvrPointerInputModule::isActive
	bool ___isActive_10;

public:
	inline static int32_t get_offset_of_vrModeOnly_7() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___vrModeOnly_7)); }
	inline bool get_vrModeOnly_7() const { return ___vrModeOnly_7; }
	inline bool* get_address_of_vrModeOnly_7() { return &___vrModeOnly_7; }
	inline void set_vrModeOnly_7(bool value)
	{
		___vrModeOnly_7 = value;
	}

	inline static int32_t get_offset_of_pointerData_8() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___pointerData_8)); }
	inline PointerEventData_t1848751023 * get_pointerData_8() const { return ___pointerData_8; }
	inline PointerEventData_t1848751023 ** get_address_of_pointerData_8() { return &___pointerData_8; }
	inline void set_pointerData_8(PointerEventData_t1848751023 * value)
	{
		___pointerData_8 = value;
		Il2CppCodeGenWriteBarrier(&___pointerData_8, value);
	}

	inline static int32_t get_offset_of_lastHeadPose_9() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___lastHeadPose_9)); }
	inline Vector2_t4282066565  get_lastHeadPose_9() const { return ___lastHeadPose_9; }
	inline Vector2_t4282066565 * get_address_of_lastHeadPose_9() { return &___lastHeadPose_9; }
	inline void set_lastHeadPose_9(Vector2_t4282066565  value)
	{
		___lastHeadPose_9 = value;
	}

	inline static int32_t get_offset_of_isActive_10() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___isActive_10)); }
	inline bool get_isActive_10() const { return ___isActive_10; }
	inline bool* get_address_of_isActive_10() { return &___isActive_10; }
	inline void set_isActive_10(bool value)
	{
		___isActive_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
