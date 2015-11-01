#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t139;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t534;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1602;
// System.Delegate
struct Delegate_t314;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m5552 (MulticastDelegate_t139 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m5553 (MulticastDelegate_t139 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m5554 (MulticastDelegate_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1602* MulticastDelegate_GetInvocationList_m5555 (MulticastDelegate_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t314 * MulticastDelegate_CombineImpl_m5556 (MulticastDelegate_t139 * __this, Delegate_t314 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m5557 (MulticastDelegate_t139 * __this, MulticastDelegate_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t139 * MulticastDelegate_KPM_m5558 (Object_t * __this /* static, unused */, MulticastDelegate_t139 * ___needle, MulticastDelegate_t139 * ___haystack, MulticastDelegate_t139 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t314 * MulticastDelegate_RemoveImpl_m5559 (MulticastDelegate_t139 * __this, Delegate_t314 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
