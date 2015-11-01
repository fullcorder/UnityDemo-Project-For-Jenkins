#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51.h"

// System.Void System.Array/InternalEnumerator`1<System.UInt16>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15496_gshared (InternalEnumerator_1_t2097 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15496(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2097 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15496_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15497_gshared (InternalEnumerator_1_t2097 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15497(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2097 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15497_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15498_gshared (InternalEnumerator_1_t2097 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15498(__this, method) (( void (*) (InternalEnumerator_1_t2097 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15498_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.UInt16>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15499_gshared (InternalEnumerator_1_t2097 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15499(__this, method) (( bool (*) (InternalEnumerator_1_t2097 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15499_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.UInt16>::get_Current()
extern "C" uint16_t InternalEnumerator_1_get_Current_m15500_gshared (InternalEnumerator_1_t2097 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15500(__this, method) (( uint16_t (*) (InternalEnumerator_1_t2097 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15500_gshared)(__this, method)
