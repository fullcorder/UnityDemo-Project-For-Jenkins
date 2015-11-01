#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.Object>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10078_gshared (InternalEnumerator_1_t1661 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10078(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1661 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10078_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10079_gshared (InternalEnumerator_1_t1661 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10079(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1661 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10079_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Object>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10080_gshared (InternalEnumerator_1_t1661 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10080(__this, method) (( void (*) (InternalEnumerator_1_t1661 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10080_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Object>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10081_gshared (InternalEnumerator_1_t1661 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10081(__this, method) (( bool (*) (InternalEnumerator_1_t1661 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10081_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Object>::get_Current()
extern "C" Object_t * InternalEnumerator_1_get_Current_m10082_gshared (InternalEnumerator_1_t1661 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10082(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1661 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10082_gshared)(__this, method)
