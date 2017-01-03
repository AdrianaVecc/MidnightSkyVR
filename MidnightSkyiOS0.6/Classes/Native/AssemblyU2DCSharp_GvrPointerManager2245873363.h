#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrPointerManager
struct GvrPointerManager_t2245873363;
// IGvrPointer
struct IGvrPointer_t448681091;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerManager
struct  GvrPointerManager_t2245873363  : public MonoBehaviour_t667441552
{
public:
	// IGvrPointer GvrPointerManager::pointer
	Il2CppObject * ___pointer_3;

public:
	inline static int32_t get_offset_of_pointer_3() { return static_cast<int32_t>(offsetof(GvrPointerManager_t2245873363, ___pointer_3)); }
	inline Il2CppObject * get_pointer_3() const { return ___pointer_3; }
	inline Il2CppObject ** get_address_of_pointer_3() { return &___pointer_3; }
	inline void set_pointer_3(Il2CppObject * value)
	{
		___pointer_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_3, value);
	}
};

struct GvrPointerManager_t2245873363_StaticFields
{
public:
	// GvrPointerManager GvrPointerManager::instance
	GvrPointerManager_t2245873363 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GvrPointerManager_t2245873363_StaticFields, ___instance_2)); }
	inline GvrPointerManager_t2245873363 * get_instance_2() const { return ___instance_2; }
	inline GvrPointerManager_t2245873363 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GvrPointerManager_t2245873363 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
