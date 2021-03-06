﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_44.h"

// System.Void System.Array/InternalEnumerator`1<System.Byte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15457_gshared (InternalEnumerator_1_t2089 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15457(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2089 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15457_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15458_gshared (InternalEnumerator_1_t2089 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15458(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2089 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15458_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Byte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15459_gshared (InternalEnumerator_1_t2089 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15459(__this, method) (( void (*) (InternalEnumerator_1_t2089 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15459_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Byte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15460_gshared (InternalEnumerator_1_t2089 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15460(__this, method) (( bool (*) (InternalEnumerator_1_t2089 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15460_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Byte>::get_Current()
extern "C" uint8_t InternalEnumerator_1_get_Current_m15461_gshared (InternalEnumerator_1_t2089 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15461(__this, method) (( uint8_t (*) (InternalEnumerator_1_t2089 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15461_gshared)(__this, method)
