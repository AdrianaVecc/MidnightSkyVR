﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Director.Playable
struct  Playable_t70832698 
{
public:
	// System.IntPtr UnityEngine.Experimental.Director.Playable::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Experimental.Director.Playable::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t70832698, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(Playable_t70832698, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Experimental.Director.Playable
struct Playable_t70832698_marshaled_pinvoke
{
	intptr_t ___m_Handle_0;
	int32_t ___m_Version_1;
};
// Native definition for marshalling of: UnityEngine.Experimental.Director.Playable
struct Playable_t70832698_marshaled_com
{
	intptr_t ___m_Handle_0;
	int32_t ___m_Version_1;
};
