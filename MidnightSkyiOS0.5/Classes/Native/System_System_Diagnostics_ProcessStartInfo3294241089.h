#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Specialized.ProcessStringDictionary
struct ProcessStringDictionary_t3809386916;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Security.SecureString
struct SecureString_t2885682300;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ProcessStartInfo
struct  ProcessStartInfo_t3294241089  : public Il2CppObject
{
public:
	// System.String System.Diagnostics.ProcessStartInfo::arguments
	String_t* ___arguments_0;
	// System.IntPtr System.Diagnostics.ProcessStartInfo::error_dialog_parent_handle
	IntPtr_t ___error_dialog_parent_handle_1;
	// System.String System.Diagnostics.ProcessStartInfo::filename
	String_t* ___filename_2;
	// System.String System.Diagnostics.ProcessStartInfo::verb
	String_t* ___verb_3;
	// System.String System.Diagnostics.ProcessStartInfo::working_directory
	String_t* ___working_directory_4;
	// System.Collections.Specialized.ProcessStringDictionary System.Diagnostics.ProcessStartInfo::envVars
	ProcessStringDictionary_t3809386916 * ___envVars_5;
	// System.Boolean System.Diagnostics.ProcessStartInfo::create_no_window
	bool ___create_no_window_6;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirect_standard_error
	bool ___redirect_standard_error_7;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirect_standard_input
	bool ___redirect_standard_input_8;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirect_standard_output
	bool ___redirect_standard_output_9;
	// System.Boolean System.Diagnostics.ProcessStartInfo::use_shell_execute
	bool ___use_shell_execute_10;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::encoding_stderr
	Encoding_t2012439129 * ___encoding_stderr_11;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::encoding_stdout
	Encoding_t2012439129 * ___encoding_stdout_12;
	// System.String System.Diagnostics.ProcessStartInfo::username
	String_t* ___username_13;
	// System.String System.Diagnostics.ProcessStartInfo::domain
	String_t* ___domain_14;
	// System.Security.SecureString System.Diagnostics.ProcessStartInfo::password
	SecureString_t2885682300 * ___password_15;
	// System.Boolean System.Diagnostics.ProcessStartInfo::load_user_profile
	bool ___load_user_profile_16;

public:
	inline static int32_t get_offset_of_arguments_0() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___arguments_0)); }
	inline String_t* get_arguments_0() const { return ___arguments_0; }
	inline String_t** get_address_of_arguments_0() { return &___arguments_0; }
	inline void set_arguments_0(String_t* value)
	{
		___arguments_0 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_0, value);
	}

	inline static int32_t get_offset_of_error_dialog_parent_handle_1() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___error_dialog_parent_handle_1)); }
	inline IntPtr_t get_error_dialog_parent_handle_1() const { return ___error_dialog_parent_handle_1; }
	inline IntPtr_t* get_address_of_error_dialog_parent_handle_1() { return &___error_dialog_parent_handle_1; }
	inline void set_error_dialog_parent_handle_1(IntPtr_t value)
	{
		___error_dialog_parent_handle_1 = value;
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier(&___filename_2, value);
	}

	inline static int32_t get_offset_of_verb_3() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___verb_3)); }
	inline String_t* get_verb_3() const { return ___verb_3; }
	inline String_t** get_address_of_verb_3() { return &___verb_3; }
	inline void set_verb_3(String_t* value)
	{
		___verb_3 = value;
		Il2CppCodeGenWriteBarrier(&___verb_3, value);
	}

	inline static int32_t get_offset_of_working_directory_4() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___working_directory_4)); }
	inline String_t* get_working_directory_4() const { return ___working_directory_4; }
	inline String_t** get_address_of_working_directory_4() { return &___working_directory_4; }
	inline void set_working_directory_4(String_t* value)
	{
		___working_directory_4 = value;
		Il2CppCodeGenWriteBarrier(&___working_directory_4, value);
	}

	inline static int32_t get_offset_of_envVars_5() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___envVars_5)); }
	inline ProcessStringDictionary_t3809386916 * get_envVars_5() const { return ___envVars_5; }
	inline ProcessStringDictionary_t3809386916 ** get_address_of_envVars_5() { return &___envVars_5; }
	inline void set_envVars_5(ProcessStringDictionary_t3809386916 * value)
	{
		___envVars_5 = value;
		Il2CppCodeGenWriteBarrier(&___envVars_5, value);
	}

	inline static int32_t get_offset_of_create_no_window_6() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___create_no_window_6)); }
	inline bool get_create_no_window_6() const { return ___create_no_window_6; }
	inline bool* get_address_of_create_no_window_6() { return &___create_no_window_6; }
	inline void set_create_no_window_6(bool value)
	{
		___create_no_window_6 = value;
	}

	inline static int32_t get_offset_of_redirect_standard_error_7() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___redirect_standard_error_7)); }
	inline bool get_redirect_standard_error_7() const { return ___redirect_standard_error_7; }
	inline bool* get_address_of_redirect_standard_error_7() { return &___redirect_standard_error_7; }
	inline void set_redirect_standard_error_7(bool value)
	{
		___redirect_standard_error_7 = value;
	}

	inline static int32_t get_offset_of_redirect_standard_input_8() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___redirect_standard_input_8)); }
	inline bool get_redirect_standard_input_8() const { return ___redirect_standard_input_8; }
	inline bool* get_address_of_redirect_standard_input_8() { return &___redirect_standard_input_8; }
	inline void set_redirect_standard_input_8(bool value)
	{
		___redirect_standard_input_8 = value;
	}

	inline static int32_t get_offset_of_redirect_standard_output_9() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___redirect_standard_output_9)); }
	inline bool get_redirect_standard_output_9() const { return ___redirect_standard_output_9; }
	inline bool* get_address_of_redirect_standard_output_9() { return &___redirect_standard_output_9; }
	inline void set_redirect_standard_output_9(bool value)
	{
		___redirect_standard_output_9 = value;
	}

	inline static int32_t get_offset_of_use_shell_execute_10() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___use_shell_execute_10)); }
	inline bool get_use_shell_execute_10() const { return ___use_shell_execute_10; }
	inline bool* get_address_of_use_shell_execute_10() { return &___use_shell_execute_10; }
	inline void set_use_shell_execute_10(bool value)
	{
		___use_shell_execute_10 = value;
	}

	inline static int32_t get_offset_of_encoding_stderr_11() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___encoding_stderr_11)); }
	inline Encoding_t2012439129 * get_encoding_stderr_11() const { return ___encoding_stderr_11; }
	inline Encoding_t2012439129 ** get_address_of_encoding_stderr_11() { return &___encoding_stderr_11; }
	inline void set_encoding_stderr_11(Encoding_t2012439129 * value)
	{
		___encoding_stderr_11 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_stderr_11, value);
	}

	inline static int32_t get_offset_of_encoding_stdout_12() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___encoding_stdout_12)); }
	inline Encoding_t2012439129 * get_encoding_stdout_12() const { return ___encoding_stdout_12; }
	inline Encoding_t2012439129 ** get_address_of_encoding_stdout_12() { return &___encoding_stdout_12; }
	inline void set_encoding_stdout_12(Encoding_t2012439129 * value)
	{
		___encoding_stdout_12 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_stdout_12, value);
	}

	inline static int32_t get_offset_of_username_13() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___username_13)); }
	inline String_t* get_username_13() const { return ___username_13; }
	inline String_t** get_address_of_username_13() { return &___username_13; }
	inline void set_username_13(String_t* value)
	{
		___username_13 = value;
		Il2CppCodeGenWriteBarrier(&___username_13, value);
	}

	inline static int32_t get_offset_of_domain_14() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___domain_14)); }
	inline String_t* get_domain_14() const { return ___domain_14; }
	inline String_t** get_address_of_domain_14() { return &___domain_14; }
	inline void set_domain_14(String_t* value)
	{
		___domain_14 = value;
		Il2CppCodeGenWriteBarrier(&___domain_14, value);
	}

	inline static int32_t get_offset_of_password_15() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___password_15)); }
	inline SecureString_t2885682300 * get_password_15() const { return ___password_15; }
	inline SecureString_t2885682300 ** get_address_of_password_15() { return &___password_15; }
	inline void set_password_15(SecureString_t2885682300 * value)
	{
		___password_15 = value;
		Il2CppCodeGenWriteBarrier(&___password_15, value);
	}

	inline static int32_t get_offset_of_load_user_profile_16() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089, ___load_user_profile_16)); }
	inline bool get_load_user_profile_16() const { return ___load_user_profile_16; }
	inline bool* get_address_of_load_user_profile_16() { return &___load_user_profile_16; }
	inline void set_load_user_profile_16(bool value)
	{
		___load_user_profile_16 = value;
	}
};

struct ProcessStartInfo_t3294241089_StaticFields
{
public:
	// System.String[] System.Diagnostics.ProcessStartInfo::empty
	StringU5BU5D_t4054002952* ___empty_17;

public:
	inline static int32_t get_offset_of_empty_17() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3294241089_StaticFields, ___empty_17)); }
	inline StringU5BU5D_t4054002952* get_empty_17() const { return ___empty_17; }
	inline StringU5BU5D_t4054002952** get_address_of_empty_17() { return &___empty_17; }
	inline void set_empty_17(StringU5BU5D_t4054002952* value)
	{
		___empty_17 = value;
		Il2CppCodeGenWriteBarrier(&___empty_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
