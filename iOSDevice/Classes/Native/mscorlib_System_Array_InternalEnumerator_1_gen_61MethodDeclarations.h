#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61.h"

// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15827_gshared (InternalEnumerator_1_t2128 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15827(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2128 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15827_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15828_gshared (InternalEnumerator_1_t2128 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15828(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2128 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15828_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15829_gshared (InternalEnumerator_1_t2128 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15829(__this, method) (( void (*) (InternalEnumerator_1_t2128 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15829_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15830_gshared (InternalEnumerator_1_t2128 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15830(__this, method) (( bool (*) (InternalEnumerator_1_t2128 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15830_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
extern "C" int16_t InternalEnumerator_1_get_Current_m15831_gshared (InternalEnumerator_1_t2128 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15831(__this, method) (( int16_t (*) (InternalEnumerator_1_t2128 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15831_gshared)(__this, method)
