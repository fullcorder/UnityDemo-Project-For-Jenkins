#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>

// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void AudioConfigurationChangeHandler__ctor_m2515 (AudioConfigurationChangeHandler_t433 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void AudioConfigurationChangeHandler_Invoke_m2516 (AudioConfigurationChangeHandler_t433 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m2516((AudioConfigurationChangeHandler_t433 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t433(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t283_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m2517 (AudioConfigurationChangeHandler_t433 * __this, bool ___deviceWasChanged, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t283_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m2518 (AudioConfigurationChangeHandler_t433 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
extern TypeInfo* AudioSettings_t434_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m2519 (Object_t * __this /* static, unused */, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t433 * L_0 = ((AudioSettings_t434_StaticFields*)AudioSettings_t434_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t433 * L_1 = ((AudioSettings_t434_StaticFields*)AudioSettings_t434_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m2516(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMReaderCallback__ctor_m2520 (PCMReaderCallback_t435 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
#include "mscorlib_ArrayTypes.h"
extern "C" void PCMReaderCallback_Invoke_m2521 (PCMReaderCallback_t435 * __this, SingleU5BU5D_t436* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m2521((PCMReaderCallback_t435 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t436* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t436* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t435(Il2CppObject* delegate, SingleU5BU5D_t436* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m2522 (PCMReaderCallback_t435 * __this, SingleU5BU5D_t436* ___data, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m2523 (PCMReaderCallback_t435 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMSetPositionCallback__ctor_m2524 (PCMSetPositionCallback_t437 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void PCMSetPositionCallback_Invoke_m2525 (PCMSetPositionCallback_t437 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m2525((PCMSetPositionCallback_t437 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t437(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m2526 (PCMSetPositionCallback_t437 * __this, int32_t ___position, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t282_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m2527 (PCMSetPositionCallback_t437 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m2528 (AudioClip_t438 * __this, SingleU5BU5D_t436* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t435 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t435 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t436* L_2 = ___data;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m2521(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m2529 (AudioClip_t438 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t437 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t437 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m2525(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m2530 (WebCamDevice_t439 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m2531 (WebCamDevice_t439 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t439_marshal(const WebCamDevice_t439& unmarshaled, WebCamDevice_t439_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
extern "C" void WebCamDevice_t439_marshal_back(const WebCamDevice_t439_marshaled& marshaled, WebCamDevice_t439& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t439_marshal_cleanup(WebCamDevice_t439_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
#include "UnityEngine_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
extern "C" void AnimationCurve__ctor_m2532 (AnimationCurve_t441 * __this, KeyframeU5BU5D_t528* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t528* L_0 = ___keys;
		AnimationCurve_Init_m2536(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2533 (AnimationCurve_t441 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m2536(__this, (KeyframeU5BU5D_t528*)(KeyframeU5BU5D_t528*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2534 (AnimationCurve_t441 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m2534_ftn) (AnimationCurve_t441 *);
	static AnimationCurve_Cleanup_m2534_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m2534_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2535 (AnimationCurve_t441 * __this, const MethodInfo* method)
{
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m2534(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2536 (AnimationCurve_t441 * __this, KeyframeU5BU5D_t528* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m2536_ftn) (AnimationCurve_t441 *, KeyframeU5BU5D_t528*);
	static AnimationCurve_Init_m2536_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m2536_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t441_marshal(const AnimationCurve_t441& unmarshaled, AnimationCurve_t441_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void AnimationCurve_t441_marshal_back(const AnimationCurve_t441_marshaled& marshaled, AnimationCurve_t441& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t441_marshal_cleanup(AnimationCurve_t441_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
// System.Void UnityEngine.Animator::SetTrigger(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" void Animator_SetTrigger_m1918 (Animator_t270 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m2537(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m1917 (Animator_t270 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m2538(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t333 * Animator_get_runtimeAnimatorController_m1916 (Animator_t270 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t333 * (*Animator_get_runtimeAnimatorController_m1916_ftn) (Animator_t270 *);
	static Animator_get_runtimeAnimatorController_m1916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m1916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m2537 (Animator_t270 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m2537_ftn) (Animator_t270 *, String_t*);
	static Animator_SetTriggerString_m2537_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m2537_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m2538 (Animator_t270 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m2538_ftn) (Animator_t270 *, String_t*);
	static Animator_ResetTriggerString_m2538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m2538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m2539 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Void UnityEngine.CharacterInfo::set_advance(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CharacterInfo_set_advance_m2540 (CharacterInfo_t444 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___width_3 = (((float)L_0));
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" int32_t CharacterInfo_get_glyphWidth_m2541 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m1665(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_glyphWidth(System.Int32)
extern "C" void CharacterInfo_set_glyphWidth_m2542 (CharacterInfo_t444 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_set_width_m1729(L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m2543 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m1609(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_glyphHeight(System.Int32)
extern "C" void CharacterInfo_set_glyphHeight_m2544 (CharacterInfo_t444 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m1609(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t145 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		Rect_set_height_m1727(L_2, (((float)((-L_3)))), /*hidden argument*/NULL);
		Rect_t145 * L_4 = &(__this->___vert_2);
		Rect_t145 * L_5 = L_4;
		float L_6 = Rect_get_y_m1670(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Rect_t145 * L_8 = &(__this->___vert_2);
		float L_9 = Rect_get_height_m1609(L_8, /*hidden argument*/NULL);
		Rect_set_y_m1728(L_5, ((float)((float)L_6+(float)((float)((float)L_7-(float)L_9)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m2545 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1669(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_bearing(System.Int32)
extern "C" void CharacterInfo_set_bearing_m2546 (CharacterInfo_t444 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_set_x_m1730(L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m2547 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t145 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m1670(L_1, /*hidden argument*/NULL);
		Rect_t145 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m1609(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_minY(System.Int32)
extern "C" void CharacterInfo_set_minY_m2548 (CharacterInfo_t444 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		int32_t L_2 = (__this->___ascent_7);
		Rect_t145 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_y_m1670(L_3, /*hidden argument*/NULL);
		Rect_set_height_m1727(L_0, ((float)((float)(((float)((int32_t)((int32_t)L_1-(int32_t)L_2))))-(float)L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m2549 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t145 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m1670(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_maxY(System.Int32)
extern "C" void CharacterInfo_set_maxY_m2550 (CharacterInfo_t444 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_y_m1670(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t145 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		int32_t L_4 = (__this->___ascent_7);
		Rect_set_y_m1728(L_2, (((float)((int32_t)((int32_t)L_3-(int32_t)L_4)))), /*hidden argument*/NULL);
		Rect_t145 * L_5 = &(__this->___vert_2);
		Rect_t145 * L_6 = L_5;
		float L_7 = Rect_get_height_m1609(L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		Rect_t145 * L_9 = &(__this->___vert_2);
		float L_10 = Rect_get_y_m1670(L_9, /*hidden argument*/NULL);
		Rect_set_height_m1727(L_6, ((float)((float)L_7+(float)((float)((float)L_8-(float)L_10)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m2551 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1669(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_minX(System.Int32)
extern "C" void CharacterInfo_set_minX_m2552 (CharacterInfo_t444 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1669(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t145 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		Rect_set_x_m1730(L_2, (((float)L_3)), /*hidden argument*/NULL);
		Rect_t145 * L_4 = &(__this->___vert_2);
		Rect_t145 * L_5 = L_4;
		float L_6 = Rect_get_width_m1665(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Rect_t145 * L_8 = &(__this->___vert_2);
		float L_9 = Rect_get_x_m1669(L_8, /*hidden argument*/NULL);
		Rect_set_width_m1729(L_5, ((float)((float)L_6+(float)((float)((float)L_7-(float)L_9)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m2553 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1669(L_0, /*hidden argument*/NULL);
		Rect_t145 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m1665(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_maxX(System.Int32)
extern "C" void CharacterInfo_set_maxX_m2554 (CharacterInfo_t444 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_t145 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_x_m1669(L_2, /*hidden argument*/NULL);
		Rect_set_width_m1729(L_0, ((float)((float)(((float)L_1))-(float)L_3)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t43  CharacterInfo_get_uvBottomLeftUnFlipped_m2555 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1669(L_0, /*hidden argument*/NULL);
		Rect_t145 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m1670(L_2, /*hidden argument*/NULL);
		Vector2_t43  L_4 = {0};
		Vector2__ctor_m1428(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeftUnFlipped(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
extern "C" void CharacterInfo_set_uvBottomLeftUnFlipped_m2556 (CharacterInfo_t444 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		Vector2_t43  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m2559(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t145 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_set_x_m1730(L_1, L_2, /*hidden argument*/NULL);
		Rect_t145 * L_3 = &(__this->___uv_1);
		float L_4 = ((&___value)->___y_2);
		Rect_set_y_m1728(L_3, L_4, /*hidden argument*/NULL);
		Rect_t145 * L_5 = &(__this->___uv_1);
		float L_6 = ((&V_0)->___x_1);
		Rect_t145 * L_7 = &(__this->___uv_1);
		float L_8 = Rect_get_x_m1669(L_7, /*hidden argument*/NULL);
		Rect_set_width_m1729(L_5, ((float)((float)L_6-(float)L_8)), /*hidden argument*/NULL);
		Rect_t145 * L_9 = &(__this->___uv_1);
		float L_10 = ((&V_0)->___y_2);
		Rect_t145 * L_11 = &(__this->___uv_1);
		float L_12 = Rect_get_y_m1670(L_11, /*hidden argument*/NULL);
		Rect_set_height_m1727(L_9, ((float)((float)L_10-(float)L_12)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t43  CharacterInfo_get_uvBottomRightUnFlipped_m2557 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1669(L_0, /*hidden argument*/NULL);
		Rect_t145 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m1665(L_2, /*hidden argument*/NULL);
		Rect_t145 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m1670(L_4, /*hidden argument*/NULL);
		Vector2_t43  L_6 = {0};
		Vector2__ctor_m1428(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRightUnFlipped_m2558 (CharacterInfo_t444 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		Vector2_t43  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m2559(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t145 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_t145 * L_3 = &(__this->___uv_1);
		float L_4 = Rect_get_x_m1669(L_3, /*hidden argument*/NULL);
		Rect_set_width_m1729(L_1, ((float)((float)L_2-(float)L_4)), /*hidden argument*/NULL);
		Rect_t145 * L_5 = &(__this->___uv_1);
		float L_6 = ((&___value)->___y_2);
		Rect_set_y_m1728(L_5, L_6, /*hidden argument*/NULL);
		Rect_t145 * L_7 = &(__this->___uv_1);
		float L_8 = ((&V_0)->___y_2);
		Rect_t145 * L_9 = &(__this->___uv_1);
		float L_10 = Rect_get_y_m1670(L_9, /*hidden argument*/NULL);
		Rect_set_height_m1727(L_7, ((float)((float)L_8-(float)L_10)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t43  CharacterInfo_get_uvTopRightUnFlipped_m2559 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1669(L_0, /*hidden argument*/NULL);
		Rect_t145 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m1665(L_2, /*hidden argument*/NULL);
		Rect_t145 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m1670(L_4, /*hidden argument*/NULL);
		Rect_t145 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m1609(L_6, /*hidden argument*/NULL);
		Vector2_t43  L_8 = {0};
		Vector2__ctor_m1428(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRightUnFlipped_m2560 (CharacterInfo_t444 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___uv_1);
		float L_1 = ((&___value)->___x_1);
		Rect_t145 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_x_m1669(L_2, /*hidden argument*/NULL);
		Rect_set_width_m1729(L_0, ((float)((float)L_1-(float)L_3)), /*hidden argument*/NULL);
		Rect_t145 * L_4 = &(__this->___uv_1);
		float L_5 = ((&___value)->___y_2);
		Rect_t145 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_y_m1670(L_6, /*hidden argument*/NULL);
		Rect_set_height_m1727(L_4, ((float)((float)L_5-(float)L_7)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t43  CharacterInfo_get_uvTopLeftUnFlipped_m2561 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Rect_t145 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1669(L_0, /*hidden argument*/NULL);
		Rect_t145 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m1670(L_2, /*hidden argument*/NULL);
		Rect_t145 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m1609(L_4, /*hidden argument*/NULL);
		Vector2_t43  L_6 = {0};
		Vector2__ctor_m1428(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopLeftUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeftUnFlipped_m2562 (CharacterInfo_t444 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		Vector2_t43  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m2559(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t145 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_set_x_m1730(L_1, L_2, /*hidden argument*/NULL);
		Rect_t145 * L_3 = &(__this->___uv_1);
		float L_4 = ((&___value)->___y_2);
		Rect_t145 * L_5 = &(__this->___uv_1);
		float L_6 = Rect_get_y_m1670(L_5, /*hidden argument*/NULL);
		Rect_set_height_m1727(L_3, ((float)((float)L_4-(float)L_6)), /*hidden argument*/NULL);
		Rect_t145 * L_7 = &(__this->___uv_1);
		float L_8 = ((&V_0)->___x_1);
		Rect_t145 * L_9 = &(__this->___uv_1);
		float L_10 = Rect_get_x_m1669(L_9, /*hidden argument*/NULL);
		Rect_set_width_m1729(L_7, ((float)((float)L_8-(float)L_10)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t43  CharacterInfo_get_uvBottomLeft_m2563 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = CharacterInfo_get_uvBottomLeftUnFlipped_m2555(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomLeft_m2564 (CharacterInfo_t444 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = ___value;
		CharacterInfo_set_uvBottomLeftUnFlipped_m2556(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t43  CharacterInfo_get_uvBottomRight_m2565 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	Vector2_t43  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t43  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m2561(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t43  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m2557(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRight_m2566 (CharacterInfo_t444 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t43  L_1 = ___value;
		CharacterInfo_set_uvTopLeftUnFlipped_m2562(__this, L_1, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0017:
	{
		Vector2_t43  L_2 = ___value;
		CharacterInfo_set_uvBottomRightUnFlipped_m2558(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t43  CharacterInfo_get_uvTopRight_m2567 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m2559(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRight_m2568 (CharacterInfo_t444 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = ___value;
		CharacterInfo_set_uvTopRightUnFlipped_m2560(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t43  CharacterInfo_get_uvTopLeft_m2569 (CharacterInfo_t444 * __this, const MethodInfo* method)
{
	Vector2_t43  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t43  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m2557(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t43  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m2561(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeft_m2570 (CharacterInfo_t444 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t43  L_1 = ___value;
		CharacterInfo_set_uvBottomRightUnFlipped_m2558(__this, L_1, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0017:
	{
		Vector2_t43  L_2 = ___value;
		CharacterInfo_set_uvTopLeftUnFlipped_m2562(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t444_marshal(const CharacterInfo_t444& unmarshaled, CharacterInfo_t444_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
extern "C" void CharacterInfo_t444_marshal_back(const CharacterInfo_t444_marshaled& marshaled, CharacterInfo_t444& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t444_marshal_cleanup(CharacterInfo_t444_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void FontTextureRebuildCallback__ctor_m2571 (FontTextureRebuildCallback_t445 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m2572 (FontTextureRebuildCallback_t445 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m2572((FontTextureRebuildCallback_t445 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t445(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m2573 (FontTextureRebuildCallback_t445 * __this, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m2574 (FontTextureRebuildCallback_t445 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Void UnityEngine.Font::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
extern "C" void Font__ctor_m2575 (Font_t103 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2414(__this, /*hidden argument*/NULL);
		Font_Internal_CreateFont_m2582(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Font__ctor_m2576 (Font_t103 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m2414(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		Font_Internal_CreateFont_m2582(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::.ctor(System.String[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Font__ctor_m2577 (Font_t103 * __this, StringU5BU5D_t484* ___names, int32_t ___size, const MethodInfo* method)
{
	{
		Object__ctor_m2414(__this, /*hidden argument*/NULL);
		StringU5BU5D_t484* L_0 = ___names;
		int32_t L_1 = ___size;
		Font_Internal_CreateDynamicFont_m2583(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Font_t103_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t309_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m1646 (Object_t * __this /* static, unused */, Action_1_t309 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		Action_1_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t309 * L_0 = ((Font_t103_StaticFields*)Font_t103_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t309 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t103_StaticFields*)Font_t103_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t309 *)CastclassSealed(L_2, Action_1_t309_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t103_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t309_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m2578 (Object_t * __this /* static, unused */, Action_1_t309 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		Action_1_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t309 * L_0 = ((Font_t103_StaticFields*)Font_t103_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t309 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t103_StaticFields*)Font_t103_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t309 *)CastclassSealed(L_2, Action_1_t309_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::add_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
extern TypeInfo* FontTextureRebuildCallback_t445_il2cpp_TypeInfo_var;
extern "C" void Font_add_m_FontTextureRebuildCallback_m2579 (Font_t103 * __this, FontTextureRebuildCallback_t445 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FontTextureRebuildCallback_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(312);
		s_Il2CppMethodIntialized = true;
	}
	{
		FontTextureRebuildCallback_t445 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		FontTextureRebuildCallback_t445 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___m_FontTextureRebuildCallback_3 = ((FontTextureRebuildCallback_t445 *)CastclassSealed(L_2, FontTextureRebuildCallback_t445_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern TypeInfo* FontTextureRebuildCallback_t445_il2cpp_TypeInfo_var;
extern "C" void Font_remove_m_FontTextureRebuildCallback_m2580 (Font_t103 * __this, FontTextureRebuildCallback_t445 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FontTextureRebuildCallback_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(312);
		s_Il2CppMethodIntialized = true;
	}
	{
		FontTextureRebuildCallback_t445 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		FontTextureRebuildCallback_t445 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___m_FontTextureRebuildCallback_3 = ((FontTextureRebuildCallback_t445 *)CastclassSealed(L_2, FontTextureRebuildCallback_t445_il2cpp_TypeInfo_var));
		return;
	}
}
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
extern "C" StringU5BU5D_t484* Font_GetOSInstalledFontNames_m2581 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef StringU5BU5D_t484* (*Font_GetOSInstalledFontNames_m2581_ftn) ();
	static Font_GetOSInstalledFontNames_m2581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetOSInstalledFontNames_m2581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetOSInstalledFontNames()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern "C" void Font_Internal_CreateFont_m2582 (Object_t * __this /* static, unused */, Font_t103 * ____font, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Font_Internal_CreateFont_m2582_ftn) (Font_t103 *, String_t*);
	static Font_Internal_CreateFont_m2582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_Internal_CreateFont_m2582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)");
	_il2cpp_icall_func(____font, ___name);
}
// System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
extern "C" void Font_Internal_CreateDynamicFont_m2583 (Object_t * __this /* static, unused */, Font_t103 * ____font, StringU5BU5D_t484* ____names, int32_t ___size, const MethodInfo* method)
{
	typedef void (*Font_Internal_CreateDynamicFont_m2583_ftn) (Font_t103 *, StringU5BU5D_t484*, int32_t);
	static Font_Internal_CreateDynamicFont_m2583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_Internal_CreateDynamicFont_m2583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)");
	_il2cpp_icall_func(____font, ____names, ___size);
}
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
extern TypeInfo* StringU5BU5D_t484_il2cpp_TypeInfo_var;
extern TypeInfo* Font_t103_il2cpp_TypeInfo_var;
extern "C" Font_t103 * Font_CreateDynamicFontFromOSFont_m2584 (Object_t * __this /* static, unused */, String_t* ___fontname, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		Font_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	Font_t103 * V_0 = {0};
	{
		StringU5BU5D_t484* L_0 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___fontname;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)L_1;
		int32_t L_2 = ___size;
		Font_t103 * L_3 = (Font_t103 *)il2cpp_codegen_object_new (Font_t103_il2cpp_TypeInfo_var);
		Font__ctor_m2577(L_3, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Font_t103 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String[],System.Int32)
extern TypeInfo* Font_t103_il2cpp_TypeInfo_var;
extern "C" Font_t103 * Font_CreateDynamicFontFromOSFont_m2585 (Object_t * __this /* static, unused */, StringU5BU5D_t484* ___fontnames, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	Font_t103 * V_0 = {0};
	{
		StringU5BU5D_t484* L_0 = ___fontnames;
		int32_t L_1 = ___size;
		Font_t103 * L_2 = (Font_t103 *)il2cpp_codegen_object_new (Font_t103_il2cpp_TypeInfo_var);
		Font__ctor_m2577(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Font_t103 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t107 * Font_get_material_m1928 (Font_t103 * __this, const MethodInfo* method)
{
	typedef Material_t107 * (*Font_get_material_m1928_ftn) (Font_t103 *);
	static Font_get_material_m1928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m1928_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_material(UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void Font_set_material_m2586 (Font_t103 * __this, Material_t107 * ___value, const MethodInfo* method)
{
	typedef void (*Font_set_material_m2586_ftn) (Font_t103 *, Material_t107 *);
	static Font_set_material_m2586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_material_m2586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_material(UnityEngine.Material)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" bool Font_HasCharacter_m1794 (Font_t103 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m1794_ftn) (Font_t103 *, uint16_t);
	static Font_HasCharacter_m1794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m1794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t484* Font_get_fontNames_m2587 (Font_t103 * __this, const MethodInfo* method)
{
	typedef StringU5BU5D_t484* (*Font_get_fontNames_m2587_ftn) (Font_t103 *);
	static Font_get_fontNames_m2587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontNames_m2587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontNames()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_fontNames(System.String[])
extern "C" void Font_set_fontNames_m2588 (Font_t103 * __this, StringU5BU5D_t484* ___value, const MethodInfo* method)
{
	typedef void (*Font_set_fontNames_m2588_ftn) (Font_t103 *, StringU5BU5D_t484*);
	static Font_set_fontNames_m2588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_fontNames_m2588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_fontNames(System.String[])");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
extern "C" CharacterInfoU5BU5D_t529* Font_get_characterInfo_m2589 (Font_t103 * __this, const MethodInfo* method)
{
	typedef CharacterInfoU5BU5D_t529* (*Font_get_characterInfo_m2589_ftn) (Font_t103 *);
	static Font_get_characterInfo_m2589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_characterInfo_m2589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_characterInfo()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void Font_set_characterInfo_m2590 (Font_t103 * __this, CharacterInfoU5BU5D_t529* ___value, const MethodInfo* method)
{
	typedef void (*Font_set_characterInfo_m2590_ftn) (Font_t103 *, CharacterInfoU5BU5D_t529*);
	static Font_set_characterInfo_m2590_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_characterInfo_m2590_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
extern "C" void Font_RequestCharactersInTexture_m2591 (Font_t103 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef void (*Font_RequestCharactersInTexture_m2591_ftn) (Font_t103 *, String_t*, int32_t, int32_t);
	static Font_RequestCharactersInTexture_m2591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_RequestCharactersInTexture_m2591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___characters, ___size, ___style);
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C" void Font_RequestCharactersInTexture_m2592 (Font_t103 * __this, String_t* ___characters, int32_t ___size, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		String_t* L_0 = ___characters;
		int32_t L_1 = ___size;
		int32_t L_2 = V_0;
		Font_RequestCharactersInTexture_m2591(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
extern "C" void Font_RequestCharactersInTexture_m2593 (Font_t103 * __this, String_t* ___characters, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___characters;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		Font_RequestCharactersInTexture_m2591(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
extern TypeInfo* Font_t103_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2882_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m2594 (Object_t * __this /* static, unused */, Font_t103 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		Action_1_Invoke_m2882_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483942);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t309 * V_0 = {0};
	{
		Action_1_t309 * L_0 = ((Font_t103_StaticFields*)Font_t103_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t309 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t309 * L_2 = V_0;
		Font_t103 * L_3 = ___font;
		NullCheck(L_2);
		Action_1_Invoke_m2882(L_2, L_3, /*hidden argument*/Action_1_Invoke_m2882_MethodInfo_var);
	}

IL_0013:
	{
		Font_t103 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t445 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t103 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t445 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		FontTextureRebuildCallback_Invoke_m2572(L_7, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t445 * Font_get_textureRebuildCallback_m2595 (Font_t103 * __this, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t445 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		return L_0;
	}
}
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m2596 (Font_t103 * __this, FontTextureRebuildCallback_t445 * ___value, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t445 * L_0 = ___value;
		__this->___m_FontTextureRebuildCallback_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Font::GetMaxVertsForString(System.String)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" int32_t Font_GetMaxVertsForString_m2597 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1761(L_0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)4))+(int32_t)4));
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m2598 (Font_t103 * __this, uint16_t ___ch, CharacterInfo_t444 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef bool (*Font_GetCharacterInfo_m2598_ftn) (Font_t103 *, uint16_t, CharacterInfo_t444 *, int32_t, int32_t);
	static Font_GetCharacterInfo_m2598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetCharacterInfo_m2598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)");
	return _il2cpp_icall_func(__this, ___ch, ___info, ___size, ___style);
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32)
extern "C" bool Font_GetCharacterInfo_m2599 (Font_t103 * __this, uint16_t ___ch, CharacterInfo_t444 * ___info, int32_t ___size, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		uint16_t L_0 = ___ch;
		CharacterInfo_t444 * L_1 = ___info;
		int32_t L_2 = ___size;
		int32_t L_3 = V_0;
		bool L_4 = Font_GetCharacterInfo_m2598(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
extern "C" bool Font_GetCharacterInfo_m2600 (Font_t103 * __this, uint16_t ___ch, CharacterInfo_t444 * ___info, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		uint16_t L_0 = ___ch;
		CharacterInfo_t444 * L_1 = ___info;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Font_GetCharacterInfo_m2598(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m1931 (Font_t103 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m1931_ftn) (Font_t103 *);
	static Font_get_dynamic_m1931_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m1931_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_ascent()
extern "C" int32_t Font_get_ascent_m2601 (Font_t103 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_ascent_m2601_ftn) (Font_t103 *);
	static Font_get_ascent_m2601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_ascent_m2601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_ascent()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_lineHeight()
extern "C" int32_t Font_get_lineHeight_m2602 (Font_t103 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_lineHeight_m2602_ftn) (Font_t103 *);
	static Font_get_lineHeight_m2602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_lineHeight_m2602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_lineHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m1933 (Font_t103 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m1933_ftn) (Font_t103 *);
	static Font_get_fontSize_m1933_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m1933_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_11MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
// System.Void UnityEngine.TextGenerator::.ctor()
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
extern "C" void TextGenerator__ctor_m1755 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m1927(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_11MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
extern TypeInfo* List_1_t263_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t446_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t447_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2883_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m2884_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m2885_MethodInfo_var;
extern "C" void TextGenerator__ctor_m1927 (TextGenerator_t147 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		List_1_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		List_1_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		List_1__ctor_m2883_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483943);
		List_1__ctor_m2884_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483944);
		List_1__ctor_m2885_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483945);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t263 * L_1 = (List_1_t263 *)il2cpp_codegen_object_new (List_1_t263_il2cpp_TypeInfo_var);
		List_1__ctor_m2883(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m2883_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t446 * L_3 = (List_1_t446 *)il2cpp_codegen_object_new (List_1_t446_il2cpp_TypeInfo_var);
		List_1__ctor_m2884(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m2884_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t447 * L_4 = (List_1_t447 *)il2cpp_codegen_object_new (List_1_t447_il2cpp_TypeInfo_var);
		List_1__ctor_m2885(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m2885_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m2604(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m2603 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m2605(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m2604 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m2604_ftn) (TextGenerator_t147 *);
	static TextGenerator_Init_m2604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m2604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m2605 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m2605_ftn) (TextGenerator_t147 *);
	static TextGenerator_Dispose_cpp_m2605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m2605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" bool TextGenerator_Populate_Internal_m2606 (TextGenerator_t147 * __this, String_t* ___str, Font_t103 * ___font, Color_t68  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t43  ___extents, Vector2_t43  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t103 * L_1 = ___font;
		Color_t68  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m2607(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m2607 (TextGenerator_t147 * __this, String_t* ___str, Font_t103 * ___font, Color_t68  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t103 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2608(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2608 (Object_t * __this /* static, unused */, TextGenerator_t147 * ___self, String_t* ___str, Font_t103 * ___font, Color_t68 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2608_ftn) (TextGenerator_t147 *, String_t*, Font_t103 *, Color_t68 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t145  TextGenerator_get_rectExtents_m1812 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	Rect_t145  V_0 = {0};
	{
		TextGenerator_INTERNAL_get_rectExtents_m2609(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t145  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C" void TextGenerator_INTERNAL_get_rectExtents_m2609 (TextGenerator_t147 * __this, Rect_t145 * ___value, const MethodInfo* method)
{
	typedef void (*TextGenerator_INTERNAL_get_rectExtents_m2609_ftn) (TextGenerator_t147 *, Rect_t145 *);
	static TextGenerator_INTERNAL_get_rectExtents_m2609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_get_rectExtents_m2609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m2610 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m2610_ftn) (TextGenerator_t147 *);
	static TextGenerator_get_vertexCount_m2610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m2610_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void TextGenerator_GetVerticesInternal_m2611 (TextGenerator_t147 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m2611_ftn) (TextGenerator_t147 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m2611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m2611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t146* TextGenerator_GetVerticesArray_m2612 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t146* (*TextGenerator_GetVerticesArray_m2612_ftn) (TextGenerator_t147 *);
	static TextGenerator_GetVerticesArray_m2612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m2612_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m2613 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m2613_ftn) (TextGenerator_t147 *);
	static TextGenerator_get_characterCount_m2613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m2613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m1788 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1810(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1761(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m2610(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m1801(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m1803(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m2614 (TextGenerator_t147 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m2614_ftn) (TextGenerator_t147 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m2614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m2614_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t530* TextGenerator_GetCharactersArray_m2615 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t530* (*TextGenerator_GetCharactersArray_m2615_ftn) (TextGenerator_t147 *);
	static TextGenerator_GetCharactersArray_m2615_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m2615_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m1787 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m1787_ftn) (TextGenerator_t147 *);
	static TextGenerator_get_lineCount_m1787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m1787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m2616 (TextGenerator_t147 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m2616_ftn) (TextGenerator_t147 *, Object_t *);
	static TextGenerator_GetLinesInternal_m2616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m2616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t531* TextGenerator_GetLinesArray_m2617 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t531* (*TextGenerator_GetLinesArray_m2617_ftn) (TextGenerator_t147 *);
	static TextGenerator_GetLinesArray_m2617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m2617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m1828 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m1828_ftn) (TextGenerator_t147 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m1828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m1828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m2618 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral147;
extern Il2CppCodeGenString* _stringLiteral148;
extern "C" TextGenerationSettings_t271  TextGenerator_ValidatedSettings_m2619 (TextGenerator_t147 * __this, TextGenerationSettings_t271  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral147 = il2cpp_codegen_string_literal_from_index(147);
		_stringLiteral148 = il2cpp_codegen_string_literal_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t103 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t103 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m1931(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t271  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m2373(NULL /*static, unused*/, _stringLiteral147, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m2373(NULL /*static, unused*/, _stringLiteral148, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t271  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m1930 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
extern "C" void TextGenerator_GetCharacters_m2620 (TextGenerator_t147 * __this, List_1_t446 * ___characters, const MethodInfo* method)
{
	{
		List_1_t446 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m2614(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
extern "C" void TextGenerator_GetLines_m2621 (TextGenerator_t147 * __this, List_1_t447 * ___lines, const MethodInfo* method)
{
	{
		List_1_t447 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m2616(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
extern "C" void TextGenerator_GetVertices_m2622 (TextGenerator_t147 * __this, List_1_t263 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t263 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m2611(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" float TextGenerator_GetPreferredWidth_m1936 (TextGenerator_t147 * __this, String_t* ___str, TextGenerationSettings_t271  ___settings, const MethodInfo* method)
{
	Rect_t145  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t271  L_1 = ___settings;
		TextGenerator_Populate_m1811(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t145  L_2 = TextGenerator_get_rectExtents_m1812(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m1665((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m1937 (TextGenerator_t147 * __this, String_t* ___str, TextGenerationSettings_t271  ___settings, const MethodInfo* method)
{
	Rect_t145  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t271  L_1 = ___settings;
		TextGenerator_Populate_m1811(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t145  L_2 = TextGenerator_get_rectExtents_m1812(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m1609((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m1811 (TextGenerator_t147 * __this, String_t* ___str, TextGenerationSettings_t271  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1759(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t271  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m2787((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t271  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m2623(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m2623 (TextGenerator_t147 * __this, String_t* ___str, TextGenerationSettings_t271  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t271  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t271  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t271  L_2 = ___settings;
		TextGenerationSettings_t271  L_3 = TextGenerator_ValidatedSettings_m2619(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t103 * L_5 = ((&V_0)->___font_0);
		Color_t68  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t43  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t43  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m2606(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m1934 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t263 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m2622(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t263 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m1789 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t446 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m2620(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t446 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m1786 (TextGenerator_t147 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t447 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m2621(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t447 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void WillRenderCanvases__ctor_m1530 (WillRenderCanvases_t301 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m2624 (WillRenderCanvases_t301 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m2624((WillRenderCanvases_t301 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t301(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m2625 (WillRenderCanvases_t301 * __this, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m2626 (WillRenderCanvases_t301 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Canvas_t109_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t301_il2cpp_TypeInfo_var;
extern "C" void Canvas_add_willRenderCanvases_m1531 (Object_t * __this /* static, unused */, WillRenderCanvases_t301 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		WillRenderCanvases_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t301 * L_0 = ((Canvas_t109_StaticFields*)Canvas_t109_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t301 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t109_StaticFields*)Canvas_t109_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t301 *)CastclassSealed(L_2, WillRenderCanvases_t301_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t109_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t301_il2cpp_TypeInfo_var;
extern "C" void Canvas_remove_willRenderCanvases_m2627 (Object_t * __this /* static, unused */, WillRenderCanvases_t301 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		WillRenderCanvases_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t301 * L_0 = ((Canvas_t109_StaticFields*)Canvas_t109_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t301 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t109_StaticFields*)Canvas_t109_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t301 *)CastclassSealed(L_2, WillRenderCanvases_t301_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m1688 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m1688_ftn) (Canvas_t109 *);
	static Canvas_get_renderMode_m1688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m1688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m1950 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m1950_ftn) (Canvas_t109 *);
	static Canvas_get_isRootCanvas_m1950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m1950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t61 * Canvas_get_worldCamera_m1704 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef Camera_t61 * (*Canvas_get_worldCamera_m1704_ftn) (Canvas_t109 *);
	static Canvas_get_worldCamera_m1704_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m1704_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m1932 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m1932_ftn) (Canvas_t109 *);
	static Canvas_get_scaleFactor_m1932_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m1932_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Canvas_set_scaleFactor_m1953 (Canvas_t109 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m1953_ftn) (Canvas_t109 *, float);
	static Canvas_set_scaleFactor_m1953_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m1953_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m1721 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m1721_ftn) (Canvas_t109 *);
	static Canvas_get_referencePixelsPerUnit_m1721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m1721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m1954 (Canvas_t109 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m1954_ftn) (Canvas_t109 *, float);
	static Canvas_set_referencePixelsPerUnit_m1954_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m1954_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m1676 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m1676_ftn) (Canvas_t109 *);
	static Canvas_get_pixelPerfect_m1676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m1676_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m1689 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m1689_ftn) (Canvas_t109 *);
	static Canvas_get_renderOrder_m1689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m1689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_overrideSorting()
extern "C" bool Canvas_get_overrideSorting_m1857 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_overrideSorting_m1857_ftn) (Canvas_t109 *);
	static Canvas_get_overrideSorting_m1857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_overrideSorting_m1857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_overrideSorting()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Canvas_set_overrideSorting_m1593 (Canvas_t109 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_overrideSorting_m1593_ftn) (Canvas_t109 *, bool);
	static Canvas_set_overrideSorting_m1593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_overrideSorting_m1593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_overrideSorting(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m1623 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m1623_ftn) (Canvas_t109 *);
	static Canvas_get_sortingOrder_m1623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m1623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Canvas_set_sortingOrder_m1594 (Canvas_t109 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_sortingOrder_m1594_ftn) (Canvas_t109 *, int32_t);
	static Canvas_set_sortingOrder_m1594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_sortingOrder_m1594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern "C" int32_t Canvas_get_sortingLayerID_m1621 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingLayerID_m1621_ftn) (Canvas_t109 *);
	static Canvas_get_sortingLayerID_m1621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingLayerID_m1621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
extern "C" void Canvas_set_sortingLayerID_m1622 (Canvas_t109 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_sortingLayerID_m1622_ftn) (Canvas_t109 *, int32_t);
	static Canvas_set_sortingLayerID_m1622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_sortingLayerID_m1622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_sortingLayerID(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m1703 (Canvas_t109 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m1703_ftn) (Canvas_t109 *);
	static Canvas_get_cachedSortingLayerValue_m1703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m1703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t107 * Canvas_GetDefaultCanvasMaterial_m1650 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t107 * (*Canvas_GetDefaultCanvasMaterial_m1650_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m1650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m1650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
extern TypeInfo* Canvas_t109_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m2628 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t301 * L_0 = ((Canvas_t109_StaticFields*)Canvas_t109_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t301 * L_1 = ((Canvas_t109_StaticFields*)Canvas_t109_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		WillRenderCanvases_Invoke_m2624(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
extern "C" void Canvas_ForceUpdateCanvases_m1876 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m2628(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// System.Single UnityEngine.CanvasGroup::get_alpha()
extern "C" float CanvasGroup_get_alpha_m1633 (CanvasGroup_t303 * __this, const MethodInfo* method)
{
	typedef float (*CanvasGroup_get_alpha_m1633_ftn) (CanvasGroup_t303 *);
	static CanvasGroup_get_alpha_m1633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_alpha_m1633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_alpha()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void CanvasGroup_set_alpha_m1637 (CanvasGroup_t303 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*CanvasGroup_set_alpha_m1637_ftn) (CanvasGroup_t303 *, float);
	static CanvasGroup_set_alpha_m1637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_set_alpha_m1637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::set_alpha(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m1906 (CanvasGroup_t303 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m1906_ftn) (CanvasGroup_t303 *);
	static CanvasGroup_get_interactable_m1906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m1906_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m2629 (CanvasGroup_t303 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m2629_ftn) (CanvasGroup_t303 *);
	static CanvasGroup_get_blocksRaycasts_m2629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m2629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m1675 (CanvasGroup_t303 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m1675_ftn) (CanvasGroup_t303 *);
	static CanvasGroup_get_ignoreParentGroups_m1675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m1675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
extern "C" bool CanvasGroup_IsRaycastLocationValid_m2630 (CanvasGroup_t303 * __this, Vector2_t43  ___sp, Camera_t61 * ___eventCamera, const MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m2629(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// System.Void UnityEngine.UIVertex::.cctor()
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* UIVertex_t153_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m2631 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t153  V_0 = {0};
	{
		Color32_t265  L_0 = {0};
		Color32__ctor_m1538(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t153_StaticFields*)UIVertex_t153_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t232  L_1 = {0};
		Vector4__ctor_m1671(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t153_StaticFields*)UIVertex_t153_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t153_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t42  L_2 = Vector3_get_zero_m1418(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t42  L_3 = Vector3_get_back_m2001(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t232  L_4 = ((UIVertex_t153_StaticFields*)UIVertex_t153_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t265  L_5 = ((UIVertex_t153_StaticFields*)UIVertex_t153_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t43  L_6 = Vector2_get_zero_m1419(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t43  L_7 = Vector2_get_zero_m1419(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t153  L_8 = V_0;
		((UIVertex_t153_StaticFields*)UIVertex_t153_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
extern "C" void CanvasRenderer_SetColor_m1681 (CanvasRenderer_t108 * __this, Color_t68  ___color, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m2632(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m2632 (Object_t * __this /* static, unused */, CanvasRenderer_t108 * ___self, Color_t68 * ___color, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m2632_ftn) (CanvasRenderer_t108 *, Color_t68 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m2632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m2632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t68  CanvasRenderer_GetColor_m1679 (CanvasRenderer_t108 * __this, const MethodInfo* method)
{
	typedef Color_t68  (*CanvasRenderer_GetColor_m1679_ftn) (CanvasRenderer_t108 *);
	static CanvasRenderer_GetColor_m1679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m1679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::EnableRectClipping(UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern "C" void CanvasRenderer_EnableRectClipping_m1853 (CanvasRenderer_t108 * __this, Rect_t145  ___rect, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2633(NULL /*static, unused*/, __this, (&___rect), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
extern "C" void CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2633 (Object_t * __this /* static, unused */, CanvasRenderer_t108 * ___self, Rect_t145 * ___rect, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2633_ftn) (CanvasRenderer_t108 *, Rect_t145 *);
	static CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)");
	_il2cpp_icall_func(___self, ___rect);
}
// System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
extern "C" void CanvasRenderer_DisableRectClipping_m1854 (CanvasRenderer_t108 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_DisableRectClipping_m1854_ftn) (CanvasRenderer_t108 *);
	static CanvasRenderer_DisableRectClipping_m1854_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_DisableRectClipping_m1854_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::DisableRectClipping()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void CanvasRenderer_set_hasPopInstruction_m1844 (CanvasRenderer_t108 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_hasPopInstruction_m1844_ftn) (CanvasRenderer_t108 *, bool);
	static CanvasRenderer_set_hasPopInstruction_m1844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_hasPopInstruction_m1844_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
extern "C" int32_t CanvasRenderer_get_materialCount_m2634 (CanvasRenderer_t108 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_materialCount_m2634_ftn) (CanvasRenderer_t108 *);
	static CanvasRenderer_get_materialCount_m2634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_materialCount_m2634_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_materialCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CanvasRenderer_set_materialCount_m1662 (CanvasRenderer_t108 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_materialCount_m1662_ftn) (CanvasRenderer_t108 *, int32_t);
	static CanvasRenderer_set_materialCount_m1662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_materialCount_m1662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_materialCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void CanvasRenderer_SetMaterial_m1663 (CanvasRenderer_t108 * __this, Material_t107 * ___material, int32_t ___index, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m1663_ftn) (CanvasRenderer_t108 *, Material_t107 *, int32_t);
	static CanvasRenderer_SetMaterial_m1663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m1663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)");
	_il2cpp_icall_func(__this, ___material, ___index);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void CanvasRenderer_SetMaterial_m1817 (CanvasRenderer_t108 * __this, Material_t107 * ___material, Texture_t163 * ___texture, const MethodInfo* method)
{
	{
		int32_t L_0 = CanvasRenderer_get_materialCount_m2634(__this, /*hidden argument*/NULL);
		int32_t L_1 = Math_Max_m2886(NULL /*static, unused*/, 1, L_0, /*hidden argument*/NULL);
		CanvasRenderer_set_materialCount_m1662(__this, L_1, /*hidden argument*/NULL);
		Material_t107 * L_2 = ___material;
		CanvasRenderer_SetMaterial_m1663(__this, L_2, 0, /*hidden argument*/NULL);
		Texture_t163 * L_3 = ___texture;
		CanvasRenderer_SetTexture_m1664(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
extern "C" void CanvasRenderer_set_popMaterialCount_m1845 (CanvasRenderer_t108 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_popMaterialCount_m1845_ftn) (CanvasRenderer_t108 *, int32_t);
	static CanvasRenderer_set_popMaterialCount_m1845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_popMaterialCount_m1845_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
extern "C" void CanvasRenderer_SetPopMaterial_m1846 (CanvasRenderer_t108 * __this, Material_t107 * ___material, int32_t ___index, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetPopMaterial_m1846_ftn) (CanvasRenderer_t108 *, Material_t107 *, int32_t);
	static CanvasRenderer_SetPopMaterial_m1846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetPopMaterial_m1846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)");
	_il2cpp_icall_func(__this, ___material, ___index);
}
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
extern "C" void CanvasRenderer_SetTexture_m1664 (CanvasRenderer_t108 * __this, Texture_t163 * ___texture, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetTexture_m1664_ftn) (CanvasRenderer_t108 *, Texture_t163 *);
	static CanvasRenderer_SetTexture_m1664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetTexture_m1664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
extern "C" void CanvasRenderer_SetMesh_m1666 (CanvasRenderer_t108 * __this, Mesh_t113 * ___mesh, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMesh_m1666_ftn) (CanvasRenderer_t108 *, Mesh_t113 *);
	static CanvasRenderer_SetMesh_m1666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMesh_m1666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)");
	_il2cpp_icall_func(__this, ___mesh);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m1660 (CanvasRenderer_t108 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m1660_ftn) (CanvasRenderer_t108 *);
	static CanvasRenderer_Clear_m1660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m1660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
extern "C" bool CanvasRenderer_get_cull_m1661 (CanvasRenderer_t108 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasRenderer_get_cull_m1661_ftn) (CanvasRenderer_t108 *);
	static CanvasRenderer_get_cull_m1661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_cull_m1661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_cull()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
extern "C" void CanvasRenderer_set_cull_m1851 (CanvasRenderer_t108 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_cull_m1851_ftn) (CanvasRenderer_t108 *, bool);
	static CanvasRenderer_set_cull_m1851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_cull_m1851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_cull(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m1652 (CanvasRenderer_t108 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m1652_ftn) (CanvasRenderer_t108 *);
	static CanvasRenderer_get_absoluteDepth_m1652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m1652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
extern "C" bool CanvasRenderer_get_hasMoved_m1849 (CanvasRenderer_t108 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasRenderer_get_hasMoved_m1849_ftn) (CanvasRenderer_t108 *);
	static CanvasRenderer_get_hasMoved_m1849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_hasMoved_m1849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_hasMoved()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// System.Void UnityEngine.RectTransformUtility::.cctor()
extern TypeInfo* Vector3U5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t307_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m2635 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		RectTransformUtility_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RectTransformUtility_t307_StaticFields*)RectTransformUtility_t307_il2cpp_TypeInfo_var->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t129*)SZArrayNew(Vector3U5BU5D_t129_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t307_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m1705 (Object_t * __this /* static, unused */, RectTransform_t90 * ___rect, Vector2_t43  ___screenPoint, Camera_t61 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t90 * L_0 = ___rect;
		Camera_t61 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t307_il2cpp_TypeInfo_var);
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2636(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2636 (Object_t * __this /* static, unused */, RectTransform_t90 * ___rect, Vector2_t43 * ___screenPoint, Camera_t61 * ___cam, const MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2636_ftn) (RectTransform_t90 *, Vector2_t43 *, Camera_t61 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2636_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2636_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
extern TypeInfo* RectTransformUtility_t307_il2cpp_TypeInfo_var;
extern "C" Vector2_t43  RectTransformUtility_PixelAdjustPoint_m1677 (Object_t * __this /* static, unused */, Vector2_t43  ___point, Transform_t189 * ___elementTransform, Canvas_t109 * ___canvas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t43  V_0 = {0};
	{
		Vector2_t43  L_0 = ___point;
		Transform_t189 * L_1 = ___elementTransform;
		Canvas_t109 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t307_il2cpp_TypeInfo_var);
		RectTransformUtility_PixelAdjustPoint_m2637(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		Vector2_t43  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t307_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_PixelAdjustPoint_m2637 (Object_t * __this /* static, unused */, Vector2_t43  ___point, Transform_t189 * ___elementTransform, Canvas_t109 * ___canvas, Vector2_t43 * ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t189 * L_0 = ___elementTransform;
		Canvas_t109 * L_1 = ___canvas;
		Vector2_t43 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t307_il2cpp_TypeInfo_var);
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2638(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2638 (Object_t * __this /* static, unused */, Vector2_t43 * ___point, Transform_t189 * ___elementTransform, Canvas_t109 * ___canvas, Vector2_t43 * ___output, const MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2638_ftn) (Vector2_t43 *, Transform_t189 *, Canvas_t109 *, Vector2_t43 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t145  RectTransformUtility_PixelAdjustRect_m1678 (Object_t * __this /* static, unused */, RectTransform_t90 * ___rectTransform, Canvas_t109 * ___canvas, const MethodInfo* method)
{
	typedef Rect_t145  (*RectTransformUtility_PixelAdjustRect_m1678_ftn) (RectTransform_t90 *, Canvas_t109 *);
	static RectTransformUtility_PixelAdjustRect_m1678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m1678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t307_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m2639 (Object_t * __this /* static, unused */, RectTransform_t90 * ___rect, Vector2_t43  ___screenPoint, Camera_t61 * ___cam, Vector3_t42 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t292  V_0 = {0};
	Plane_t324  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t42 * L_0 = ___worldPoint;
		Vector2_t43  L_1 = Vector2_get_zero_m1419(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_2 = Vector2_op_Implicit_m1487(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*L_0 = L_2;
		Camera_t61 * L_3 = ___cam;
		Vector2_t43  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t307_il2cpp_TypeInfo_var);
		Ray_t292  L_5 = RectTransformUtility_ScreenPointToRay_m2640(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t90 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t315  L_7 = Transform_get_rotation_m1697(L_6, /*hidden argument*/NULL);
		Vector3_t42  L_8 = Vector3_get_back_m2001(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_9 = Quaternion_op_Multiply_m1699(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_t90 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t42  L_11 = Transform_get_position_m1497(L_10, /*hidden argument*/NULL);
		Plane__ctor_m1783((&V_1), L_9, L_11, /*hidden argument*/NULL);
		Ray_t292  L_12 = V_0;
		bool L_13 = Plane_Raycast_m1784((&V_1), L_12, (&V_2), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t42 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t42  L_16 = Ray_GetPoint_m1785((&V_0), L_15, /*hidden argument*/NULL);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t307_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m1741 (Object_t * __this /* static, unused */, RectTransform_t90 * ___rect, Vector2_t43  ___screenPoint, Camera_t61 * ___cam, Vector2_t43 * ___localPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	{
		Vector2_t43 * L_0 = ___localPoint;
		Vector2_t43  L_1 = Vector2_get_zero_m1419(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_0 = L_1;
		RectTransform_t90 * L_2 = ___rect;
		Vector2_t43  L_3 = ___screenPoint;
		Camera_t61 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t307_il2cpp_TypeInfo_var);
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m2639(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t43 * L_6 = ___localPoint;
		RectTransform_t90 * L_7 = ___rect;
		Vector3_t42  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t42  L_9 = Transform_InverseTransformPoint_m1611(L_7, L_8, /*hidden argument*/NULL);
		Vector2_t43  L_10 = Vector2_op_Implicit_m1443(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" Ray_t292  RectTransformUtility_ScreenPointToRay_m2640 (Object_t * __this /* static, unused */, Camera_t61 * ___cam, Vector2_t43  ___screenPos, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Camera_t61 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t61 * L_2 = ___cam;
		Vector2_t43  L_3 = ___screenPos;
		Vector3_t42  L_4 = Vector2_op_Implicit_m1487(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t292  L_5 = Camera_ScreenPointToRay_m1488(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		Vector2_t43  L_6 = ___screenPos;
		Vector3_t42  L_7 = Vector2_op_Implicit_m1487(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t42 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t42  L_10 = V_0;
		Vector3_t42  L_11 = Vector3_get_forward_m1698(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t292  L_12 = {0};
		Ray__ctor_m2274(&L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern TypeInfo* RectTransform_t90_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t307_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m1613 (Object_t * __this /* static, unused */, RectTransform_t90 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		RectTransformUtility_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t90 * V_1 = {0};
	Vector2_t43  V_2 = {0};
	Vector2_t43  V_3 = {0};
	Vector2_t43  V_4 = {0};
	Vector2_t43  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t90 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m1370(NULL /*static, unused*/, L_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t90 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t189 * L_5 = Transform_GetChild_m1548(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t90 *)IsInstSealed(L_5, RectTransform_t90_il2cpp_TypeInfo_var));
		RectTransform_t90 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_6, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t90 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t307_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutOnAxis_m1613(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t90 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m1549(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t90 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t43  L_15 = RectTransform_get_pivot_m1617(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m1738((&V_2), L_17, /*hidden argument*/NULL);
		Vector2_set_Item_m1747((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/NULL);
		RectTransform_t90 * L_19 = ___rect;
		Vector2_t43  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m1568(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t90 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t43  L_23 = RectTransform_get_anchoredPosition_m1616(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m1738((&V_3), L_25, /*hidden argument*/NULL);
		Vector2_set_Item_m1747((&V_3), L_24, ((-L_26)), /*hidden argument*/NULL);
		RectTransform_t90 * L_27 = ___rect;
		Vector2_t43  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m1554(L_27, L_28, /*hidden argument*/NULL);
		RectTransform_t90 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t43  L_30 = RectTransform_get_anchorMin_m1614(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		RectTransform_t90 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t43  L_32 = RectTransform_get_anchorMax_m1615(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m1738((&V_4), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m1738((&V_5), L_36, /*hidden argument*/NULL);
		Vector2_set_Item_m1747((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/NULL);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m1747((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/NULL);
		RectTransform_t90 * L_40 = ___rect;
		Vector2_t43  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m1551(L_40, L_41, /*hidden argument*/NULL);
		RectTransform_t90 * L_42 = ___rect;
		Vector2_t43  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m1553(L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t90_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t307_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutAxes_m1873 (Object_t * __this /* static, unused */, RectTransform_t90 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		RectTransformUtility_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t90 * V_1 = {0};
	{
		RectTransform_t90 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m1370(NULL /*static, unused*/, L_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t90 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t189 * L_5 = Transform_GetChild_m1548(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t90 *)IsInstSealed(L_5, RectTransform_t90_il2cpp_TypeInfo_var));
		RectTransform_t90 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_6, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t90 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t307_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutAxes_m1873(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t90 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m1549(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t90 * L_13 = ___rect;
		RectTransform_t90 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t43  L_15 = RectTransform_get_pivot_m1617(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t307_il2cpp_TypeInfo_var);
		Vector2_t43  L_16 = RectTransformUtility_GetTransposed_m2641(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m1568(L_13, L_16, /*hidden argument*/NULL);
		RectTransform_t90 * L_17 = ___rect;
		RectTransform_t90 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t43  L_19 = RectTransform_get_sizeDelta_m1569(L_18, /*hidden argument*/NULL);
		Vector2_t43  L_20 = RectTransformUtility_GetTransposed_m2641(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m1543(L_17, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t90 * L_22 = ___rect;
		RectTransform_t90 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t43  L_24 = RectTransform_get_anchoredPosition_m1616(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t307_il2cpp_TypeInfo_var);
		Vector2_t43  L_25 = RectTransformUtility_GetTransposed_m2641(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m1554(L_22, L_25, /*hidden argument*/NULL);
		RectTransform_t90 * L_26 = ___rect;
		RectTransform_t90 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t43  L_28 = RectTransform_get_anchorMin_m1614(L_27, /*hidden argument*/NULL);
		Vector2_t43  L_29 = RectTransformUtility_GetTransposed_m2641(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m1551(L_26, L_29, /*hidden argument*/NULL);
		RectTransform_t90 * L_30 = ___rect;
		RectTransform_t90 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t43  L_32 = RectTransform_get_anchorMax_m1615(L_31, /*hidden argument*/NULL);
		Vector2_t43  L_33 = RectTransformUtility_GetTransposed_m2641(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m1553(L_30, L_33, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t43  RectTransformUtility_GetTransposed_m2641 (Object_t * __this /* static, unused */, Vector2_t43  ___input, const MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t43  L_2 = {0};
		Vector2__ctor_m1428(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// System.Type
#include "mscorlib_System_Type.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// System.Void UnityEngine.Event::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
extern "C" void Event__ctor_m1754 (Event_t149 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Event_Init_m2649(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m2642 (Event_t149 * __this, const MethodInfo* method)
{
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Event_Cleanup_m2650(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t43  Event_get_mousePosition_m2643 (Event_t149 * __this, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		Event_Internal_GetMousePosition_m2651(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t43  L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m2644 (Event_t149 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m2645 (Event_t149 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" int32_t Event_GetHashCode_m2646 (Event_t149 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t43  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m2644(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m1792(__this, /*hidden argument*/NULL);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = Event_get_isMouse_m2645(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t43  L_3 = Event_get_mousePosition_m2643(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m2181((&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m1791(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t149_il2cpp_TypeInfo_var;
extern "C" bool Event_Equals_m2647 (Event_t149 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		s_Il2CppMethodIntialized = true;
	}
	Event_t149 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m2887(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_3 = ___obj;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1452(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		Object_t * L_6 = ___obj;
		V_0 = ((Event_t149 *)CastclassSealed(L_6, Event_t149_il2cpp_TypeInfo_var));
		int32_t L_7 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		Event_t149 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m1796(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m1791(__this, /*hidden argument*/NULL);
		Event_t149 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m1791(L_11, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = Event_get_isKey_m2644(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m1792(__this, /*hidden argument*/NULL);
		Event_t149 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m1792(L_15, /*hidden argument*/NULL);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = Event_get_isMouse_m2645(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		Vector2_t43  L_18 = Event_get_mousePosition_m2643(__this, /*hidden argument*/NULL);
		Event_t149 * L_19 = V_0;
		NullCheck(L_19);
		Vector2_t43  L_20 = Event_get_mousePosition_m2643(L_19, /*hidden argument*/NULL);
		bool L_21 = Vector2_op_Equality_m2019(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
// System.String UnityEngine.Event::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t450_il2cpp_TypeInfo_var;
extern TypeInfo* EventModifiers_t451_il2cpp_TypeInfo_var;
extern TypeInfo* KeyCode_t449_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t43_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral149;
extern Il2CppCodeGenString* _stringLiteral150;
extern Il2CppCodeGenString* _stringLiteral151;
extern Il2CppCodeGenString* _stringLiteral152;
extern Il2CppCodeGenString* _stringLiteral153;
extern Il2CppCodeGenString* _stringLiteral154;
extern Il2CppCodeGenString* _stringLiteral155;
extern "C" String_t* Event_ToString_m2648 (Event_t149 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		EventType_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(316);
		EventModifiers_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		KeyCode_t449_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Vector2_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		_stringLiteral149 = il2cpp_codegen_string_literal_from_index(149);
		_stringLiteral150 = il2cpp_codegen_string_literal_from_index(150);
		_stringLiteral151 = il2cpp_codegen_string_literal_from_index(151);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Event_get_isKey_m2644(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_1 = Event_get_character_m1793(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t280* L_2 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 3));
		int32_t L_3 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(EventType_t450_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t280* L_6 = L_2;
		int32_t L_7 = Event_get_modifiers_m1791(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(EventModifiers_t451_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t280* L_10 = L_6;
		int32_t L_11 = Event_get_keyCode_m1792(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(KeyCode_t449_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2, sizeof(Object_t *))) = (Object_t *)L_13;
		String_t* L_14 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral149, L_10, /*hidden argument*/NULL);
		return L_14;
	}

IL_0051:
	{
		ObjectU5BU5D_t280* L_15 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 8));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, _stringLiteral150);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral150;
		ObjectU5BU5D_t280* L_16 = L_15;
		int32_t L_17 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(EventType_t450_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t280* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, _stringLiteral151);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral151;
		ObjectU5BU5D_t280* L_21 = L_20;
		uint16_t L_22 = Event_get_character_m1793(__this, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3, sizeof(Object_t *))) = (Object_t *)L_24;
		ObjectU5BU5D_t280* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, _stringLiteral152);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral152;
		ObjectU5BU5D_t280* L_26 = L_25;
		int32_t L_27 = Event_get_modifiers_m1791(__this, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(EventModifiers_t451_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5, sizeof(Object_t *))) = (Object_t *)L_29;
		ObjectU5BU5D_t280* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, _stringLiteral153);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral153;
		ObjectU5BU5D_t280* L_31 = L_30;
		int32_t L_32 = Event_get_keyCode_m1792(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(KeyCode_t449_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 7);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 7, sizeof(Object_t *))) = (Object_t *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m1421(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		return L_35;
	}

IL_00b5:
	{
		bool L_36 = Event_get_isMouse_m2645(__this, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00fb;
		}
	}
	{
		ObjectU5BU5D_t280* L_37 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 3));
		int32_t L_38 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		int32_t L_39 = L_38;
		Object_t * L_40 = Box(EventType_t450_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 0, sizeof(Object_t *))) = (Object_t *)L_40;
		ObjectU5BU5D_t280* L_41 = L_37;
		Vector2_t43  L_42 = Event_get_mousePosition_m2643(__this, /*hidden argument*/NULL);
		Vector2_t43  L_43 = L_42;
		Object_t * L_44 = Box(Vector2_t43_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 1);
		ArrayElementTypeCheck (L_41, L_44);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 1, sizeof(Object_t *))) = (Object_t *)L_44;
		ObjectU5BU5D_t280* L_45 = L_41;
		int32_t L_46 = Event_get_modifiers_m1791(__this, /*hidden argument*/NULL);
		int32_t L_47 = L_46;
		Object_t * L_48 = Box(EventModifiers_t451_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 2);
		ArrayElementTypeCheck (L_45, L_48);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, 2, sizeof(Object_t *))) = (Object_t *)L_48;
		String_t* L_49 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral154, L_45, /*hidden argument*/NULL);
		return L_49;
	}

IL_00fb:
	{
		int32_t L_50 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_50) == ((int32_t)((int32_t)14))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_51 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_013d;
		}
	}

IL_0115:
	{
		ObjectU5BU5D_t280* L_52 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 2));
		int32_t L_53 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		int32_t L_54 = L_53;
		Object_t * L_55 = Box(EventType_t450_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 0);
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 0, sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t280* L_56 = L_52;
		String_t* L_57 = Event_get_commandName_m1797(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 1);
		ArrayElementTypeCheck (L_56, L_57);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, 1, sizeof(Object_t *))) = (Object_t *)L_57;
		String_t* L_58 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral155, L_56, /*hidden argument*/NULL);
		return L_58;
	}

IL_013d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_60 = Event_get_type_m1796(__this, /*hidden argument*/NULL);
		int32_t L_61 = L_60;
		Object_t * L_62 = Box(EventType_t450_il2cpp_TypeInfo_var, &L_61);
		String_t* L_63 = String_Concat_m1380(NULL /*static, unused*/, L_59, L_62, /*hidden argument*/NULL);
		return L_63;
	}
}
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m2649 (Event_t149 * __this, const MethodInfo* method)
{
	typedef void (*Event_Init_m2649_ftn) (Event_t149 *);
	static Event_Init_m2649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Init_m2649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m2650 (Event_t149 * __this, const MethodInfo* method)
{
	typedef void (*Event_Cleanup_m2650_ftn) (Event_t149 *);
	static Event_Cleanup_m2650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Cleanup_m2650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m1795 (Event_t149 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_rawType_m1795_ftn) (Event_t149 *);
	static Event_get_rawType_m1795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m1795_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m1796 (Event_t149 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_type_m1796_ftn) (Event_t149 *);
	static Event_get_type_m1796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m1796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m2651 (Event_t149 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*Event_Internal_GetMousePosition_m2651_ftn) (Event_t149 *, Vector2_t43 *);
	static Event_Internal_GetMousePosition_m2651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMousePosition_m2651_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m1791 (Event_t149 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_modifiers_m1791_ftn) (Event_t149 *);
	static Event_get_modifiers_m1791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m1791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m1793 (Event_t149 * __this, const MethodInfo* method)
{
	typedef uint16_t (*Event_get_character_m1793_ftn) (Event_t149 *);
	static Event_get_character_m1793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m1793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m1797 (Event_t149 * __this, const MethodInfo* method)
{
	typedef String_t* (*Event_get_commandName_m1797_ftn) (Event_t149 *);
	static Event_get_commandName_m1797_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m1797_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m1792 (Event_t149 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_keyCode_m1792_ftn) (Event_t149 *);
	static Event_get_keyCode_m1792_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m1792_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
extern "C" bool Event_PopEvent_m1799 (Object_t * __this /* static, unused */, Event_t149 * ___outEvent, const MethodInfo* method)
{
	typedef bool (*Event_PopEvent_m1799_ftn) (Event_t149 *);
	static Event_PopEvent_m1799_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_m1799_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(___outEvent);
}
// Conversion methods for marshalling of: UnityEngine.Event
extern "C" void Event_t149_marshal(const Event_t149& unmarshaled, Event_t149_marshaled& marshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)___s_Current_1Exception);
}
extern "C" void Event_t149_marshal_back(const Event_t149_marshaled& marshaled, Event_t149& unmarshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)___s_Current_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
extern "C" void Event_t149_marshal_cleanup(Event_t149_marshaled& marshaled)
{
}
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCodeMethodDeclarations.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventTypeMethodDeclarations.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiersMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// System.Void UnityEngine.GUIStyleState::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
extern "C" void GUIStyleState__ctor_m2652 (GUIStyleState_t452 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		GUIStyleState_Init_m2654(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m2653 (GUIStyleState_t452 * __this, const MethodInfo* method)
{
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t453 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			GUIStyleState_Cleanup_m2655(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m2654 (GUIStyleState_t452 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Init_m2654_ftn) (GUIStyleState_t452 *);
	static GUIStyleState_Init_m2654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m2654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m2655 (GUIStyleState_t452 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Cleanup_m2655_ftn) (GUIStyleState_t452 *);
	static GUIStyleState_Cleanup_m2655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m2655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// System.Void UnityEngine.RectOffset::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern "C" void RectOffset__ctor_m1969 (RectOffset_t218 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		RectOffset_Init_m2658(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectOffset::Finalize()
extern "C" void RectOffset_Finalize_m2656 (RectOffset_t218 * __this, const MethodInfo* method)
{
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t453 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			RectOffset_Cleanup_m2659(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_001d:
	{
		return;
	}
}
// System.String UnityEngine.RectOffset::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral156;
extern "C" String_t* RectOffset_ToString_m2657 (RectOffset_t218 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		_stringLiteral156 = il2cpp_codegen_string_literal_from_index(156);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = RectOffset_get_left_m1967(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		int32_t L_5 = RectOffset_get_right_m2660(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		int32_t L_9 = RectOffset_get_top_m1968(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t280* L_12 = L_8;
		int32_t L_13 = RectOffset_get_bottom_m2661(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral156, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void UnityEngine.RectOffset::Init()
extern "C" void RectOffset_Init_m2658 (RectOffset_t218 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Init_m2658_ftn) (RectOffset_t218 *);
	static RectOffset_Init_m2658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Init_m2658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::Cleanup()
extern "C" void RectOffset_Cleanup_m2659 (RectOffset_t218 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Cleanup_m2659_ftn) (RectOffset_t218 *);
	static RectOffset_Cleanup_m2659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Cleanup_m2659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" int32_t RectOffset_get_left_m1967 (RectOffset_t218 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_left_m1967_ftn) (RectOffset_t218 *);
	static RectOffset_get_left_m1967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_left_m1967_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" int32_t RectOffset_get_right_m2660 (RectOffset_t218 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_right_m2660_ftn) (RectOffset_t218 *);
	static RectOffset_get_right_m2660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_right_m2660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" int32_t RectOffset_get_top_m1968 (RectOffset_t218 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_top_m1968_ftn) (RectOffset_t218 *);
	static RectOffset_get_top_m1968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_top_m1968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" int32_t RectOffset_get_bottom_m2661 (RectOffset_t218 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_bottom_m2661_ftn) (RectOffset_t218 *);
	static RectOffset_get_bottom_m2661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_bottom_m2661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" int32_t RectOffset_get_horizontal_m1962 (RectOffset_t218 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_horizontal_m1962_ftn) (RectOffset_t218 *);
	static RectOffset_get_horizontal_m1962_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_horizontal_m1962_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" int32_t RectOffset_get_vertical_m1964 (RectOffset_t218 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_vertical_m1964_ftn) (RectOffset_t218 *);
	static RectOffset_get_vertical_m1964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_vertical_m1964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyleMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Void UnityEngine.GUIStyle::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
extern "C" void GUIStyle__ctor_m2662 (GUIStyle_t453 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		GUIStyle_Init_m2666(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern TypeInfo* GUIStyle_t453_il2cpp_TypeInfo_var;
extern "C" void GUIStyle__cctor_m2663 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(319);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUIStyle_t453_StaticFields*)GUIStyle_t453_il2cpp_TypeInfo_var->static_fields)->___showKeyboardFocus_14 = 1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m2664 (GUIStyle_t453 * __this, const MethodInfo* method)
{
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GUIStyle_Cleanup_m2667(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0012:
	{
		return;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral157;
extern "C" String_t* GUIStyle_ToString_m2665 (GUIStyle_t453 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		_stringLiteral157 = il2cpp_codegen_string_literal_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = GUIStyle_get_name_m2668(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		String_t* L_2 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral157, L_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m2666 (GUIStyle_t453 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Init_m2666_ftn) (GUIStyle_t453 *);
	static GUIStyle_Init_m2666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Init_m2666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m2667 (GUIStyle_t453 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Cleanup_m2667_ftn) (GUIStyle_t453 *);
	static GUIStyle_Cleanup_m2667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Cleanup_m2667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m2668 (GUIStyle_t453 * __this, const MethodInfo* method)
{
	typedef String_t* (*GUIStyle_get_name_m2668_ftn) (GUIStyle_t453 *);
	static GUIStyle_get_name_m2668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m2668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtility.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// System.Void UnityEngine.GUIUtility::.cctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* GUIUtility_t323_il2cpp_TypeInfo_var;
extern "C" void GUIUtility__cctor_m2669 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t43  L_0 = Vector2_get_zero_m1419(NULL /*static, unused*/, /*hidden argument*/NULL);
		((GUIUtility_t323_StaticFields*)GUIUtility_t323_il2cpp_TypeInfo_var->static_fields)->___s_EditorScreenPointOffset_0 = L_0;
		((GUIUtility_t323_StaticFields*)GUIUtility_t323_il2cpp_TypeInfo_var->static_fields)->___s_HasKeyboardFocus_1 = 0;
		return;
	}
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m1775 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m1775_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m1775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m1775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GUIUtility_set_systemCopyBuffer_m1776 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIUtility_set_systemCopyBuffer_m1776_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_m1776_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_m1776_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Void UnityEngine.WrapperlessIcall::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void WrapperlessIcall__ctor_m2670 (WrapperlessIcall_t455 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m2671 (IL2CPPStructAlignmentAttribute_t456 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_30.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t458_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t457_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t459_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t460_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m2672 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t458_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		AttributeHelperEngine_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		ExecuteInEditModeU5BU5D_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(323);
		RequireComponentU5BU5D_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t457_StaticFields*)AttributeHelperEngine_t457_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t458*)SZArrayNew(DisallowMultipleComponentU5BU5D_t458_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t457_StaticFields*)AttributeHelperEngine_t457_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t459*)SZArrayNew(ExecuteInEditModeU5BU5D_t459_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t457_StaticFields*)AttributeHelperEngine_t457_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t460*)SZArrayNew(RequireComponentU5BU5D_t460_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* MonoBehaviour_t13_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t461_0_0_0_var;
extern TypeInfo* Stack_1_t547_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m2888_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m2889_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m2890_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m2673 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t13_0_0_0_var = il2cpp_codegen_type_from_index(327);
		DisallowMultipleComponent_t461_0_0_0_var = il2cpp_codegen_type_from_index(321);
		Stack_1_t547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(328);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		Stack_1__ctor_m2888_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483946);
		Stack_1_Push_m2889_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		Stack_1_Pop_m2890_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t547 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t280* V_2 = {0};
	int32_t V_3 = 0;
	{
		Stack_1_t547 * L_0 = (Stack_1_t547 *)il2cpp_codegen_object_new (Stack_1_t547_il2cpp_TypeInfo_var);
		Stack_1__ctor_m2888(L_0, /*hidden argument*/Stack_1__ctor_m2888_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t547 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m2889(L_1, L_2, /*hidden argument*/Stack_1_Push_m2889_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t13_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005c;
	}

IL_0037:
	{
		Stack_1_t547 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m2890(L_8, /*hidden argument*/Stack_1_Pop_m2890_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t461_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t280* L_12 = (ObjectU5BU5D_t280*)VirtFuncInvoker2< ObjectU5BU5D_t280*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t280* L_13 = V_2;
		NullCheck(L_13);
		V_3 = (((int32_t)(((Array_t *)L_13)->max_length)));
		int32_t L_14 = V_3;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_15 = V_1;
		return L_15;
	}

IL_005c:
	{
		Stack_1_t547 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_16);
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
extern const Il2CppType* RequireComponent_t462_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t13_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t460_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t532_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t548_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2891_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m2892_MethodInfo_var;
extern "C" TypeU5BU5D_t532* AttributeHelperEngine_GetRequiredComponents_m2674 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t462_0_0_0_var = il2cpp_codegen_type_from_index(326);
		MonoBehaviour_t13_0_0_0_var = il2cpp_codegen_type_from_index(327);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		RequireComponentU5BU5D_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		TypeU5BU5D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		List_1_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		List_1__ctor_m2891_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		List_1_ToArray_m2892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483950);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t548 * V_0 = {0};
	RequireComponentU5BU5D_t460* V_1 = {0};
	Type_t * V_2 = {0};
	RequireComponent_t462 * V_3 = {0};
	RequireComponentU5BU5D_t460* V_4 = {0};
	int32_t V_5 = 0;
	TypeU5BU5D_t532* V_6 = {0};
	{
		V_0 = (List_1_t548 *)NULL;
		goto IL_00e0;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t462_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t280* L_2 = (ObjectU5BU5D_t280*)VirtFuncInvoker2< ObjectU5BU5D_t280*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = ((RequireComponentU5BU5D_t460*)Castclass(L_2, RequireComponentU5BU5D_t460_il2cpp_TypeInfo_var));
		Type_t * L_3 = ___klass;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		V_2 = L_4;
		RequireComponentU5BU5D_t460* L_5 = V_1;
		V_4 = L_5;
		V_5 = 0;
		goto IL_00d2;
	}

IL_0030:
	{
		RequireComponentU5BU5D_t460* L_6 = V_4;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(RequireComponent_t462 **)(RequireComponent_t462 **)SZArrayLdElema(L_6, L_8, sizeof(RequireComponent_t462 *)));
		List_1_t548 * L_9 = V_0;
		if (L_9)
		{
			goto IL_007b;
		}
	}
	{
		RequireComponentU5BU5D_t460* L_10 = V_1;
		NullCheck(L_10);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		Type_t * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t13_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_11) == ((Object_t*)(Type_t *)L_12))))
		{
			goto IL_007b;
		}
	}
	{
		TypeU5BU5D_t532* L_13 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 3));
		RequireComponent_t462 * L_14 = V_3;
		NullCheck(L_14);
		Type_t * L_15 = (L_14->___m_Type0_0);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_15);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 0, sizeof(Type_t *))) = (Type_t *)L_15;
		TypeU5BU5D_t532* L_16 = L_13;
		RequireComponent_t462 * L_17 = V_3;
		NullCheck(L_17);
		Type_t * L_18 = (L_17->___m_Type1_1);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_16, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t532* L_19 = L_16;
		RequireComponent_t462 * L_20 = V_3;
		NullCheck(L_20);
		Type_t * L_21 = (L_20->___m_Type2_2);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_21;
		V_6 = L_19;
		TypeU5BU5D_t532* L_22 = V_6;
		return L_22;
	}

IL_007b:
	{
		List_1_t548 * L_23 = V_0;
		if (L_23)
		{
			goto IL_0087;
		}
	}
	{
		List_1_t548 * L_24 = (List_1_t548 *)il2cpp_codegen_object_new (List_1_t548_il2cpp_TypeInfo_var);
		List_1__ctor_m2891(L_24, /*hidden argument*/List_1__ctor_m2891_MethodInfo_var);
		V_0 = L_24;
	}

IL_0087:
	{
		RequireComponent_t462 * L_25 = V_3;
		NullCheck(L_25);
		Type_t * L_26 = (L_25->___m_Type0_0);
		if (!L_26)
		{
			goto IL_009e;
		}
	}
	{
		List_1_t548 * L_27 = V_0;
		RequireComponent_t462 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type0_0);
		NullCheck(L_27);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_27, L_29);
	}

IL_009e:
	{
		RequireComponent_t462 * L_30 = V_3;
		NullCheck(L_30);
		Type_t * L_31 = (L_30->___m_Type1_1);
		if (!L_31)
		{
			goto IL_00b5;
		}
	}
	{
		List_1_t548 * L_32 = V_0;
		RequireComponent_t462 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type1_1);
		NullCheck(L_32);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_32, L_34);
	}

IL_00b5:
	{
		RequireComponent_t462 * L_35 = V_3;
		NullCheck(L_35);
		Type_t * L_36 = (L_35->___m_Type2_2);
		if (!L_36)
		{
			goto IL_00cc;
		}
	}
	{
		List_1_t548 * L_37 = V_0;
		RequireComponent_t462 * L_38 = V_3;
		NullCheck(L_38);
		Type_t * L_39 = (L_38->___m_Type2_2);
		NullCheck(L_37);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_37, L_39);
	}

IL_00cc:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00d2:
	{
		int32_t L_41 = V_5;
		RequireComponentU5BU5D_t460* L_42 = V_4;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_43 = V_2;
		___klass = L_43;
	}

IL_00e0:
	{
		Type_t * L_44 = ___klass;
		if (!L_44)
		{
			goto IL_00f6;
		}
	}
	{
		Type_t * L_45 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t13_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_45) == ((Object_t*)(Type_t *)L_46))))
		{
			goto IL_0007;
		}
	}

IL_00f6:
	{
		List_1_t548 * L_47 = V_0;
		if (L_47)
		{
			goto IL_00fe;
		}
	}
	{
		return (TypeU5BU5D_t532*)NULL;
	}

IL_00fe:
	{
		List_1_t548 * L_48 = V_0;
		NullCheck(L_48);
		TypeU5BU5D_t532* L_49 = List_1_ToArray_m2892(L_48, /*hidden argument*/List_1_ToArray_m2892_MethodInfo_var);
		return L_49;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t464_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t13_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m2675 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t464_0_0_0_var = il2cpp_codegen_type_from_index(324);
		MonoBehaviour_t13_0_0_0_var = il2cpp_codegen_type_from_index(327);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t280* V_0 = {0};
	int32_t V_1 = 0;
	{
		goto IL_002b;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t464_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t280* L_2 = (ObjectU5BU5D_t280*)VirtFuncInvoker2< ObjectU5BU5D_t280*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t280* L_3 = V_0;
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		Type_t * L_5 = ___klass;
		NullCheck(L_5);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_5);
		___klass = L_6;
	}

IL_002b:
	{
		Type_t * L_7 = ___klass;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		Type_t * L_8 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t13_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
		{
			goto IL_0005;
		}
	}

IL_0041:
	{
		return 0;
	}
}
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"
// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DisallowMultipleComponent__ctor_m2676 (DisallowMultipleComponent_t461 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"
// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void RequireComponent__ctor_m2677 (RequireComponent_t462 * __this, Type_t * ___requiredComponent, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void AddComponentMenu__ctor_m2678 (AddComponentMenu_t463 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void AddComponentMenu__ctor_m2679 (AddComponentMenu_t463 * __this, String_t* ___menuName, int32_t ___order, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
// System.Void UnityEngine.ExecuteInEditMode::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ExecuteInEditMode__ctor_m2680 (ExecuteInEditMode_t464 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Void UnityEngine.SetupCoroutine::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void SetupCoroutine__ctor_m2681 (SetupCoroutine_t465 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m2682 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t280* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t280*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t280* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1452(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t280* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t549 *, Object_t *, ObjectU5BU5D_t280*, ParameterModifierU5BU5D_t550*, CultureInfo_t551 *, StringU5BU5D_t484* >::Invoke(71 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t549 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t550*)(ParameterModifierU5BU5D_t550*)NULL, (CultureInfo_t551 *)NULL, (StringU5BU5D_t484*)(StringU5BU5D_t484*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m2683 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t280* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t280*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t280* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t280* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t549 *, Object_t *, ObjectU5BU5D_t280*, ParameterModifierU5BU5D_t550*, CultureInfo_t551 *, StringU5BU5D_t484* >::Invoke(71 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t549 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t550*)(ParameterModifierU5BU5D_t550*)NULL, (CultureInfo_t551 *)NULL, (StringU5BU5D_t484*)(StringU5BU5D_t484*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
// System.Void UnityEngine.WritableAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void WritableAttribute__ctor_m2684 (WritableAttribute_t466 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"
// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void AssemblyIsEditorAssembly__ctor_m2685 (AssemblyIsEditorAssembly_t467 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern TypeInfo* UserProfile_t477_il2cpp_TypeInfo_var;
extern "C" UserProfile_t477 * GcUserProfileData_ToUserProfile_m2686 (GcUserProfileData_t468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t477_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t112 * L_3 = (__this->___image_3);
		UserProfile_t477 * L_4 = (UserProfile_t477 *)il2cpp_codegen_object_new (UserProfile_t477_il2cpp_TypeInfo_var);
		UserProfile__ctor_m2704(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral158;
extern "C" void GcUserProfileData_AddToArray_m2687 (GcUserProfileData_t468 * __this, UserProfileU5BU5D_t378** ___array, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral158 = il2cpp_codegen_string_literal_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t378** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t378**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t378**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t378** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t477 * L_5 = GcUserProfileData_ToUserProfile_m2686(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t378**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t378**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t378**)L_3)), L_5);
		*((UserProfile_t477 **)(UserProfile_t477 **)SZArrayLdElema((*((UserProfileU5BU5D_t378**)L_3)), L_4, sizeof(UserProfile_t477 *))) = (UserProfile_t477 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m2371(NULL /*static, unused*/, _stringLiteral158, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern TypeInfo* AchievementDescription_t481_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t481 * GcAchievementDescriptionData_ToAchievementDescription_m2688 (GcAchievementDescriptionData_t469 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t112 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t112 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t112 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t112 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t481 * L_7 = (AchievementDescription_t481 *)il2cpp_codegen_object_new (AchievementDescription_t481_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m2724(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern TypeInfo* Achievement_t479_il2cpp_TypeInfo_var;
extern "C" Achievement_t479 * GcAchievementData_ToAchievement_m2689 (GcAchievementData_t470 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t479_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t480  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m2893((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t480  L_5 = DateTime_AddSeconds_m2894((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t479 * L_6 = (Achievement_t479 *)il2cpp_codegen_object_new (Achievement_t479_il2cpp_TypeInfo_var);
		Achievement__ctor_m2713(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t470_marshal(const GcAchievementData_t470& unmarshaled, GcAchievementData_t470_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
extern "C" void GcAchievementData_t470_marshal_back(const GcAchievementData_t470_marshaled& marshaled, GcAchievementData_t470& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t470_marshal_cleanup(GcAchievementData_t470_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern TypeInfo* Score_t482_il2cpp_TypeInfo_var;
extern "C" Score_t482 * GcScoreData_ToScore_m2690 (GcScoreData_t471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t480  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m2893((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t480  L_5 = DateTime_AddSeconds_m2894((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t482 * L_8 = (Score_t482 *)il2cpp_codegen_object_new (Score_t482_il2cpp_TypeInfo_var);
		Score__ctor_m2735(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t471_marshal(const GcScoreData_t471& unmarshaled, GcScoreData_t471_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
extern "C" void GcScoreData_t471_marshal_back(const GcScoreData_t471_marshaled& marshaled, GcScoreData_t471& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t471_marshal_cleanup(GcScoreData_t471_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"
// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m2691 (Resolution_t472 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Resolution_set_width_m2692 (Resolution_t472 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m2693 (Resolution_t472 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m2694 (Resolution_t472 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m2695 (Resolution_t472 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m2696 (Resolution_t472 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral159;
extern "C" String_t* Resolution_ToString_m2697 (Resolution_t472 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral159, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"
// UnityEngine.Rendering.CompareFunction
#include "UnityEngine_UnityEngine_Rendering_CompareFunction.h"
// UnityEngine.Rendering.CompareFunction
#include "UnityEngine_UnityEngine_Rendering_CompareFunctionMethodDeclarations.h"
// UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMask.h"
// UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMaskMethodDeclarations.h"
// UnityEngine.Rendering.StencilOp
#include "UnityEngine_UnityEngine_Rendering_StencilOp.h"
// UnityEngine.Rendering.StencilOp
#include "UnityEngine_UnityEngine_Rendering_StencilOpMethodDeclarations.h"
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern TypeInfo* UserProfileU5BU5D_t378_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m2698 (LocalUser_t379 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfile__ctor_m2703(__this, /*hidden argument*/NULL);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t478*)((UserProfileU5BU5D_t378*)SZArrayNew(UserProfileU5BU5D_t378_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void LocalUser_SetFriends_m2699 (LocalUser_t379 * __this, IUserProfileU5BU5D_t478* ___friends, const MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t478* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void LocalUser_SetAuthenticated_m2700 (LocalUser_t379 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m2701 (LocalUser_t379 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m2702 (LocalUser_t379 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern TypeInfo* Texture2D_t112_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral160;
extern Il2CppCodeGenString* _stringLiteral122;
extern "C" void UserProfile__ctor_m2703 (UserProfile_t477 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		__this->___m_UserName_0 = _stringLiteral160;
		__this->___m_ID_1 = _stringLiteral122;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t112 * L_0 = (Texture2D_t112 *)il2cpp_codegen_object_new (Texture2D_t112_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2150(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
extern "C" void UserProfile__ctor_m2704 (UserProfile_t477 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t112 * ___image, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t112 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t283_il2cpp_TypeInfo_var;
extern TypeInfo* UserState_t491_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral161;
extern "C" String_t* UserProfile_ToString_m2705 (UserProfile_t477 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Boolean_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		UserState_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(331);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral161 = il2cpp_codegen_string_literal_from_index(161);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t280* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t280* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend() */, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t283_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t280* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UserState_t491_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6, sizeof(Object_t *))) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m1421(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" void UserProfile_SetUserName_m2706 (UserProfile_t477 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" void UserProfile_SetUserID_m2707 (UserProfile_t477 * __this, String_t* ___id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" void UserProfile_SetImage_m2708 (UserProfile_t477 * __this, Texture2D_t112 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t112 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m2709 (UserProfile_t477 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m2710 (UserProfile_t477 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m2711 (UserProfile_t477 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m2712 (UserProfile_t477 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
// System.String
#include "mscorlib_System_String.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Achievement__ctor_m2713 (Achievement_t479 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t480  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t480  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t480_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m2714 (Achievement_t479 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t480_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(332);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t480_il2cpp_TypeInfo_var);
		DateTime_t480  L_2 = ((DateTime_t480_StaticFields*)DateTime_t480_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral162;
extern "C" void Achievement__ctor_m2715 (Achievement_t479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral162 = il2cpp_codegen_string_literal_from_index(162);
		s_Il2CppMethodIntialized = true;
	}
	{
		Achievement__ctor_m2714(__this, _stringLiteral162, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t552_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t283_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t480_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral161;
extern "C" String_t* Achievement_ToString_m2716 (Achievement_t479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Double_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		Boolean_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		DateTime_t480_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(332);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral161 = il2cpp_codegen_string_literal_from_index(161);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t280* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t552_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t280* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t283_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t280* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t283_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t280* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_18 = L_17;
		DateTime_t480  L_19 = (DateTime_t480 )VirtFuncInvoker0< DateTime_t480  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t480  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t480_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8, sizeof(Object_t *))) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m1421(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m2717 (Achievement_t479 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m2718 (Achievement_t479 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m2719 (Achievement_t479 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m2720 (Achievement_t479 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m2721 (Achievement_t479 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m2722 (Achievement_t479 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t480  Achievement_get_lastReportedDate_m2723 (Achievement_t479 * __this, const MethodInfo* method)
{
	{
		DateTime_t480  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AchievementDescription__ctor_m2724 (AchievementDescription_t481 * __this, String_t* ___id, String_t* ___title, Texture2D_t112 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t112 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t283_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral161;
extern "C" String_t* AchievementDescription_ToString_m2725 (AchievementDescription_t481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		Boolean_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral161 = il2cpp_codegen_string_literal_from_index(161);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t280* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t280* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t280* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t280* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, _stringLiteral161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)_stringLiteral161;
		ObjectU5BU5D_t280* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t283_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1421(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m2726 (AchievementDescription_t481 * __this, Texture2D_t112 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t112 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m2727 (AchievementDescription_t481 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m2728 (AchievementDescription_t481 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m2729 (AchievementDescription_t481 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m2730 (AchievementDescription_t481 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m2731 (AchievementDescription_t481 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m2732 (AchievementDescription_t481 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m2733 (AchievementDescription_t481 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
// System.String
#include "mscorlib_System_String.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern TypeInfo* DateTime_t480_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral122;
extern "C" void Score__ctor_m2734 (Score_t482 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t480_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(332);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t480_il2cpp_TypeInfo_var);
		DateTime_t480  L_2 = DateTime_get_Now_m2895(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m2735(__this, L_0, L_1, _stringLiteral122, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Score__ctor_m2735 (Score_t482 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t480  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t480  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t553_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t480_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral163;
extern Il2CppCodeGenString* _stringLiteral164;
extern Il2CppCodeGenString* _stringLiteral165;
extern Il2CppCodeGenString* _stringLiteral166;
extern Il2CppCodeGenString* _stringLiteral167;
extern "C" String_t* Score_ToString_m2736 (Score_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		Int64_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(334);
		DateTime_t480_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(332);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral163 = il2cpp_codegen_string_literal_from_index(163);
		_stringLiteral164 = il2cpp_codegen_string_literal_from_index(164);
		_stringLiteral165 = il2cpp_codegen_string_literal_from_index(165);
		_stringLiteral166 = il2cpp_codegen_string_literal_from_index(166);
		_stringLiteral167 = il2cpp_codegen_string_literal_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral163);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral163;
		ObjectU5BU5D_t280* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t280* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, _stringLiteral164);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral164;
		ObjectU5BU5D_t280* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t553_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t280* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral165);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral165;
		ObjectU5BU5D_t280* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5, sizeof(Object_t *))) = (Object_t *)L_12;
		ObjectU5BU5D_t280* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, _stringLiteral166);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral166;
		ObjectU5BU5D_t280* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t280* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, _stringLiteral167);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8, sizeof(Object_t *))) = (Object_t *)_stringLiteral167;
		ObjectU5BU5D_t280* L_17 = L_16;
		DateTime_t480  L_18 = (__this->___m_Date_0);
		DateTime_t480  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t480_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1421(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m2737 (Score_t482 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m2738 (Score_t482 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m2739 (Score_t482 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m2740 (Score_t482 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern TypeInfo* Score_t482_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t542_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t484_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral168;
extern "C" void Leaderboard__ctor_m2741 (Leaderboard_t382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		ScoreU5BU5D_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		StringU5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		_stringLiteral168 = il2cpp_codegen_string_literal_from_index(168);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, _stringLiteral168);
		Range_t485  L_0 = {0};
		Range__ctor_m2762(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t485  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t482 * L_1 = (Score_t482 *)il2cpp_codegen_object_new (Score_t482_il2cpp_TypeInfo_var);
		Score__ctor_m2734(L_1, _stringLiteral168, (((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t483*)((ScoreU5BU5D_t542*)SZArrayNew(ScoreU5BU5D_t542_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = _stringLiteral168;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t283_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t554_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t492_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t493_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral169;
extern Il2CppCodeGenString* _stringLiteral170;
extern Il2CppCodeGenString* _stringLiteral171;
extern Il2CppCodeGenString* _stringLiteral172;
extern Il2CppCodeGenString* _stringLiteral173;
extern Il2CppCodeGenString* _stringLiteral174;
extern Il2CppCodeGenString* _stringLiteral175;
extern Il2CppCodeGenString* _stringLiteral176;
extern Il2CppCodeGenString* _stringLiteral177;
extern Il2CppCodeGenString* _stringLiteral178;
extern "C" String_t* Leaderboard_ToString_m2742 (Leaderboard_t382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Boolean_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		UInt32_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UserScope_t492_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		TimeScope_t493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(337);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral169 = il2cpp_codegen_string_literal_from_index(169);
		_stringLiteral170 = il2cpp_codegen_string_literal_from_index(170);
		_stringLiteral171 = il2cpp_codegen_string_literal_from_index(171);
		_stringLiteral172 = il2cpp_codegen_string_literal_from_index(172);
		_stringLiteral173 = il2cpp_codegen_string_literal_from_index(173);
		_stringLiteral174 = il2cpp_codegen_string_literal_from_index(174);
		_stringLiteral175 = il2cpp_codegen_string_literal_from_index(175);
		_stringLiteral176 = il2cpp_codegen_string_literal_from_index(176);
		_stringLiteral177 = il2cpp_codegen_string_literal_from_index(177);
		_stringLiteral178 = il2cpp_codegen_string_literal_from_index(178);
		s_Il2CppMethodIntialized = true;
	}
	Range_t485  V_0 = {0};
	Range_t485  V_1 = {0};
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral169);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral169;
		ObjectU5BU5D_t280* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1, sizeof(Object_t *))) = (Object_t *)L_2;
		ObjectU5BU5D_t280* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral170);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral170;
		ObjectU5BU5D_t280* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t280* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, _stringLiteral171);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral171;
		ObjectU5BU5D_t280* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t283_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t280* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, _stringLiteral172);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral172;
		ObjectU5BU5D_t280* L_12 = L_11;
		Range_t485  L_13 = (Range_t485 )VirtFuncInvoker0< Range_t485  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t280* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, _stringLiteral173);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8, sizeof(Object_t *))) = (Object_t *)_stringLiteral173;
		ObjectU5BU5D_t280* L_18 = L_17;
		Range_t485  L_19 = (Range_t485 )VirtFuncInvoker0< Range_t485  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_22;
		ObjectU5BU5D_t280* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, _stringLiteral174);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)_stringLiteral174;
		ObjectU5BU5D_t280* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t554_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t280* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, _stringLiteral175);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)_stringLiteral175;
		ObjectU5BU5D_t280* L_29 = L_28;
		IScoreU5BU5D_t483* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t280* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, _stringLiteral176);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)_stringLiteral176;
		ObjectU5BU5D_t280* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t492_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_37;
		ObjectU5BU5D_t280* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, _stringLiteral177);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16), sizeof(Object_t *))) = (Object_t *)_stringLiteral177;
		ObjectU5BU5D_t280* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t493_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17), sizeof(Object_t *))) = (Object_t *)L_42;
		ObjectU5BU5D_t280* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, _stringLiteral178);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18), sizeof(Object_t *))) = (Object_t *)_stringLiteral178;
		ObjectU5BU5D_t280* L_44 = L_43;
		StringU5BU5D_t484* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19), sizeof(Object_t *))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m1421(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m2743 (Leaderboard_t382 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern "C" void Leaderboard_SetMaxRange_m2744 (Leaderboard_t382 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void Leaderboard_SetScores_m2745 (Leaderboard_t382 * __this, IScoreU5BU5D_t483* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t483* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Leaderboard_SetTitle_m2746 (Leaderboard_t382 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t484* Leaderboard_GetUserFilter_m2747 (Leaderboard_t382 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t484* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m2748 (Leaderboard_t382 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m2749 (Leaderboard_t382 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m2750 (Leaderboard_t382 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
extern "C" void Leaderboard_set_userScope_m2751 (Leaderboard_t382 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t485  Leaderboard_get_range_m2752 (Leaderboard_t382 * __this, const MethodInfo* method)
{
	{
		Range_t485  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
extern "C" void Leaderboard_set_range_m2753 (Leaderboard_t382 * __this, Range_t485  ___value, const MethodInfo* method)
{
	{
		Range_t485  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m2754 (Leaderboard_t382 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
extern "C" void Leaderboard_set_timeScope_m2755 (Leaderboard_t382 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" void HitInfo_SendMessage_m2756 (HitInfo_t487 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t6 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m2436(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" bool HitInfo_Compare_m2757 (Object_t * __this /* static, unused */, HitInfo_t487  ___lhs, HitInfo_t487  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t6 * L_0 = ((&___lhs)->___target_0);
		GameObject_t6 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m1370(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t61 * L_3 = ((&___lhs)->___camera_1);
		Camera_t61 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m1370(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m2758 (Object_t * __this /* static, unused */, HitInfo_t487  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t6 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t61 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_2, (Object_t269 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
struct GUILayer_t387;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m1422_gshared (Component_t267 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m1422(__this, method) (( Object_t * (*) (Component_t267 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1422_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t387_m2896(__this, method) (( GUILayer_t387 * (*) (Component_t267 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1422_gshared)(__this, method)
// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* SendMouseEvents_t488_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfoU5BU5D_t489_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t487_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m2759 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SendMouseEvents_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(338);
		HitInfoU5BU5D_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		HitInfo_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t487  V_0 = {0};
	HitInfo_t487  V_1 = {0};
	HitInfo_t487  V_2 = {0};
	HitInfo_t487  V_3 = {0};
	HitInfo_t487  V_4 = {0};
	HitInfo_t487  V_5 = {0};
	HitInfo_t487  V_6 = {0};
	HitInfo_t487  V_7 = {0};
	HitInfo_t487  V_8 = {0};
	{
		((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 0;
		HitInfoU5BU5D_t489* L_0 = ((HitInfoU5BU5D_t489*)SZArrayNew(HitInfoU5BU5D_t489_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t487  L_1 = V_0;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_0, 0, sizeof(HitInfo_t487 ))) = L_1;
		HitInfoU5BU5D_t489* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t487  L_3 = V_1;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_2, 1, sizeof(HitInfo_t487 ))) = L_3;
		HitInfoU5BU5D_t489* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t487  L_5 = V_2;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_4, 2, sizeof(HitInfo_t487 ))) = L_5;
		((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4 = L_4;
		HitInfoU5BU5D_t489* L_6 = ((HitInfoU5BU5D_t489*)SZArrayNew(HitInfoU5BU5D_t489_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t487  L_7 = V_3;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_6, 0, sizeof(HitInfo_t487 ))) = L_7;
		HitInfoU5BU5D_t489* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t487  L_9 = V_4;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_8, 1, sizeof(HitInfo_t487 ))) = L_9;
		HitInfoU5BU5D_t489* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t487  L_11 = V_5;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_10, 2, sizeof(HitInfo_t487 ))) = L_11;
		((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5 = L_10;
		HitInfoU5BU5D_t489* L_12 = ((HitInfoU5BU5D_t489*)SZArrayNew(HitInfoU5BU5D_t489_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t487  L_13 = V_6;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_12, 0, sizeof(HitInfo_t487 ))) = L_13;
		HitInfoU5BU5D_t489* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t487  L_15 = V_7;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_14, 1, sizeof(HitInfo_t487 ))) = L_15;
		HitInfoU5BU5D_t489* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t487  L_17 = V_8;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_16, 2, sizeof(HitInfo_t487 ))) = L_17;
		((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"
extern TypeInfo* Input_t285_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t488_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t490_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t487_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t387_m2896_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m2760 (Object_t * __this /* static, unused */, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		SendMouseEvents_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(338);
		CameraU5BU5D_t490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		HitInfo_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		Component_GetComponent_TisGUILayer_t387_m2896_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483951);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t61 * V_3 = {0};
	CameraU5BU5D_t490* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t145  V_6 = {0};
	GUILayer_t387 * V_7 = {0};
	GUIElement_t386 * V_8 = {0};
	Ray_t292  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t6 * V_12 = {0};
	GameObject_t6 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t487  V_15 = {0};
	Vector3_t42  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t285_il2cpp_TypeInfo_var);
		Vector3_t42  L_0 = Input_get_mousePosition_m1442(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m2360(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		CameraU5BU5D_t490* L_2 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		CameraU5BU5D_t490* L_3 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7 = ((CameraU5BU5D_t490*)SZArrayNew(CameraU5BU5D_t490_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		CameraU5BU5D_t490* L_6 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		Camera_GetAllCameras_m2361(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_7 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t487  L_9 = V_15;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_7, L_8, sizeof(HitInfo_t487 ))) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_12 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		bool L_13 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3;
		if (L_13)
		{
			goto IL_02c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		CameraU5BU5D_t490* L_14 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b8;
	}

IL_0084:
	{
		CameraU5BU5D_t490* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t61 **)(Camera_t61 **)SZArrayLdElema(L_15, L_17, sizeof(Camera_t61 *)));
		Camera_t61 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m1370(NULL /*static, unused*/, L_18, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		Camera_t61 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t388 * L_22 = Camera_get_targetTexture_m2356(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_22, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b2;
		}
	}

IL_00ad:
	{
		goto IL_02b2;
	}

IL_00b2:
	{
		Camera_t61 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t145  L_25 = Camera_get_pixelRect_m2354(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t42  L_26 = V_0;
		bool L_27 = Rect_Contains_m1612((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_02b2;
	}

IL_00cc:
	{
		Camera_t61 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t387 * L_29 = Component_GetComponent_TisGUILayer_t387_m2896(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t387_m2896_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t387 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m1367(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0145;
		}
	}
	{
		GUILayer_t387 * L_32 = V_7;
		Vector3_t42  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t386 * L_34 = GUILayer_HitTest_m2143(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t386 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m1367(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_37 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t386 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t6 * L_39 = Component_get_gameObject_m1429(L_38, /*hidden argument*/NULL);
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_37, 0, sizeof(HitInfo_t487 )))->___target_0 = L_39;
		HitInfoU5BU5D_t489* L_40 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t61 * L_41 = V_3;
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_40, 0, sizeof(HitInfo_t487 )))->___camera_1 = L_41;
		goto IL_0145;
	}

IL_0123:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_42 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_42, 0, sizeof(HitInfo_t487 )))->___target_0 = (GameObject_t6 *)NULL;
		HitInfoU5BU5D_t489* L_43 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_43, 0, sizeof(HitInfo_t487 )))->___camera_1 = (Camera_t61 *)NULL;
	}

IL_0145:
	{
		Camera_t61 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m2353(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_02b2;
	}

IL_0155:
	{
		Camera_t61 * L_46 = V_3;
		Vector3_t42  L_47 = V_0;
		NullCheck(L_46);
		Ray_t292  L_48 = Camera_ScreenPointToRay_m1488(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t42  L_49 = Ray_get_direction_m1492((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m1464(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_018b;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_01a0;
	}

IL_018b:
	{
		Camera_t61 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m1489(L_53, /*hidden argument*/NULL);
		Camera_t61 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m1490(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_01a0:
	{
		V_11 = G_B23_0;
		Camera_t61 * L_59 = V_3;
		Ray_t292  L_60 = V_9;
		float L_61 = V_11;
		Camera_t61 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m1507(L_62, /*hidden argument*/NULL);
		Camera_t61 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m2353(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t6 * L_66 = Camera_RaycastTry_m2365(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t6 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_67, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01f0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_69 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t6 * L_70 = V_12;
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_69, 1, sizeof(HitInfo_t487 )))->___target_0 = L_70;
		HitInfoU5BU5D_t489* L_71 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t61 * L_72 = V_3;
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_71, 1, sizeof(HitInfo_t487 )))->___camera_1 = L_72;
		goto IL_022a;
	}

IL_01f0:
	{
		Camera_t61 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m2357(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0208;
		}
	}
	{
		Camera_t61 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m2357(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_022a;
		}
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_77 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_77, 1, sizeof(HitInfo_t487 )))->___target_0 = (GameObject_t6 *)NULL;
		HitInfoU5BU5D_t489* L_78 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_78, 1, sizeof(HitInfo_t487 )))->___camera_1 = (Camera_t61 *)NULL;
	}

IL_022a:
	{
		Camera_t61 * L_79 = V_3;
		Ray_t292  L_80 = V_9;
		float L_81 = V_11;
		Camera_t61 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m1507(L_82, /*hidden argument*/NULL);
		Camera_t61 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m2353(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t6 * L_86 = Camera_RaycastTry2D_m2367(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t6 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_87, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0278;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_89 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t6 * L_90 = V_13;
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_89, 2, sizeof(HitInfo_t487 )))->___target_0 = L_90;
		HitInfoU5BU5D_t489* L_91 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t61 * L_92 = V_3;
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_91, 2, sizeof(HitInfo_t487 )))->___camera_1 = L_92;
		goto IL_02b2;
	}

IL_0278:
	{
		Camera_t61 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m2357(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_0290;
		}
	}
	{
		Camera_t61 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m2357(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02b2;
		}
	}

IL_0290:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_97 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_97, 2, sizeof(HitInfo_t487 )))->___target_0 = (GameObject_t6 *)NULL;
		HitInfoU5BU5D_t489* L_98 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_98, 2, sizeof(HitInfo_t487 )))->___camera_1 = (Camera_t61 *)NULL;
	}

IL_02b2:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b8:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t490* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0084;
		}
	}

IL_02c3:
	{
		V_14 = 0;
		goto IL_02e9;
	}

IL_02cb:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_103 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m2761(NULL /*static, unused*/, L_102, (*(HitInfo_t487 *)((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_103, L_104, sizeof(HitInfo_t487 )))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e9:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_107 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02cb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 0;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"
extern TypeInfo* Input_t285_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t488_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t487_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral179;
extern Il2CppCodeGenString* _stringLiteral180;
extern Il2CppCodeGenString* _stringLiteral181;
extern Il2CppCodeGenString* _stringLiteral182;
extern Il2CppCodeGenString* _stringLiteral183;
extern Il2CppCodeGenString* _stringLiteral184;
extern Il2CppCodeGenString* _stringLiteral185;
extern "C" void SendMouseEvents_SendEvents_m2761 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t487  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		SendMouseEvents_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(338);
		HitInfo_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		_stringLiteral179 = il2cpp_codegen_string_literal_from_index(179);
		_stringLiteral180 = il2cpp_codegen_string_literal_from_index(180);
		_stringLiteral181 = il2cpp_codegen_string_literal_from_index(181);
		_stringLiteral182 = il2cpp_codegen_string_literal_from_index(182);
		_stringLiteral183 = il2cpp_codegen_string_literal_from_index(183);
		_stringLiteral184 = il2cpp_codegen_string_literal_from_index(184);
		_stringLiteral185 = il2cpp_codegen_string_literal_from_index(185);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t487  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t285_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m1440(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m1484(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t487  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m2758(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_5 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t487  L_7 = ___hit;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_5, L_6, sizeof(HitInfo_t487 ))) = L_7;
		HitInfoU5BU5D_t489* L_8 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m2756(((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_8, L_9, sizeof(HitInfo_t487 ))), _stringLiteral179, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_11 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m2758(NULL /*static, unused*/, (*(HitInfo_t487 *)((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_11, L_12, sizeof(HitInfo_t487 )))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t487  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_15 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m2757(NULL /*static, unused*/, L_14, (*(HitInfo_t487 *)((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_15, L_16, sizeof(HitInfo_t487 )))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_18 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m2756(((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_18, L_19, sizeof(HitInfo_t487 ))), _stringLiteral180, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_20 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m2756(((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_20, L_21, sizeof(HitInfo_t487 ))), _stringLiteral181, /*hidden argument*/NULL);
		HitInfoU5BU5D_t489* L_22 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t487_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t487  L_24 = V_2;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_22, L_23, sizeof(HitInfo_t487 ))) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_25 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m2758(NULL /*static, unused*/, (*(HitInfo_t487 *)((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_25, L_26, sizeof(HitInfo_t487 )))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_28 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m2756(((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_28, L_29, sizeof(HitInfo_t487 ))), _stringLiteral182, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t487  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_31 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m2757(NULL /*static, unused*/, L_30, (*(HitInfo_t487 *)((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_31, L_32, sizeof(HitInfo_t487 )))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t487  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m2758(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m2756((&___hit), _stringLiteral183, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_36 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m2758(NULL /*static, unused*/, (*(HitInfo_t487 *)((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_36, L_37, sizeof(HitInfo_t487 )))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_39 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m2756(((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_39, L_40, sizeof(HitInfo_t487 ))), _stringLiteral184, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t487  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m2758(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m2756((&___hit), _stringLiteral185, /*hidden argument*/NULL);
		HitInfo_SendMessage_m2756((&___hit), _stringLiteral183, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t488_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t489* L_43 = ((SendMouseEvents_t488_StaticFields*)SendMouseEvents_t488_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t487  L_45 = ___hit;
		*((HitInfo_t487 *)(HitInfo_t487 *)SZArrayLdElema(L_43, L_44, sizeof(HitInfo_t487 ))) = L_45;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Range__ctor_m2762 (Range_t485 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
// System.Void UnityEngine.PropertyAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void PropertyAttribute__ctor_m2763 (PropertyAttribute_t494 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void TooltipAttribute__ctor_m2764 (TooltipAttribute_t495 * __this, String_t* ___tooltip, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2763(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"
// System.Void UnityEngine.SpaceAttribute::.ctor()
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void SpaceAttribute__ctor_m2765 (SpaceAttribute_t496 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2763(__this, /*hidden argument*/NULL);
		__this->___height_0 = (8.0f);
		return;
	}
}
// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void SpaceAttribute__ctor_m2766 (SpaceAttribute_t496 * __this, float ___height, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2763(__this, /*hidden argument*/NULL);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void RangeAttribute__ctor_m2767 (RangeAttribute_t497 * __this, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2763(__this, /*hidden argument*/NULL);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"
// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void TextAreaAttribute__ctor_m2768 (TextAreaAttribute_t498 * __this, int32_t ___minLines, int32_t ___maxLines, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2763(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"
// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SelectionBaseAttribute__ctor_m2769 (SelectionBaseAttribute_t499 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Void UnityEngine.StackTraceUtility::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void StackTraceUtility__ctor_m2770 (StackTraceUtility_t500 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t500_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m2771 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		StackTraceUtility_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t500_StaticFields*)StackTraceUtility_t500_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* StackTraceUtility_t500_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m2772 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t500_il2cpp_TypeInfo_var);
		((StackTraceUtility_t500_StaticFields*)StackTraceUtility_t500_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StackTrace_t533_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t500_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m2773 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		StackTraceUtility_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t533 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t533 * L_0 = (StackTrace_t533 *)il2cpp_codegen_object_new (StackTrace_t533_il2cpp_TypeInfo_var);
		StackTrace__ctor_m2897(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t533 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t500_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m2778(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToString_m2898(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral186;
extern Il2CppCodeGenString* _stringLiteral187;
extern Il2CppCodeGenString* _stringLiteral188;
extern Il2CppCodeGenString* _stringLiteral189;
extern Il2CppCodeGenString* _stringLiteral190;
extern Il2CppCodeGenString* _stringLiteral191;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m2774 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral186 = il2cpp_codegen_string_literal_from_index(186);
		_stringLiteral187 = il2cpp_codegen_string_literal_from_index(187);
		_stringLiteral188 = il2cpp_codegen_string_literal_from_index(188);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		_stringLiteral190 = il2cpp_codegen_string_literal_from_index(190);
		_stringLiteral191 = il2cpp_codegen_string_literal_from_index(191);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m2899(L_1, _stringLiteral186, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m2899(L_3, _stringLiteral187, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m2899(L_5, _stringLiteral188, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m2899(L_7, _stringLiteral189, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m2899(L_9, _stringLiteral190, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m2899(L_11, _stringLiteral191, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral192;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m2775 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		StackTraceUtility_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t500_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m2776(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m1746(NULL /*static, unused*/, L_3, _stringLiteral192, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern TypeInfo* ArgumentException_t339_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t287_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t276_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t533_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral193;
extern Il2CppCodeGenString* _stringLiteral194;
extern Il2CppCodeGenString* _stringLiteral192;
extern Il2CppCodeGenString* _stringLiteral87;
extern Il2CppCodeGenString* _stringLiteral195;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m2776 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		Exception_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		StringBuilder_t276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		StackTrace_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		StackTraceUtility_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		_stringLiteral194 = il2cpp_codegen_string_literal_from_index(194);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		_stringLiteral195 = il2cpp_codegen_string_literal_from_index(195);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t287 * V_0 = {0};
	StringBuilder_t276 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t533 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t339 * L_1 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_1, _stringLiteral193, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t287 *)IsInstClass(L_2, Exception_t287_il2cpp_TypeInfo_var));
		Exception_t287 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t339 * L_4 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_4, _stringLiteral194, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0029:
	{
		Exception_t287 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t287 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1761(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t276 * L_10 = (StringBuilder_t276 *)il2cpp_codegen_object_new (StringBuilder_t276_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2900(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1761(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t287 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t287 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1746(NULL /*static, unused*/, L_19, _stringLiteral192, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t287 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t287 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t287 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m2901(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m1761(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m1631(NULL /*static, unused*/, L_33, _stringLiteral87, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m1631(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t287 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t287 * L_41 = (Exception_t287 *)VirtFuncInvoker0< Exception_t287 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m2902(NULL /*static, unused*/, _stringLiteral195, L_42, _stringLiteral192, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t287 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t287 * L_46 = (Exception_t287 *)VirtFuncInvoker0< Exception_t287 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t287 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t276 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m1631(NULL /*static, unused*/, L_49, _stringLiteral192, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m2903(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t533 * L_51 = (StackTrace_t533 *)il2cpp_codegen_object_new (StackTrace_t533_il2cpp_TypeInfo_var);
		StackTrace__ctor_m2897(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t276 * L_52 = V_1;
		StackTrace_t533 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t500_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m2778(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m2903(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t276 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = StringBuilder_ToString_m1383(L_56, /*hidden argument*/NULL);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t151_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t276_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral196;
extern Il2CppCodeGenString* _stringLiteral197;
extern Il2CppCodeGenString* _stringLiteral198;
extern Il2CppCodeGenString* _stringLiteral199;
extern Il2CppCodeGenString* _stringLiteral200;
extern Il2CppCodeGenString* _stringLiteral201;
extern Il2CppCodeGenString* _stringLiteral202;
extern Il2CppCodeGenString* _stringLiteral203;
extern Il2CppCodeGenString* _stringLiteral204;
extern Il2CppCodeGenString* _stringLiteral205;
extern Il2CppCodeGenString* _stringLiteral206;
extern Il2CppCodeGenString* _stringLiteral207;
extern Il2CppCodeGenString* _stringLiteral208;
extern Il2CppCodeGenString* _stringLiteral209;
extern Il2CppCodeGenString* _stringLiteral192;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m2777 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		CharU5BU5D_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		StringBuilder_t276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		StackTraceUtility_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		_stringLiteral196 = il2cpp_codegen_string_literal_from_index(196);
		_stringLiteral197 = il2cpp_codegen_string_literal_from_index(197);
		_stringLiteral198 = il2cpp_codegen_string_literal_from_index(198);
		_stringLiteral199 = il2cpp_codegen_string_literal_from_index(199);
		_stringLiteral200 = il2cpp_codegen_string_literal_from_index(200);
		_stringLiteral201 = il2cpp_codegen_string_literal_from_index(201);
		_stringLiteral202 = il2cpp_codegen_string_literal_from_index(202);
		_stringLiteral203 = il2cpp_codegen_string_literal_from_index(203);
		_stringLiteral204 = il2cpp_codegen_string_literal_from_index(204);
		_stringLiteral205 = il2cpp_codegen_string_literal_from_index(205);
		_stringLiteral206 = il2cpp_codegen_string_literal_from_index(206);
		_stringLiteral207 = il2cpp_codegen_string_literal_from_index(207);
		_stringLiteral208 = il2cpp_codegen_string_literal_from_index(208);
		_stringLiteral209 = il2cpp_codegen_string_literal_from_index(209);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t484* V_0 = {0};
	StringBuilder_t276 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t151* L_3 = ((CharU5BU5D_t151*)SZArrayNew(CharU5BU5D_t151_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t484* L_4 = String_Split_m2904(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1761(L_5, /*hidden argument*/NULL);
		StringBuilder_t276 * L_7 = (StringBuilder_t276 *)il2cpp_codegen_object_new (StringBuilder_t276_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2900(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t484* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t484* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))));
		String_t* L_13 = String_Trim_m2901((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9, sizeof(String_t*))) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t484* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t484* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19, sizeof(String_t*)));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1761(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1780(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m2899(L_24, _stringLiteral196, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m2899(L_27, _stringLiteral197, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t484* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t500_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m2774(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t484* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t500_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m2774(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36, sizeof(String_t*))), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m2905(L_38, _stringLiteral198, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1781(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m2905(L_44, _stringLiteral199, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m2905(L_46, _stringLiteral200, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m2905(L_48, _stringLiteral201, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m2899(L_51, _stringLiteral202, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m2906(L_53, _stringLiteral203, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m2899(L_55, _stringLiteral204, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m1804(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m2905(L_59, _stringLiteral205, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m2907(L_62, _stringLiteral203, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m1804(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m2908(L_73, _stringLiteral206, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t500_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t500_StaticFields*)StackTraceUtility_t500_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m2908(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m2909(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m2910(L_82, _stringLiteral207, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m1804(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m1806(L_88, L_89, _stringLiteral208, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m1761(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m1806(L_91, L_93, _stringLiteral209, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t276 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m1631(NULL /*static, unused*/, L_96, _stringLiteral192, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m2903(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t484* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t276 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = StringBuilder_ToString_m1383(L_101, /*hidden argument*/NULL);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern TypeInfo* StringBuilder_t276_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral93;
extern Il2CppCodeGenString* _stringLiteral210;
extern Il2CppCodeGenString* _stringLiteral211;
extern Il2CppCodeGenString* _stringLiteral212;
extern Il2CppCodeGenString* _stringLiteral209;
extern Il2CppCodeGenString* _stringLiteral213;
extern Il2CppCodeGenString* _stringLiteral214;
extern Il2CppCodeGenString* _stringLiteral208;
extern Il2CppCodeGenString* _stringLiteral192;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m2778 (Object_t * __this /* static, unused */, StackTrace_t533 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		StackTraceUtility_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		_stringLiteral93 = il2cpp_codegen_string_literal_from_index(93);
		_stringLiteral210 = il2cpp_codegen_string_literal_from_index(210);
		_stringLiteral211 = il2cpp_codegen_string_literal_from_index(211);
		_stringLiteral212 = il2cpp_codegen_string_literal_from_index(212);
		_stringLiteral209 = il2cpp_codegen_string_literal_from_index(209);
		_stringLiteral213 = il2cpp_codegen_string_literal_from_index(213);
		_stringLiteral214 = il2cpp_codegen_string_literal_from_index(214);
		_stringLiteral208 = il2cpp_codegen_string_literal_from_index(208);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t276 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t555 * V_2 = {0};
	MethodBase_t556 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t557* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t276 * L_0 = (StringBuilder_t276 *)il2cpp_codegen_object_new (StringBuilder_t276_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2900(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t533 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t555 * L_3 = (StackFrame_t555 *)VirtFuncInvoker1< StackFrame_t555 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t555 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t556 * L_5 = (MethodBase_t556 *)VirtFuncInvoker0< MethodBase_t556 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t556 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t556 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1761(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t276 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m2903(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t276 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m2903(L_17, _stringLiteral93, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t276 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m2903(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t276 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m2903(L_21, _stringLiteral210, /*hidden argument*/NULL);
		StringBuilder_t276 * L_22 = V_0;
		MethodBase_t556 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m2903(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t276 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m2903(L_25, _stringLiteral211, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t556 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t557* L_27 = (ParameterInfoU5BU5D_t557*)VirtFuncInvoker0< ParameterInfoU5BU5D_t557* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t276 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m2903(L_29, _stringLiteral212, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t276 * L_30 = V_0;
		ParameterInfoU5BU5D_t557* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t558 *))));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t558 *))));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m2903(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t557* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t276 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m2903(L_39, _stringLiteral209, /*hidden argument*/NULL);
		StackFrame_t555 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m1759(NULL /*static, unused*/, L_44, _stringLiteral213, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m1759(NULL /*static, unused*/, L_47, _stringLiteral214, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t276 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m2903(L_49, _stringLiteral208, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t500_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t500_StaticFields*)StackTraceUtility_t500_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m2899(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t500_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t500_StaticFields*)StackTraceUtility_t500_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m1761(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m1761(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t500_StaticFields*)StackTraceUtility_t500_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m1761(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m1781(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t276 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m2903(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t276 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m2903(L_63, _stringLiteral210, /*hidden argument*/NULL);
		StringBuilder_t276 * L_64 = V_0;
		StackFrame_t555 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m2911((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m2903(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t276 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m2903(L_68, _stringLiteral209, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t276 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m2903(L_69, _stringLiteral192, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t533 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t276 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = StringBuilder_ToString_m1383(L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Void UnityEngine.UnityException::.ctor()
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral215;
extern "C" void UnityException__ctor_m2779 (UnityException_t320 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral215 = il2cpp_codegen_string_literal_from_index(215);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception__ctor_m2912(__this, _stringLiteral215, /*hidden argument*/NULL);
		Exception_set_HResult_m2913(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void UnityException__ctor_m2780 (UnityException_t320 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m2912(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m2913(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
// System.Exception
#include "mscorlib_System_Exception.h"
extern "C" void UnityException__ctor_m2781 (UnityException_t320 * __this, String_t* ___message, Exception_t287 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t287 * L_1 = ___innerException;
		Exception__ctor_m2914(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m2913(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void UnityException__ctor_m2782 (UnityException_t320 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t534 * L_0 = ___info;
		StreamingContext_t535  L_1 = ___context;
		Exception__ctor_m2915(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"
// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m2783 (SharedBetweenAnimatorsAttribute_t501 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern "C" void StateMachineBehaviour__ctor_m2784 (StateMachineBehaviour_t502 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m2033(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m2785 (TextGenerationSettings_t271 * __this, Color_t68  ___left, Color_t68  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___left)->___r_0);
		float L_1 = ((&___right)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3 = ((&___left)->___g_1);
		float L_4 = ((&___right)->___g_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6 = ((&___left)->___b_2);
		float L_7 = ((&___right)->___b_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9 = ((&___left)->___a_3);
		float L_10 = ((&___right)->___a_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_11 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 0;
	}

IL_005e:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m2786 (TextGenerationSettings_t271 * __this, Vector2_t43  ___left, Vector2_t43  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m2787 (TextGenerationSettings_t271 * __this, TextGenerationSettings_t271  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t68  L_0 = (__this->___color_1);
		Color_t68  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m2785(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t43  L_35 = (__this->___generationExtents_14);
		Vector2_t43  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m2786(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t43  L_38 = (__this->___pivot_15);
		Vector2_t43  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m2786(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t103 * L_41 = (__this->___font_0);
		Font_t103 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m1370(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ArgumentCache__ctor_m2788 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t269 * ArgumentCache_get_unityObjectArgument_m2789 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	{
		Object_t269 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2790 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m2791 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m2792 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m2793 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m2794 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t559_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral216;
extern Il2CppCodeGenString* _stringLiteral217;
extern Il2CppCodeGenString* _stringLiteral218;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m2795 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Regex_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		_stringLiteral216 = il2cpp_codegen_string_literal_from_index(216);
		_stringLiteral217 = il2cpp_codegen_string_literal_from_index(217);
		_stringLiteral218 = il2cpp_codegen_string_literal_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1810(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t559_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m2916(NULL /*static, unused*/, L_2, _stringLiteral216, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m2916(NULL /*static, unused*/, L_5, _stringLiteral217, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m2916(NULL /*static, unused*/, L_8, _stringLiteral218, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
extern "C" void ArgumentCache_OnBeforeSerialize_m2796 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m2795(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m2797 (ArgumentCache_t504 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m2795(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void BaseInvokableCall__ctor_m2798 (BaseInvokableCall_t505 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t560_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral219;
extern Il2CppCodeGenString* _stringLiteral220;
extern "C" void BaseInvokableCall__ctor_m2799 (BaseInvokableCall_t505 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		_stringLiteral219 = il2cpp_codegen_string_literal_from_index(219);
		_stringLiteral220 = il2cpp_codegen_string_literal_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t560 * L_1 = (ArgumentNullException_t560 *)il2cpp_codegen_object_new (ArgumentNullException_t560_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2917(L_1, _stringLiteral219, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t560 * L_3 = (ArgumentNullException_t560 *)il2cpp_codegen_object_new (ArgumentNullException_t560_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2917(L_3, _stringLiteral220, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* Object_t269_il2cpp_TypeInfo_var;
extern "C" bool BaseInvokableCall_AllowInvoke_m2800 (Object_t * __this /* static, unused */, Delegate_t314 * ___delegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t269 * V_1 = {0};
	{
		Delegate_t314 * L_0 = ___delegate;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m2918(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		Object_t * L_3 = V_0;
		V_1 = ((Object_t269 *)IsInstClass(L_3, Object_t269_il2cpp_TypeInfo_var));
		Object_t269 * L_4 = V_1;
		bool L_5 = Object_ReferenceEquals_m2887(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		Object_t269 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_6, (Object_t269 *)NULL, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		return 1;
	}
}
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern const Il2CppType* UnityAction_t110_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t110_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m2801 (InvokableCall_t506 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t110_0_0_0_var = il2cpp_codegen_type_from_index(130);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		UnityAction_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m2799(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t110 * L_2 = (__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(UnityAction_t110_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t314 * L_6 = NetFxCoreExtensions_CreateDelegate_m2845(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t314 * L_7 = Delegate_Combine_m1685(NULL /*static, unused*/, L_2, ((UnityAction_t110 *)CastclassSealed(L_6, UnityAction_t110_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t110 *)CastclassSealed(L_7, UnityAction_t110_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
extern TypeInfo* UnityAction_t110_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m2802 (InvokableCall_t506 * __this, UnityAction_t110 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseInvokableCall__ctor_m2798(__this, /*hidden argument*/NULL);
		UnityAction_t110 * L_0 = (__this->___Delegate_0);
		UnityAction_t110 * L_1 = ___action;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t110 *)CastclassSealed(L_2, UnityAction_t110_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
extern "C" void InvokableCall_Invoke_m2803 (InvokableCall_t506 * __this, ObjectU5BU5D_t280* ___args, const MethodInfo* method)
{
	{
		UnityAction_t110 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m2800(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t110 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		UnityAction_Invoke_m1651(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m2804 (InvokableCall_t506 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t110 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m2918(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t110 * L_3 = (__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m2846(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Void UnityEngine.Events.PersistentCall::.ctor()
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArgumentCache_t504_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m2805 (PersistentCall_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t504 * L_0 = (ArgumentCache_t504 *)il2cpp_codegen_object_new (ArgumentCache_t504_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m2788(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t269 * PersistentCall_get_target_m2806 (PersistentCall_t508 * __this, const MethodInfo* method)
{
	{
		Object_t269 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m2807 (PersistentCall_t508 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m2808 (PersistentCall_t508 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t504 * PersistentCall_get_arguments_m2809 (PersistentCall_t508 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t504 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m2810 (PersistentCall_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t269 * L_0 = PersistentCall_get_target_m2806(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m2807(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1810(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
extern TypeInfo* CachedInvokableCall_1_t561_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t562_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t563_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t564_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t506_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m2919_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m2920_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m2921_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m2922_MethodInfo_var;
extern "C" BaseInvokableCall_t505 * PersistentCall_GetRuntimeCall_m2811 (PersistentCall_t508 * __this, UnityEventBase_t513 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		CachedInvokableCall_1_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		CachedInvokableCall_1_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(350);
		CachedInvokableCall_1_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		InvokableCall_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(352);
		CachedInvokableCall_1__ctor_m2919_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483952);
		CachedInvokableCall_1__ctor_m2920_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483953);
		CachedInvokableCall_1__ctor_m2921_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483954);
		CachedInvokableCall_1__ctor_m2922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483955);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t513 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t505 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t513 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m2824(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t505 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t513 * L_7 = ___theEvent;
		Object_t269 * L_8 = PersistentCall_get_target_m2806(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t505 * L_10 = (BaseInvokableCall_t505 *)VirtFuncInvoker2< BaseInvokableCall_t505 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t269 * L_11 = PersistentCall_get_target_m2806(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t504 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t505 * L_14 = PersistentCall_GetObjectCall_m2812(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t269 * L_15 = PersistentCall_get_target_m2806(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t504 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m2792(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t561 * L_19 = (CachedInvokableCall_1_t561 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t561_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m2919(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m2919_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t269 * L_20 = PersistentCall_get_target_m2806(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t504 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m2791(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t562 * L_24 = (CachedInvokableCall_1_t562 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t562_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m2920(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m2920_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t269 * L_25 = PersistentCall_get_target_m2806(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t504 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m2793(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t563 * L_29 = (CachedInvokableCall_1_t563 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t563_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m2921(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m2921_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t269 * L_30 = PersistentCall_get_target_m2806(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t504 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m2794(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t564 * L_34 = (CachedInvokableCall_1_t564 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t564_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m2922(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m2922_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t269 * L_35 = PersistentCall_get_target_m2806(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t506 * L_37 = (InvokableCall_t506 *)il2cpp_codegen_object_new (InvokableCall_t506_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m2801(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t505 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern const Il2CppType* Object_t269_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t566_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t532_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t505_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t505 * PersistentCall_GetObjectCall_m2812 (Object_t * __this /* static, unused */, Object_t269 * ___target, MethodInfo_t * ___method, ArgumentCache_t504 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t269_0_0_0_var = il2cpp_codegen_type_from_index(96);
		CachedInvokableCall_1_t566_0_0_0_var = il2cpp_codegen_type_from_index(353);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(354);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		TypeU5BU5D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		BaseInvokableCall_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t565 * V_3 = {0};
	Object_t269 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t269_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t504 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2790(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1810(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t504 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2790(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m2923, L_5, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t269_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t566_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t532* L_11 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0, sizeof(Type_t *))) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t532* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t532* L_15 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t269_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		TypeU5BU5D_t532* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t532* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t565 * L_21 = (ConstructorInfo_t565 *)VirtFuncInvoker1< ConstructorInfo_t565 *, TypeU5BU5D_t532* >::Invoke(67 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t504 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t269 * L_23 = ArgumentCache_get_unityObjectArgument_m2789(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t269 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_24, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t269 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m1452(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t269 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t565 * L_30 = V_3;
		ObjectU5BU5D_t280* L_31 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 3));
		Object_t269 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0, sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t280* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1, sizeof(Object_t *))) = (Object_t *)L_34;
		ObjectU5BU5D_t280* L_35 = L_33;
		Object_t269 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2, sizeof(Object_t *))) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m2924(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t505 *)IsInstClass(L_37, BaseInvokableCall_t505_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
extern TypeInfo* List_1_t510_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2925_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m2813 (PersistentCallGroup_t509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		List_1__ctor_m2925_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483956);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		List_1_t510 * L_0 = (List_1_t510 *)il2cpp_codegen_object_new (List_1_t510_il2cpp_TypeInfo_var);
		List_1__ctor_m2925(L_0, /*hidden argument*/List_1__ctor_m2925_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
extern TypeInfo* Enumerator_t567_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2926_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2927_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2928_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m2814 (PersistentCallGroup_t509 * __this, InvokableCallList_t511 * ___invokableList, UnityEventBase_t513 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		List_1_GetEnumerator_m2926_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483957);
		Enumerator_get_Current_m2927_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483958);
		Enumerator_MoveNext_m2928_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483959);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t508 * V_0 = {0};
	Enumerator_t567  V_1 = {0};
	BaseInvokableCall_t505 * V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t510 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t567  L_1 = List_1_GetEnumerator_m2926(L_0, /*hidden argument*/List_1_GetEnumerator_m2926_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t508 * L_2 = Enumerator_get_Current_m2927((&V_1), /*hidden argument*/Enumerator_get_Current_m2927_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t508 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m2810(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t508 * L_5 = V_0;
			UnityEventBase_t513 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t505 * L_7 = PersistentCall_GetRuntimeCall_m2811(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t505 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t511 * L_9 = ___invokableList;
			BaseInvokableCall_t505 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m2816(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m2928((&V_1), /*hidden argument*/Enumerator_MoveNext_m2928_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t567  L_12 = V_1;
		Enumerator_t567  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t567_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_005b:
	{
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2.h"
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* List_1_t512_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2929_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m2815 (InvokableCallList_t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		List_1__ctor_m2929_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483960);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t512 * L_0 = (List_1_t512 *)il2cpp_codegen_object_new (List_1_t512_il2cpp_TypeInfo_var);
		List_1__ctor_m2929(L_0, /*hidden argument*/List_1__ctor_m2929_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t512 * L_1 = (List_1_t512 *)il2cpp_codegen_object_new (List_1_t512_il2cpp_TypeInfo_var);
		List_1__ctor_m2929(L_1, /*hidden argument*/List_1__ctor_m2929_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t512 * L_2 = (List_1_t512 *)il2cpp_codegen_object_new (List_1_t512_il2cpp_TypeInfo_var);
		List_1__ctor_m2929(L_2, /*hidden argument*/List_1__ctor_m2929_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		__this->___m_NeedsUpdate_3 = 1;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
extern "C" void InvokableCallList_AddPersistentInvokableCall_m2816 (InvokableCallList_t511 * __this, BaseInvokableCall_t505 * ___call, const MethodInfo* method)
{
	{
		List_1_t512 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t505 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t505 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m2817 (InvokableCallList_t511 * __this, BaseInvokableCall_t505 * ___call, const MethodInfo* method)
{
	{
		List_1_t512 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t505 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t505 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
extern TypeInfo* List_1_t512_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t568_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2929_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m2930_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m2931_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m2818 (InvokableCallList_t511 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		Predicate_1_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(360);
		List_1__ctor_m2929_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483960);
		Predicate_1__ctor_m2930_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483961);
		List_1_RemoveAll_m2931_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483962);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t512 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t512 * L_0 = (List_1_t512 *)il2cpp_codegen_object_new (List_1_t512_il2cpp_TypeInfo_var);
		List_1__ctor_m2929(L_0, /*hidden argument*/List_1__ctor_m2929_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t512 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t505 * L_3 = (BaseInvokableCall_t505 *)VirtFuncInvoker1< BaseInvokableCall_t505 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t512 * L_7 = V_0;
		List_1_t512 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t505 * L_10 = (BaseInvokableCall_t505 *)VirtFuncInvoker1< BaseInvokableCall_t505 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t505 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t512 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t512 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t512 * L_16 = V_0;
		List_1_t512 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t568 * L_19 = (Predicate_1_t568 *)il2cpp_codegen_object_new (Predicate_1_t568_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m2930(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m2930_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m2931(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m2931_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m2819 (InvokableCallList_t511 * __this, const MethodInfo* method)
{
	{
		List_1_t512 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern const MethodInfo* List_1_AddRange_m2932_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m2820 (InvokableCallList_t511 * __this, ObjectU5BU5D_t280* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m2932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483963);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___m_NeedsUpdate_3);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		List_1_t512 * L_1 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_1);
		List_1_t512 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t512 * L_3 = (__this->___m_PersistentCalls_0);
		NullCheck(L_2);
		List_1_AddRange_m2932(L_2, L_3, /*hidden argument*/List_1_AddRange_m2932_MethodInfo_var);
		List_1_t512 * L_4 = (__this->___m_ExecutingCalls_2);
		List_1_t512 * L_5 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_4);
		List_1_AddRange_m2932(L_4, L_5, /*hidden argument*/List_1_AddRange_m2932_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 0;
	}

IL_003f:
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0046:
	{
		List_1_t512 * L_6 = (__this->___m_ExecutingCalls_2);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		BaseInvokableCall_t505 * L_8 = (BaseInvokableCall_t505 *)VirtFuncInvoker1< BaseInvokableCall_t505 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_6, L_7);
		ObjectU5BU5D_t280* L_9 = ___parameters;
		NullCheck(L_8);
		VirtActionInvoker1< ObjectU5BU5D_t280* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_11 = V_0;
		List_1_t512 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
extern TypeInfo* InvokableCallList_t511_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t509_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m2821 (UnityEventBase_t513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		PersistentCallGroup_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(362);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		InvokableCallList_t511 * L_0 = (InvokableCallList_t511 *)il2cpp_codegen_object_new (InvokableCallList_t511_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m2815(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t509 * L_1 = (PersistentCallGroup_t509 *)il2cpp_codegen_object_new (PersistentCallGroup_t509_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m2813(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m2822 (UnityEventBase_t513 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m2823 (UnityEventBase_t513 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m2826(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern const Il2CppType* Object_t269_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m2824 (UnityEventBase_t513 * __this, PersistentCall_t508 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t269_0_0_0_var = il2cpp_codegen_type_from_index(96);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t269_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t508 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t504 * L_2 = PersistentCall_get_arguments_m2809(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2790(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m1810(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t508 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t504 * L_6 = PersistentCall_get_arguments_m2809(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2790(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m2923, L_7, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t269_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t508 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m2807(L_11, /*hidden argument*/NULL);
		PersistentCall_t508 * L_13 = ___call;
		NullCheck(L_13);
		Object_t269 * L_14 = PersistentCall_get_target_m2806(L_13, /*hidden argument*/NULL);
		PersistentCall_t508 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m2808(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m2825(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
// System.Type
#include "mscorlib_System_Type.h"
extern const Il2CppType* Single_t281_0_0_0_var;
extern const Il2CppType* Int32_t282_0_0_0_var;
extern const Il2CppType* Boolean_t283_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t269_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t532_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m2825 (UnityEventBase_t513 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t281_0_0_0_var = il2cpp_codegen_type_from_index(61);
		Int32_t282_0_0_0_var = il2cpp_codegen_type_from_index(62);
		Boolean_t283_0_0_0_var = il2cpp_codegen_type_from_index(67);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(8);
		Object_t269_0_0_0_var = il2cpp_codegen_type_from_index(96);
		TypeU5BU5D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t532* G_B10_2 = {0};
	TypeU5BU5D_t532* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t532* G_B9_2 = {0};
	TypeU5BU5D_t532* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m2832(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t532* L_10 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Single_t281_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0, sizeof(Type_t *))) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m2832(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t532* L_15 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Int32_t282_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m2832(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t532* L_20 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Boolean_t283_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0, sizeof(Type_t *))) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m2832(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t532* L_25 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0, sizeof(Type_t *))) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m2832(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t532* L_30 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t269_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1, sizeof(Type_t *))) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m2832(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m2826 (UnityEventBase_t513 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t511 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m2819(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m2827 (UnityEventBase_t513 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t509 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t511 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m2814(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
extern "C" void UnityEventBase_AddCall_m2828 (UnityEventBase_t513 * __this, BaseInvokableCall_t505 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t511 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t505 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m2817(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" void UnityEventBase_RemoveListener_m2829 (UnityEventBase_t513 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t511 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m2818(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void UnityEventBase_Invoke_m2830 (UnityEventBase_t513 * __this, ObjectU5BU5D_t280* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m2827(__this, /*hidden argument*/NULL);
		InvokableCallList_t511 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t280* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m2820(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral221;
extern "C" String_t* UnityEventBase_ToString_m2831 (UnityEventBase_t513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral221 = il2cpp_codegen_string_literal_from_index(221);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m2933(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1746(NULL /*static, unused*/, L_0, _stringLiteral221, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m2832 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t532* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t557* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t558 * V_5 = {0};
	ParameterInfoU5BU5D_t557* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1452(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t532* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t549 *, TypeU5BU5D_t532*, ParameterModifierU5BU5D_t550* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t549 *)NULL, L_4, (ParameterModifierU5BU5D_t550*)(ParameterModifierU5BU5D_t550*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t557* L_8 = (ParameterInfoU5BU5D_t557*)VirtFuncInvoker0< ParameterInfoU5BU5D_t557* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t557* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t557* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_10, L_12, sizeof(ParameterInfo_t558 *)));
		TypeU5BU5D_t532* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15, sizeof(Type_t *)));
		ParameterInfo_t558 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t557* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1524 (UnityEvent_t74 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m2821(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
extern "C" void UnityEvent_AddListener_m1627 (UnityEvent_t74 * __this, UnityAction_t110 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t110 * L_0 = ___call;
		BaseInvokableCall_t505 * L_1 = UnityEvent_GetDelegate_m2835(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m2828(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* TypeU5BU5D_t532_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m2833 (UnityEvent_t74 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m2832(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
extern TypeInfo* InvokableCall_t506_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t505 * UnityEvent_GetDelegate_m2834 (UnityEvent_t74 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(352);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t506 * L_2 = (InvokableCall_t506 *)il2cpp_codegen_object_new (InvokableCall_t506_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m2801(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t506_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t505 * UnityEvent_GetDelegate_m2835 (Object_t * __this /* static, unused */, UnityAction_t110 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(352);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t110 * L_0 = ___action;
		InvokableCall_t506 * L_1 = (InvokableCall_t506 *)il2cpp_codegen_object_new (InvokableCall_t506_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m2802(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m1527 (UnityEvent_t74 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t280* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m2830(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DefaultValueAttribute__ctor_m2836 (DefaultValueAttribute_t514 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m2837 (DefaultValueAttribute_t514 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t514_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m2838 (DefaultValueAttribute_t514 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t514 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t514 *)IsInstClass(L_0, DefaultValueAttribute_t514_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t514 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t514 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m2837(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t514 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m2837(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m2839 (DefaultValueAttribute_t514 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m2934(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ExcludeFromDocsAttribute__ctor_m2840 (ExcludeFromDocsAttribute_t515 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void FormerlySerializedAsAttribute__ctor_m2841 (FormerlySerializedAsAttribute_t516 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRules_t517_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m2842 (TypeInferenceRuleAttribute_t518 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t517_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m2843(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void TypeInferenceRuleAttribute__ctor_m2843 (TypeInferenceRuleAttribute_t518 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m2844 (TypeInferenceRuleAttribute_t518 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensions.h"
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern "C" Delegate_t314 * NetFxCoreExtensions_CreateDelegate_m2845 (Object_t * __this /* static, unused */, MethodInfo_t * ___self, Type_t * ___delegateType, Object_t * ___target, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType;
		Object_t * L_1 = ___target;
		MethodInfo_t * L_2 = ___self;
		Delegate_t314 * L_3 = Delegate_CreateDelegate_m2935(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern "C" MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m2846 (Object_t * __this /* static, unused */, Delegate_t314 * ___self, const MethodInfo* method)
{
	{
		Delegate_t314 * L_0 = ___self;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m2936(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAdsDelegate__ctor_m2847 (UnityAdsDelegate_t426 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C" void UnityAdsDelegate_Invoke_m2848 (UnityAdsDelegate_t426 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAdsDelegate_Invoke_m2848((UnityAdsDelegate_t426 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAdsDelegate_t426(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAdsDelegate_BeginInvoke_m2849 (UnityAdsDelegate_t426 * __this, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_EndInvoke_m2850 (UnityAdsDelegate_t426 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction__ctor_m1626 (UnityAction_t110 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m1651 (UnityAction_t110 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m1651((UnityAction_t110 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t110(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAction_BeginInvoke_m2851 (UnityAction_t110 * __this, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m2852 (UnityAction_t110 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
