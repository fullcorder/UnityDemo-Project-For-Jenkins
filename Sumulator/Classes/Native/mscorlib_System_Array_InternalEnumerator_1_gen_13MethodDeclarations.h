#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12132_gshared (InternalEnumerator_1_t1832 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12132(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1832 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12132_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12133_gshared (InternalEnumerator_1_t1832 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12133(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1832 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12133_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12134_gshared (InternalEnumerator_1_t1832 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12134(__this, method) (( void (*) (InternalEnumerator_1_t1832 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12134_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12135_gshared (InternalEnumerator_1_t1832 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12135(__this, method) (( bool (*) (InternalEnumerator_1_t1832 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12135_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1831  InternalEnumerator_1_get_Current_m12136_gshared (InternalEnumerator_1_t1832 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12136(__this, method) (( KeyValuePair_2_t1831  (*) (InternalEnumerator_1_t1832 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12136_gshared)(__this, method)
