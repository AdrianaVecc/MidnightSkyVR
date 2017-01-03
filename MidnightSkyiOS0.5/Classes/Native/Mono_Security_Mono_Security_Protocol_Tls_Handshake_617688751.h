﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2623608376.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct  TlsClientCertificate_t617688751  : public HandshakeMessage_t2623608376
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::clientCertSelected
	bool ___clientCertSelected_9;
	// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::clientCert
	X509Certificate_t3076817455 * ___clientCert_10;

public:
	inline static int32_t get_offset_of_clientCertSelected_9() { return static_cast<int32_t>(offsetof(TlsClientCertificate_t617688751, ___clientCertSelected_9)); }
	inline bool get_clientCertSelected_9() const { return ___clientCertSelected_9; }
	inline bool* get_address_of_clientCertSelected_9() { return &___clientCertSelected_9; }
	inline void set_clientCertSelected_9(bool value)
	{
		___clientCertSelected_9 = value;
	}

	inline static int32_t get_offset_of_clientCert_10() { return static_cast<int32_t>(offsetof(TlsClientCertificate_t617688751, ___clientCert_10)); }
	inline X509Certificate_t3076817455 * get_clientCert_10() const { return ___clientCert_10; }
	inline X509Certificate_t3076817455 ** get_address_of_clientCert_10() { return &___clientCert_10; }
	inline void set_clientCert_10(X509Certificate_t3076817455 * value)
	{
		___clientCert_10 = value;
		Il2CppCodeGenWriteBarrier(&___clientCert_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
