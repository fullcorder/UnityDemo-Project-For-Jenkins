#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13875_gshared (InternalEnumerator_1_t1947 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13875(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1947 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13875_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13876_gshared (InternalEnumerator_1_t1947 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13876(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1947 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13876_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13877_gshared (InternalEnumerator_1_t1947 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13877(__this, method) (( void (*) (InternalEnumerator_1_t1947 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13877_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Color32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13878_gshared (InternalEnumerator_1_t1947 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13878(__this, method) (( bool (*) (InternalEnumerator_1_t1947 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13878_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Color32>::get_Current()
extern "C" Color32_t265  InternalEnumerator_1_get_Current_m13879_gshared (InternalEnumerator_1_t1947 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13879(__this, method) (( Color32_t265  (*) (InternalEnumerator_1_t1947 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13879_gshared)(__this, method)
