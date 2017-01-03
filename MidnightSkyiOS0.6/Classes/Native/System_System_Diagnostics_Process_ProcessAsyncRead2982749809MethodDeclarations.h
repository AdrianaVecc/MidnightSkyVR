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

// System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t2982749809;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;
struct ProcessAsyncReader_t2982749809_marshaled_pinvoke;
struct ProcessAsyncReader_t2982749809_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::get_IsCompleted()
extern "C"  bool ProcessAsyncReader_get_IsCompleted_m2290866373 (ProcessAsyncReader_t2982749809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Diagnostics.Process/ProcessAsyncReader::get_WaitHandle()
extern "C"  WaitHandle_t1661568373 * ProcessAsyncReader_get_WaitHandle_m3518133136 (ProcessAsyncReader_t2982749809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::Close()
extern "C"  void ProcessAsyncReader_Close_m3559474383 (ProcessAsyncReader_t2982749809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ProcessAsyncReader_t2982749809;
struct ProcessAsyncReader_t2982749809_marshaled_pinvoke;

extern "C" void ProcessAsyncReader_t2982749809_marshal_pinvoke(const ProcessAsyncReader_t2982749809& unmarshaled, ProcessAsyncReader_t2982749809_marshaled_pinvoke& marshaled);
extern "C" void ProcessAsyncReader_t2982749809_marshal_pinvoke_back(const ProcessAsyncReader_t2982749809_marshaled_pinvoke& marshaled, ProcessAsyncReader_t2982749809& unmarshaled);
extern "C" void ProcessAsyncReader_t2982749809_marshal_pinvoke_cleanup(ProcessAsyncReader_t2982749809_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ProcessAsyncReader_t2982749809;
struct ProcessAsyncReader_t2982749809_marshaled_com;

extern "C" void ProcessAsyncReader_t2982749809_marshal_com(const ProcessAsyncReader_t2982749809& unmarshaled, ProcessAsyncReader_t2982749809_marshaled_com& marshaled);
extern "C" void ProcessAsyncReader_t2982749809_marshal_com_back(const ProcessAsyncReader_t2982749809_marshaled_com& marshaled, ProcessAsyncReader_t2982749809& unmarshaled);
extern "C" void ProcessAsyncReader_t2982749809_marshal_com_cleanup(ProcessAsyncReader_t2982749809_marshaled_com& marshaled);
