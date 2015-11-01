#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1715;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m10656_gshared (DefaultComparer_t1715 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10656(__this, method) (( void (*) (DefaultComparer_t1715 *, const MethodInfo*))DefaultComparer__ctor_m10656_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10657_gshared (DefaultComparer_t1715 * __this, RaycastResult_t40  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10657(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1715 *, RaycastResult_t40 , const MethodInfo*))DefaultComparer_GetHashCode_m10657_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10658_gshared (DefaultComparer_t1715 * __this, RaycastResult_t40  ___x, RaycastResult_t40  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10658(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1715 *, RaycastResult_t40 , RaycastResult_t40 , const MethodInfo*))DefaultComparer_Equals_m10658_gshared)(__this, ___x, ___y, method)
