#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1658;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m9977_gshared (GenericComparer_1_t1658 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m9977(__this, method) (( void (*) (GenericComparer_1_t1658 *, const MethodInfo*))GenericComparer_1__ctor_m9977_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m16193_gshared (GenericComparer_1_t1658 * __this, TimeSpan_t846  ___x, TimeSpan_t846  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m16193(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1658 *, TimeSpan_t846 , TimeSpan_t846 , const MethodInfo*))GenericComparer_1_Compare_m16193_gshared)(__this, ___x, ___y, method)
