#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11251_gshared (InternalEnumerator_1_t1760 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11251(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1760 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11251_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11252_gshared (InternalEnumerator_1_t1760 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11252(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1760 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11252_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11253_gshared (InternalEnumerator_1_t1760 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11253(__this, method) (( void (*) (InternalEnumerator_1_t1760 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11253_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11254_gshared (InternalEnumerator_1_t1760 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11254(__this, method) (( bool (*) (InternalEnumerator_1_t1760 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11254_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t937  InternalEnumerator_1_get_Current_m11255_gshared (InternalEnumerator_1_t1760 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11255(__this, method) (( DictionaryEntry_t937  (*) (InternalEnumerator_1_t1760 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11255_gshared)(__this, method)
