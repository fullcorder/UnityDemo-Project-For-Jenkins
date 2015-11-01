#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
struct DefaultComparer_t1974;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m14248_gshared (DefaultComparer_t1974 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14248(__this, method) (( void (*) (DefaultComparer_t1974 *, const MethodInfo*))DefaultComparer__ctor_m14248_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14249_gshared (DefaultComparer_t1974 * __this, Vector4_t232  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14249(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1974 *, Vector4_t232 , const MethodInfo*))DefaultComparer_GetHashCode_m14249_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14250_gshared (DefaultComparer_t1974 * __this, Vector4_t232  ___x, Vector4_t232  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14250(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1974 *, Vector4_t232 , Vector4_t232 , const MethodInfo*))DefaultComparer_Equals_m14250_gshared)(__this, ___x, ___y, method)
