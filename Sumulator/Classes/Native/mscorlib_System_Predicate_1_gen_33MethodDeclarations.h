#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2051;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15084_gshared (Predicate_1_t2051 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15084(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2051 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15084_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15085_gshared (Predicate_1_t2051 * __this, UILineInfo_t325  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15085(__this, ___obj, method) (( bool (*) (Predicate_1_t2051 *, UILineInfo_t325 , const MethodInfo*))Predicate_1_Invoke_m15085_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15086_gshared (Predicate_1_t2051 * __this, UILineInfo_t325  ___obj, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15086(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2051 *, UILineInfo_t325 , AsyncCallback_t141 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15086_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15087_gshared (Predicate_1_t2051 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15087(__this, ___result, method) (( bool (*) (Predicate_1_t2051 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15087_gshared)(__this, ___result, method)
