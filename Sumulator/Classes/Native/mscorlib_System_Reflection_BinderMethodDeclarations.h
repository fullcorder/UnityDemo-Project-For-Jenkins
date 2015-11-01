#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t549;
// System.Object[]
struct ObjectU5BU5D_t280;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t557;
// System.Globalization.CultureInfo
struct CultureInfo_t551;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t556;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1609;

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m7465 (Binder_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m7466 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t549 * Binder_get_DefaultBinder_m7467 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m7468 (Object_t * __this /* static, unused */, Binder_t549 * ___binder, ObjectU5BU5D_t280* ___args, ParameterInfoU5BU5D_t557* ___pinfo, CultureInfo_t551 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m7469 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t556 * Binder_FindMostDerivedMatch_m7470 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1609* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
