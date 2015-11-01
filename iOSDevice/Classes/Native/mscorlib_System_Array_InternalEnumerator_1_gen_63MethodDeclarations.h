#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"

// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15837_gshared (InternalEnumerator_1_t2130 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15837(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2130 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15837_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15838_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15838(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15838_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15839_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15839(__this, method) (( void (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15839_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15840_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15840(__this, method) (( bool (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15840_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern "C" int64_t InternalEnumerator_1_get_Current_m15841_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15841(__this, method) (( int64_t (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15841_gshared)(__this, method)
