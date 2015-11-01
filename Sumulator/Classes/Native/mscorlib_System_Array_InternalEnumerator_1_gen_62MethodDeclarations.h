#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"

// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15832_gshared (InternalEnumerator_1_t2129 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15832(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2129 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15832_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15833_gshared (InternalEnumerator_1_t2129 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15833(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2129 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15833_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15834_gshared (InternalEnumerator_1_t2129 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15834(__this, method) (( void (*) (InternalEnumerator_1_t2129 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15834_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15835_gshared (InternalEnumerator_1_t2129 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15835(__this, method) (( bool (*) (InternalEnumerator_1_t2129 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15835_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
extern "C" int8_t InternalEnumerator_1_get_Current_m15836_gshared (InternalEnumerator_1_t2129 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15836(__this, method) (( int8_t (*) (InternalEnumerator_1_t2129 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15836_gshared)(__this, method)
