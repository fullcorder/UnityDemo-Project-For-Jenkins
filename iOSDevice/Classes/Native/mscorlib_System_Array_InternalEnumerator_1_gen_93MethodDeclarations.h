﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_93.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16025_gshared (InternalEnumerator_1_t2169 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16025(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2169 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16025_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16026_gshared (InternalEnumerator_1_t2169 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16026(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2169 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16026_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16027_gshared (InternalEnumerator_1_t2169 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16027(__this, method) (( void (*) (InternalEnumerator_1_t2169 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16027_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16028_gshared (InternalEnumerator_1_t2169 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16028(__this, method) (( bool (*) (InternalEnumerator_1_t2169 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16028_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t961  InternalEnumerator_1_get_Current_m16029_gshared (InternalEnumerator_1_t2169 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16029(__this, method) (( Decimal_t961  (*) (InternalEnumerator_1_t2169 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16029_gshared)(__this, method)
