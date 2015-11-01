#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t1731;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1691;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t505;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m10855_gshared (UnityEvent_1_t1731 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m10855(__this, method) (( void (*) (UnityEvent_1_t1731 *, const MethodInfo*))UnityEvent_1__ctor_m10855_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m10857_gshared (UnityEvent_1_t1731 * __this, UnityAction_1_t1691 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m10857(__this, ___call, method) (( void (*) (UnityEvent_1_t1731 *, UnityAction_1_t1691 *, const MethodInfo*))UnityEvent_1_AddListener_m10857_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m10859_gshared (UnityEvent_1_t1731 * __this, UnityAction_1_t1691 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m10859(__this, ___call, method) (( void (*) (UnityEvent_1_t1731 *, UnityAction_1_t1691 *, const MethodInfo*))UnityEvent_1_RemoveListener_m10859_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m10861_gshared (UnityEvent_1_t1731 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m10861(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t1731 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m10861_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t505 * UnityEvent_1_GetDelegate_m10863_gshared (UnityEvent_1_t1731 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m10863(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t505 * (*) (UnityEvent_1_t1731 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m10863_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t505 * UnityEvent_1_GetDelegate_m10865_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1691 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m10865(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t505 * (*) (Object_t * /* static, unused */, UnityAction_1_t1691 *, const MethodInfo*))UnityEvent_1_GetDelegate_m10865_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m10866_gshared (UnityEvent_1_t1731 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m10866(__this, ___arg0, method) (( void (*) (UnityEvent_1_t1731 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m10866_gshared)(__this, ___arg0, method)
