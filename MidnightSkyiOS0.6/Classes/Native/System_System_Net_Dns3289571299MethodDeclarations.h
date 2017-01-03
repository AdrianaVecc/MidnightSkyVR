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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Net.IPHostEntry
struct IPHostEntry_t737820957;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t1215594974;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_IPAddress3525271463.h"

// System.Void System.Net.Dns::.cctor()
extern "C"  void Dns__cctor_m2243593610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByName_internal_m3697903137 (Il2CppObject * __this /* static, unused */, String_t* ___host0, String_t** ___h_name1, StringU5BU5D_t4054002952** ___h_aliases2, StringU5BU5D_t4054002952** ___h_addr_list3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByAddr_internal_m516933499 (Il2CppObject * __this /* static, unused */, String_t* ___addr0, String_t** ___h_name1, StringU5BU5D_t4054002952** ___h_aliases2, StringU5BU5D_t4054002952** ___h_addr_list3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C"  IPHostEntry_t737820957 * Dns_hostent_to_IPHostEntry_m818428846 (Il2CppObject * __this /* static, unused */, String_t* ___h_name0, StringU5BU5D_t4054002952* ___h_aliases1, StringU5BU5D_t4054002952* ___h_addrlist2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern "C"  IPHostEntry_t737820957 * Dns_GetHostByAddressFromString_m1166485506 (Il2CppObject * __this /* static, unused */, String_t* ___address0, bool ___parse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C"  IPHostEntry_t737820957 * Dns_GetHostEntry_m1150532033 (Il2CppObject * __this /* static, unused */, String_t* ___hostNameOrAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern "C"  IPHostEntry_t737820957 * Dns_GetHostEntry_m3712714308 (Il2CppObject * __this /* static, unused */, IPAddress_t3525271463 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern "C"  IPAddressU5BU5D_t1215594974* Dns_GetHostAddresses_m1512328765 (Il2CppObject * __this /* static, unused */, String_t* ___hostNameOrAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C"  IPHostEntry_t737820957 * Dns_GetHostByName_m840368461 (Il2CppObject * __this /* static, unused */, String_t* ___hostName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
