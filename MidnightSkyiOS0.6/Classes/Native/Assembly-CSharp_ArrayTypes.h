#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// GvrEye
struct GvrEye_t2145111534;
// GvrAudioRoom
struct GvrAudioRoom_t252475342;
// Gvr.Internal.EmulatorConfig
struct EmulatorConfig_t3000403349;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct Pointer_t190725481;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_GvrEye2145111534.h"
#include "AssemblyU2DCSharp_GvrAudioRoom252475342.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig3000403349.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3710907716.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEven190725481.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type923828173.h"

#pragma once
// GvrEye[]
struct GvrEyeU5BU5D_t2613429915  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GvrEye_t2145111534 * m_Items[1];

public:
	inline GvrEye_t2145111534 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GvrEye_t2145111534 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GvrEye_t2145111534 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// GvrAudioRoom[]
struct GvrAudioRoomU5BU5D_t1252448571  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GvrAudioRoom_t252475342 * m_Items[1];

public:
	inline GvrAudioRoom_t252475342 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GvrAudioRoom_t252475342 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GvrAudioRoom_t252475342 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Gvr.Internal.EmulatorConfig[]
struct EmulatorConfigU5BU5D_t2106495096  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) EmulatorConfig_t3000403349 * m_Items[1];

public:
	inline EmulatorConfig_t3000403349 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline EmulatorConfig_t3000403349 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, EmulatorConfig_t3000403349 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Gvr.Internal.EmulatorTouchEvent/Pointer[]
struct PointerU5BU5D_t2242107693  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Pointer_t3710907716  m_Items[1];

public:
	inline Pointer_t3710907716  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Pointer_t3710907716 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Pointer_t3710907716  value)
	{
		m_Items[index] = value;
	}
};
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer[]
struct PointerU5BU5D_t3506764500  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Pointer_t190725481 * m_Items[1];

public:
	inline Pointer_t190725481 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Pointer_t190725481 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Pointer_t190725481 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// proto.PhoneEvent/Types/Type[]
struct TypeU5BU5D_t3324972640  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
