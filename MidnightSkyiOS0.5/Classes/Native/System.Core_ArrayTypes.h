#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Action`2<System.String,System.String>
struct Action_2_t3074826119;
// System.Action
struct Action_t3771233898;

#include "mscorlib_System_Array1146569071.h"
#include "System_Core_System_Collections_Generic_HashSet_1_L2122599155.h"
#include "System_Core_System_Collections_Generic_HashSet_1_L2749541277.h"
#include "System_Core_System_Action_2_gen3074826119.h"
#include "System_Core_System_Action3771233898.h"

#pragma once
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t3085427682  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Link_t2122599155  m_Items[1];

public:
	inline Link_t2122599155  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Link_t2122599155 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Link_t2122599155  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.HashSet`1/Link<UnityEngine.UI.IClippable>[]
struct LinkU5BU5D_t1725180240  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Link_t2749541277  m_Items[1];

public:
	inline Link_t2749541277  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Link_t2749541277 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Link_t2749541277  value)
	{
		m_Items[index] = value;
	}
};
// System.Action`2<System.String,System.String>[]
struct Action_2U5BU5D_t3066455678  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Action_2_t3074826119 * m_Items[1];

public:
	inline Action_2_t3074826119 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Action_2_t3074826119 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Action_2_t3074826119 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Action[]
struct ActionU5BU5D_t1643143343  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Action_t3771233898 * m_Items[1];

public:
	inline Action_t3771233898 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Action_t3771233898 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Action_t3771233898 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
