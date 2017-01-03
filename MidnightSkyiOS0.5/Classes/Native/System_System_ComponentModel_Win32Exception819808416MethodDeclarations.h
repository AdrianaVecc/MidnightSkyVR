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

// System.ComponentModel.Win32Exception
struct Win32Exception_t819808416;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.ComponentModel.Win32Exception::.ctor()
extern "C"  void Win32Exception__ctor_m2567008773 (Win32Exception_t819808416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern "C"  void Win32Exception__ctor_m931350486 (Win32Exception_t819808416 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
extern "C"  void Win32Exception__ctor_m1587478930 (Win32Exception_t819808416 * __this, int32_t ___error0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Win32Exception__ctor_m655557062 (Win32Exception_t819808416 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern "C"  int32_t Win32Exception_get_NativeErrorCode_m1057550088 (Win32Exception_t819808416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Win32Exception_GetObjectData_m3585155875 (Win32Exception_t819808416 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Win32Exception::W32ErrorMessage(System.Int32)
extern "C"  String_t* Win32Exception_W32ErrorMessage_m2589283462 (Il2CppObject * __this /* static, unused */, int32_t ___error_code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
