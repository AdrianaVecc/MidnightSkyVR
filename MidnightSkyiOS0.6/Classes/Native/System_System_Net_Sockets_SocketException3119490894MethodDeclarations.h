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

// System.Net.Sockets.SocketException
struct SocketException_t3119490894;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_Sockets_SocketError4204345479.h"

// System.Void System.Net.Sockets.SocketException::.ctor()
extern "C"  void SocketException__ctor_m2704233310 (SocketException_t3119490894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern "C"  void SocketException__ctor_m2020928431 (SocketException_t3119490894 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SocketException__ctor_m3869281183 (SocketException_t3119490894 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
extern "C"  void SocketException__ctor_m2239002027 (SocketException_t3119490894 * __this, int32_t ___error0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
extern "C"  int32_t SocketException_WSAGetLastError_internal_m1272279121 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern "C"  int32_t SocketException_get_SocketErrorCode_m1542160685 (SocketException_t3119490894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Sockets.SocketException::get_Message()
extern "C"  String_t* SocketException_get_Message_m1491030231 (SocketException_t3119490894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
