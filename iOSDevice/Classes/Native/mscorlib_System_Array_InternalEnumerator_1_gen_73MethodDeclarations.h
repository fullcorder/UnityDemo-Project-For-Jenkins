﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_73.h"
// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15917_gshared (InternalEnumerator_1_t2147 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15917(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2147 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15917_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15918_gshared (InternalEnumerator_1_t2147 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15918(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2147 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15918_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15919_gshared (InternalEnumerator_1_t2147 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15919(__this, method) (( void (*) (InternalEnumerator_1_t2147 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15919_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15920_gshared (InternalEnumerator_1_t2147 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15920(__this, method) (( bool (*) (InternalEnumerator_1_t2147 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15920_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
extern "C" Slot_t1080  InternalEnumerator_1_get_Current_m15921_gshared (InternalEnumerator_1_t2147 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15921(__this, method) (( Slot_t1080  (*) (InternalEnumerator_1_t2147 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15921_gshared)(__this, method)
