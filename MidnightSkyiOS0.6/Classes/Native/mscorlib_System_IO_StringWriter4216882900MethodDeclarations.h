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

// System.IO.StringWriter
struct StringWriter_t4216882900;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.IFormatProvider
struct IFormatProvider_t192740775;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.IO.StringWriter::.ctor()
extern "C"  void StringWriter__ctor_m3428223077 (StringWriter_t4216882900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C"  void StringWriter__ctor_m3379070757 (StringWriter_t4216882900 * __this, StringBuilder_t243639308 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C"  void StringWriter__ctor_m2916801583 (StringWriter_t4216882900 * __this, StringBuilder_t243639308 * ___sb0, Il2CppObject * ___formatProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StringWriter::get_Encoding()
extern "C"  Encoding_t2012439129 * StringWriter_get_Encoding_m2439380529 (StringWriter_t4216882900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C"  void StringWriter_Close_m844115323 (StringWriter_t4216882900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C"  void StringWriter_Dispose_m2392658265 (StringWriter_t4216882900 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C"  String_t* StringWriter_ToString_m2255216590 (StringWriter_t4216882900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C"  void StringWriter_Write_m3681074171 (StringWriter_t4216882900 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C"  void StringWriter_Write_m133434528 (StringWriter_t4216882900 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void StringWriter_Write_m2891913337 (StringWriter_t4216882900 * __this, CharU5BU5D_t3324145743* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
