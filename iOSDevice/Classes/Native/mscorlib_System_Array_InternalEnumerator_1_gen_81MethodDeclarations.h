#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_81.h"
// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15957_gshared (InternalEnumerator_1_t2155 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15957(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2155 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15957_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15958_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15958(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15958_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15959_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15959(__this, method) (( void (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15959_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15960_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15960(__this, method) (( bool (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15960_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
extern "C" LabelFixup_t1159  InternalEnumerator_1_get_Current_m15961_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15961(__this, method) (( LabelFixup_t1159  (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15961_gshared)(__this, method)
