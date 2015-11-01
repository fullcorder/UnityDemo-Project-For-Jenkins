#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t1967;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14113_gshared (Comparison_1_t1967 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14113(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1967 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14113_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14114_gshared (Comparison_1_t1967 * __this, Vector2_t43  ___x, Vector2_t43  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14114(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1967 *, Vector2_t43 , Vector2_t43 , const MethodInfo*))Comparison_1_Invoke_m14114_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14115_gshared (Comparison_1_t1967 * __this, Vector2_t43  ___x, Vector2_t43  ___y, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14115(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1967 *, Vector2_t43 , Vector2_t43 , AsyncCallback_t141 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14115_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14116_gshared (Comparison_1_t1967 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14116(__this, ___result, method) (( int32_t (*) (Comparison_1_t1967 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14116_gshared)(__this, ___result, method)
