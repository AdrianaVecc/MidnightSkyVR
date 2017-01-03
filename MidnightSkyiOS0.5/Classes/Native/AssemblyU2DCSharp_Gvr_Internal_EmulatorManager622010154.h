#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t2372756133;
// Gvr.Internal.EmulatorManager
struct EmulatorManager_t622010154;
// System.Collections.Queue
struct Queue_t1759945451;
// Gvr.Internal.EmulatorClientSocket
struct EmulatorClientSocket_t2137111857;
// Gvr.Internal.EmulatorManager/OnGyroEvent
struct OnGyroEvent_t1752883023;
// Gvr.Internal.EmulatorManager/OnAccelEvent
struct OnAccelEvent_t1207501038;
// Gvr.Internal.EmulatorManager/OnTouchEvent
struct OnTouchEvent_t970385655;
// Gvr.Internal.EmulatorManager/OnOrientationEvent
struct OnOrientationEvent_t2004619270;
// Gvr.Internal.EmulatorManager/OnButtonEvent
struct OnButtonEvent_t1240547244;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent3657941864.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent2349426533.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent2112311150.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3989687101.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent200175493.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorManager
struct  EmulatorManager_t622010154  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.IEnumerator Gvr.Internal.EmulatorManager::emulatorUpdate
	Il2CppObject * ___emulatorUpdate_2;
	// UnityEngine.WaitForEndOfFrame Gvr.Internal.EmulatorManager::waitForEndOfFrame
	WaitForEndOfFrame_t2372756133 * ___waitForEndOfFrame_3;
	// Gvr.Internal.EmulatorGyroEvent Gvr.Internal.EmulatorManager::currentGyroEvent
	EmulatorGyroEvent_t3657941864  ___currentGyroEvent_5;
	// Gvr.Internal.EmulatorAccelEvent Gvr.Internal.EmulatorManager::currentAccelEvent
	EmulatorAccelEvent_t2349426533  ___currentAccelEvent_6;
	// Gvr.Internal.EmulatorTouchEvent Gvr.Internal.EmulatorManager::currentTouchEvent
	EmulatorTouchEvent_t2112311150  ___currentTouchEvent_7;
	// Gvr.Internal.EmulatorOrientationEvent Gvr.Internal.EmulatorManager::currentOrientationEvent
	EmulatorOrientationEvent_t3989687101  ___currentOrientationEvent_8;
	// Gvr.Internal.EmulatorButtonEvent Gvr.Internal.EmulatorManager::currentButtonEvent
	EmulatorButtonEvent_t200175493  ___currentButtonEvent_9;
	// System.Collections.Queue Gvr.Internal.EmulatorManager::pendingEvents
	Queue_t1759945451 * ___pendingEvents_10;
	// Gvr.Internal.EmulatorClientSocket Gvr.Internal.EmulatorManager::socket
	EmulatorClientSocket_t2137111857 * ___socket_11;
	// System.Int64 Gvr.Internal.EmulatorManager::lastDownTimeMs
	int64_t ___lastDownTimeMs_12;
	// Gvr.Internal.EmulatorManager/OnGyroEvent Gvr.Internal.EmulatorManager::gyroEventListenersInternal
	OnGyroEvent_t1752883023 * ___gyroEventListenersInternal_13;
	// Gvr.Internal.EmulatorManager/OnAccelEvent Gvr.Internal.EmulatorManager::accelEventListenersInternal
	OnAccelEvent_t1207501038 * ___accelEventListenersInternal_14;
	// Gvr.Internal.EmulatorManager/OnTouchEvent Gvr.Internal.EmulatorManager::touchEventListenersInternal
	OnTouchEvent_t970385655 * ___touchEventListenersInternal_15;
	// Gvr.Internal.EmulatorManager/OnOrientationEvent Gvr.Internal.EmulatorManager::orientationEventListenersInternal
	OnOrientationEvent_t2004619270 * ___orientationEventListenersInternal_16;
	// Gvr.Internal.EmulatorManager/OnButtonEvent Gvr.Internal.EmulatorManager::buttonEventListenersInternal
	OnButtonEvent_t1240547244 * ___buttonEventListenersInternal_17;

