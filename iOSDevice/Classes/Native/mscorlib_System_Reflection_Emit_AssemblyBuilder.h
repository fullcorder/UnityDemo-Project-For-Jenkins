﻿#pragma once
#include <stdint.h>
// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t1146;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1147;
// System.Type
struct Type_t;
// Mono.Security.StrongName
struct StrongName_t1054;
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t1145  : public Assembly_t947
{
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t1146* ___modules_10;
	// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::loaded_modules
	ModuleU5BU5D_t1147* ___loaded_modules_11;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_object_type
	Type_t * ___corlib_object_type_12;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_13;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_14;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t1054 * ___sn_15;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context_16;
};
