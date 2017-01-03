#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2012439129;
// UnityEngine.YieldInstruction
struct YieldInstruction_t2048002629;
// UnityEngineInternal.GenericStack
struct GenericStack_t931085639;
// System.Delegate
struct Delegate_t3310234105;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t1657757719;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "UnityEngine_UnityEngine_WWWTranscoder609724394.h"
#include "UnityEngine_UnityEngine_WWWTranscoder609724394MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_WWW3134621005MethodDeclarations.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_Encoding2012439129MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte2862609660.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_IO_MemoryStream418716369MethodDeclarations.h"
#include "mscorlib_System_IO_MemoryStream418716369.h"
#include "UnityEngine_UnityEngine_YieldInstruction2048002629.h"
#include "UnityEngine_UnityEngine_YieldInstruction2048002629MethodDeclarations.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_GenericStack931085639.h"
#include "UnityEngine_UnityEngineInternal_GenericStack931085639MethodDeclarations.h"
#include "mscorlib_System_Collections_Stack1761758306MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal4096243933.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal4096243933MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension2541795172.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension2541795172MethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Delegate3310234105.h"
#include "mscorlib_System_Delegate3310234105MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1657757719.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1657757719MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules2889237774.h"
#include "mscorlib_System_Enum2862688501MethodDeclarations.h"
#include "mscorlib_System_Enum2862688501.h"
#include "mscorlib_System_Attribute2523058482MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules2889237774MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.WWWTranscoder::.cctor()
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3633740456;
extern Il2CppCodeGenString* _stringLiteral285443752;
extern Il2CppCodeGenString* _stringLiteral2318011663;
extern Il2CppCodeGenString* _stringLiteral4217153853;
extern const uint32_t WWWTranscoder__cctor_m1486747496_MetadataUsageId;
extern "C"  void WWWTranscoder__cctor_m1486747496 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder__cctor_m1486747496_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t2012439129 * L_0 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t4260760469* L_1 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral3633740456);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_ucHexChars_0(L_1);
		Encoding_t2012439129 * L_2 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t4260760469* L_3 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral285443752);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_lcHexChars_1(L_3);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_urlEscapeChar_2(((int32_t)37));
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_urlSpace_3(((int32_t)43));
		Encoding_t2012439129 * L_4 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t4260760469* L_5 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, _stringLiteral2318011663);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_urlForbidden_4(L_5);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_qpEscapeChar_5(((int32_t)61));
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_qpSpace_6(((int32_t)95));
		Encoding_t2012439129 * L_6 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t4260760469* L_7 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral4217153853);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_qpForbidden_7(L_7);
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern Il2CppClass* ByteU5BU5D_t4260760469_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_Byte2Hex_m2414999496_MetadataUsageId;
extern "C"  ByteU5BU5D_t4260760469* WWWTranscoder_Byte2Hex_m2414999496 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, ByteU5BU5D_t4260760469* ___hexChars1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_Byte2Hex_m2414999496_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t4260760469* V_0 = NULL;
	{
		V_0 = ((ByteU5BU5D_t4260760469*)SZArrayNew(ByteU5BU5D_t4260760469_il2cpp_TypeInfo_var, (uint32_t)2));
		ByteU5BU5D_t4260760469* L_0 = V_0;
		ByteU5BU5D_t4260760469* L_1 = ___hexChars1;
		uint8_t L_2 = ___b0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2>>(int32_t)4)));
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		ByteU5BU5D_t4260760469* L_5 = V_0;
		ByteU5BU5D_t4260760469* L_6 = ___hexChars1;
		uint8_t L_7 = ___b0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7&(int32_t)((int32_t)15))));
		int32_t L_8 = ((int32_t)((int32_t)L_7&(int32_t)((int32_t)15)));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_9);
		ByteU5BU5D_t4260760469* L_10 = V_0;
		return L_10;
	}
}
// System.String UnityEngine.WWWTranscoder::URLEncode(System.String,System.Text.Encoding)
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_URLEncode_m3301913818_MetadataUsageId;
extern "C"  String_t* WWWTranscoder_URLEncode_m3301913818 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t2012439129 * ___e1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_URLEncode_m3301913818_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t4260760469* V_0 = NULL;
	{
		Encoding_t2012439129 * L_0 = ___e1;
		String_t* L_1 = ___toEncode0;
		NullCheck(L_0);
		ByteU5BU5D_t4260760469* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlEscapeChar_2();
		uint8_t L_4 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlSpace_3();
		ByteU5BU5D_t4260760469* L_5 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlForbidden_4();
		ByteU5BU5D_t4260760469* L_6 = WWWTranscoder_Encode_m2677436946(NULL /*static, unused*/, L_2, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t2012439129 * L_7 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4260760469* L_8 = V_0;
		ByteU5BU5D_t4260760469* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length)))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_URLEncode_m4039667511_MetadataUsageId;
