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

// System.Net.EndPoint
struct EndPoint_t1026786191;
// System.Net.SocketAddress
struct SocketAddress_t4232434619;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily3770679850.h"
#include "System_System_Net_SocketAddress4232434619.h"

// System.Void System.Net.EndPoint::.ctor()
extern "C"  void EndPoint__ctor_m4041742149 (EndPoint_t1026786191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern "C"  int32_t EndPoint_get_AddressFamily_m756653815 (EndPoint_t1026786191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern "C"  EndPoint_t1026786191 * EndPoint_Create_m1369380444 (EndPoint_t1026786191 * __this, SocketAddress_t4232434619 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern "C"  SocketAddress_t4232434619 * EndPoint_Serialize_m2925361009 (EndPoint_t1026786191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.EndPoint::NotImplemented()
extern "C"  Exception_t3991598821 * EndPoint_NotImplemented_m2808446367 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
