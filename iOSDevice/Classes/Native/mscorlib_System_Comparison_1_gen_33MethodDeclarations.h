#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2054;
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

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15094_gshared (Comparison_1_t2054 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15094(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2054 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15094_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15095_gshared (Comparison_1_t2054 * __this, UILineInfo_t325  ___x, UILineInfo_t325  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15095(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2054 *, UILineInfo_t325 , UILineInfo_t325 , const MethodInfo*))Comparison_1_Invoke_m15095_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15096_gshared (Comparison_1_t2054 * __this, UILineInfo_t325  ___x, UILineInfo_t325  ___y, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15096(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2054 *, UILineInfo_t325 , UILineInfo_t325 , AsyncCallback_t141 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15096_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15097_gshared (Comparison_1_t2054 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15097(__this, ___result, method) (( int32_t (*) (Comparison_1_t2054 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15097_gshared)(__this, ___result, method)
