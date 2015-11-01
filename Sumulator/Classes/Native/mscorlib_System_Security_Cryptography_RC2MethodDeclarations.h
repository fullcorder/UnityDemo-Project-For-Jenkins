#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2
struct RC2_t761;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.RC2::.ctor()
extern "C" void RC2__ctor_m8448 (RC2_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RC2 System.Security.Cryptography.RC2::Create()
extern "C" RC2_t761 * RC2_Create_m3954 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RC2 System.Security.Cryptography.RC2::Create(System.String)
extern "C" RC2_t761 * RC2_Create_m8449 (Object_t * __this /* static, unused */, String_t* ___AlgName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2::get_EffectiveKeySize()
extern "C" int32_t RC2_get_EffectiveKeySize_m8450 (RC2_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2::get_KeySize()
extern "C" int32_t RC2_get_KeySize_m8451 (RC2_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2::set_KeySize(System.Int32)
extern "C" void RC2_set_KeySize_m8452 (RC2_t761 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
