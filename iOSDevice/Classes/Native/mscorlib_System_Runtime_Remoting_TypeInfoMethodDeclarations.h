﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.TypeInfo
struct TypeInfo_t1351;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Runtime.Remoting.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m8165 (TypeInfo_t1351 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.TypeInfo::get_TypeName()
extern "C" String_t* TypeInfo_get_TypeName_m8166 (TypeInfo_t1351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
