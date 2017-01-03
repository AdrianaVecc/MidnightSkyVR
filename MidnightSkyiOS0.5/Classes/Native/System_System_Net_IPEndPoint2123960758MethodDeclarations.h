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

// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.Net.EndPoint
struct EndPoint_t1026786191;
// System.Net.SocketAddress
struct SocketAddress_t4232434619;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPAddress3525271463.h"
#include "System_System_Net_Sockets_AddressFamily3770679850.h"
#include "System_System_Net_SocketAddress4232434619.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void IPEndPoint__ctor_m613724246 (IPEndPoint_t2123960758 * __this, IPAddress_t3525271463 * ___address0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
extern "C"  void IPEndPoint__ctor_m1788376007 (IPEndPoint_t2123960758 * __this, int64_t ___iaddr0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C"  IPAddress_t3525271463 * IPEndPoint_get_Address_m1282959913 (IPEndPoint_t2123960758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
extern "C"  void IPEndPoint_set_Address_m3040556502 (IPEndPoint_t2123960758 * __this, IPAddress_t3525271463 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern "C"  int32_t IPEndPoint_get_AddressFamily_m926301232 (IPEndPoint_t2123960758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C"  int32_t IPEndPoint_get_Port_m1670115040 (IPEndPoint_t2123960758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
extern "C"  void IPEndPoint_set_Port_m2374491605 (IPEndPoint_t2123960758 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern "C"  EndPoint_t1026786191 * IPEndPoint_Create_m287552515 (IPEndPoint_t2123960758 * __this, SocketAddress_t4232434619 * ___socketAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern "C"  SocketAddress_t4232434619 * IPEndPoint_Serialize_m130381674 (IPEndPoint_t2123960758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
extern "C"  String_t* IPEndPoint_ToString_m2392184111 (IPEndPoint_t2123960758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern "C"  bool IPEndPoint_Equals_m2685723717 (IPEndPoint_t2123960758 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
extern "C"  int32_t IPEndPoint_GetHashCode_m2913619357 (IPEndPoint_t2123960758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
