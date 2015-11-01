#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12737_gshared (InternalEnumerator_1_t1872 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12737(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1872 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12737_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12738_gshared (InternalEnumerator_1_t1872 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12738(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1872 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12738_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12739_gshared (InternalEnumerator_1_t1872 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12739(__this, method) (( void (*) (InternalEnumerator_1_t1872 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12739_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12740_gshared (InternalEnumerator_1_t1872 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12740(__this, method) (( bool (*) (InternalEnumerator_1_t1872 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12740_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
extern "C" Vector2_t43  InternalEnumerator_1_get_Current_m12741_gshared (InternalEnumerator_1_t1872 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12741(__this, method) (( Vector2_t43  (*) (InternalEnumerator_1_t1872 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12741_gshared)(__this, method)
