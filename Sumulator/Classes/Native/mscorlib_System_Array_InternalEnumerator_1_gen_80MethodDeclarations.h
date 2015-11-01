#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80.h"
// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15952_gshared (InternalEnumerator_1_t2154 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15952(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2154 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15952_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15953_gshared (InternalEnumerator_1_t2154 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15953(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2154 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15953_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15954_gshared (InternalEnumerator_1_t2154 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15954(__this, method) (( void (*) (InternalEnumerator_1_t2154 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15954_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15955_gshared (InternalEnumerator_1_t2154 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15955(__this, method) (( bool (*) (InternalEnumerator_1_t2154 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15955_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
extern "C" LabelData_t1160  InternalEnumerator_1_get_Current_m15956_gshared (InternalEnumerator_1_t2154 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15956(__this, method) (( LabelData_t1160  (*) (InternalEnumerator_1_t2154 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15956_gshared)(__this, method)
