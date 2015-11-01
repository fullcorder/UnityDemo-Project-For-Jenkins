#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46.h"

// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15467_gshared (InternalEnumerator_1_t2091 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15467(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2091 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15467_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15468_gshared (InternalEnumerator_1_t2091 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15468(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2091 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15468_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15469_gshared (InternalEnumerator_1_t2091 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15469(__this, method) (( void (*) (InternalEnumerator_1_t2091 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15469_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15470_gshared (InternalEnumerator_1_t2091 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15470(__this, method) (( bool (*) (InternalEnumerator_1_t2091 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15470_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.UInt32>::get_Current()
extern "C" uint32_t InternalEnumerator_1_get_Current_m15471_gshared (InternalEnumerator_1_t2091 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15471(__this, method) (( uint32_t (*) (InternalEnumerator_1_t2091 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15471_gshared)(__this, method)
