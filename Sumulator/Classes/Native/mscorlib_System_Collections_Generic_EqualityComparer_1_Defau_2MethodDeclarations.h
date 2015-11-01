#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1849;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m12418_gshared (DefaultComparer_t1849 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12418(__this, method) (( void (*) (DefaultComparer_t1849 *, const MethodInfo*))DefaultComparer__ctor_m12418_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12419_gshared (DefaultComparer_t1849 * __this, UIVertex_t153  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12419(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1849 *, UIVertex_t153 , const MethodInfo*))DefaultComparer_GetHashCode_m12419_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12420_gshared (DefaultComparer_t1849 * __this, UIVertex_t153  ___x, UIVertex_t153  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12420(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1849 *, UIVertex_t153 , UIVertex_t153 , const MethodInfo*))DefaultComparer_Equals_m12420_gshared)(__this, ___x, ___y, method)
