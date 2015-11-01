#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Char>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3.h"

// System.Void System.Array/InternalEnumerator`1<System.Char>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10188_gshared (InternalEnumerator_1_t1674 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10188(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1674 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10188_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Char>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10189_gshared (InternalEnumerator_1_t1674 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10189(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1674 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10189_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Char>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10190_gshared (InternalEnumerator_1_t1674 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10190(__this, method) (( void (*) (InternalEnumerator_1_t1674 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10190_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Char>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10191_gshared (InternalEnumerator_1_t1674 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10191(__this, method) (( bool (*) (InternalEnumerator_1_t1674 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10191_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Char>::get_Current()
extern "C" uint16_t InternalEnumerator_1_get_Current_m10192_gshared (InternalEnumerator_1_t1674 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10192(__this, method) (( uint16_t (*) (InternalEnumerator_1_t1674 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10192_gshared)(__this, method)
