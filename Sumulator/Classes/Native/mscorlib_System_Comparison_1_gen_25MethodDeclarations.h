#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t1946;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m13822_gshared (Comparison_1_t1946 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m13822(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1946 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m13822_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13823_gshared (Comparison_1_t1946 * __this, Vector3_t42  ___x, Vector3_t42  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m13823(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1946 *, Vector3_t42 , Vector3_t42 , const MethodInfo*))Comparison_1_Invoke_m13823_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13824_gshared (Comparison_1_t1946 * __this, Vector3_t42  ___x, Vector3_t42  ___y, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m13824(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1946 *, Vector3_t42 , Vector3_t42 , AsyncCallback_t141 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m13824_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13825_gshared (Comparison_1_t1946 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m13825(__this, ___result, method) (( int32_t (*) (Comparison_1_t1946 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m13825_gshared)(__this, ___result, method)