extern "C"  ByteU5BU5D_t4260760469* WWWTranscoder_URLEncode_m4039667511 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___toEncode0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_URLEncode_m4039667511_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t4260760469* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlEscapeChar_2();
		uint8_t L_2 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlSpace_3();
		ByteU5BU5D_t4260760469* L_3 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlForbidden_4();
		ByteU5BU5D_t4260760469* L_4 = WWWTranscoder_Encode_m2677436946(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_QPEncode_m1021207296_MetadataUsageId;
extern "C"  String_t* WWWTranscoder_QPEncode_m1021207296 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t2012439129 * ___e1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_QPEncode_m1021207296_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t4260760469* V_0 = NULL;
	{
		Encoding_t2012439129 * L_0 = ___e1;
		String_t* L_1 = ___toEncode0;
		NullCheck(L_0);
		ByteU5BU5D_t4260760469* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_qpEscapeChar_5();
		uint8_t L_4 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_qpSpace_6();
		ByteU5BU5D_t4260760469* L_5 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_qpForbidden_7();
		ByteU5BU5D_t4260760469* L_6 = WWWTranscoder_Encode_m2677436946(NULL /*static, unused*/, L_2, L_3, L_4, L_5, (bool)1, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t2012439129 * L_7 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4260760469* L_8 = V_0;
		ByteU5BU5D_t4260760469* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length)))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern Il2CppClass* MemoryStream_t418716369_il2cpp_TypeInfo_var;
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_Encode_m2677436946_MetadataUsageId;
extern "C"  ByteU5BU5D_t4260760469* WWWTranscoder_Encode_m2677436946 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, uint8_t ___escapeChar1, uint8_t ___space2, ByteU5BU5D_t4260760469* ___forbidden3, bool ___uppercase4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_Encode_m2677436946_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	MemoryStream_t418716369 * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t4260760469* V_2 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	MemoryStream_t418716369 * G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	MemoryStream_t418716369 * G_B8_1 = NULL;
	ByteU5BU5D_t4260760469* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	MemoryStream_t418716369 * G_B10_2 = NULL;
	{
		ByteU5BU5D_t4260760469* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_t418716369 * L_1 = (MemoryStream_t418716369 *)il2cpp_codegen_object_new(MemoryStream_t418716369_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1061194329(L_1, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length))))*(int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			ByteU5BU5D_t4260760469* L_2 = ___input0;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
			int32_t L_4 = L_3;
			uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			MemoryStream_t418716369 * L_6 = V_0;
			uint8_t L_7 = ___space2;
			NullCheck(L_6);
			VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_6, L_7);
			goto IL_0085;
		}

