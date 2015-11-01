#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60.h"

// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15822_gshared (InternalEnumerator_1_t2127 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15822(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2127 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15822_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15823_gshared (InternalEnumerator_1_t2127 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15823(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2127 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15823_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15824_gshared (InternalEnumerator_1_t2127 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15824(__this, method) (( void (*) (InternalEnumerator_1_t2127 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15824_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15825_gshared (InternalEnumerator_1_t2127 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15825(__this, method) (( bool (*) (InternalEnumerator_1_t2127 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15825_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
extern "C" uint64_t InternalEnumerator_1_get_Current_m15826_gshared (InternalEnumerator_1_t2127 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15826(__this, method) (( uint64_t (*) (InternalEnumerator_1_t2127 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15826_gshared)(__this, method)
