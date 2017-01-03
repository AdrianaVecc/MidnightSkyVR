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

// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t3294241089;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1159596143;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Security.SecureString
struct SecureString_t2885682300;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Diagnostics.ProcessStartInfo::.ctor(System.String,System.String)
extern "C"  void ProcessStartInfo__ctor_m3985322678 (ProcessStartInfo_t3294241089 * __this, String_t* ___filename0, String_t* ___arguments1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::.cctor()
extern "C"  void ProcessStartInfo__cctor_m2177001637 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_Arguments()
extern "C"  String_t* ProcessStartInfo_get_Arguments_m186351478 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_CreateNoWindow(System.Boolean)
extern "C"  void ProcessStartInfo_set_CreateNoWindow_m2078234909 (ProcessStartInfo_t3294241089 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.ProcessStartInfo::get_EnvironmentVariables()
extern "C"  StringDictionary_t1159596143 * ProcessStartInfo_get_EnvironmentVariables_m1790549594 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_HaveEnvVars()
extern "C"  bool ProcessStartInfo_get_HaveEnvVars_m4127245252 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_FileName()
extern "C"  String_t* ProcessStartInfo_get_FileName_m2817199849 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardError()
extern "C"  bool ProcessStartInfo_get_RedirectStandardError_m3397334626 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardError(System.Boolean)
extern "C"  void ProcessStartInfo_set_RedirectStandardError_m2468258383 (ProcessStartInfo_t3294241089 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardInput()
extern "C"  bool ProcessStartInfo_get_RedirectStandardInput_m2536199076 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardOutput()
extern "C"  bool ProcessStartInfo_get_RedirectStandardOutput_m912280457 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardErrorEncoding()
extern "C"  Encoding_t2012439129 * ProcessStartInfo_get_StandardErrorEncoding_m3185784933 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardOutputEncoding()
extern "C"  Encoding_t2012439129 * ProcessStartInfo_get_StandardOutputEncoding_m2563939308 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_UseShellExecute()
extern "C"  bool ProcessStartInfo_get_UseShellExecute_m414942239 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_UseShellExecute(System.Boolean)
extern "C"  void ProcessStartInfo_set_UseShellExecute_m1881264588 (ProcessStartInfo_t3294241089 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_WorkingDirectory()
extern "C"  String_t* ProcessStartInfo_get_WorkingDirectory_m2922684606 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_LoadUserProfile()
extern "C"  bool ProcessStartInfo_get_LoadUserProfile_m3109495147 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_UserName()
extern "C"  String_t* ProcessStartInfo_get_UserName_m2607664632 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_Domain()
extern "C"  String_t* ProcessStartInfo_get_Domain_m580933254 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecureString System.Diagnostics.ProcessStartInfo::get_Password()
extern "C"  SecureString_t2885682300 * ProcessStartInfo_get_Password_m414565720 (ProcessStartInfo_t3294241089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
