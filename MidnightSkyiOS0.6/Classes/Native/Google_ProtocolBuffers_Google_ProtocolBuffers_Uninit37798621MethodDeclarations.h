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

// Google.ProtocolBuffers.UninitializedMessageException
struct UninitializedMessageException_t37798621;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t2166426326;
// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t2282892778;

#include "codegen/il2cpp-codegen.h"

// System.Void Google.ProtocolBuffers.UninitializedMessageException::.ctor(Google.ProtocolBuffers.IMessageLite)
extern "C"  void UninitializedMessageException__ctor_m787888070 (UninitializedMessageException_t37798621 * __this, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.UninitializedMessageException::AsInvalidProtocolBufferException()
extern "C"  InvalidProtocolBufferException_t2282892778 * UninitializedMessageException_AsInvalidProtocolBufferException_m3036469865 (UninitializedMessageException_t37798621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
