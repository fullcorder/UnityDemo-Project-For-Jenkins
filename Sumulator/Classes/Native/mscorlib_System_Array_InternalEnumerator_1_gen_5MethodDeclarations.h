#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11191_gshared (InternalEnumerator_1_t1753 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11191(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1753 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11191_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11192_gshared (InternalEnumerator_1_t1753 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11192(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1753 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11192_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11193_gshared (InternalEnumerator_1_t1753 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11193(__this, method) (( void (*) (InternalEnumerator_1_t1753 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11193_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11194_gshared (InternalEnumerator_1_t1753 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11194(__this, method) (( bool (*) (InternalEnumerator_1_t1753 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11194_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1752  InternalEnumerator_1_get_Current_m11195_gshared (InternalEnumerator_1_t1753 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11195(__this, method) (( KeyValuePair_2_t1752  (*) (InternalEnumerator_1_t1753 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11195_gshared)(__this, method)
