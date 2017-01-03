#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Google.ProtocolBuffers.IGeneratedExtensionLite
struct IGeneratedExtensionLite_t2667884577;

#include "mscorlib_System_Array1146569071.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte4209602725.h"

#pragma once
// Google.ProtocolBuffers.IGeneratedExtensionLite[]
struct IGeneratedExtensionLiteU5BU5D_t2628881980  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair[]
struct ExtensionIntPairU5BU5D_t1813890856  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ExtensionIntPair_t4209602725  m_Items[1];

public:
	inline ExtensionIntPair_t4209602725  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ExtensionIntPair_t4209602725 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ExtensionIntPair_t4209602725  value)
	{
		m_Items[index] = value;
	}
};
