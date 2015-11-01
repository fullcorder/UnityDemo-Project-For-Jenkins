#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t1978;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14261_gshared (Comparison_1_t1978 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14261(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1978 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14261_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14262_gshared (Comparison_1_t1978 * __this, Vector4_t232  ___x, Vector4_t232  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14262(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1978 *, Vector4_t232 , Vector4_t232 , const MethodInfo*))Comparison_1_Invoke_m14262_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14263_gshared (Comparison_1_t1978 * __this, Vector4_t232  ___x, Vector4_t232  ___y, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14263(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1978 *, Vector4_t232 , Vector4_t232 , AsyncCallback_t141 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14263_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14264_gshared (Comparison_1_t1978 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14264(__this, ___result, method) (( int32_t (*) (Comparison_1_t1978 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14264_gshared)(__this, ___result, method)
