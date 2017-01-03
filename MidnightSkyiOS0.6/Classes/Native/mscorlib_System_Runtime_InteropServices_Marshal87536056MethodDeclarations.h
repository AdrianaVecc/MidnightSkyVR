#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Array
struct Il2CppArray;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Security.SecureString
struct SecureString_t2885682300;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Security_SecureString2885682300.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C"  void Marshal__cctor_m156400721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
extern "C"  IntPtr_t Marshal_AllocCoTaskMem_m3580890173 (Il2CppObject * __this /* static, unused */, int32_t ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.IntPtr)
extern "C"  IntPtr_t Marshal_AllocHGlobal_m4158965793 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C"  IntPtr_t Marshal_AllocHGlobal_m2766529508 (Il2CppObject * __this /* static, unused */, int32_t ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C"  void Marshal_copy_from_unmanaged_m1711077603 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, int32_t ___startIndex1, Il2CppArray * ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1690250234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, ByteU5BU5D_t4260760469* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1390445676 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, CharU5BU5D_t3324145743* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeBSTR(System.IntPtr)
extern "C"  void Marshal_FreeBSTR_m1194723729 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C"  void Marshal_FreeHGlobal_m1353395547 (Il2CppObject * __this /* static, unused */, IntPtr_t ___hglobal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C"  int32_t Marshal_GetLastWin32Error_m701978199 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C"  uint8_t Marshal_ReadByte_m3705434677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Object)
extern "C"  int32_t Marshal_SizeOf_m3197537816 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___structure0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C"  int32_t Marshal_SizeOf_m1295785213 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::SecureStringToBSTR(System.Security.SecureString)
extern "C"  IntPtr_t Marshal_SecureStringToBSTR_m3211319256 (Il2CppObject * __this /* static, unused */, SecureString_t2885682300 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
extern "C"  void Marshal_StructureToPtr_m1569179651 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___structure0, IntPtr_t ___ptr1, bool ___fDeleteOld2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C"  void Marshal_WriteByte_m4239949353 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteInt16(System.IntPtr,System.Int32,System.Int16)
extern "C"  void Marshal_WriteInt16_m1649638641 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, int16_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteInt32(System.IntPtr,System.Int32,System.Int32)
extern "C"  void Marshal_WriteInt32_m255954173 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