IL_0028:
		{
			ByteU5BU5D_t4260760469* L_8 = ___input0;
			int32_t L_9 = V_1;
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
			int32_t L_10 = L_9;
			uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			if ((((int32_t)L_11) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			ByteU5BU5D_t4260760469* L_12 = ___input0;
			int32_t L_13 = V_1;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			if ((((int32_t)L_15) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			ByteU5BU5D_t4260760469* L_16 = ___forbidden3;
			ByteU5BU5D_t4260760469* L_17 = ___input0;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			bool L_21 = WWWTranscoder_ByteArrayContains_m3244919989(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			MemoryStream_t418716369 * L_22 = V_0;
			uint8_t L_23 = ___escapeChar1;
			NullCheck(L_22);
			VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_22, L_23);
			MemoryStream_t418716369 * L_24 = V_0;
			ByteU5BU5D_t4260760469* L_25 = ___input0;
			int32_t L_26 = V_1;
			NullCheck(L_25);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
			int32_t L_27 = L_26;
			uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			bool L_29 = ___uppercase4;
			G_B8_0 = ((int32_t)(L_28));
			G_B8_1 = L_24;
			if (!L_29)
			{
				G_B9_0 = ((int32_t)(L_28));
				G_B9_1 = L_24;
				goto IL_0066;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4260760469* L_30 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_ucHexChars_0();
			G_B10_0 = L_30;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4260760469* L_31 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_lcHexChars_1();
			G_B10_0 = L_31;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4260760469* L_32 = WWWTranscoder_Byte2Hex_m2414999496(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/NULL);
			NullCheck(G_B10_2);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, G_B10_2, L_32, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			MemoryStream_t418716369 * L_33 = V_0;
			ByteU5BU5D_t4260760469* L_34 = ___input0;
			int32_t L_35 = V_1;
			NullCheck(L_34);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
			int32_t L_36 = L_35;
			uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
			NullCheck(L_33);
			VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_33, L_37);
		}

IL_0085:
		{
			int32_t L_38 = V_1;
			V_1 = ((int32_t)((int32_t)L_38+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_39 = V_1;
			ByteU5BU5D_t4260760469* L_40 = ___input0;
			NullCheck(L_40);
			if ((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_40)->max_length)))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			MemoryStream_t418716369 * L_41 = V_0;
			NullCheck(L_41);
			ByteU5BU5D_t4260760469* L_42 = VirtFuncInvoker0< ByteU5BU5D_t4260760469* >::Invoke(26 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_41);
			V_2 = L_42;
			IL2CPP_LEAVE(0xB0, FINALLY_00a3);
		}

IL_009e:
		{
			; // IL_009e: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t418716369 * L_43 = V_0;
			if (!L_43)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			MemoryStream_t418716369 * L_44 = V_0;
			NullCheck(L_44);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_44);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_00b0:
	{
		ByteU5BU5D_t4260760469* L_45 = V_2;
		return L_45;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C"  bool WWWTranscoder_ByteArrayContains_m3244919989 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___array0, uint8_t ___b1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t4260760469* L_0 = ___array0;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length))));
		V_1 = 0;
		goto IL_001a;
	}

IL_000b:
	{
		ByteU5BU5D_t4260760469* L_1 = ___array0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5 = ___b1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_SevenBitClean_m1805125217_MetadataUsageId;
extern "C"  bool WWWTranscoder_SevenBitClean_m1805125217 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t2012439129 * ___e1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_SevenBitClean_m1805125217_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t2012439129 * L_0 = ___e1;
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		ByteU5BU5D_t4260760469* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
		bool L_3 = WWWTranscoder_SevenBitClean_m945043319(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C"  bool WWWTranscoder_SevenBitClean_m945043319 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		ByteU5BU5D_t4260760469* L_0 = ___input0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_t4260760469* L_4 = ___input0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)126))))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return (bool)0;
	}

IL_001d:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		ByteU5BU5D_t4260760469* L_10 = ___input0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_10)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C"  void YieldInstruction__ctor_m539393484 (YieldInstruction_t2048002629 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t2048002629_marshal_pinvoke(const YieldInstruction_t2048002629& unmarshaled, YieldInstruction_t2048002629_marshaled_pinvoke& marshaled)
{
}
extern "C" void YieldInstruction_t2048002629_marshal_pinvoke_back(const YieldInstruction_t2048002629_marshaled_pinvoke& marshaled, YieldInstruction_t2048002629& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t2048002629_marshal_pinvoke_cleanup(YieldInstruction_t2048002629_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t2048002629_marshal_com(const YieldInstruction_t2048002629& unmarshaled, YieldInstruction_t2048002629_marshaled_com& marshaled)
{
}
extern "C" void YieldInstruction_t2048002629_marshal_com_back(const YieldInstruction_t2048002629_marshaled_com& marshaled, YieldInstruction_t2048002629& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t2048002629_marshal_com_cleanup(YieldInstruction_t2048002629_marshaled_com& marshaled)
{
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C"  void GenericStack__ctor_m2328546233 (GenericStack_t931085639 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m1821673314(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern Il2CppClass* MathfInternal_t4096243933_il2cpp_TypeInfo_var;
extern const uint32_t MathfInternal__cctor_m2600550988_MetadataUsageId;
extern "C"  void MathfInternal__cctor_m2600550988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m2600550988_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->set_FloatMinDenormal_1((1.401298E-45f));
		((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->set_IsFlushToZeroEnabled_2((bool)1);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_pinvoke(const MathfInternal_t4096243933& unmarshaled, MathfInternal_t4096243933_marshaled_pinvoke& marshaled)
{
}
extern "C" void MathfInternal_t4096243933_marshal_pinvoke_back(const MathfInternal_t4096243933_marshaled_pinvoke& marshaled, MathfInternal_t4096243933& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_pinvoke_cleanup(MathfInternal_t4096243933_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_com(const MathfInternal_t4096243933& unmarshaled, MathfInternal_t4096243933_marshaled_com& marshaled)
{
}
extern "C" void MathfInternal_t4096243933_marshal_com_back(const MathfInternal_t4096243933_marshaled_com& marshaled, MathfInternal_t4096243933& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_com_cleanup(MathfInternal_t4096243933_marshaled_com& marshaled)
{
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C"  Delegate_t3310234105 * NetFxCoreExtensions_CreateDelegate_m3408605866 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, Il2CppObject * ___target2, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType1;
		Il2CppObject * L_1 = ___target2;
		MethodInfo_t * L_2 = ___self0;
		Delegate_t3310234105 * L_3 = Delegate_CreateDelegate_m3460497746(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C"  MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m1628849205 (Il2CppObject * __this /* static, unused */, Delegate_t3310234105 * ___self0, const MethodInfo* method)
{
	{
		Delegate_t3310234105 * L_0 = ___self0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m669548326(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern Il2CppClass* TypeInferenceRules_t2889237774_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId;
extern "C"  void TypeInferenceRuleAttribute__ctor_m1168575159 (TypeInferenceRuleAttribute_t1657757719 * __this, int32_t ___rule0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(TypeInferenceRules_t2889237774_il2cpp_TypeInfo_var, &L_1);
		NullCheck((Enum_t2862688501 *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t2862688501 *)L_2);
		TypeInferenceRuleAttribute__ctor_m2173394041(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m2173394041 (TypeInferenceRuleAttribute_t1657757719 * __this, String_t* ___rule0, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m318752778 (TypeInferenceRuleAttribute_t1657757719 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get__rule_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
