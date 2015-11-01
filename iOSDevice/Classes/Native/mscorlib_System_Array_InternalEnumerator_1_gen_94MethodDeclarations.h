#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_94.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16030_gshared (InternalEnumerator_1_t2170 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16030(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2170 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16030_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16031_gshared (InternalEnumerator_1_t2170 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16031(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2170 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16031_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16032_gshared (InternalEnumerator_1_t2170 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16032(__this, method) (( void (*) (InternalEnumerator_1_t2170 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16032_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16033_gshared (InternalEnumerator_1_t2170 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16033(__this, method) (( bool (*) (InternalEnumerator_1_t2170 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16033_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t846  InternalEnumerator_1_get_Current_m16034_gshared (InternalEnumerator_1_t2170 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16034(__this, method) (( TimeSpan_t846  (*) (InternalEnumerator_1_t2170 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16034_gshared)(__this, method)
