#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t1963;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14100_gshared (DefaultComparer_t1963 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14100(__this, method) (( void (*) (DefaultComparer_t1963 *, const MethodInfo*))DefaultComparer__ctor_m14100_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14101_gshared (DefaultComparer_t1963 * __this, Vector2_t43  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14101(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1963 *, Vector2_t43 , const MethodInfo*))DefaultComparer_GetHashCode_m14101_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14102_gshared (DefaultComparer_t1963 * __this, Vector2_t43  ___x, Vector2_t43  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14102(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1963 *, Vector2_t43 , Vector2_t43 , const MethodInfo*))DefaultComparer_Equals_m14102_gshared)(__this, ___x, ___y, method)
