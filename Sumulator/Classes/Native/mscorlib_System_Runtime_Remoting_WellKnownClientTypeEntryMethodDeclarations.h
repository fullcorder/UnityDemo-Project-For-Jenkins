﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct WellKnownClientTypeEntry_t1352;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.WellKnownClientTypeEntry::.ctor(System.String,System.String,System.String)
extern "C" void WellKnownClientTypeEntry__ctor_m8167 (WellKnownClientTypeEntry_t1352 * __this, String_t* ___typeName, String_t* ___assemblyName, String_t* ___objectUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* WellKnownClientTypeEntry_get_ApplicationUrl_m8168 (WellKnownClientTypeEntry_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::get_ObjectType()
extern "C" Type_t * WellKnownClientTypeEntry_get_ObjectType_m8169 (WellKnownClientTypeEntry_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::get_ObjectUrl()
extern "C" String_t* WellKnownClientTypeEntry_get_ObjectUrl_m8170 (WellKnownClientTypeEntry_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::ToString()
extern "C" String_t* WellKnownClientTypeEntry_ToString_m8171 (WellKnownClientTypeEntry_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
