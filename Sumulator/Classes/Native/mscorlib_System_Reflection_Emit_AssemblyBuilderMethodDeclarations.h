#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1145;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1147;
// System.Type[]
struct TypeU5BU5D_t532;
// System.Exception
struct Exception_t287;
// System.Reflection.AssemblyName
struct AssemblyName_t1192;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m7141 (AssemblyBuilder_t1145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1147* AssemblyBuilder_GetModulesInternal_m7142 (AssemblyBuilder_t1145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t532* AssemblyBuilder_GetTypes_m7143 (AssemblyBuilder_t1145 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m7144 (AssemblyBuilder_t1145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t287 * AssemblyBuilder_not_supported_m7145 (AssemblyBuilder_t1145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1192 * AssemblyBuilder_UnprotectedGetName_m7146 (AssemblyBuilder_t1145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
