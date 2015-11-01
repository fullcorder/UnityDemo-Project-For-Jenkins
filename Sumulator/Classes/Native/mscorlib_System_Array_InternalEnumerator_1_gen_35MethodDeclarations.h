﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35.h"

// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14797_gshared (InternalEnumerator_1_t2034 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14797(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2034 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14797_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14798_gshared (InternalEnumerator_1_t2034 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14798(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2034 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14798_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14799_gshared (InternalEnumerator_1_t2034 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14799(__this, method) (( void (*) (InternalEnumerator_1_t2034 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14799_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14800_gshared (InternalEnumerator_1_t2034 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14800(__this, method) (( bool (*) (InternalEnumerator_1_t2034 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14800_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern "C" float InternalEnumerator_1_get_Current_m14801_gshared (InternalEnumerator_1_t2034 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14801(__this, method) (( float (*) (InternalEnumerator_1_t2034 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14801_gshared)(__this, method)