public:
	inline static int32_t get_offset_of_emulatorUpdate_2() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___emulatorUpdate_2)); }
	inline Il2CppObject * get_emulatorUpdate_2() const { return ___emulatorUpdate_2; }
	inline Il2CppObject ** get_address_of_emulatorUpdate_2() { return &___emulatorUpdate_2; }
	inline void set_emulatorUpdate_2(Il2CppObject * value)
	{
		___emulatorUpdate_2 = value;
		Il2CppCodeGenWriteBarrier(&___emulatorUpdate_2, value);
	}

	inline static int32_t get_offset_of_waitForEndOfFrame_3() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___waitForEndOfFrame_3)); }
	inline WaitForEndOfFrame_t2372756133 * get_waitForEndOfFrame_3() const { return ___waitForEndOfFrame_3; }
	inline WaitForEndOfFrame_t2372756133 ** get_address_of_waitForEndOfFrame_3() { return &___waitForEndOfFrame_3; }
	inline void set_waitForEndOfFrame_3(WaitForEndOfFrame_t2372756133 * value)
	{
		___waitForEndOfFrame_3 = value;
		Il2CppCodeGenWriteBarrier(&___waitForEndOfFrame_3, value);
	}

	inline static int32_t get_offset_of_currentGyroEvent_5() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___currentGyroEvent_5)); }
	inline EmulatorGyroEvent_t3657941864  get_currentGyroEvent_5() const { return ___currentGyroEvent_5; }
	inline EmulatorGyroEvent_t3657941864 * get_address_of_currentGyroEvent_5() { return &___currentGyroEvent_5; }
	inline void set_currentGyroEvent_5(EmulatorGyroEvent_t3657941864  value)
	{
		___currentGyroEvent_5 = value;
	}

	inline static int32_t get_offset_of_currentAccelEvent_6() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___currentAccelEvent_6)); }
	inline EmulatorAccelEvent_t2349426533  get_currentAccelEvent_6() const { return ___currentAccelEvent_6; }
	inline EmulatorAccelEvent_t2349426533 * get_address_of_currentAccelEvent_6() { return &___currentAccelEvent_6; }
	inline void set_currentAccelEvent_6(EmulatorAccelEvent_t2349426533  value)
	{
		___currentAccelEvent_6 = value;
	}

	inline static int32_t get_offset_of_currentTouchEvent_7() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___currentTouchEvent_7)); }
	inline EmulatorTouchEvent_t2112311150  get_currentTouchEvent_7() const { return ___currentTouchEvent_7; }
	inline EmulatorTouchEvent_t2112311150 * get_address_of_currentTouchEvent_7() { return &___currentTouchEvent_7; }
	inline void set_currentTouchEvent_7(EmulatorTouchEvent_t2112311150  value)
	{
		___currentTouchEvent_7 = value;
	}

	inline static int32_t get_offset_of_currentOrientationEvent_8() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___currentOrientationEvent_8)); }
	inline EmulatorOrientationEvent_t3989687101  get_currentOrientationEvent_8() const { return ___currentOrientationEvent_8; }
	inline EmulatorOrientationEvent_t3989687101 * get_address_of_currentOrientationEvent_8() { return &___currentOrientationEvent_8; }
	inline void set_currentOrientationEvent_8(EmulatorOrientationEvent_t3989687101  value)
	{
		___currentOrientationEvent_8 = value;
	}

	inline static int32_t get_offset_of_currentButtonEvent_9() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___currentButtonEvent_9)); }
	inline EmulatorButtonEvent_t200175493  get_currentButtonEvent_9() const { return ___currentButtonEvent_9; }
	inline EmulatorButtonEvent_t200175493 * get_address_of_currentButtonEvent_9() { return &___currentButtonEvent_9; }
	inline void set_currentButtonEvent_9(EmulatorButtonEvent_t200175493  value)
	{
		___currentButtonEvent_9 = value;
	}

	inline static int32_t get_offset_of_pendingEvents_10() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___pendingEvents_10)); }
	inline Queue_t1759945451 * get_pendingEvents_10() const { return ___pendingEvents_10; }
	inline Queue_t1759945451 ** get_address_of_pendingEvents_10() { return &___pendingEvents_10; }
	inline void set_pendingEvents_10(Queue_t1759945451 * value)
	{
		___pendingEvents_10 = value;
		Il2CppCodeGenWriteBarrier(&___pendingEvents_10, value);
	}

	inline static int32_t get_offset_of_socket_11() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___socket_11)); }
	inline EmulatorClientSocket_t2137111857 * get_socket_11() const { return ___socket_11; }
	inline EmulatorClientSocket_t2137111857 ** get_address_of_socket_11() { return &___socket_11; }
	inline void set_socket_11(EmulatorClientSocket_t2137111857 * value)
	{
		___socket_11 = value;
		Il2CppCodeGenWriteBarrier(&___socket_11, value);
	}

	inline static int32_t get_offset_of_lastDownTimeMs_12() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___lastDownTimeMs_12)); }
	inline int64_t get_lastDownTimeMs_12() const { return ___lastDownTimeMs_12; }
	inline int64_t* get_address_of_lastDownTimeMs_12() { return &___lastDownTimeMs_12; }
	inline void set_lastDownTimeMs_12(int64_t value)
	{
		___lastDownTimeMs_12 = value;
	}

	inline static int32_t get_offset_of_gyroEventListenersInternal_13() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___gyroEventListenersInternal_13)); }
	inline OnGyroEvent_t1752883023 * get_gyroEventListenersInternal_13() const { return ___gyroEventListenersInternal_13; }
	inline OnGyroEvent_t1752883023 ** get_address_of_gyroEventListenersInternal_13() { return &___gyroEventListenersInternal_13; }
	inline void set_gyroEventListenersInternal_13(OnGyroEvent_t1752883023 * value)
	{
		___gyroEventListenersInternal_13 = value;
		Il2CppCodeGenWriteBarrier(&___gyroEventListenersInternal_13, value);
	}

	inline static int32_t get_offset_of_accelEventListenersInternal_14() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___accelEventListenersInternal_14)); }
	inline OnAccelEvent_t1207501038 * get_accelEventListenersInternal_14() const { return ___accelEventListenersInternal_14; }
	inline OnAccelEvent_t1207501038 ** get_address_of_accelEventListenersInternal_14() { return &___accelEventListenersInternal_14; }
	inline void set_accelEventListenersInternal_14(OnAccelEvent_t1207501038 * value)
	{
		___accelEventListenersInternal_14 = value;
		Il2CppCodeGenWriteBarrier(&___accelEventListenersInternal_14, value);
	}

	inline static int32_t get_offset_of_touchEventListenersInternal_15() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___touchEventListenersInternal_15)); }
	inline OnTouchEvent_t970385655 * get_touchEventListenersInternal_15() const { return ___touchEventListenersInternal_15; }
	inline OnTouchEvent_t970385655 ** get_address_of_touchEventListenersInternal_15() { return &___touchEventListenersInternal_15; }
	inline void set_touchEventListenersInternal_15(OnTouchEvent_t970385655 * value)
	{
		___touchEventListenersInternal_15 = value;
		Il2CppCodeGenWriteBarrier(&___touchEventListenersInternal_15, value);
	}

	inline static int32_t get_offset_of_orientationEventListenersInternal_16() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___orientationEventListenersInternal_16)); }
	inline OnOrientationEvent_t2004619270 * get_orientationEventListenersInternal_16() const { return ___orientationEventListenersInternal_16; }
	inline OnOrientationEvent_t2004619270 ** get_address_of_orientationEventListenersInternal_16() { return &___orientationEventListenersInternal_16; }
	inline void set_orientationEventListenersInternal_16(OnOrientationEvent_t2004619270 * value)
	{
		___orientationEventListenersInternal_16 = value;
		Il2CppCodeGenWriteBarrier(&___orientationEventListenersInternal_16, value);
	}

	inline static int32_t get_offset_of_buttonEventListenersInternal_17() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154, ___buttonEventListenersInternal_17)); }
	inline OnButtonEvent_t1240547244 * get_buttonEventListenersInternal_17() const { return ___buttonEventListenersInternal_17; }
	inline OnButtonEvent_t1240547244 ** get_address_of_buttonEventListenersInternal_17() { return &___buttonEventListenersInternal_17; }
	inline void set_buttonEventListenersInternal_17(OnButtonEvent_t1240547244 * value)
	{
		___buttonEventListenersInternal_17 = value;
		Il2CppCodeGenWriteBarrier(&___buttonEventListenersInternal_17, value);
	}
};

struct EmulatorManager_t622010154_StaticFields
{
public:
	// Gvr.Internal.EmulatorManager Gvr.Internal.EmulatorManager::instance
	EmulatorManager_t622010154 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(EmulatorManager_t622010154_StaticFields, ___instance_4)); }
	inline EmulatorManager_t622010154 * get_instance_4() const { return ___instance_4; }
	inline EmulatorManager_t622010154 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(EmulatorManager_t622010154 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
