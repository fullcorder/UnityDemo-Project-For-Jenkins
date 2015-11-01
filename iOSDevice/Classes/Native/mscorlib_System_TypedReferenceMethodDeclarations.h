#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.TypedReference
#include "mscorlib_System_TypedReference.h"

// System.Boolean System.TypedReference::Equals(System.Object)
extern "C" bool TypedReference_Equals_m5837 (TypedReference_t986 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TypedReference::GetHashCode()
extern "C" int32_t TypedReference_GetHashCode_m5838 (TypedReference_t986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
