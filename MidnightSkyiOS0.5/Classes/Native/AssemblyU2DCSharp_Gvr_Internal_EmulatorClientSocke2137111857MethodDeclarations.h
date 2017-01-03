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

// Gvr.Internal.EmulatorClientSocket
struct EmulatorClientSocket_t2137111857;
// Gvr.Internal.EmulatorManager
struct EmulatorManager_t622010154;
// System.Net.Sockets.TcpClient
struct TcpClient_t838416830;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t3953762560;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager622010154.h"
#include "System_System_Net_Sockets_TcpClient838416830.h"
#include "System_System_Net_Sockets_NetworkStream3953762560.h"

// System.Void Gvr.Internal.EmulatorClientSocket::.ctor()
extern "C"  void EmulatorClientSocket__ctor_m1954127762 (EmulatorClientSocket_t2137111857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::.cctor()
extern "C"  void EmulatorClientSocket__cctor_m4261289563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.EmulatorClientSocket::get_connected()
extern "C"  bool EmulatorClientSocket_get_connected_m2774235364 (EmulatorClientSocket_t2137111857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::set_connected(System.Boolean)
extern "C"  void EmulatorClientSocket_set_connected_m1301755571 (EmulatorClientSocket_t2137111857 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::Init(Gvr.Internal.EmulatorManager)
extern "C"  void EmulatorClientSocket_Init_m2774358864 (EmulatorClientSocket_t2137111857 * __this, EmulatorManager_t622010154 * ___remote0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::phoneEventSocketLoop()
extern "C"  void EmulatorClientSocket_phoneEventSocketLoop_m1374140469 (EmulatorClientSocket_t2137111857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::phoneConnect()
extern "C"  void EmulatorClientSocket_phoneConnect_m2726365934 (EmulatorClientSocket_t2137111857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::setupPortForwarding(System.Int32)
extern "C"  void EmulatorClientSocket_setupPortForwarding_m3538072284 (EmulatorClientSocket_t2137111857 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::ProcessConnection(System.Net.Sockets.TcpClient)
extern "C"  void EmulatorClientSocket_ProcessConnection_m575269935 (EmulatorClientSocket_t2137111857 * __this, TcpClient_t838416830 * ___tcpClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorClientSocket::blockingRead(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t EmulatorClientSocket_blockingRead_m12540386 (EmulatorClientSocket_t2137111857 * __this, NetworkStream_t3953762560 * ___stream0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___index2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::OnDestroy()
extern "C"  void EmulatorClientSocket_OnDestroy_m3899480971 (EmulatorClientSocket_t2137111857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorClientSocket::unpack32bits(System.Byte[],System.Int32)
extern "C"  int32_t EmulatorClientSocket_unpack32bits_m1107198665 (EmulatorClientSocket_t2137111857 * __this, ByteU5BU5D_t4260760469* ___array0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Gvr.Internal.EmulatorClientSocket::correctEndianness(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* EmulatorClientSocket_correctEndianness_m1698232403 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
