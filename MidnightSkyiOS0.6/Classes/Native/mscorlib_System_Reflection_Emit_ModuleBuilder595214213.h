﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t1363945486;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1002978443;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t3788085887;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "mscorlib_System_Reflection_Module1394482686.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t595214213  : public Module_t1394482686
{
public:
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t1363945486* ___types_11;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t1002978443 * ___assemblyb_12;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t3230847821* ___table_indexes_13;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t3788085887 * ___token_gen_14;

public:
	inline static int32_t get_offset_of_num_types_10() { return static_cast<int32_t>(offsetof(ModuleBuilder_t595214213, ___num_types_10)); }
	inline int32_t get_num_types_10() const { return ___num_types_10; }
	inline int32_t* get_address_of_num_types_10() { return &___num_types_10; }
	inline void set_num_types_10(int32_t value)
	{
		___num_types_10 = value;
	}

	inline static int32_t get_offset_of_types_11() { return static_cast<int32_t>(offsetof(ModuleBuilder_t595214213, ___types_11)); }
	inline TypeBuilderU5BU5D_t1363945486* get_types_11() const { return ___types_11; }
	inline TypeBuilderU5BU5D_t1363945486** get_address_of_types_11() { return &___types_11; }
	inline void set_types_11(TypeBuilderU5BU5D_t1363945486* value)
	{
		___types_11 = value;
		Il2CppCodeGenWriteBarrier(&___types_11, value);
	}

	inline static int32_t get_offset_of_assemblyb_12() { return static_cast<int32_t>(offsetof(ModuleBuilder_t595214213, ___assemblyb_12)); }
	inline AssemblyBuilder_t1002978443 * get_assemblyb_12() const { return ___assemblyb_12; }
	inline AssemblyBuilder_t1002978443 ** get_address_of_assemblyb_12() { return &___assemblyb_12; }
	inline void set_assemblyb_12(AssemblyBuilder_t1002978443 * value)
	{
		___assemblyb_12 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyb_12, value);
	}

	inline static int32_t get_offset_of_table_indexes_13() { return static_cast<int32_t>(offsetof(ModuleBuilder_t595214213, ___table_indexes_13)); }
	inline Int32U5BU5D_t3230847821* get_table_indexes_13() const { return ___table_indexes_13; }
	inline Int32U5BU5D_t3230847821** get_address_of_table_indexes_13() { return &___table_indexes_13; }
	inline void set_table_indexes_13(Int32U5BU5D_t3230847821* value)
	{
		___table_indexes_13 = value;
		Il2CppCodeGenWriteBarrier(&___table_indexes_13, value);
	}

	inline static int32_t get_offset_of_token_gen_14() { return static_cast<int32_t>(offsetof(ModuleBuilder_t595214213, ___token_gen_14)); }
	inline ModuleBuilderTokenGenerator_t3788085887 * get_token_gen_14() const { return ___token_gen_14; }
	inline ModuleBuilderTokenGenerator_t3788085887 ** get_address_of_token_gen_14() { return &___token_gen_14; }
	inline void set_token_gen_14(ModuleBuilderTokenGenerator_t3788085887 * value)
	{
		___token_gen_14 = value;
		Il2CppCodeGenWriteBarrier(&___token_gen_14, value);
	}
};

struct ModuleBuilder_t595214213_StaticFields
{
public:
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t3324145743* ___type_modifiers_15;

public:
	inline static int32_t get_offset_of_type_modifiers_15() { return static_cast<int32_t>(offsetof(ModuleBuilder_t595214213_StaticFields, ___type_modifiers_15)); }
	inline CharU5BU5D_t3324145743* get_type_modifiers_15() const { return ___type_modifiers_15; }
	inline CharU5BU5D_t3324145743** get_address_of_type_modifiers_15() { return &___type_modifiers_15; }
	inline void set_type_modifiers_15(CharU5BU5D_t3324145743* value)
	{
		___type_modifiers_15 = value;
		Il2CppCodeGenWriteBarrier(&___type_modifiers_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
