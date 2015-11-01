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

// <Module>
#include "UnityEngine_U3CModuleU3E.h"
// <Module>
#include "UnityEngine_U3CModuleU3EMethodDeclarations.h"
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequest.h"
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequestMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundle.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
// System.Void UnityEngine.AssetBundleCreateRequest::.ctor()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern "C" void AssetBundleCreateRequest__ctor_m2020 (AssetBundleCreateRequest_t360 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2340(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern "C" AssetBundle_t363 * AssetBundleCreateRequest_get_assetBundle_m2021 (AssetBundleCreateRequest_t360 * __this, const MethodInfo* method)
{
	typedef AssetBundle_t363 * (*AssetBundleCreateRequest_get_assetBundle_m2021_ftn) (AssetBundleCreateRequest_t360 *);
	static AssetBundleCreateRequest_get_assetBundle_m2021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_get_assetBundle_m2021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()
extern "C" void AssetBundleCreateRequest_DisableCompatibilityChecks_m2022 (AssetBundleCreateRequest_t360 * __this, const MethodInfo* method)
{
	typedef void (*AssetBundleCreateRequest_DisableCompatibilityChecks_m2022_ftn) (AssetBundleCreateRequest_t360 *);
	static AssetBundleCreateRequest_DisableCompatibilityChecks_m2022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_DisableCompatibilityChecks_m2022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequest.h"
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequestMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
// System.Void UnityEngine.AssetBundleRequest::.ctor()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern "C" void AssetBundleRequest__ctor_m2023 (AssetBundleRequest_t362 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2340(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
extern "C" Object_t269 * AssetBundleRequest_get_asset_m2024 (AssetBundleRequest_t362 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t363 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		Object_t269 * L_3 = AssetBundle_LoadAsset_m2026(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Object[] UnityEngine.AssetBundleRequest::get_allAssets()
extern "C" ObjectU5BU5D_t520* AssetBundleRequest_get_allAssets_m2025 (AssetBundleRequest_t362 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t363 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		ObjectU5BU5D_t520* L_3 = AssetBundle_LoadAssetWithSubAssets_Internal_m2028(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t536_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t339_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral114;
extern Il2CppCodeGenString* _stringLiteral115;
extern Il2CppCodeGenString* _stringLiteral116;
extern "C" Object_t269 * AssetBundle_LoadAsset_m2026 (AssetBundle_t363 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentException_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		_stringLiteral114 = il2cpp_codegen_string_literal_from_index(114);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NullReferenceException_t536 * L_1 = (NullReferenceException_t536 *)il2cpp_codegen_object_new (NullReferenceException_t536_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m2853(L_1, _stringLiteral114, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1761(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t339 * L_4 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_4, _stringLiteral115, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0027:
	{
		Type_t * L_5 = ___type;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		NullReferenceException_t536 * L_6 = (NullReferenceException_t536 *)il2cpp_codegen_object_new (NullReferenceException_t536_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m2853(L_6, _stringLiteral116, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0038:
	{
		String_t* L_7 = ___name;
		Type_t * L_8 = ___type;
		Object_t269 * L_9 = AssetBundle_LoadAsset_Internal_m2027(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t269 * AssetBundle_LoadAsset_Internal_m2027 (AssetBundle_t363 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef Object_t269 * (*AssetBundle_LoadAsset_Internal_m2027_ftn) (AssetBundle_t363 *, String_t*, Type_t *);
	static AssetBundle_LoadAsset_Internal_m2027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAsset_Internal_m2027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t520* AssetBundle_LoadAssetWithSubAssets_Internal_m2028 (AssetBundle_t363 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t520* (*AssetBundle_LoadAssetWithSubAssets_Internal_m2028_ftn) (AssetBundle_t363 *, String_t*, Type_t *);
	static AssetBundle_LoadAssetWithSubAssets_Internal_m2028_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAssetWithSubAssets_Internal_m2028_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptionsMethodDeclarations.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatformMethodDeclarations.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogTypeMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void WaitForSeconds__ctor_m1580 (WaitForSeconds_t302 * __this, float ___seconds, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2458(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds;
		__this->___m_Seconds_0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t302_marshal(const WaitForSeconds_t302& unmarshaled, WaitForSeconds_t302_marshaled& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.___m_Seconds_0;
}
extern "C" void WaitForSeconds_t302_marshal_back(const WaitForSeconds_t302_marshaled& marshaled, WaitForSeconds_t302& unmarshaled)
{
	unmarshaled.___m_Seconds_0 = marshaled.___m_Seconds_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t302_marshal_cleanup(WaitForSeconds_t302_marshaled& marshaled)
{
}
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void WaitForFixedUpdate__ctor_m2029 (WaitForFixedUpdate_t368 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2458(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void WaitForEndOfFrame__ctor_m1866 (WaitForEndOfFrame_t331 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2458(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void UnityEngine.Coroutine::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void Coroutine__ctor_m2030 (Coroutine_t148 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2458(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2031 (Coroutine_t148 * __this, const MethodInfo* method)
{
	typedef void (*Coroutine_ReleaseCoroutine_m2031_ftn) (Coroutine_t148 *);
	static Coroutine_ReleaseCoroutine_m2031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Coroutine_ReleaseCoroutine_m2031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Coroutine::Finalize()
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Coroutine_Finalize_m2032 (Coroutine_t148 * __this, const MethodInfo* method)
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
		Coroutine_ReleaseCoroutine_m2031(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t148_marshal(const Coroutine_t148& unmarshaled, Coroutine_t148_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void Coroutine_t148_marshal_back(const Coroutine_t148_marshaled& marshaled, Coroutine_t148& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t148_marshal_cleanup(Coroutine_t148_marshaled& marshaled)
{
}
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Void UnityEngine.ScriptableObject::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern "C" void ScriptableObject__ctor_m2033 (ScriptableObject_t369 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2414(__this, /*hidden argument*/NULL);
		ScriptableObject_Internal_CreateScriptableObject_m2034(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m2034 (Object_t * __this /* static, unused */, ScriptableObject_t369 * ___self, const MethodInfo* method)
{
	typedef void (*ScriptableObject_Internal_CreateScriptableObject_m2034_ftn) (ScriptableObject_t369 *);
	static ScriptableObject_Internal_CreateScriptableObject_m2034_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_Internal_CreateScriptableObject_m2034_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___self);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" ScriptableObject_t369 * ScriptableObject_CreateInstance_m2035 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method)
{
	typedef ScriptableObject_t369 * (*ScriptableObject_CreateInstance_m2035_ftn) (String_t*);
	static ScriptableObject_CreateInstance_m2035_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstance_m2035_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(___className);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" ScriptableObject_t369 * ScriptableObject_CreateInstance_m2036 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ScriptableObject_t369 * L_1 = ScriptableObject_CreateInstanceFromType_m2037(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t369 * ScriptableObject_CreateInstanceFromType_m2037 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ScriptableObject_t369 * (*ScriptableObject_CreateInstanceFromType_m2037_ftn) (Type_t *);
	static ScriptableObject_CreateInstanceFromType_m2037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstanceFromType_m2037_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t369_marshal(const ScriptableObject_t369& unmarshaled, ScriptableObject_t369_marshaled& marshaled)
{
}
extern "C" void ScriptableObject_t369_marshal_back(const ScriptableObject_t369_marshaled& marshaled, ScriptableObject_t369& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t369_marshal_cleanup(ScriptableObject_t369_marshaled& marshaled)
{
}
// UnityEngine.UnhandledExceptionHandler
#include "UnityEngine_UnityEngine_UnhandledExceptionHandler.h"
// UnityEngine.UnhandledExceptionHandler
#include "UnityEngine_UnityEngine_UnhandledExceptionHandlerMethodDeclarations.h"
// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgsMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Void UnityEngine.UnhandledExceptionHandler::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void UnhandledExceptionHandler__ctor_m2038 (UnhandledExceptionHandler_t370 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
extern TypeInfo* UnhandledExceptionEventHandler_t538_il2cpp_TypeInfo_var;
extern const MethodInfo* UnhandledExceptionHandler_HandleUnhandledException_m2040_MethodInfo_var;
extern "C" void UnhandledExceptionHandler_RegisterUECatcher_m2039 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnhandledExceptionEventHandler_t538_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(261);
		UnhandledExceptionHandler_HandleUnhandledException_m2040_MethodInfo_var = il2cpp_codegen_method_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	{
		AppDomain_t537 * L_0 = AppDomain_get_CurrentDomain_m2855(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)UnhandledExceptionHandler_HandleUnhandledException_m2040_MethodInfo_var };
		UnhandledExceptionEventHandler_t538 * L_2 = (UnhandledExceptionEventHandler_t538 *)il2cpp_codegen_object_new (UnhandledExceptionEventHandler_t538_il2cpp_TypeInfo_var);
		UnhandledExceptionEventHandler__ctor_m2856(L_2, NULL, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		AppDomain_add_UnhandledException_m2857(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::HandleUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
// System.Object
#include "mscorlib_System_Object.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgsMethodDeclarations.h"
// UnityEngine.UnhandledExceptionHandler
#include "UnityEngine_UnityEngine_UnhandledExceptionHandlerMethodDeclarations.h"
extern TypeInfo* Exception_t287_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral117;
extern "C" void UnhandledExceptionHandler_HandleUnhandledException_m2040 (Object_t * __this /* static, unused */, Object_t * ___sender, UnhandledExceptionEventArgs_t521 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		_stringLiteral117 = il2cpp_codegen_string_literal_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t287 * V_0 = {0};
	{
		UnhandledExceptionEventArgs_t521 * L_0 = ___args;
		NullCheck(L_0);
		Object_t * L_1 = UnhandledExceptionEventArgs_get_ExceptionObject_m2858(L_0, /*hidden argument*/NULL);
		V_0 = ((Exception_t287 *)IsInstClass(L_1, Exception_t287_il2cpp_TypeInfo_var));
		Exception_t287 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t287 * L_3 = V_0;
		UnhandledExceptionHandler_PrintException_m2041(NULL /*static, unused*/, _stringLiteral117, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2042(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
// System.String
#include "mscorlib_System_String.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral118;
extern "C" void UnhandledExceptionHandler_PrintException_m2041 (Object_t * __this /* static, unused */, String_t* ___title, Exception_t287 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___title;
		Exception_t287 * L_1 = ___e;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1631(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Debug_LogError_m1369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Exception_t287 * L_4 = ___e;
		NullCheck(L_4);
		Exception_t287 * L_5 = (Exception_t287 *)VirtFuncInvoker0< Exception_t287 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_4);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t287 * L_6 = ___e;
		NullCheck(L_6);
		Exception_t287 * L_7 = (Exception_t287 *)VirtFuncInvoker0< Exception_t287 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_6);
		UnhandledExceptionHandler_PrintException_m2041(NULL /*static, unused*/, _stringLiteral118, L_7, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()
extern "C" void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2042 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2042_ftn) ();
	static UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2042_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2042_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()");
	_il2cpp_icall_func();
}
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderb.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GameCenterPlatform__ctor_m2043 (GameCenterPlatform_t371 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
extern TypeInfo* AchievementDescriptionU5BU5D_t377_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern TypeInfo* UserProfileU5BU5D_t378_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t380_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2859_MethodInfo_var;
extern "C" void GameCenterPlatform__cctor_m2044 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		UserProfileU5BU5D_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		List_1_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		List_1__ctor_m2859_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483931);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t377*)SZArrayNew(AchievementDescriptionU5BU5D_t377_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_friends_10 = ((UserProfileU5BU5D_t378*)SZArrayNew(UserProfileU5BU5D_t378_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_users_11 = ((UserProfileU5BU5D_t378*)SZArrayNew(UserProfileU5BU5D_t378_il2cpp_TypeInfo_var, 0));
		List_1_t380 * L_0 = (List_1_t380 *)il2cpp_codegen_object_new (List_1_t380_il2cpp_TypeInfo_var);
		List_1__ctor_m2859(L_0, /*hidden argument*/List_1__ctor_m2859_MethodInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2045 (GameCenterPlatform_t371 * __this, Object_t * ___user, Action_1_t372 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t372 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1 = L_0;
		GameCenterPlatform_Internal_LoadFriends_m2053(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2046 (GameCenterPlatform_t371 * __this, Object_t * ___user, Action_1_t372 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t372 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0 = L_0;
		GameCenterPlatform_Internal_Authenticate_m2047(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C" void GameCenterPlatform_Internal_Authenticate_m2047 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_Authenticate_m2047_ftn) ();
	static GameCenterPlatform_Internal_Authenticate_m2047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticate_m2047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C" bool GameCenterPlatform_Internal_Authenticated_m2048 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Authenticated_m2048_ftn) ();
	static GameCenterPlatform_Internal_Authenticated_m2048_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticated_m2048_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C" String_t* GameCenterPlatform_Internal_UserName_m2049 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m2049_ftn) ();
	static GameCenterPlatform_Internal_UserName_m2049_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m2049_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C" String_t* GameCenterPlatform_Internal_UserID_m2050 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m2050_ftn) ();
	static GameCenterPlatform_Internal_UserID_m2050_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m2050_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C" bool GameCenterPlatform_Internal_Underage_m2051 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Underage_m2051_ftn) ();
	static GameCenterPlatform_Internal_Underage_m2051_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Underage_m2051_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C" Texture2D_t112 * GameCenterPlatform_Internal_UserImage_m2052 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Texture2D_t112 * (*GameCenterPlatform_Internal_UserImage_m2052_ftn) ();
	static GameCenterPlatform_Internal_UserImage_m2052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserImage_m2052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
extern "C" void GameCenterPlatform_Internal_LoadFriends_m2053 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadFriends_m2053_ftn) ();
	static GameCenterPlatform_Internal_LoadFriends_m2053_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadFriends_m2053_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
extern "C" void GameCenterPlatform_Internal_LoadAchievementDescriptions_m2054 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievementDescriptions_m2054_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievementDescriptions_m2054_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievementDescriptions_m2054_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
extern "C" void GameCenterPlatform_Internal_LoadAchievements_m2055 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievements_m2055_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievements_m2055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievements_m2055_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
// System.String
#include "mscorlib_System_String.h"
// System.Double
#include "mscorlib_System_Double.h"
extern "C" void GameCenterPlatform_Internal_ReportProgress_m2056 (Object_t * __this /* static, unused */, String_t* ___id, double ___progress, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportProgress_m2056_ftn) (String_t*, double);
	static GameCenterPlatform_Internal_ReportProgress_m2056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportProgress_m2056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)");
	_il2cpp_icall_func(___id, ___progress);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
// System.Int64
#include "mscorlib_System_Int64.h"
extern "C" void GameCenterPlatform_Internal_ReportScore_m2057 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportScore_m2057_ftn) (int64_t, String_t*);
	static GameCenterPlatform_Internal_ReportScore_m2057_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportScore_m2057_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)");
	_il2cpp_icall_func(___score, ___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
extern "C" void GameCenterPlatform_Internal_LoadScores_m2058 (Object_t * __this /* static, unused */, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadScores_m2058_ftn) (String_t*);
	static GameCenterPlatform_Internal_LoadScores_m2058_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadScores_m2058_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)");
	_il2cpp_icall_func(___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C" void GameCenterPlatform_Internal_ShowAchievementsUI_m2059 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m2059_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m2059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m2059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C" void GameCenterPlatform_Internal_ShowLeaderboardUI_m2060 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m2060_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m2060_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m2060_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void GameCenterPlatform_Internal_LoadUsers_m2061 (Object_t * __this /* static, unused */, StringU5BU5D_t484* ___userIds, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m2061_ftn) (StringU5BU5D_t484*);
	static GameCenterPlatform_Internal_LoadUsers_m2061_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m2061_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])");
	_il2cpp_icall_func(___userIds);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C" void GameCenterPlatform_Internal_ResetAllAchievements_m2062 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ResetAllAchievements_m2062_ftn) ();
	static GameCenterPlatform_Internal_ResetAllAchievements_m2062_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ResetAllAchievements_m2062_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2063 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2063_ftn) (bool);
	static GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2063_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2063_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ResetAllAchievements_m2064 (Object_t * __this /* static, unused */, Action_1_t372 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t372 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12 = L_0;
		GameCenterPlatform_Internal_ResetAllAchievements_m2062(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2065 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2063(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2066 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int32_t L_1 = ___timeScope;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2067(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2067 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2067_ftn) (String_t*, int32_t);
	static GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2067_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2067_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementDescriptionU5BU5D_t377_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearAchievementDescriptions_m2068 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		AchievementDescriptionU5BU5D_t377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t377* L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t377* L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_1);
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t377*)SZArrayNew(AchievementDescriptionU5BU5D_t377_il2cpp_TypeInfo_var, L_3));
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetAchievementDescription_m2069 (Object_t * __this /* static, unused */, GcAchievementDescriptionData_t469  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t377* L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_1 = ___number;
		AchievementDescription_t481 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m2688((&___data), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((AchievementDescription_t481 **)(AchievementDescription_t481 **)SZArrayLdElema(L_0, L_1, sizeof(AchievementDescription_t481 *))) = (AchievementDescription_t481 *)L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral119;
extern "C" void GameCenterPlatform_SetAchievementDescriptionImage_m2070 (Object_t * __this /* static, unused */, Texture2D_t112 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		_stringLiteral119 = il2cpp_codegen_string_literal_from_index(119);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t377* L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_0);
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		Debug_Log_m2371(NULL /*static, unused*/, _stringLiteral119, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t377* L_3 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_4 = ___number;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Texture2D_t112 * L_6 = ___texture;
		NullCheck((*(AchievementDescription_t481 **)(AchievementDescription_t481 **)SZArrayLdElema(L_3, L_5, sizeof(AchievementDescription_t481 *))));
		AchievementDescription_SetImage_m2726((*(AchievementDescription_t481 **)(AchievementDescription_t481 **)SZArrayLdElema(L_3, L_5, sizeof(AchievementDescription_t481 *))), L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2860_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral120;
extern "C" void GameCenterPlatform_TriggerAchievementDescriptionCallback_m2071 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2860_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483932);
		_stringLiteral120 = il2cpp_codegen_string_literal_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t373 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t377* L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t377* L_2 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		Debug_Log_m2371(NULL /*static, unused*/, _stringLiteral120, /*hidden argument*/NULL);
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t373 * L_3 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		AchievementDescriptionU5BU5D_t377* L_4 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_3);
		Action_1_Invoke_m2860(L_3, (IAchievementDescriptionU5BU5D_t539*)(IAchievementDescriptionU5BU5D_t539*)L_4, /*hidden argument*/Action_1_Invoke_m2860_MethodInfo_var);
	}

IL_0039:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2861_MethodInfo_var;
extern "C" void GameCenterPlatform_AuthenticateCallbackWrapper_m2072 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2861_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t372 * G_B3_0 = {0};
	Action_1_t372 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Action_1_t372 * G_B4_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m2082(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t372 * L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		int32_t L_2 = ___result;
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B3_0 = L_1;
			goto IL_0021;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0022:
	{
		NullCheck(G_B4_1);
		Action_1_Invoke_m2861(G_B4_1, G_B4_0, /*hidden argument*/Action_1_Invoke_m2861_MethodInfo_var);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearFriends_m2073 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2100(NULL /*static, unused*/, (&((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriends_m2074 (Object_t * __this /* static, unused */, GcUserProfileData_t468  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m2687((&___data), (&((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriendImage_m2075 (Object_t * __this /* static, unused */, Texture2D_t112 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Texture2D_t112 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2099(NULL /*static, unused*/, (&((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2861_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerFriendsCallbackWrapper_m2076 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2861_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t372 * G_B5_0 = {0};
	Action_1_t372 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Action_1_t372 * G_B6_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_t378* L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		LocalUser_t379 * L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		UserProfileU5BU5D_t378* L_2 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		NullCheck(L_1);
		LocalUser_SetFriends_m2699(L_1, (IUserProfileU5BU5D_t478*)(IUserProfileU5BU5D_t478*)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_3 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_4 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		int32_t L_5 = ___result;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			G_B5_0 = L_4;
			goto IL_0035;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0036:
	{
		NullCheck(G_B6_1);
		Action_1_Invoke_m2861(G_B6_1, G_B6_0, /*hidden argument*/Action_1_Invoke_m2861_MethodInfo_var);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementU5BU5D_t540_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2862_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral121;
extern "C" void GameCenterPlatform_AchievementCallbackWrapper_m2077 (Object_t * __this /* static, unused */, GcAchievementDataU5BU5D_t522* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		AchievementU5BU5D_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		Action_1_Invoke_m2862_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483934);
		_stringLiteral121 = il2cpp_codegen_string_literal_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	AchievementU5BU5D_t540* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t374 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		GcAchievementDataU5BU5D_t522* L_1 = ___result;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m2371(NULL /*static, unused*/, _stringLiteral121, /*hidden argument*/NULL);
	}

IL_001c:
	{
		GcAchievementDataU5BU5D_t522* L_2 = ___result;
		NullCheck(L_2);
		V_0 = ((AchievementU5BU5D_t540*)SZArrayNew(AchievementU5BU5D_t540_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_003f;
	}

IL_002c:
	{
		AchievementU5BU5D_t540* L_3 = V_0;
		int32_t L_4 = V_1;
		GcAchievementDataU5BU5D_t522* L_5 = ___result;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		Achievement_t479 * L_7 = GcAchievementData_ToAchievement_m2689(((GcAchievementData_t470 *)(GcAchievementData_t470 *)SZArrayLdElema(L_5, L_6, sizeof(GcAchievementData_t470 ))), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, L_7);
		*((Achievement_t479 **)(Achievement_t479 **)SZArrayLdElema(L_3, L_4, sizeof(Achievement_t479 *))) = (Achievement_t479 *)L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_1;
		GcAchievementDataU5BU5D_t522* L_10 = ___result;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t374 * L_11 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		AchievementU5BU5D_t540* L_12 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_m2862(L_11, (IAchievementU5BU5D_t541*)(IAchievementU5BU5D_t541*)L_12, /*hidden argument*/Action_1_Invoke_m2862_MethodInfo_var);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2861_MethodInfo_var;
extern "C" void GameCenterPlatform_ProgressCallbackWrapper_m2078 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2861_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m2861(L_1, L_2, /*hidden argument*/Action_1_Invoke_m2861_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2861_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreCallbackWrapper_m2079 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2861_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m2861(L_1, L_2, /*hidden argument*/Action_1_Invoke_m2861_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t542_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2863_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreLoaderCallbackWrapper_m2080 (Object_t * __this /* static, unused */, GcScoreDataU5BU5D_t523* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		ScoreU5BU5D_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		Action_1_Invoke_m2863_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483935);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t542* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t375 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t523* L_1 = ___result;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t542*)SZArrayNew(ScoreU5BU5D_t542_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		ScoreU5BU5D_t542* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t523* L_4 = ___result;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t482 * L_6 = GcScoreData_ToScore_m2690(((GcScoreData_t471 *)(GcScoreData_t471 *)SZArrayLdElema(L_4, L_5, sizeof(GcScoreData_t471 ))), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t482 **)(Score_t482 **)SZArrayLdElema(L_2, L_3, sizeof(Score_t482 *))) = (Score_t482 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t523* L_9 = ___result;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t375 * L_10 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		ScoreU5BU5D_t542* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m2863(L_10, (IScoreU5BU5D_t483*)(IScoreU5BU5D_t483*)L_11, /*hidden argument*/Action_1_Invoke_m2863_MethodInfo_var);
	}

IL_0041:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern TypeInfo* LocalUser_t379_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral122;
extern "C" Object_t * GameCenterPlatform_get_localUser_m2081 (GameCenterPlatform_t371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		LocalUser_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		LocalUser_t379 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		LocalUser_t379 * L_1 = (LocalUser_t379 *)il2cpp_codegen_object_new (LocalUser_t379_il2cpp_TypeInfo_var);
		LocalUser__ctor_m2698(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		bool L_2 = GameCenterPlatform_Internal_Authenticated_m2048(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		LocalUser_t379 * L_3 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1759(NULL /*static, unused*/, L_4, _stringLiteral122, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m2082(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		LocalUser_t379 * L_6 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		return L_6;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_PopulateLocalUser_m2082 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		LocalUser_t379 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_1 = GameCenterPlatform_Internal_Authenticated_m2048(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m2700(L_0, L_1, /*hidden argument*/NULL);
		LocalUser_t379 * L_2 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m2049(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m2706(L_2, L_3, /*hidden argument*/NULL);
		LocalUser_t379 * L_4 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m2050(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_m2707(L_4, L_5, /*hidden argument*/NULL);
		LocalUser_t379 * L_6 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_7 = GameCenterPlatform_Internal_Underage_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		LocalUser_SetUnderage_m2701(L_6, L_7, /*hidden argument*/NULL);
		LocalUser_t379 * L_8 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		Texture2D_t112 * L_9 = GameCenterPlatform_Internal_UserImage_m2052(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		UserProfile_SetImage_m2708(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1.h"
extern TypeInfo* AchievementDescriptionU5BU5D_t377_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2860_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievementDescriptions_m2083 (GameCenterPlatform_t371 * __this, Action_1_t373 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2860_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483932);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2091(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t373 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m2860(L_1, (IAchievementDescriptionU5BU5D_t539*)(IAchievementDescriptionU5BU5D_t539*)((AchievementDescriptionU5BU5D_t377*)SZArrayNew(AchievementDescriptionU5BU5D_t377_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m2860_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t373 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2 = L_2;
		GameCenterPlatform_Internal_LoadAchievementDescriptions_m2054(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2861_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportProgress_m2084 (GameCenterPlatform_t371 * __this, String_t* ___id, double ___progress, Action_1_t372 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2861_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2091(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t372 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m2861(L_1, 0, /*hidden argument*/Action_1_Invoke_m2861_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t372 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4 = L_2;
		String_t* L_3 = ___id;
		double L_4 = ___progress;
		GameCenterPlatform_Internal_ReportProgress_m2056(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2.h"
extern TypeInfo* AchievementU5BU5D_t540_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2862_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievements_m2085 (GameCenterPlatform_t371 * __this, Action_1_t374 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementU5BU5D_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2862_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483934);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2091(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t374 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m2862(L_1, (IAchievementU5BU5D_t541*)(IAchievementU5BU5D_t541*)((AchievementU5BU5D_t540*)SZArrayNew(AchievementU5BU5D_t540_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m2862_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t374 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3 = L_2;
		GameCenterPlatform_Internal_LoadAchievements_m2055(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2861_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportScore_m2086 (GameCenterPlatform_t371 * __this, int64_t ___score, String_t* ___board, Action_1_t372 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2861_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2091(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t372 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m2861(L_1, 0, /*hidden argument*/Action_1_Invoke_m2861_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t372 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5 = L_2;
		int64_t L_3 = ___score;
		String_t* L_4 = ___board;
		GameCenterPlatform_Internal_ReportScore_m2057(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3.h"
extern TypeInfo* ScoreU5BU5D_t542_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2863_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2087 (GameCenterPlatform_t371 * __this, String_t* ___category, Action_1_t375 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2863_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483935);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2091(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t375 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m2863(L_1, (IScoreU5BU5D_t483*)(IScoreU5BU5D_t483*)((ScoreU5BU5D_t542*)SZArrayNew(ScoreU5BU5D_t542_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m2863_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t375 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6 = L_2;
		String_t* L_3 = ___category;
		GameCenterPlatform_Internal_LoadScores_m2058(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t382_il2cpp_TypeInfo_var;
extern TypeInfo* GcLeaderboard_t381_il2cpp_TypeInfo_var;
extern TypeInfo* ILeaderboard_t525_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2861_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2088 (GameCenterPlatform_t371 * __this, Object_t * ___board, Action_1_t372 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Leaderboard_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		GcLeaderboard_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		ILeaderboard_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		Action_1_Invoke_m2861_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t382 * V_0 = {0};
	GcLeaderboard_t381 * V_1 = {0};
	Range_t485  V_2 = {0};
	Range_t485  V_3 = {0};
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2091(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t372 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m2861(L_1, 0, /*hidden argument*/Action_1_Invoke_m2861_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t372 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7 = L_2;
		Object_t * L_3 = ___board;
		V_0 = ((Leaderboard_t382 *)CastclassClass(L_3, Leaderboard_t382_il2cpp_TypeInfo_var));
		Leaderboard_t382 * L_4 = V_0;
		GcLeaderboard_t381 * L_5 = (GcLeaderboard_t381 *)il2cpp_codegen_object_new (GcLeaderboard_t381_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_m2104(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		List_1_t380 * L_6 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		GcLeaderboard_t381 * L_7 = V_1;
		NullCheck(L_6);
		VirtActionInvoker1< GcLeaderboard_t381 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(!0) */, L_6, L_7);
		Leaderboard_t382 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t484* L_9 = Leaderboard_GetUserFilter_m2747(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		GcLeaderboard_t381 * L_10 = V_1;
		Object_t * L_11 = ___board;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t525_il2cpp_TypeInfo_var, L_11);
		Object_t * L_13 = ___board;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t525_il2cpp_TypeInfo_var, L_13);
		Leaderboard_t382 * L_15 = V_0;
		NullCheck(L_15);
		StringU5BU5D_t484* L_16 = Leaderboard_GetUserFilter_m2747(L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		GcLeaderboard_Internal_LoadScoresWithUsers_m2112(L_10, L_12, L_14, L_16, /*hidden argument*/NULL);
		goto IL_0091;
	}

IL_005d:
	{
		GcLeaderboard_t381 * L_17 = V_1;
		Object_t * L_18 = ___board;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t525_il2cpp_TypeInfo_var, L_18);
		Object_t * L_20 = ___board;
		NullCheck(L_20);
		Range_t485  L_21 = (Range_t485 )InterfaceFuncInvoker0< Range_t485  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t525_il2cpp_TypeInfo_var, L_20);
		V_2 = L_21;
		int32_t L_22 = ((&V_2)->___from_0);
		Object_t * L_23 = ___board;
		NullCheck(L_23);
		Range_t485  L_24 = (Range_t485 )InterfaceFuncInvoker0< Range_t485  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t525_il2cpp_TypeInfo_var, L_23);
		V_3 = L_24;
		int32_t L_25 = ((&V_3)->___count_1);
		Object_t * L_26 = ___board;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_t525_il2cpp_TypeInfo_var, L_26);
		Object_t * L_28 = ___board;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t525_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_17);
		GcLeaderboard_Internal_LoadScores_m2111(L_17, L_19, L_22, L_25, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0091:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2861_MethodInfo_var;
extern "C" void GameCenterPlatform_LeaderboardCallbackWrapper_m2089 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2861_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m2861(L_1, L_2, /*hidden argument*/Action_1_Invoke_m2861_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t382_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t543_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2864_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2865_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2866_MethodInfo_var;
extern "C" bool GameCenterPlatform_GetLoading_m2090 (GameCenterPlatform_t371 * __this, Object_t * ___board, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Leaderboard_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		Enumerator_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		List_1_GetEnumerator_m2864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483936);
		Enumerator_get_Current_m2865_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483937);
		Enumerator_MoveNext_m2866_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483938);
		s_Il2CppMethodIntialized = true;
	}
	GcLeaderboard_t381 * V_0 = {0};
	Enumerator_t543  V_1 = {0};
	bool V_2 = false;
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2091(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		List_1_t380 * L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		NullCheck(L_1);
		Enumerator_t543  L_2 = List_1_GetEnumerator_m2864(L_1, /*hidden argument*/List_1_GetEnumerator_m2864_MethodInfo_var);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001d:
		{
			GcLeaderboard_t381 * L_3 = Enumerator_get_Current_m2865((&V_1), /*hidden argument*/Enumerator_get_Current_m2865_MethodInfo_var);
			V_0 = L_3;
			GcLeaderboard_t381 * L_4 = V_0;
			Object_t * L_5 = ___board;
			NullCheck(L_4);
			bool L_6 = GcLeaderboard_Contains_m2106(L_4, ((Leaderboard_t382 *)CastclassClass(L_5, Leaderboard_t382_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0042;
			}
		}

IL_0036:
		{
			GcLeaderboard_t381 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = GcLeaderboard_Loading_m2113(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}

IL_0042:
		{
			bool L_9 = Enumerator_MoveNext_m2866((&V_1), /*hidden argument*/Enumerator_MoveNext_m2866_MethodInfo_var);
			if (L_9)
			{
				goto IL_001d;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_t543  L_10 = V_1;
		Enumerator_t543  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t543_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_12);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_005f:
	{
		return 0;
	}

IL_0061:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern TypeInfo* ILocalUser_t524_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral123;
extern "C" bool GameCenterPlatform_VerifyAuthentication_m2091 (GameCenterPlatform_t371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		_stringLiteral123 = il2cpp_codegen_string_literal_from_index(123);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = GameCenterPlatform_get_localUser_m2081(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t524_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m2371(NULL /*static, unused*/, _stringLiteral123, /*hidden argument*/NULL);
		return 0;
	}

IL_001c:
	{
		return 1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowAchievementsUI_m2092 (GameCenterPlatform_t371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_m2059(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2093 (GameCenterPlatform_t371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m2060(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearUsers_m2094 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2100(NULL /*static, unused*/, (&((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUser_m2095 (Object_t * __this /* static, unused */, GcUserProfileData_t468  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m2687((&___data), (&((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUserImage_m2096 (Object_t * __this /* static, unused */, Texture2D_t112 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Texture2D_t112 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2099(NULL /*static, unused*/, (&((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2867_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerUsersCallbackWrapper_m2097 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2867_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483939);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t376 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t376 * L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		UserProfileU5BU5D_t378* L_2 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_users_11;
		NullCheck(L_1);
		Action_1_Invoke_m2867(L_1, (IUserProfileU5BU5D_t478*)(IUserProfileU5BU5D_t478*)L_2, /*hidden argument*/Action_1_Invoke_m2867_MethodInfo_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4.h"
extern TypeInfo* UserProfileU5BU5D_t378_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2867_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadUsers_m2098 (GameCenterPlatform_t371 * __this, StringU5BU5D_t484* ___userIds, Action_1_t376 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2867_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483939);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2091(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t376 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m2867(L_1, (IUserProfileU5BU5D_t478*)(IUserProfileU5BU5D_t478*)((UserProfileU5BU5D_t378*)SZArrayNew(UserProfileU5BU5D_t378_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m2867_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t376 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8 = L_2;
		StringU5BU5D_t484* L_3 = ___userIds;
		GameCenterPlatform_Internal_LoadUsers_m2061(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern TypeInfo* Texture2D_t112_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral124;
extern Il2CppCodeGenString* _stringLiteral125;
extern "C" void GameCenterPlatform_SafeSetUserImage_m2099 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t378** ___array, Texture2D_t112 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		_stringLiteral124 = il2cpp_codegen_string_literal_from_index(124);
		_stringLiteral125 = il2cpp_codegen_string_literal_from_index(125);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t378** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t378**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t378**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0011:
	{
		Debug_Log_m2371(NULL /*static, unused*/, _stringLiteral124, /*hidden argument*/NULL);
		Texture2D_t112 * L_3 = (Texture2D_t112 *)il2cpp_codegen_object_new (Texture2D_t112_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2150(L_3, ((int32_t)76), ((int32_t)76), /*hidden argument*/NULL);
		___texture = L_3;
	}

IL_0026:
	{
		UserProfileU5BU5D_t378** L_4 = ___array;
		NullCheck((*((UserProfileU5BU5D_t378**)L_4)));
		int32_t L_5 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t378**)L_4)))->max_length)))) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___number;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		UserProfileU5BU5D_t378** L_7 = ___array;
		int32_t L_8 = ___number;
		NullCheck((*((UserProfileU5BU5D_t378**)L_7)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t378**)L_7)), L_8);
		int32_t L_9 = L_8;
		Texture2D_t112 * L_10 = ___texture;
		NullCheck((*(UserProfile_t477 **)(UserProfile_t477 **)SZArrayLdElema((*((UserProfileU5BU5D_t378**)L_7)), L_9, sizeof(UserProfile_t477 *))));
		UserProfile_SetImage_m2708((*(UserProfile_t477 **)(UserProfile_t477 **)SZArrayLdElema((*((UserProfileU5BU5D_t378**)L_7)), L_9, sizeof(UserProfile_t477 *))), L_10, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0046:
	{
		Debug_Log_m2371(NULL /*static, unused*/, _stringLiteral125, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern TypeInfo* UserProfileU5BU5D_t378_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SafeClearArray_m2100 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t378** ___array, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t378** L_0 = ___array;
		if (!(*((UserProfileU5BU5D_t378**)L_0)))
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_t378** L_1 = ___array;
		NullCheck((*((UserProfileU5BU5D_t378**)L_1)));
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t378**)L_1)))->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}

IL_0011:
	{
		UserProfileU5BU5D_t378** L_3 = ___array;
		int32_t L_4 = ___size;
		*((Object_t **)(L_3)) = (Object_t *)((UserProfileU5BU5D_t378*)SZArrayNew(UserProfileU5BU5D_t378_il2cpp_TypeInfo_var, L_4));
	}

IL_0019:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern TypeInfo* Leaderboard_t382_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateLeaderboard_m2101 (GameCenterPlatform_t371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Leaderboard_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t382 * V_0 = {0};
	{
		Leaderboard_t382 * L_0 = (Leaderboard_t382 *)il2cpp_codegen_object_new (Leaderboard_t382_il2cpp_TypeInfo_var);
		Leaderboard__ctor_m2741(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Leaderboard_t382 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern TypeInfo* Achievement_t479_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateAchievement_m2102 (GameCenterPlatform_t371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t479_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		s_Il2CppMethodIntialized = true;
	}
	Achievement_t479 * V_0 = {0};
	{
		Achievement_t479 * L_0 = (Achievement_t479 *)il2cpp_codegen_object_new (Achievement_t479_il2cpp_TypeInfo_var);
		Achievement__ctor_m2715(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Achievement_t479 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern TypeInfo* GameCenterPlatform_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2861_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerResetAchievementCallback_m2103 (Object_t * __this /* static, unused */, bool ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		Action_1_Invoke_m2861_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_0 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t371_il2cpp_TypeInfo_var);
		Action_1_t372 * L_1 = ((GameCenterPlatform_t371_StaticFields*)GameCenterPlatform_t371_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		bool L_2 = ___result;
		NullCheck(L_1);
		Action_1_Invoke_m2861(L_1, L_2, /*hidden argument*/Action_1_Invoke_m2861_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GcLeaderboard__ctor_m2104 (GcLeaderboard_t381 * __this, Leaderboard_t382 * ___board, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Leaderboard_t382 * L_0 = ___board;
		__this->___m_GenericLeaderboard_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
extern "C" void GcLeaderboard_Finalize_m2105 (GcLeaderboard_t381 * __this, const MethodInfo* method)
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
		GcLeaderboard_Dispose_m2114(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" bool GcLeaderboard_Contains_m2106 (GcLeaderboard_t381 * __this, Leaderboard_t382 * ___board, const MethodInfo* method)
{
	{
		Leaderboard_t382 * L_0 = (__this->___m_GenericLeaderboard_1);
		Leaderboard_t382 * L_1 = ___board;
		return ((((Object_t*)(Leaderboard_t382 *)L_0) == ((Object_t*)(Leaderboard_t382 *)L_1))? 1 : 0);
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
extern TypeInfo* ScoreU5BU5D_t542_il2cpp_TypeInfo_var;
extern "C" void GcLeaderboard_SetScores_m2107 (GcLeaderboard_t381 * __this, GcScoreDataU5BU5D_t523* ___scoreDatas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t542* V_0 = {0};
	int32_t V_1 = 0;
	{
		Leaderboard_t382 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		GcScoreDataU5BU5D_t523* L_1 = ___scoreDatas;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t542*)SZArrayNew(ScoreU5BU5D_t542_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002e;
	}

IL_001b:
	{
		ScoreU5BU5D_t542* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t523* L_4 = ___scoreDatas;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t482 * L_6 = GcScoreData_ToScore_m2690(((GcScoreData_t471 *)(GcScoreData_t471 *)SZArrayLdElema(L_4, L_5, sizeof(GcScoreData_t471 ))), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t482 **)(Score_t482 **)SZArrayLdElema(L_2, L_3, sizeof(Score_t482 *))) = (Score_t482 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t523* L_9 = ___scoreDatas;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_t382 * L_10 = (__this->___m_GenericLeaderboard_1);
		ScoreU5BU5D_t542* L_11 = V_0;
		NullCheck(L_10);
		Leaderboard_SetScores_m2745(L_10, (IScoreU5BU5D_t483*)(IScoreU5BU5D_t483*)L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
extern "C" void GcLeaderboard_SetLocalScore_m2108 (GcLeaderboard_t381 * __this, GcScoreData_t471  ___scoreData, const MethodInfo* method)
{
	{
		Leaderboard_t382 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Leaderboard_t382 * L_1 = (__this->___m_GenericLeaderboard_1);
		Score_t482 * L_2 = GcScoreData_ToScore_m2690((&___scoreData), /*hidden argument*/NULL);
		NullCheck(L_1);
		Leaderboard_SetLocalUserScore_m2743(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern "C" void GcLeaderboard_SetMaxRange_m2109 (GcLeaderboard_t381 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		Leaderboard_t382 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t382 * L_1 = (__this->___m_GenericLeaderboard_1);
		uint32_t L_2 = ___maxRange;
		NullCheck(L_1);
		Leaderboard_SetMaxRange_m2744(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GcLeaderboard_SetTitle_m2110 (GcLeaderboard_t381 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		Leaderboard_t382 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t382 * L_1 = (__this->___m_GenericLeaderboard_1);
		String_t* L_2 = ___title;
		NullCheck(L_1);
		Leaderboard_SetTitle_m2746(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GcLeaderboard_Internal_LoadScores_m2111 (GcLeaderboard_t381 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScores_m2111_ftn) (GcLeaderboard_t381 *, String_t*, int32_t, int32_t, int32_t, int32_t);
	static GcLeaderboard_Internal_LoadScores_m2111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScores_m2111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___category, ___from, ___count, ___playerScope, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void GcLeaderboard_Internal_LoadScoresWithUsers_m2112 (GcLeaderboard_t381 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t484* ___userIDs, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScoresWithUsers_m2112_ftn) (GcLeaderboard_t381 *, String_t*, int32_t, StringU5BU5D_t484*);
	static GcLeaderboard_Internal_LoadScoresWithUsers_m2112_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScoresWithUsers_m2112_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])");
	_il2cpp_icall_func(__this, ___category, ___timeScope, ___userIDs);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C" bool GcLeaderboard_Loading_m2113 (GcLeaderboard_t381 * __this, const MethodInfo* method)
{
	typedef bool (*GcLeaderboard_Loading_m2113_ftn) (GcLeaderboard_t381 *);
	static GcLeaderboard_Loading_m2113_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Loading_m2113_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C" void GcLeaderboard_Dispose_m2114 (GcLeaderboard_t381 * __this, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Dispose_m2114_ftn) (GcLeaderboard_t381 *);
	static GcLeaderboard_Dispose_m2114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Dispose_m2114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// System.Void UnityEngine.Mesh::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
extern "C" void Mesh__ctor_m1667 (Mesh_t113 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2414(__this, /*hidden argument*/NULL);
		Mesh_Internal_Create_m2115(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
extern "C" void Mesh_Internal_Create_m2115 (Object_t * __this /* static, unused */, Mesh_t113 * ___mono, const MethodInfo* method)
{
	typedef void (*Mesh_Internal_Create_m2115_ftn) (Mesh_t113 *);
	static Mesh_Internal_Create_m2115_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_Internal_Create_m2115_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)");
	_il2cpp_icall_func(___mono);
}
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Mesh_Clear_m2116 (Mesh_t113 * __this, bool ___keepVertexLayout, const MethodInfo* method)
{
	typedef void (*Mesh_Clear_m2116_ftn) (Mesh_t113 *, bool);
	static Mesh_Clear_m2116_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_Clear_m2116_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::Clear(System.Boolean)");
	_il2cpp_icall_func(__this, ___keepVertexLayout);
}
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m2002 (Mesh_t113 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		Mesh_Clear_m2116(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t129* Mesh_get_vertices_m1989 (Mesh_t113 * __this, const MethodInfo* method)
{
	typedef Vector3U5BU5D_t129* (*Mesh_get_vertices_m1989_ftn) (Mesh_t113 *);
	static Mesh_get_vertices_m1989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_vertices_m1989_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_vertices()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
extern "C" void Mesh_SetVertices_m2003 (Mesh_t113 * __this, List_1_t227 * ___inVertices, const MethodInfo* method)
{
	{
		List_1_t227 * L_0 = ___inVertices;
		Mesh_SetVerticesInternal_m2117(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void Mesh_SetVerticesInternal_m2117 (Mesh_t113 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*Mesh_SetVerticesInternal_m2117_ftn) (Mesh_t113 *, Object_t *);
	static Mesh_SetVerticesInternal_m2117_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetVerticesInternal_m2117_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t129* Mesh_get_normals_m1996 (Mesh_t113 * __this, const MethodInfo* method)
{
	typedef Vector3U5BU5D_t129* (*Mesh_get_normals_m1996_ftn) (Mesh_t113 *);
	static Mesh_get_normals_m1996_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_normals_m1996_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_normals()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetNormals_m2006 (Mesh_t113 * __this, List_1_t227 * ___inNormals, const MethodInfo* method)
{
	{
		List_1_t227 * L_0 = ___inNormals;
		Mesh_SetNormalsInternal_m2118(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C" void Mesh_SetNormalsInternal_m2118 (Mesh_t113 * __this, Object_t * ___normals, const MethodInfo* method)
{
	typedef void (*Mesh_SetNormalsInternal_m2118_ftn) (Mesh_t113 *, Object_t *);
	static Mesh_SetNormalsInternal_m2118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetNormalsInternal_m2118_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetNormalsInternal(System.Object)");
	_il2cpp_icall_func(__this, ___normals);
}
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C" Vector4U5BU5D_t356* Mesh_get_tangents_m1997 (Mesh_t113 * __this, const MethodInfo* method)
{
	typedef Vector4U5BU5D_t356* (*Mesh_get_tangents_m1997_ftn) (Mesh_t113 *);
	static Mesh_get_tangents_m1997_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_tangents_m1997_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_tangents()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
extern "C" void Mesh_SetTangents_m2007 (Mesh_t113 * __this, List_1_t230 * ___inTangents, const MethodInfo* method)
{
	{
		List_1_t230 * L_0 = ___inTangents;
		Mesh_SetTangentsInternal_m2119(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C" void Mesh_SetTangentsInternal_m2119 (Mesh_t113 * __this, Object_t * ___tangents, const MethodInfo* method)
{
	typedef void (*Mesh_SetTangentsInternal_m2119_ftn) (Mesh_t113 *, Object_t *);
	static Mesh_SetTangentsInternal_m2119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetTangentsInternal_m2119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetTangentsInternal(System.Object)");
	_il2cpp_icall_func(__this, ___tangents);
}
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t128* Mesh_get_uv_m1993 (Mesh_t113 * __this, const MethodInfo* method)
{
	typedef Vector2U5BU5D_t128* (*Mesh_get_uv_m1993_ftn) (Mesh_t113 *);
	static Mesh_get_uv_m1993_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_uv_m1993_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_uv()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C" Vector2U5BU5D_t128* Mesh_get_uv2_m1995 (Mesh_t113 * __this, const MethodInfo* method)
{
	typedef Vector2U5BU5D_t128* (*Mesh_get_uv2_m1995_ftn) (Mesh_t113 *);
	static Mesh_get_uv2_m1995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_uv2_m1995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_uv2()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
extern "C" void Mesh_SetUVs_m2005 (Mesh_t113 * __this, int32_t ___channel, List_1_t229 * ___uvs, const MethodInfo* method)
{
	{
		List_1_t229 * L_0 = ___uvs;
		int32_t L_1 = ___channel;
		Mesh_SetUVInternal_m2120(__this, L_0, L_1, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)
extern "C" void Mesh_SetUVInternal_m2120 (Mesh_t113 * __this, Object_t * ___uvs, int32_t ___channel, int32_t ___dim, const MethodInfo* method)
{
	typedef void (*Mesh_SetUVInternal_m2120_ftn) (Mesh_t113 *, Object_t *, int32_t, int32_t);
	static Mesh_SetUVInternal_m2120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetUVInternal_m2120_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___uvs, ___channel, ___dim);
}
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C" Color32U5BU5D_t355* Mesh_get_colors32_m1991 (Mesh_t113 * __this, const MethodInfo* method)
{
	typedef Color32U5BU5D_t355* (*Mesh_get_colors32_m1991_ftn) (Mesh_t113 *);
	static Mesh_get_colors32_m1991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_colors32_m1991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_colors32()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
extern "C" void Mesh_SetColors_m2004 (Mesh_t113 * __this, List_1_t228 * ___inColors, const MethodInfo* method)
{
	{
		List_1_t228 * L_0 = ___inColors;
		Mesh_SetColors32Internal_m2121(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C" void Mesh_SetColors32Internal_m2121 (Mesh_t113 * __this, Object_t * ___colors, const MethodInfo* method)
{
	typedef void (*Mesh_SetColors32Internal_m2121_ftn) (Mesh_t113 *, Object_t *);
	static Mesh_SetColors32Internal_m2121_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetColors32Internal_m2121_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetColors32Internal(System.Object)");
	_il2cpp_icall_func(__this, ___colors);
}
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m2009 (Mesh_t113 * __this, const MethodInfo* method)
{
	typedef void (*Mesh_RecalculateBounds_m2009_ftn) (Mesh_t113 *);
	static Mesh_RecalculateBounds_m2009_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_RecalculateBounds_m2009_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::RecalculateBounds()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
extern "C" void Mesh_SetTriangles_m2008 (Mesh_t113 * __this, List_1_t231 * ___inTriangles, int32_t ___submesh, const MethodInfo* method)
{
	{
		List_1_t231 * L_0 = ___inTriangles;
		int32_t L_1 = ___submesh;
		Mesh_SetTrianglesInternal_m2122(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C" void Mesh_SetTrianglesInternal_m2122 (Mesh_t113 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method)
{
	typedef void (*Mesh_SetTrianglesInternal_m2122_ftn) (Mesh_t113 *, Object_t *, int32_t);
	static Mesh_SetTrianglesInternal_m2122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetTrianglesInternal_m2122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)");
	_il2cpp_icall_func(__this, ___triangles, ___submesh);
}
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C" Int32U5BU5D_t357* Mesh_GetIndices_m1999 (Mesh_t113 * __this, int32_t ___submesh, const MethodInfo* method)
{
	typedef Int32U5BU5D_t357* (*Mesh_GetIndices_m1999_ftn) (Mesh_t113 *, int32_t);
	static Mesh_GetIndices_m1999_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_GetIndices_m1999_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::GetIndices(System.Int32)");
	return _il2cpp_icall_func(__this, ___submesh);
}
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// System.Single UnityEngine.BoneWeight::get_weight0()
extern "C" float BoneWeight_get_weight0_m2123 (BoneWeight_t383 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight0_0);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void BoneWeight_set_weight0_m2124 (BoneWeight_t383 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight0_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight1()
extern "C" float BoneWeight_get_weight1_m2125 (BoneWeight_t383 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight1_1);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight1(System.Single)
extern "C" void BoneWeight_set_weight1_m2126 (BoneWeight_t383 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight1_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight2()
extern "C" float BoneWeight_get_weight2_m2127 (BoneWeight_t383 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight2_2);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight2(System.Single)
extern "C" void BoneWeight_set_weight2_m2128 (BoneWeight_t383 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight2_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight3()
extern "C" float BoneWeight_get_weight3_m2129 (BoneWeight_t383 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight3_3);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight3(System.Single)
extern "C" void BoneWeight_set_weight3_m2130 (BoneWeight_t383 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight3_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
extern "C" int32_t BoneWeight_get_boneIndex0_m2131 (BoneWeight_t383 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex0_4);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void BoneWeight_set_boneIndex0_m2132 (BoneWeight_t383 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex0_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
extern "C" int32_t BoneWeight_get_boneIndex1_m2133 (BoneWeight_t383 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex1_5);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex1(System.Int32)
extern "C" void BoneWeight_set_boneIndex1_m2134 (BoneWeight_t383 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex1_5 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
extern "C" int32_t BoneWeight_get_boneIndex2_m2135 (BoneWeight_t383 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex2_6);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex2(System.Int32)
extern "C" void BoneWeight_set_boneIndex2_m2136 (BoneWeight_t383 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex2_6 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
extern "C" int32_t BoneWeight_get_boneIndex3_m2137 (BoneWeight_t383 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex3_7);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex3(System.Int32)
extern "C" void BoneWeight_set_boneIndex3_m2138 (BoneWeight_t383 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex3_7 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::GetHashCode()
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t BoneWeight_GetHashCode_m2139 (BoneWeight_t383 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2131(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m2868((&V_0), /*hidden argument*/NULL);
		int32_t L_2 = BoneWeight_get_boneIndex1_m2133(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_m2868((&V_1), /*hidden argument*/NULL);
		int32_t L_4 = BoneWeight_get_boneIndex2_m2135(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Int32_GetHashCode_m2868((&V_2), /*hidden argument*/NULL);
		int32_t L_6 = BoneWeight_get_boneIndex3_m2137(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Int32_GetHashCode_m2868((&V_3), /*hidden argument*/NULL);
		float L_8 = BoneWeight_get_weight0_m2123(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = Single_GetHashCode_m2869((&V_4), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight1_m2125(__this, /*hidden argument*/NULL);
		V_5 = L_10;
		int32_t L_11 = Single_GetHashCode_m2869((&V_5), /*hidden argument*/NULL);
		float L_12 = BoneWeight_get_weight2_m2127(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		int32_t L_13 = Single_GetHashCode_m2869((&V_6), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight3_m2129(__this, /*hidden argument*/NULL);
		V_7 = L_14;
		int32_t L_15 = Single_GetHashCode_m2869((&V_7), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
// System.Boolean UnityEngine.BoneWeight::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern TypeInfo* BoneWeight_t383_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t232_il2cpp_TypeInfo_var;
extern "C" bool BoneWeight_Equals_m2140 (BoneWeight_t383 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoneWeight_t383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		Vector4_t232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	BoneWeight_t383  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector4_t232  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, BoneWeight_t383_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(BoneWeight_t383 *)((BoneWeight_t383 *)UnBox (L_1, BoneWeight_t383_il2cpp_TypeInfo_var))));
		int32_t L_2 = BoneWeight_get_boneIndex0_m2131(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = BoneWeight_get_boneIndex0_m2131((&V_0), /*hidden argument*/NULL);
		bool L_4 = Int32_Equals_m2870((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = BoneWeight_get_boneIndex1_m2133(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = BoneWeight_get_boneIndex1_m2133((&V_0), /*hidden argument*/NULL);
		bool L_7 = Int32_Equals_m2870((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = BoneWeight_get_boneIndex2_m2135(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = BoneWeight_get_boneIndex2_m2135((&V_0), /*hidden argument*/NULL);
		bool L_10 = Int32_Equals_m2870((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = BoneWeight_get_boneIndex3_m2137(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		int32_t L_12 = BoneWeight_get_boneIndex3_m2137((&V_0), /*hidden argument*/NULL);
		bool L_13 = Int32_Equals_m2870((&V_4), L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = BoneWeight_get_weight0_m2123(__this, /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight1_m2125(__this, /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight2_m2127(__this, /*hidden argument*/NULL);
		float L_17 = BoneWeight_get_weight3_m2129(__this, /*hidden argument*/NULL);
		Vector4__ctor_m1671((&V_5), L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		float L_18 = BoneWeight_get_weight0_m2123((&V_0), /*hidden argument*/NULL);
		float L_19 = BoneWeight_get_weight1_m2125((&V_0), /*hidden argument*/NULL);
		float L_20 = BoneWeight_get_weight2_m2127((&V_0), /*hidden argument*/NULL);
		float L_21 = BoneWeight_get_weight3_m2129((&V_0), /*hidden argument*/NULL);
		Vector4_t232  L_22 = {0};
		Vector4__ctor_m1671(&L_22, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		Vector4_t232  L_23 = L_22;
		Object_t * L_24 = Box(Vector4_t232_il2cpp_TypeInfo_var, &L_23);
		bool L_25 = Vector4_Equals_m2268((&V_5), L_24, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B8_0 = 0;
	}

IL_00cc:
	{
		return G_B8_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Equality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
extern "C" bool BoneWeight_op_Equality_m2141 (Object_t * __this /* static, unused */, BoneWeight_t383  ___lhs, BoneWeight_t383  ___rhs, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2131((&___lhs), /*hidden argument*/NULL);
		int32_t L_1 = BoneWeight_get_boneIndex0_m2131((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = BoneWeight_get_boneIndex1_m2133((&___lhs), /*hidden argument*/NULL);
		int32_t L_3 = BoneWeight_get_boneIndex1_m2133((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = BoneWeight_get_boneIndex2_m2135((&___lhs), /*hidden argument*/NULL);
		int32_t L_5 = BoneWeight_get_boneIndex2_m2135((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = BoneWeight_get_boneIndex3_m2137((&___lhs), /*hidden argument*/NULL);
		int32_t L_7 = BoneWeight_get_boneIndex3_m2137((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = BoneWeight_get_weight0_m2123((&___lhs), /*hidden argument*/NULL);
		float L_9 = BoneWeight_get_weight1_m2125((&___lhs), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight2_m2127((&___lhs), /*hidden argument*/NULL);
		float L_11 = BoneWeight_get_weight3_m2129((&___lhs), /*hidden argument*/NULL);
		Vector4_t232  L_12 = {0};
		Vector4__ctor_m1671(&L_12, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = BoneWeight_get_weight0_m2123((&___rhs), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight1_m2125((&___rhs), /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight2_m2127((&___rhs), /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight3_m2129((&___rhs), /*hidden argument*/NULL);
		Vector4_t232  L_17 = {0};
		Vector4__ctor_m1671(&L_17, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		bool L_18 = Vector4_op_Equality_m2273(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		return G_B6_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Inequality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern "C" bool BoneWeight_op_Inequality_m2142 (Object_t * __this /* static, unused */, BoneWeight_t383  ___lhs, BoneWeight_t383  ___rhs, const MethodInfo* method)
{
	{
		BoneWeight_t383  L_0 = ___lhs;
		BoneWeight_t383  L_1 = ___rhs;
		bool L_2 = BoneWeight_op_Equality_m2141(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m1502 (Renderer_t384 * __this, const MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingLayerID_m1502_ftn) (Renderer_t384 *);
	static Renderer_get_sortingLayerID_m1502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingLayerID_m1502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m1503 (Renderer_t384 * __this, const MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingOrder_m1503_ftn) (Renderer_t384 *);
	static Renderer_get_sortingOrder_m1503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingOrder_m1503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_Screen.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// System.Int32 UnityEngine.Screen::get_width()
extern "C" int32_t Screen_get_width_m1691 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_width_m1691_ftn) ();
	static Screen_get_width_m1691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_width_m1691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Screen::get_height()
extern "C" int32_t Screen_get_height_m1692 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_height_m1692_ftn) ();
	static Screen_get_height_m1692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_height_m1692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Screen::get_dpi()
extern "C" float Screen_get_dpi_m1952 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Screen_get_dpi_m1952_ftn) ();
	static Screen_get_dpi_m1952_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_dpi_m1952_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
	return _il2cpp_icall_func();
}
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElementMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
extern "C" GUIElement_t386 * GUILayer_HitTest_m2143 (GUILayer_t387 * __this, Vector3_t42  ___screenPosition, const MethodInfo* method)
{
	{
		GUIElement_t386 * L_0 = GUILayer_INTERNAL_CALL_HitTest_m2144(NULL /*static, unused*/, __this, (&___screenPosition), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
extern "C" GUIElement_t386 * GUILayer_INTERNAL_CALL_HitTest_m2144 (Object_t * __this /* static, unused */, GUILayer_t387 * ___self, Vector3_t42 * ___screenPosition, const MethodInfo* method)
{
	typedef GUIElement_t386 * (*GUILayer_INTERNAL_CALL_HitTest_m2144_ftn) (GUILayer_t387 *, Vector3_t42 *);
	static GUILayer_INTERNAL_CALL_HitTest_m2144_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayer_INTERNAL_CALL_HitTest_m2144_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___screenPosition);
}
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// System.Void UnityEngine.Texture::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Texture__ctor_m2145 (Texture_t163 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2414(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
extern "C" int32_t Texture_Internal_GetWidth_m2146 (Object_t * __this /* static, unused */, Texture_t163 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetWidth_m2146_ftn) (Texture_t163 *);
	static Texture_Internal_GetWidth_m2146_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetWidth_m2146_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m2147 (Object_t * __this /* static, unused */, Texture_t163 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetHeight_m2147_ftn) (Texture_t163 *);
	static Texture_Internal_GetHeight_m2147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetHeight_m2147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::get_width()
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern "C" int32_t Texture_get_width_m2148 (Texture_t163 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetWidth_m2146(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.Texture::get_height()
extern "C" int32_t Texture_get_height_m2149 (Texture_t163 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetHeight_m2147(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void Texture2D__ctor_m2150 (Texture2D_t112 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture__ctor_m2145(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		Texture2D_Internal_Create_m2151(NULL /*static, unused*/, __this, L_0, L_1, 5, 1, 0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Texture2D_Internal_Create_m2151 (Object_t * __this /* static, unused */, Texture2D_t112 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method)
{
	typedef void (*Texture2D_Internal_Create_m2151_ftn) (Texture2D_t112 *, int32_t, int32_t, int32_t, bool, bool, IntPtr_t);
	static Texture2D_Internal_Create_m2151_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Internal_Create_m2151_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)");
	_il2cpp_icall_func(___mono, ___width, ___height, ___format, ___mipmap, ___linear, ___nativeTex);
}
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" Texture2D_t112 * Texture2D_get_whiteTexture_m1659 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Texture2D_t112 * (*Texture2D_get_whiteTexture_m1659_ftn) ();
	static Texture2D_get_whiteTexture_m1659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_get_whiteTexture_m1659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" Color_t68  Texture2D_GetPixelBilinear_m1745 (Texture2D_t112 * __this, float ___u, float ___v, const MethodInfo* method)
{
	typedef Color_t68  (*Texture2D_GetPixelBilinear_m1745_ftn) (Texture2D_t112 *, float, float);
	static Texture2D_GetPixelBilinear_m1745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixelBilinear_m1745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, ___u, ___v);
}
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
extern "C" int32_t RenderTexture_Internal_GetWidth_m2152 (Object_t * __this /* static, unused */, RenderTexture_t388 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetWidth_m2152_ftn) (RenderTexture_t388 *);
	static RenderTexture_Internal_GetWidth_m2152_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetWidth_m2152_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetHeight_m2153 (Object_t * __this /* static, unused */, RenderTexture_t388 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetHeight_m2153_ftn) (RenderTexture_t388 *);
	static RenderTexture_Internal_GetHeight_m2153_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetHeight_m2153_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.RenderTexture::get_width()
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern "C" int32_t RenderTexture_get_width_m2154 (RenderTexture_t388 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetWidth_m2152(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C" int32_t RenderTexture_get_height_m2155 (RenderTexture_t388 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetHeight_m2153(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbe.h"
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbeMethodDeclarations.h"
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEvent.h"
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEventMethodDeclarations.h"
// UnityEngine.CullingGroup/StateChanged
#include "UnityEngine_UnityEngine_CullingGroup_StateChanged.h"
// UnityEngine.CullingGroup/StateChanged
#include "UnityEngine_UnityEngine_CullingGroup_StateChangedMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.CullingGroup/StateChanged::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void StateChanged__ctor_m2156 (StateChanged_t391 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEvent.h"
extern "C" void StateChanged_Invoke_m2157 (StateChanged_t391 * __this, CullingGroupEvent_t390  ___sphere, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StateChanged_Invoke_m2157((StateChanged_t391 *)__this->___prev_9,___sphere, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, CullingGroupEvent_t390  ___sphere, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sphere,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, CullingGroupEvent_t390  ___sphere, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sphere,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_StateChanged_t391(Il2CppObject* delegate, CullingGroupEvent_t390  ___sphere)
{
	typedef void (STDCALL *native_function_ptr_type)(CullingGroupEvent_t390 );
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___sphere' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___sphere);

	// Marshaling cleanup of parameter '___sphere' native representation

}
// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* CullingGroupEvent_t390_il2cpp_TypeInfo_var;
extern "C" Object_t * StateChanged_BeginInvoke_m2158 (StateChanged_t391 * __this, CullingGroupEvent_t390  ___sphere, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CullingGroupEvent_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CullingGroupEvent_t390_il2cpp_TypeInfo_var, &___sphere);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.CullingGroup/StateChanged::EndInvoke(System.IAsyncResult)
extern "C" void StateChanged_EndInvoke_m2159 (StateChanged_t391 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroup.h"
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroupMethodDeclarations.h"
// System.Void UnityEngine.CullingGroup::Finalize()
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroupMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void CullingGroup_Finalize_m2160 (CullingGroup_t392 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
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
		{
			IntPtr_t L_0 = (__this->___m_Ptr_0);
			IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
			bool L_2 = IntPtr_op_Inequality_m2871(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_001b;
			}
		}

IL_0015:
		{
			CullingGroup_FinalizerFailure_m2163(__this, /*hidden argument*/NULL);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x27, FINALLY_0020);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(32)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x27, IL_0027)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.CullingGroup::Dispose()
extern "C" void CullingGroup_Dispose_m2161 (CullingGroup_t392 * __this, const MethodInfo* method)
{
	typedef void (*CullingGroup_Dispose_m2161_ftn) (CullingGroup_t392 *);
	static CullingGroup_Dispose_m2161_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CullingGroup_Dispose_m2161_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CullingGroup::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CullingGroup::SendEvents(UnityEngine.CullingGroup,System.IntPtr,System.Int32)
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroup.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.CullingGroup/StateChanged
#include "UnityEngine_UnityEngine_CullingGroup_StateChangedMethodDeclarations.h"
extern "C" void CullingGroup_SendEvents_m2162 (Object_t * __this /* static, unused */, CullingGroup_t392 * ___cullingGroup, IntPtr_t ___eventsPtr, int32_t ___count, const MethodInfo* method)
{
	CullingGroupEvent_t390 * V_0 = {0};
	int32_t V_1 = 0;
	{
		void* L_0 = IntPtr_ToPointer_m2872((&___eventsPtr), /*hidden argument*/NULL);
		V_0 = (CullingGroupEvent_t390 *)L_0;
		CullingGroup_t392 * L_1 = ___cullingGroup;
		NullCheck(L_1);
		StateChanged_t391 * L_2 = (L_1->___m_OnStateChanged_1);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_001b:
	{
		CullingGroup_t392 * L_3 = ___cullingGroup;
		NullCheck(L_3);
		StateChanged_t391 * L_4 = (L_3->___m_OnStateChanged_1);
		CullingGroupEvent_t390 * L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		StateChanged_Invoke_m2157(L_4, (*(CullingGroupEvent_t390 *)((CullingGroupEvent_t390 *)((intptr_t)L_5+(int32_t)((int32_t)((int32_t)L_6*(int32_t)sizeof(CullingGroupEvent_t390 )))))), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___count;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.CullingGroup::FinalizerFailure()
extern "C" void CullingGroup_FinalizerFailure_m2163 (CullingGroup_t392 * __this, const MethodInfo* method)
{
	typedef void (*CullingGroup_FinalizerFailure_m2163_ftn) (CullingGroup_t392 *);
	static CullingGroup_FinalizerFailure_m2163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CullingGroup_FinalizerFailure_m2163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CullingGroup::FinalizerFailure()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKey.h"
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKeyMethodDeclarations.h"
// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void GradientColorKey__ctor_m2164 (GradientColorKey_t393 * __this, Color_t68  ___col, float ___time, const MethodInfo* method)
{
	{
		Color_t68  L_0 = ___col;
		__this->___color_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKey.h"
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKeyMethodDeclarations.h"
// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void GradientAlphaKey__ctor_m2165 (GradientAlphaKey_t394 * __this, float ___alpha, float ___time, const MethodInfo* method)
{
	{
		float L_0 = ___alpha;
		__this->___alpha_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_Gradient.h"
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"
// System.Void UnityEngine.Gradient::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"
extern "C" void Gradient__ctor_m2166 (Gradient_t395 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Gradient_Init_m2167(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2167 (Gradient_t395 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Init_m2167_ftn) (Gradient_t395 *);
	static Gradient_Init_m2167_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Init_m2167_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2168 (Gradient_t395 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Cleanup_m2168_ftn) (Gradient_t395 *);
	static Gradient_Cleanup_m2168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Cleanup_m2168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2169 (Gradient_t395 * __this, const MethodInfo* method)
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
		Gradient_Cleanup_m2168(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t395_marshal(const Gradient_t395& unmarshaled, Gradient_t395_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void Gradient_t395_marshal_back(const Gradient_t395_marshaled& marshaled, Gradient_t395& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t395_marshal_cleanup(Gradient_t395_marshaled& marshaled)
{
}
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstrucMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardTypeMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboard.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"
extern TypeInfo* TouchScreenKeyboard_InternalConstructorHelperArguments_t396_il2cpp_TypeInfo_var;
extern TypeInfo* TouchScreenKeyboardType_t322_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t544_il2cpp_TypeInfo_var;
extern "C" void TouchScreenKeyboard__ctor_m2170 (TouchScreenKeyboard_t150 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchScreenKeyboard_InternalConstructorHelperArguments_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		TouchScreenKeyboardType_t322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Convert_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	TouchScreenKeyboard_InternalConstructorHelperArguments_t396  V_0 = {0};
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Initobj (TouchScreenKeyboard_InternalConstructorHelperArguments_t396_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_0 = ___keyboardType;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TouchScreenKeyboardType_t322_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t544_il2cpp_TypeInfo_var);
		uint32_t L_3 = Convert_ToUInt32_m2873(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		(&V_0)->___keyboardType_0 = L_3;
		bool L_4 = ___autocorrection;
		uint32_t L_5 = Convert_ToUInt32_m2874(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		(&V_0)->___autocorrection_1 = L_5;
		bool L_6 = ___multiline;
		uint32_t L_7 = Convert_ToUInt32_m2874(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		(&V_0)->___multiline_2 = L_7;
		bool L_8 = ___secure;
		uint32_t L_9 = Convert_ToUInt32_m2874(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		(&V_0)->___secure_3 = L_9;
		bool L_10 = ___alert;
		uint32_t L_11 = Convert_ToUInt32_m2874(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		(&V_0)->___alert_4 = L_11;
		String_t* L_12 = ___text;
		String_t* L_13 = ___textPlaceholder;
		TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2173(__this, (&V_0), L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" void TouchScreenKeyboard_Destroy_m2171 (TouchScreenKeyboard_t150 * __this, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_Destroy_m2171_ftn) (TouchScreenKeyboard_t150 *);
	static TouchScreenKeyboard_Destroy_m2171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Destroy_m2171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern "C" void TouchScreenKeyboard_Finalize_m2172 (TouchScreenKeyboard_t150 * __this, const MethodInfo* method)
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
		TouchScreenKeyboard_Destroy_m2171(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C" void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2173 (TouchScreenKeyboard_t150 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t396 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2173_ftn) (TouchScreenKeyboard_t150 *, TouchScreenKeyboard_InternalConstructorHelperArguments_t396 *, String_t*, String_t*);
	static TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2173_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2173_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)");
	_il2cpp_icall_func(__this, ___arguments, ___text, ___textPlaceholder);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern "C" bool TouchScreenKeyboard_get_isSupported_m1777 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = Application_get_platform_m1756(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 0)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 1)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 2)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 3)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 4)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 5)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 6)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 7)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 8)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 9)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 10)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 11)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 12)
		{
			goto IL_0062;
		}
	}

IL_0045:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 0)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 1)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 2)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 3)
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0066;
	}

IL_0062:
	{
		return 1;
	}

IL_0064:
	{
		return 0;
	}

IL_0066:
	{
		return 0;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t150 * TouchScreenKeyboard_Open_m1840 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = ___secure;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t150 * L_8 = TouchScreenKeyboard_Open_m2174(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t150 * TouchScreenKeyboard_Open_m1841 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = V_2;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t150 * L_8 = TouchScreenKeyboard_Open_m2174(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern TypeInfo* TouchScreenKeyboard_t150_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t150 * TouchScreenKeyboard_Open_m2174 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchScreenKeyboard_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		int32_t L_1 = ___keyboardType;
		bool L_2 = ___autocorrection;
		bool L_3 = ___multiline;
		bool L_4 = ___secure;
		bool L_5 = ___alert;
		String_t* L_6 = ___textPlaceholder;
		TouchScreenKeyboard_t150 * L_7 = (TouchScreenKeyboard_t150 *)il2cpp_codegen_object_new (TouchScreenKeyboard_t150_il2cpp_TypeInfo_var);
		TouchScreenKeyboard__ctor_m2170(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern "C" String_t* TouchScreenKeyboard_get_text_m1758 (TouchScreenKeyboard_t150 * __this, const MethodInfo* method)
{
	typedef String_t* (*TouchScreenKeyboard_get_text_m1758_ftn) (TouchScreenKeyboard_t150 *);
	static TouchScreenKeyboard_get_text_m1758_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_text_m1758_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern "C" void TouchScreenKeyboard_set_text_m1760 (TouchScreenKeyboard_t150 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_text_m1760_ftn) (TouchScreenKeyboard_t150 *, String_t*);
	static TouchScreenKeyboard_set_text_m1760_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_text_m1760_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern "C" void TouchScreenKeyboard_set_hideInput_m1839 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_hideInput_m1839_ftn) (bool);
	static TouchScreenKeyboard_set_hideInput_m1839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_hideInput_m1839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern "C" bool TouchScreenKeyboard_get_active_m1757 (TouchScreenKeyboard_t150 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_active_m1757_ftn) (TouchScreenKeyboard_t150 *);
	static TouchScreenKeyboard_get_active_m1757_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_active_m1757_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_active()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern "C" void TouchScreenKeyboard_set_active_m1838 (TouchScreenKeyboard_t150 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_active_m1838_ftn) (TouchScreenKeyboard_t150 *, bool);
	static TouchScreenKeyboard_set_active_m1838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_active_m1838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern "C" bool TouchScreenKeyboard_get_done_m1782 (TouchScreenKeyboard_t150 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_done_m1782_ftn) (TouchScreenKeyboard_t150 *);
	static TouchScreenKeyboard_get_done_m1782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_done_m1782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_done()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
extern "C" bool TouchScreenKeyboard_get_wasCanceled_m1778 (TouchScreenKeyboard_t150 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_wasCanceled_m1778_ftn) (TouchScreenKeyboard_t150 *);
	static TouchScreenKeyboard_get_wasCanceled_m1778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_wasCanceled_m1778_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_wasCanceled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// System.Int32 UnityEngine.LayerMask::get_value()
extern "C" int32_t LayerMask_get_value_m2175 (LayerMask_t62 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mask_0);
		return L_0;
	}
}
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void LayerMask_set_value_m2176 (LayerMask_t62 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Mask_0 = L_0;
		return;
	}
}
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
extern "C" String_t* LayerMask_LayerToName_m2177 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method)
{
	typedef String_t* (*LayerMask_LayerToName_m2177_ftn) (int32_t);
	static LayerMask_LayerToName_m2177_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_LayerToName_m2177_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
	return _il2cpp_icall_func(___layer);
}
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" int32_t LayerMask_NameToLayer_m2178 (Object_t * __this /* static, unused */, String_t* ___layerName, const MethodInfo* method)
{
	typedef int32_t (*LayerMask_NameToLayer_m2178_ftn) (String_t*);
	static LayerMask_NameToLayer_m2178_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_NameToLayer_m2178_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::NameToLayer(System.String)");
	return _il2cpp_icall_func(___layerName);
}
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
extern "C" int32_t LayerMask_GetMask_m2179 (Object_t * __this /* static, unused */, StringU5BU5D_t484* ___layerNames, const MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	StringU5BU5D_t484* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		StringU5BU5D_t484* L_0 = ___layerNames;
		V_2 = L_0;
		V_3 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		StringU5BU5D_t484* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*)));
		String_t* L_4 = V_1;
		int32_t L_5 = LayerMask_NameToLayer_m2178(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_002b:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		StringU5BU5D_t484* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
extern "C" int32_t LayerMask_op_Implicit_m1508 (Object_t * __this /* static, unused */, LayerMask_t62  ___mask, const MethodInfo* method)
{
	{
		int32_t L_0 = ((&___mask)->___m_Mask_0);
		return L_0;
	}
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" LayerMask_t62  LayerMask_op_Implicit_m1505 (Object_t * __this /* static, unused */, int32_t ___intVal, const MethodInfo* method)
{
	LayerMask_t62  V_0 = {0};
	{
		int32_t L_0 = ___intVal;
		(&V_0)->___m_Mask_0 = L_0;
		LayerMask_t62  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Vector2__ctor_m1428 (Vector2_t43 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		return;
	}
}
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral126;
extern "C" float Vector2_get_Item_m1738 (Vector2_t43 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		float L_3 = (__this->___x_1);
		return L_3;
	}

IL_001b:
	{
		float L_4 = (__this->___y_2);
		return L_4;
	}

IL_0022:
	{
		IndexOutOfRangeException_t545 * L_5 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_5, _stringLiteral126, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}
}
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral126;
extern "C" void Vector2_set_Item_m1747 (Vector2_t43 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		float L_3 = ___value;
		__this->___x_1 = L_3;
		goto IL_0037;
	}

IL_0020:
	{
		float L_4 = ___value;
		__this->___y_2 = L_4;
		goto IL_0037;
	}

IL_002c:
	{
		IndexOutOfRangeException_t545 * L_5 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_5, _stringLiteral126, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0037:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t43  Vector2_Scale_m1827 (Object_t * __this /* static, unused */, Vector2_t43  ___a, Vector2_t43  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t43  L_4 = {0};
		Vector2__ctor_m1428(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.Vector2::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t281_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral127;
extern "C" String_t* Vector2_ToString_m2180 (Vector2_t43 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Single_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 2));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t281_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t281_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral127, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Vector2_GetHashCode_m2181 (Vector2_t43 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m2869(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m2869(L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Vector2_t43_il2cpp_TypeInfo_var;
extern "C" bool Vector2_Equals_m2182 (Vector2_t43 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t43  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector2_t43_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector2_t43 *)((Vector2_t43 *)UnBox (L_1, Vector2_t43_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m1634(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m1634(L_5, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float Vector2_Dot_m1468 (Object_t * __this /* static, unused */, Vector2_t43  ___lhs, Vector2_t43  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" float Vector2_get_sqrMagnitude_m1425 (Vector2_t43 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m2183 (Object_t * __this /* static, unused */, Vector2_t43  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t43  Vector2_get_zero_m1419 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = {0};
		Vector2__ctor_m1428(&L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C" Vector2_t43  Vector2_get_one_m1552 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = {0};
		Vector2__ctor_m1428(&L_0, (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" Vector2_t43  Vector2_get_up_m1574 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = {0};
		Vector2__ctor_m1428(&L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C" Vector2_t43  Vector2_get_right_m1567 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = {0};
		Vector2__ctor_m1428(&L_0, (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t43  Vector2_op_Addition_m1604 (Object_t * __this /* static, unused */, Vector2_t43  ___a, Vector2_t43  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t43  L_4 = {0};
		Vector2__ctor_m1428(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t43  Vector2_op_Subtraction_m1439 (Object_t * __this /* static, unused */, Vector2_t43  ___a, Vector2_t43  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t43  L_4 = {0};
		Vector2__ctor_m1428(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t43  Vector2_op_Multiply_m1734 (Object_t * __this /* static, unused */, Vector2_t43  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t43  L_4 = {0};
		Vector2__ctor_m1428(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t43  Vector2_op_Division_m1790 (Object_t * __this /* static, unused */, Vector2_t43  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t43  L_4 = {0};
		Vector2__ctor_m1428(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m2019 (Object_t * __this /* static, unused */, Vector2_t43  ___lhs, Vector2_t43  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = ___lhs;
		Vector2_t43  L_1 = ___rhs;
		Vector2_t43  L_2 = Vector2_op_Subtraction_m1439(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m2183(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Inequality_m1823 (Object_t * __this /* static, unused */, Vector2_t43  ___lhs, Vector2_t43  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = ___lhs;
		Vector2_t43  L_1 = ___rhs;
		Vector2_t43  L_2 = Vector2_op_Subtraction_m1439(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m2183(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector2_t43  Vector2_op_Implicit_m1443 (Object_t * __this /* static, unused */, Vector3_t42  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector2_t43  L_2 = {0};
		Vector2__ctor_m1428(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" Vector3_t42  Vector2_op_Implicit_m1487 (Object_t * __this /* static, unused */, Vector2_t43  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector3_t42  L_2 = {0};
		Vector3__ctor_m1736(&L_2, L_0, L_1, (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Vector3__ctor_m1736 (Vector3_t42 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		return;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" void Vector3__ctor_m1673 (Vector3_t42 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		__this->___z_3 = (0.0f);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  Vector3_Lerp_m1879 (Object_t * __this /* static, unused */, Vector3_t42  ___a, Vector3_t42  ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1714(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t = L_1;
		float L_2 = ((&___a)->___x_1);
		float L_3 = ((&___b)->___x_1);
		float L_4 = ((&___a)->___x_1);
		float L_5 = ___t;
		float L_6 = ((&___a)->___y_2);
		float L_7 = ((&___b)->___y_2);
		float L_8 = ((&___a)->___y_2);
		float L_9 = ___t;
		float L_10 = ((&___a)->___z_3);
		float L_11 = ((&___b)->___z_3);
		float L_12 = ((&___a)->___z_3);
		float L_13 = ___t;
		Vector3_t42  L_14 = {0};
		Vector3__ctor_m1736(&L_14, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral128;
extern "C" float Vector3_get_Item_m1883 (Vector3_t42 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0020;
		}
		if (L_1 == 2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0020:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_0027:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_002e:
	{
		IndexOutOfRangeException_t545 * L_5 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_5, _stringLiteral128, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}
}
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral128;
extern "C" void Vector3_set_Item_m1884 (Vector3_t42 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0048;
	}

IL_0025:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0048;
	}

IL_0031:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0048;
	}

IL_003d:
	{
		IndexOutOfRangeException_t545 * L_5 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_5, _stringLiteral128, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0048:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Vector3_GetHashCode_m2184 (Vector3_t42 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m2869(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m2869(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m2869(L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Vector3_t42_il2cpp_TypeInfo_var;
extern "C" bool Vector3_Equals_m2185 (Vector3_t42 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector3_t42_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector3_t42 *)((Vector3_t42 *)UnBox (L_1, Vector3_t42_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m1634(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m1634(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m1634(L_8, L_9, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t42  Vector3_Normalize_m2186 (Object_t * __this /* static, unused */, Vector3_t42  ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t42  L_0 = ___value;
		float L_1 = Vector3_Magnitude_m2189(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t42  L_3 = ___value;
		float L_4 = V_0;
		Vector3_t42  L_5 = Vector3_op_Division_m2191(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001a:
	{
		Vector3_t42  L_6 = Vector3_get_zero_m1418(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" Vector3_t42  Vector3_get_normalized_m1908 (Vector3_t42 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Vector3_Normalize_m2186(NULL /*static, unused*/, (*(Vector3_t42 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Vector3::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t281_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral129;
extern "C" String_t* Vector3_ToString_m2187 (Vector3_t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Single_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 3));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t281_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t281_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral129, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String UnityEngine.Vector3::ToString(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral130;
extern "C" String_t* Vector3_ToString_m2188 (Vector3_t42 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 3));
		float* L_1 = &(__this->___x_1);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m2876(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		float* L_5 = &(__this->___y_2);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m2876(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		float* L_9 = &(__this->___z_3);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m2876(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral130, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Dot_m1700 (Object_t * __this /* static, unused */, Vector3_t42  ___lhs, Vector3_t42  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		float L_4 = ((&___lhs)->___z_3);
		float L_5 = ((&___rhs)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" float Vector3_Distance_m1499 (Object_t * __this /* static, unused */, Vector3_t42  ___a, Vector3_t42  ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3__ctor_m1736((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		float L_6 = ((&V_0)->___x_1);
		float L_7 = ((&V_0)->___x_1);
		float L_8 = ((&V_0)->___y_2);
		float L_9 = ((&V_0)->___y_2);
		float L_10 = ((&V_0)->___z_3);
		float L_11 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" float Vector3_Magnitude_m2189 (Object_t * __this /* static, unused */, Vector3_t42  ___a, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m2190 (Object_t * __this /* static, unused */, Vector3_t42  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" float Vector3_get_sqrMagnitude_m1911 (Vector3_t42 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  Vector3_Min_m1893 (Object_t * __this /* static, unused */, Vector3_t42  ___lhs, Vector3_t42  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Min_m1946(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Min_m1946(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Min_m1946(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t42  L_9 = {0};
		Vector3__ctor_m1736(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  Vector3_Max_m1894 (Object_t * __this /* static, unused */, Vector3_t42  ___lhs, Vector3_t42  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Max_m1912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Max_m1912(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Max_m1912(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t42  L_9 = {0};
		Vector3__ctor_m1736(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t42  Vector3_get_zero_m1418 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m1736(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" Vector3_t42  Vector3_get_one_m1618 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m1736(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" Vector3_t42  Vector3_get_forward_m1698 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m1736(&L_0, (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" Vector3_t42  Vector3_get_back_m2001 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m1736(&L_0, (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" Vector3_t42  Vector3_get_up_m1417 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m1736(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" Vector3_t42  Vector3_get_down_m1915 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m1736(&L_0, (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" Vector3_t42  Vector3_get_left_m1913 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m1736(&L_0, (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" Vector3_t42  Vector3_get_right_m1914 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m1736(&L_0, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t42  Vector3_op_Addition_m1830 (Object_t * __this /* static, unused */, Vector3_t42  ___a, Vector3_t42  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t42  L_6 = {0};
		Vector3__ctor_m1736(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t42  Vector3_op_Subtraction_m1702 (Object_t * __this /* static, unused */, Vector3_t42  ___a, Vector3_t42  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t42  L_6 = {0};
		Vector3__ctor_m1736(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t42  Vector3_op_Multiply_m1935 (Object_t * __this /* static, unused */, Vector3_t42  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t42  L_6 = {0};
		Vector3__ctor_m1736(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t42  Vector3_op_Division_m2191 (Object_t * __this /* static, unused */, Vector3_t42  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t42  L_6 = {0};
		Vector3__ctor_m1736(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Equality_m2192 (Object_t * __this /* static, unused */, Vector3_t42  ___lhs, Vector3_t42  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___lhs;
		Vector3_t42  L_1 = ___rhs;
		Vector3_t42  L_2 = Vector3_op_Subtraction_m1702(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m2190(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Inequality_m1819 (Object_t * __this /* static, unused */, Vector3_t42  ___lhs, Vector3_t42  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___lhs;
		Vector3_t42  L_1 = ___rhs;
		Vector3_t42  L_2 = Vector3_op_Subtraction_m1702(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m2190(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Color__ctor_m1540 (Color_t68 * __this, float ___r, float ___g, float ___b, float ___a, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		float L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m1544 (Color_t68 * __this, float ___r, float ___g, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
// System.String UnityEngine.Color::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t281_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral131;
extern "C" String_t* Color_ToString_m2193 (Color_t68 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Single_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___r_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t281_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		float L_5 = (__this->___g_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t281_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		float L_9 = (__this->___b_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t280* L_12 = L_8;
		float L_13 = (__this->___a_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t281_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral131, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 UnityEngine.Color::GetHashCode()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" int32_t Color_GetHashCode_m2194 (Color_t68 * __this, const MethodInfo* method)
{
	Vector4_t232  V_0 = {0};
	{
		Vector4_t232  L_0 = Color_op_Implicit_m2195(NULL /*static, unused*/, (*(Color_t68 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m2267((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Color::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern TypeInfo* Color_t68_il2cpp_TypeInfo_var;
extern "C" bool Color_Equals_m1680 (Color_t68 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	Color_t68  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Color_t68_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Color_t68 *)((Color_t68 *)UnBox (L_1, Color_t68_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___r_0);
		float L_3 = ((&V_0)->___r_0);
		bool L_4 = Single_Equals_m1634(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___g_1);
		float L_6 = ((&V_0)->___g_1);
		bool L_7 = Single_Equals_m1634(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___b_2);
		float L_9 = ((&V_0)->___b_2);
		bool L_10 = Single_Equals_m1634(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___a_3);
		float L_12 = ((&V_0)->___a_3);
		bool L_13 = Single_Equals_m1634(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" Color_t68  Color_Lerp_m1517 (Object_t * __this /* static, unused */, Color_t68  ___a, Color_t68  ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1714(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t = L_1;
		float L_2 = ((&___a)->___r_0);
		float L_3 = ((&___b)->___r_0);
		float L_4 = ((&___a)->___r_0);
		float L_5 = ___t;
		float L_6 = ((&___a)->___g_1);
		float L_7 = ((&___b)->___g_1);
		float L_8 = ((&___a)->___g_1);
		float L_9 = ___t;
		float L_10 = ((&___a)->___b_2);
		float L_11 = ((&___b)->___b_2);
		float L_12 = ((&___a)->___b_2);
		float L_13 = ___t;
		float L_14 = ((&___a)->___a_3);
		float L_15 = ((&___b)->___a_3);
		float L_16 = ((&___a)->___a_3);
		float L_17 = ___t;
		Color_t68  L_18 = {0};
		Color__ctor_m1540(&L_18, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), ((float)((float)L_14+(float)((float)((float)((float)((float)L_15-(float)L_16))*(float)L_17)))), /*hidden argument*/NULL);
		return L_18;
	}
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t68  Color_get_white_m1647 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t68  L_0 = {0};
		Color__ctor_m1540(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" Color_t68  Color_get_black_m1684 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t68  L_0 = {0};
		Color__ctor_m1540(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C" Color_t68  Color_get_clear_m1625 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t68  L_0 = {0};
		Color__ctor_m1540(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" Color_t68  Color_op_Multiply_m1907 (Object_t * __this /* static, unused */, Color_t68  ___a, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___r_0);
		float L_1 = ___b;
		float L_2 = ((&___a)->___g_1);
		float L_3 = ___b;
		float L_4 = ((&___a)->___b_2);
		float L_5 = ___b;
		float L_6 = ((&___a)->___a_3);
		float L_7 = ___b;
		Color_t68  L_8 = {0};
		Color__ctor_m1540(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t232  Color_op_Implicit_m2195 (Object_t * __this /* static, unused */, Color_t68  ___c, const MethodInfo* method)
{
	{
		float L_0 = ((&___c)->___r_0);
		float L_1 = ((&___c)->___g_1);
		float L_2 = ((&___c)->___b_2);
		float L_3 = ((&___c)->___a_3);
		Vector4_t232  L_4 = {0};
		Vector4__ctor_m1671(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" void Color32__ctor_m1538 (Color32_t265 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___r;
		__this->___r_0 = L_0;
		uint8_t L_1 = ___g;
		__this->___g_1 = L_1;
		uint8_t L_2 = ___b;
		__this->___b_2 = L_2;
		uint8_t L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.String UnityEngine.Color32::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t546_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral132;
extern "C" String_t* Color32_ToString_m2196 (Color32_t265 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Byte_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		_stringLiteral132 = il2cpp_codegen_string_literal_from_index(132);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 4));
		uint8_t L_1 = (__this->___r_0);
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(Byte_t546_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		uint8_t L_5 = (__this->___g_1);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(Byte_t546_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		uint8_t L_9 = (__this->___b_2);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(Byte_t546_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t280* L_12 = L_8;
		uint8_t L_13 = (__this->___a_3);
		uint8_t L_14 = L_13;
		Object_t * L_15 = Box(Byte_t546_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral132, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" Color32_t265  Color32_op_Implicit_m1672 (Object_t * __this /* static, unused */, Color_t68  ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___c)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1714(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ((&___c)->___g_1);
		float L_3 = Mathf_Clamp01_m1714(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = ((&___c)->___b_2);
		float L_5 = Mathf_Clamp01_m1714(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___c)->___a_3);
		float L_7 = Mathf_Clamp01_m1714(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Color32_t265  L_8 = {0};
		Color32__ctor_m1538(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern "C" Color_t68  Color32_op_Implicit_m1539 (Object_t * __this /* static, unused */, Color32_t265  ___c, const MethodInfo* method)
{
	{
		uint8_t L_0 = ((&___c)->___r_0);
		uint8_t L_1 = ((&___c)->___g_1);
		uint8_t L_2 = ((&___c)->___b_2);
		uint8_t L_3 = ((&___c)->___a_3);
		Color_t68  L_4 = {0};
		Color__ctor_m1540(&L_4, ((float)((float)(((float)L_0))/(float)(255.0f))), ((float)((float)(((float)L_1))/(float)(255.0f))), ((float)((float)(((float)L_2))/(float)(255.0f))), ((float)((float)(((float)L_3))/(float)(255.0f))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" float Quaternion_Dot_m2197 (Object_t * __this /* static, unused */, Quaternion_t315  ___a, Quaternion_t315  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		float L_6 = ((&___a)->___w_3);
		float L_7 = ((&___b)->___w_3);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern "C" Quaternion_t315  Quaternion_Inverse_m1909 (Object_t * __this /* static, unused */, Quaternion_t315  ___rotation, const MethodInfo* method)
{
	{
		Quaternion_t315  L_0 = Quaternion_INTERNAL_CALL_Inverse_m2198(NULL /*static, unused*/, (&___rotation), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t315  Quaternion_INTERNAL_CALL_Inverse_m2198 (Object_t * __this /* static, unused */, Quaternion_t315 * ___rotation, const MethodInfo* method)
{
	typedef Quaternion_t315  (*Quaternion_INTERNAL_CALL_Inverse_m2198_ftn) (Quaternion_t315 *);
	static Quaternion_INTERNAL_CALL_Inverse_m2198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Inverse_m2198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___rotation);
}
// System.String UnityEngine.Quaternion::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t281_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral133;
extern "C" String_t* Quaternion_ToString_m2199 (Quaternion_t315 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Single_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral133 = il2cpp_codegen_string_literal_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t281_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		float L_5 = (__this->___y_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t281_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		float L_9 = (__this->___z_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t280* L_12 = L_8;
		float L_13 = (__this->___w_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t281_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral133, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 UnityEngine.Quaternion::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Quaternion_GetHashCode_m2200 (Quaternion_t315 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_0);
		int32_t L_1 = Single_GetHashCode_m2869(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_1);
		int32_t L_3 = Single_GetHashCode_m2869(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_2);
		int32_t L_5 = Single_GetHashCode_m2869(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_3);
		int32_t L_7 = Single_GetHashCode_m2869(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Quaternion_t315_il2cpp_TypeInfo_var;
extern "C" bool Quaternion_Equals_m2201 (Quaternion_t315 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quaternion_t315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	Quaternion_t315  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Quaternion_t315_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Quaternion_t315 *)((Quaternion_t315 *)UnBox (L_1, Quaternion_t315_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_0);
		float L_3 = ((&V_0)->___x_0);
		bool L_4 = Single_Equals_m1634(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_1);
		float L_6 = ((&V_0)->___y_1);
		bool L_7 = Single_Equals_m1634(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_2);
		float L_9 = ((&V_0)->___z_2);
		bool L_10 = Single_Equals_m1634(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_3);
		float L_12 = ((&V_0)->___w_3);
		bool L_13 = Single_Equals_m1634(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector3_t42  Quaternion_op_Multiply_m1699 (Object_t * __this /* static, unused */, Quaternion_t315  ___rotation, Vector3_t42  ___point, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t42  V_12 = {0};
	{
		float L_0 = ((&___rotation)->___x_0);
		V_0 = ((float)((float)L_0*(float)(2.0f)));
		float L_1 = ((&___rotation)->___y_1);
		V_1 = ((float)((float)L_1*(float)(2.0f)));
		float L_2 = ((&___rotation)->___z_2);
		V_2 = ((float)((float)L_2*(float)(2.0f)));
		float L_3 = ((&___rotation)->___x_0);
		float L_4 = V_0;
		V_3 = ((float)((float)L_3*(float)L_4));
		float L_5 = ((&___rotation)->___y_1);
		float L_6 = V_1;
		V_4 = ((float)((float)L_5*(float)L_6));
		float L_7 = ((&___rotation)->___z_2);
		float L_8 = V_2;
		V_5 = ((float)((float)L_7*(float)L_8));
		float L_9 = ((&___rotation)->___x_0);
		float L_10 = V_1;
		V_6 = ((float)((float)L_9*(float)L_10));
		float L_11 = ((&___rotation)->___x_0);
		float L_12 = V_2;
		V_7 = ((float)((float)L_11*(float)L_12));
		float L_13 = ((&___rotation)->___y_1);
		float L_14 = V_2;
		V_8 = ((float)((float)L_13*(float)L_14));
		float L_15 = ((&___rotation)->___w_3);
		float L_16 = V_0;
		V_9 = ((float)((float)L_15*(float)L_16));
		float L_17 = ((&___rotation)->___w_3);
		float L_18 = V_1;
		V_10 = ((float)((float)L_17*(float)L_18));
		float L_19 = ((&___rotation)->___w_3);
		float L_20 = V_2;
		V_11 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_4;
		float L_22 = V_5;
		float L_23 = ((&___point)->___x_1);
		float L_24 = V_6;
		float L_25 = V_11;
		float L_26 = ((&___point)->___y_2);
		float L_27 = V_7;
		float L_28 = V_10;
		float L_29 = ((&___point)->___z_3);
		(&V_12)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_21+(float)L_22))))*(float)L_23))+(float)((float)((float)((float)((float)L_24-(float)L_25))*(float)L_26))))+(float)((float)((float)((float)((float)L_27+(float)L_28))*(float)L_29))));
		float L_30 = V_6;
		float L_31 = V_11;
		float L_32 = ((&___point)->___x_1);
		float L_33 = V_3;
		float L_34 = V_5;
		float L_35 = ((&___point)->___y_2);
		float L_36 = V_8;
		float L_37 = V_9;
		float L_38 = ((&___point)->___z_3);
		(&V_12)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))*(float)L_32))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_33+(float)L_34))))*(float)L_35))))+(float)((float)((float)((float)((float)L_36-(float)L_37))*(float)L_38))));
		float L_39 = V_7;
		float L_40 = V_10;
		float L_41 = ((&___point)->___x_1);
		float L_42 = V_8;
		float L_43 = V_9;
		float L_44 = ((&___point)->___y_2);
		float L_45 = V_3;
		float L_46 = V_4;
		float L_47 = ((&___point)->___z_3);
		(&V_12)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_39-(float)L_40))*(float)L_41))+(float)((float)((float)((float)((float)L_42+(float)L_43))*(float)L_44))))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_45+(float)L_46))))*(float)L_47))));
		Vector3_t42  L_48 = V_12;
		return L_48;
	}
}
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m1821 (Object_t * __this /* static, unused */, Quaternion_t315  ___lhs, Quaternion_t315  ___rhs, const MethodInfo* method)
{
	{
		Quaternion_t315  L_0 = ___lhs;
		Quaternion_t315  L_1 = ___rhs;
		float L_2 = Quaternion_Dot_m2197(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Rect__ctor_m1855 (Rect_t145 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___m_XMin_0 = L_0;
		float L_1 = ___y;
		__this->___m_YMin_1 = L_1;
		float L_2 = ___width;
		__this->___m_Width_2 = L_2;
		float L_3 = ___height;
		__this->___m_Height_3 = L_3;
		return;
	}
}
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m1669 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m1730 (Rect_t145 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_XMin_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m1670 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m1728 (Rect_t145 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_YMin_1 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t43  Rect_get_position_m1735 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		float L_1 = (__this->___m_YMin_1);
		Vector2_t43  L_2 = {0};
		Vector2__ctor_m1428(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" Vector2_t43  Rect_get_center_m1872 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_x_m1669(__this, /*hidden argument*/NULL);
		float L_1 = (__this->___m_Width_2);
		float L_2 = Rect_get_y_m1670(__this, /*hidden argument*/NULL);
		float L_3 = (__this->___m_Height_3);
		Vector2_t43  L_4 = {0};
		Vector2__ctor_m1428(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
extern "C" Vector2_t43  Rect_get_min_m1602 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_xMin_m1753(__this, /*hidden argument*/NULL);
		float L_1 = Rect_get_yMin_m1752(__this, /*hidden argument*/NULL);
		Vector2_t43  L_2 = {0};
		Vector2__ctor_m1428(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
extern "C" Vector2_t43  Rect_get_max_m1605 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_xMax_m1743(__this, /*hidden argument*/NULL);
		float L_1 = Rect_get_yMax_m1744(__this, /*hidden argument*/NULL);
		Vector2_t43  L_2 = {0};
		Vector2__ctor_m1428(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m1665 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m1729 (Rect_t145 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Width_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m1609 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m1727 (Rect_t145 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Height_3 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern "C" Vector2_t43  Rect_get_size_m1606 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_Height_3);
		Vector2_t43  L_2 = {0};
		Vector2__ctor_m1428(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m1753 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m1752 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m1743 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_XMin_0);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m1744 (Rect_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		float L_1 = (__this->___m_YMin_1);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.String UnityEngine.Rect::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t281_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral134;
extern "C" String_t* Rect_ToString_m2202 (Rect_t145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Single_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral134 = il2cpp_codegen_string_literal_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 4));
		float L_1 = Rect_get_x_m1669(__this, /*hidden argument*/NULL);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t281_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		float L_5 = Rect_get_y_m1670(__this, /*hidden argument*/NULL);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t281_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		float L_9 = Rect_get_width_m1665(__this, /*hidden argument*/NULL);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t280* L_12 = L_8;
		float L_13 = Rect_get_height_m1609(__this, /*hidden argument*/NULL);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t281_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral134, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" bool Rect_Contains_m1612 (Rect_t145 * __this, Vector3_t42  ___point, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___point)->___x_1);
		float L_1 = Rect_get_xMin_m1753(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&___point)->___x_1);
		float L_3 = Rect_get_xMax_m1743(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&___point)->___y_2);
		float L_5 = Rect_get_yMin_m1752(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&___point)->___y_2);
		float L_7 = Rect_get_yMax_m1744(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern "C" bool Rect_Overlaps_m1850 (Rect_t145 * __this, Rect_t145  ___other, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_xMax_m1743((&___other), /*hidden argument*/NULL);
		float L_1 = Rect_get_xMin_m1753(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = Rect_get_xMin_m1753((&___other), /*hidden argument*/NULL);
		float L_3 = Rect_get_xMax_m1743(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = Rect_get_yMax_m1744((&___other), /*hidden argument*/NULL);
		float L_5 = Rect_get_yMin_m1752(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = Rect_get_yMin_m1752((&___other), /*hidden argument*/NULL);
		float L_7 = Rect_get_yMax_m1744(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Rect::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Rect_GetHashCode_m2203 (Rect_t145 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = Rect_get_x_m1669(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m2869((&V_0), /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m1665(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m2869((&V_1), /*hidden argument*/NULL);
		float L_4 = Rect_get_y_m1670(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m2869((&V_2), /*hidden argument*/NULL);
		float L_6 = Rect_get_height_m1609(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m2869((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Rect::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Rect_t145_il2cpp_TypeInfo_var;
extern "C" bool Rect_Equals_m2204 (Rect_t145 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rect_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t145  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Rect_t145_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Rect_t145 *)((Rect_t145 *)UnBox (L_1, Rect_t145_il2cpp_TypeInfo_var))));
		float L_2 = Rect_get_x_m1669(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Rect_get_x_m1669((&V_0), /*hidden argument*/NULL);
		bool L_4 = Single_Equals_m1634((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = Rect_get_y_m1670(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_y_m1670((&V_0), /*hidden argument*/NULL);
		bool L_7 = Single_Equals_m1634((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = Rect_get_width_m1665(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = Rect_get_width_m1665((&V_0), /*hidden argument*/NULL);
		bool L_10 = Single_Equals_m1634((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = Rect_get_height_m1609(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = Rect_get_height_m1609((&V_0), /*hidden argument*/NULL);
		bool L_13 = Single_Equals_m1634((&V_4), L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Inequality_m1865 (Object_t * __this /* static, unused */, Rect_t145  ___lhs, Rect_t145  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m1669((&___lhs), /*hidden argument*/NULL);
		float L_1 = Rect_get_x_m1669((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		float L_2 = Rect_get_y_m1670((&___lhs), /*hidden argument*/NULL);
		float L_3 = Rect_get_y_m1670((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004e;
		}
	}
	{
		float L_4 = Rect_get_width_m1665((&___lhs), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m1665((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004e;
		}
	}
	{
		float L_6 = Rect_get_height_m1609((&___lhs), /*hidden argument*/NULL);
		float L_7 = Rect_get_height_m1609((&___rhs), /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((float)L_6) == ((float)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B5_0 = 1;
	}

IL_004f:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Equality_m1861 (Object_t * __this /* static, unused */, Rect_t145  ___lhs, Rect_t145  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m1669((&___lhs), /*hidden argument*/NULL);
		float L_1 = Rect_get_x_m1669((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = Rect_get_y_m1670((&___lhs), /*hidden argument*/NULL);
		float L_3 = Rect_get_y_m1670((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = Rect_get_width_m1665((&___lhs), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m1665((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = Rect_get_height_m1609((&___lhs), /*hidden argument*/NULL);
		float L_7 = Rect_get_height_m1609((&___rhs), /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) == ((float)L_7))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		return G_B5_0;
	}
}
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern "C" float Matrix4x4_get_Item_m2205 (Matrix4x4_t332 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = Matrix4x4_get_Item_m2207(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Matrix4x4_set_Item_m2206 (Matrix4x4_t332 * __this, int32_t ___row, int32_t ___column, float ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = ___value;
		Matrix4x4_set_Item_m2208(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral135;
extern "C" float Matrix4x4_get_Item_m2207 (Matrix4x4_t332 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0054;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0062;
		}
		if (L_1 == 4)
		{
			goto IL_0069;
		}
		if (L_1 == 5)
		{
			goto IL_0070;
		}
		if (L_1 == 6)
		{
			goto IL_0077;
		}
		if (L_1 == 7)
		{
			goto IL_007e;
		}
		if (L_1 == 8)
		{
			goto IL_0085;
		}
		if (L_1 == 9)
		{
			goto IL_008c;
		}
		if (L_1 == 10)
		{
			goto IL_0093;
		}
		if (L_1 == 11)
		{
			goto IL_009a;
		}
		if (L_1 == 12)
		{
			goto IL_00a1;
		}
		if (L_1 == 13)
		{
			goto IL_00a8;
		}
		if (L_1 == 14)
		{
			goto IL_00af;
		}
		if (L_1 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_2 = (__this->___m00_0);
		return L_2;
	}

IL_0054:
	{
		float L_3 = (__this->___m10_1);
		return L_3;
	}

IL_005b:
	{
		float L_4 = (__this->___m20_2);
		return L_4;
	}

IL_0062:
	{
		float L_5 = (__this->___m30_3);
		return L_5;
	}

IL_0069:
	{
		float L_6 = (__this->___m01_4);
		return L_6;
	}

IL_0070:
	{
		float L_7 = (__this->___m11_5);
		return L_7;
	}

IL_0077:
	{
		float L_8 = (__this->___m21_6);
		return L_8;
	}

IL_007e:
	{
		float L_9 = (__this->___m31_7);
		return L_9;
	}

IL_0085:
	{
		float L_10 = (__this->___m02_8);
		return L_10;
	}

IL_008c:
	{
		float L_11 = (__this->___m12_9);
		return L_11;
	}

IL_0093:
	{
		float L_12 = (__this->___m22_10);
		return L_12;
	}

IL_009a:
	{
		float L_13 = (__this->___m32_11);
		return L_13;
	}

IL_00a1:
	{
		float L_14 = (__this->___m03_12);
		return L_14;
	}

IL_00a8:
	{
		float L_15 = (__this->___m13_13);
		return L_15;
	}

IL_00af:
	{
		float L_16 = (__this->___m23_14);
		return L_16;
	}

IL_00b6:
	{
		float L_17 = (__this->___m33_15);
		return L_17;
	}

IL_00bd:
	{
		IndexOutOfRangeException_t545 * L_18 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_18, _stringLiteral135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral135;
extern "C" void Matrix4x4_set_Item_m2208 (Matrix4x4_t332 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
		if (L_1 == 2)
		{
			goto IL_0065;
		}
		if (L_1 == 3)
		{
			goto IL_0071;
		}
		if (L_1 == 4)
		{
			goto IL_007d;
		}
		if (L_1 == 5)
		{
			goto IL_0089;
		}
		if (L_1 == 6)
		{
			goto IL_0095;
		}
		if (L_1 == 7)
		{
			goto IL_00a1;
		}
		if (L_1 == 8)
		{
			goto IL_00ad;
		}
		if (L_1 == 9)
		{
			goto IL_00b9;
		}
		if (L_1 == 10)
		{
			goto IL_00c5;
		}
		if (L_1 == 11)
		{
			goto IL_00d1;
		}
		if (L_1 == 12)
		{
			goto IL_00dd;
		}
		if (L_1 == 13)
		{
			goto IL_00e9;
		}
		if (L_1 == 14)
		{
			goto IL_00f5;
		}
		if (L_1 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		float L_2 = ___value;
		__this->___m00_0 = L_2;
		goto IL_0118;
	}

IL_0059:
	{
		float L_3 = ___value;
		__this->___m10_1 = L_3;
		goto IL_0118;
	}

IL_0065:
	{
		float L_4 = ___value;
		__this->___m20_2 = L_4;
		goto IL_0118;
	}

IL_0071:
	{
		float L_5 = ___value;
		__this->___m30_3 = L_5;
		goto IL_0118;
	}

IL_007d:
	{
		float L_6 = ___value;
		__this->___m01_4 = L_6;
		goto IL_0118;
	}

IL_0089:
	{
		float L_7 = ___value;
		__this->___m11_5 = L_7;
		goto IL_0118;
	}

IL_0095:
	{
		float L_8 = ___value;
		__this->___m21_6 = L_8;
		goto IL_0118;
	}

IL_00a1:
	{
		float L_9 = ___value;
		__this->___m31_7 = L_9;
		goto IL_0118;
	}

IL_00ad:
	{
		float L_10 = ___value;
		__this->___m02_8 = L_10;
		goto IL_0118;
	}

IL_00b9:
	{
		float L_11 = ___value;
		__this->___m12_9 = L_11;
		goto IL_0118;
	}

IL_00c5:
	{
		float L_12 = ___value;
		__this->___m22_10 = L_12;
		goto IL_0118;
	}

IL_00d1:
	{
		float L_13 = ___value;
		__this->___m32_11 = L_13;
		goto IL_0118;
	}

IL_00dd:
	{
		float L_14 = ___value;
		__this->___m03_12 = L_14;
		goto IL_0118;
	}

IL_00e9:
	{
		float L_15 = ___value;
		__this->___m13_13 = L_15;
		goto IL_0118;
	}

IL_00f5:
	{
		float L_16 = ___value;
		__this->___m23_14 = L_16;
		goto IL_0118;
	}

IL_0101:
	{
		float L_17 = ___value;
		__this->___m33_15 = L_17;
		goto IL_0118;
	}

IL_010d:
	{
		IndexOutOfRangeException_t545 * L_18 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_18, _stringLiteral135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_0118:
	{
		return;
	}
}
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" int32_t Matrix4x4_GetHashCode_m2209 (Matrix4x4_t332 * __this, const MethodInfo* method)
{
	Vector4_t232  V_0 = {0};
	Vector4_t232  V_1 = {0};
	Vector4_t232  V_2 = {0};
	Vector4_t232  V_3 = {0};
	{
		Vector4_t232  L_0 = Matrix4x4_GetColumn_m2220(__this, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m2267((&V_0), /*hidden argument*/NULL);
		Vector4_t232  L_2 = Matrix4x4_GetColumn_m2220(__this, 1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector4_GetHashCode_m2267((&V_1), /*hidden argument*/NULL);
		Vector4_t232  L_4 = Matrix4x4_GetColumn_m2220(__this, 2, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Vector4_GetHashCode_m2267((&V_2), /*hidden argument*/NULL);
		Vector4_t232  L_6 = Matrix4x4_GetColumn_m2220(__this, 3, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Vector4_GetHashCode_m2267((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Matrix4x4_t332_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t232_il2cpp_TypeInfo_var;
extern "C" bool Matrix4x4_Equals_m2210 (Matrix4x4_t332 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		Vector4_t232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t332  V_0 = {0};
	Vector4_t232  V_1 = {0};
	Vector4_t232  V_2 = {0};
	Vector4_t232  V_3 = {0};
	Vector4_t232  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Matrix4x4_t332_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Matrix4x4_t332 *)((Matrix4x4_t332 *)UnBox (L_1, Matrix4x4_t332_il2cpp_TypeInfo_var))));
		Vector4_t232  L_2 = Matrix4x4_GetColumn_m2220(__this, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector4_t232  L_3 = Matrix4x4_GetColumn_m2220((&V_0), 0, /*hidden argument*/NULL);
		Vector4_t232  L_4 = L_3;
		Object_t * L_5 = Box(Vector4_t232_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector4_Equals_m2268((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t232  L_7 = Matrix4x4_GetColumn_m2220(__this, 1, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector4_t232  L_8 = Matrix4x4_GetColumn_m2220((&V_0), 1, /*hidden argument*/NULL);
		Vector4_t232  L_9 = L_8;
		Object_t * L_10 = Box(Vector4_t232_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector4_Equals_m2268((&V_2), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t232  L_12 = Matrix4x4_GetColumn_m2220(__this, 2, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector4_t232  L_13 = Matrix4x4_GetColumn_m2220((&V_0), 2, /*hidden argument*/NULL);
		Vector4_t232  L_14 = L_13;
		Object_t * L_15 = Box(Vector4_t232_il2cpp_TypeInfo_var, &L_14);
		bool L_16 = Vector4_Equals_m2268((&V_3), L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t232  L_17 = Matrix4x4_GetColumn_m2220(__this, 3, /*hidden argument*/NULL);
		V_4 = L_17;
		Vector4_t232  L_18 = Matrix4x4_GetColumn_m2220((&V_0), 3, /*hidden argument*/NULL);
		Vector4_t232  L_19 = L_18;
		Object_t * L_20 = Box(Vector4_t232_il2cpp_TypeInfo_var, &L_19);
		bool L_21 = Vector4_Equals_m2268((&V_4), L_20, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
extern "C" Matrix4x4_t332  Matrix4x4_Inverse_m2211 (Object_t * __this /* static, unused */, Matrix4x4_t332  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t332  L_0 = Matrix4x4_INTERNAL_CALL_Inverse_m2212(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t332  Matrix4x4_INTERNAL_CALL_Inverse_m2212 (Object_t * __this /* static, unused */, Matrix4x4_t332 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t332  (*Matrix4x4_INTERNAL_CALL_Inverse_m2212_ftn) (Matrix4x4_t332 *);
	static Matrix4x4_INTERNAL_CALL_Inverse_m2212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Inverse_m2212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t332  Matrix4x4_Transpose_m2213 (Object_t * __this /* static, unused */, Matrix4x4_t332  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t332  L_0 = Matrix4x4_INTERNAL_CALL_Transpose_m2214(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t332  Matrix4x4_INTERNAL_CALL_Transpose_m2214 (Object_t * __this /* static, unused */, Matrix4x4_t332 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t332  (*Matrix4x4_INTERNAL_CALL_Transpose_m2214_ftn) (Matrix4x4_t332 *);
	static Matrix4x4_INTERNAL_CALL_Transpose_m2214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Transpose_m2214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_Invert_m2215 (Object_t * __this /* static, unused */, Matrix4x4_t332  ___inMatrix, Matrix4x4_t332 * ___dest, const MethodInfo* method)
{
	{
		Matrix4x4_t332 * L_0 = ___dest;
		bool L_1 = Matrix4x4_INTERNAL_CALL_Invert_m2216(NULL /*static, unused*/, (&___inMatrix), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m2216 (Object_t * __this /* static, unused */, Matrix4x4_t332 * ___inMatrix, Matrix4x4_t332 * ___dest, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_INTERNAL_CALL_Invert_m2216_ftn) (Matrix4x4_t332 *, Matrix4x4_t332 *);
	static Matrix4x4_INTERNAL_CALL_Invert_m2216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Invert_m2216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___inMatrix, ___dest);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" Matrix4x4_t332  Matrix4x4_get_inverse_m2217 (Matrix4x4_t332 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t332  L_0 = Matrix4x4_Inverse_m2211(NULL /*static, unused*/, (*(Matrix4x4_t332 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern "C" Matrix4x4_t332  Matrix4x4_get_transpose_m2218 (Matrix4x4_t332 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t332  L_0 = Matrix4x4_Transpose_m2213(NULL /*static, unused*/, (*(Matrix4x4_t332 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern "C" bool Matrix4x4_get_isIdentity_m2219 (Matrix4x4_t332 * __this, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_get_isIdentity_m2219_ftn) (Matrix4x4_t332 *);
	static Matrix4x4_get_isIdentity_m2219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_get_isIdentity_m2219_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t232  Matrix4x4_GetColumn_m2220 (Matrix4x4_t332 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m2205(__this, 0, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m2205(__this, 1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m2205(__this, 2, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m2205(__this, 3, L_6, /*hidden argument*/NULL);
		Vector4_t232  L_8 = {0};
		Vector4__ctor_m1671(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern "C" Vector4_t232  Matrix4x4_GetRow_m2221 (Matrix4x4_t332 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m2205(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m2205(__this, L_2, 1, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m2205(__this, L_4, 2, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m2205(__this, L_6, 3, /*hidden argument*/NULL);
		Vector4_t232  L_8 = {0};
		Vector4__ctor_m1671(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" void Matrix4x4_SetColumn_m2222 (Matrix4x4_t332 * __this, int32_t ___i, Vector4_t232  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m2206(__this, 0, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m2206(__this, 1, L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m2206(__this, 2, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m2206(__this, 3, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetRow_m2223 (Matrix4x4_t332 * __this, int32_t ___i, Vector4_t232  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m2206(__this, L_0, 0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m2206(__this, L_2, 1, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m2206(__this, L_4, 2, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m2206(__this, L_6, 3, L_7, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector3_t42  Matrix4x4_MultiplyPoint_m2224 (Matrix4x4_t332 * __this, Vector3_t42  ___v, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->___m30_3);
		float L_22 = ((&___v)->___x_1);
		float L_23 = (__this->___m31_7);
		float L_24 = ((&___v)->___y_2);
		float L_25 = (__this->___m32_11);
		float L_26 = ((&___v)->___z_3);
		float L_27 = (__this->___m33_15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		float L_28 = V_1;
		V_1 = ((float)((float)(1.0f)/(float)L_28));
		Vector3_t42 * L_29 = (&V_0);
		float L_30 = (L_29->___x_1);
		float L_31 = V_1;
		L_29->___x_1 = ((float)((float)L_30*(float)L_31));
		Vector3_t42 * L_32 = (&V_0);
		float L_33 = (L_32->___y_2);
		float L_34 = V_1;
		L_32->___y_2 = ((float)((float)L_33*(float)L_34));
		Vector3_t42 * L_35 = (&V_0);
		float L_36 = (L_35->___z_3);
		float L_37 = V_1;
		L_35->___z_3 = ((float)((float)L_36*(float)L_37));
		Vector3_t42  L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C" Vector3_t42  Matrix4x4_MultiplyPoint3x4_m1892 (Matrix4x4_t332 * __this, Vector3_t42  ___v, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		Vector3_t42  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" Vector3_t42  Matrix4x4_MultiplyVector_m2225 (Matrix4x4_t332 * __this, Vector3_t42  ___v, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___m10_1);
		float L_7 = ((&___v)->___x_1);
		float L_8 = (__this->___m11_5);
		float L_9 = ((&___v)->___y_2);
		float L_10 = (__this->___m12_9);
		float L_11 = ((&___v)->___z_3);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m20_2);
		float L_13 = ((&___v)->___x_1);
		float L_14 = (__this->___m21_6);
		float L_15 = ((&___v)->___y_2);
		float L_16 = (__this->___m22_10);
		float L_17 = ((&___v)->___z_3);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		Vector3_t42  L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern TypeInfo* Matrix4x4_t332_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t332  Matrix4x4_Scale_m2226 (Object_t * __this /* static, unused */, Vector3_t42  ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t332  V_0 = {0};
	{
		Initobj (Matrix4x4_t332_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___v)->___x_1);
		(&V_0)->___m00_0 = L_0;
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		float L_1 = ((&___v)->___y_2);
		(&V_0)->___m11_5 = L_1;
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		float L_2 = ((&___v)->___z_3);
		(&V_0)->___m22_10 = L_2;
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t332  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern TypeInfo* Matrix4x4_t332_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t332  Matrix4x4_get_zero_m2227 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t332  V_0 = {0};
	{
		Initobj (Matrix4x4_t332_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (0.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (0.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (0.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (0.0f);
		Matrix4x4_t332  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern TypeInfo* Matrix4x4_t332_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t332  Matrix4x4_get_identity_m2228 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t332  V_0 = {0};
	{
		Initobj (Matrix4x4_t332_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (1.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (1.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (1.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t332  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" void Matrix4x4_SetTRS_m2229 (Matrix4x4_t332 * __this, Vector3_t42  ___pos, Quaternion_t315  ___q, Vector3_t42  ___s, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___pos;
		Quaternion_t315  L_1 = ___q;
		Vector3_t42  L_2 = ___s;
		Matrix4x4_t332  L_3 = Matrix4x4_TRS_m2230(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		*__this = L_3;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t332  Matrix4x4_TRS_m2230 (Object_t * __this /* static, unused */, Vector3_t42  ___pos, Quaternion_t315  ___q, Vector3_t42  ___s, const MethodInfo* method)
{
	{
		Matrix4x4_t332  L_0 = Matrix4x4_INTERNAL_CALL_TRS_m2231(NULL /*static, unused*/, (&___pos), (&___q), (&___s), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t332  Matrix4x4_INTERNAL_CALL_TRS_m2231 (Object_t * __this /* static, unused */, Vector3_t42 * ___pos, Quaternion_t315 * ___q, Vector3_t42 * ___s, const MethodInfo* method)
{
	typedef Matrix4x4_t332  (*Matrix4x4_INTERNAL_CALL_TRS_m2231_ftn) (Vector3_t42 *, Quaternion_t315 *, Vector3_t42 *);
	static Matrix4x4_INTERNAL_CALL_TRS_m2231_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_TRS_m2231_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___pos, ___q, ___s);
}
// System.String UnityEngine.Matrix4x4::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t281_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral136;
extern "C" String_t* Matrix4x4_ToString_m2232 (Matrix4x4_t332 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Single_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral136 = il2cpp_codegen_string_literal_from_index(136);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, ((int32_t)16)));
		float L_1 = (__this->___m00_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t281_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		float L_5 = (__this->___m01_4);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t281_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		float L_9 = (__this->___m02_8);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t280* L_12 = L_8;
		float L_13 = (__this->___m03_12);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t281_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t280* L_16 = L_12;
		float L_17 = (__this->___m10_1);
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t281_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t280* L_20 = L_16;
		float L_21 = (__this->___m11_5);
		float L_22 = L_21;
		Object_t * L_23 = Box(Single_t281_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5, sizeof(Object_t *))) = (Object_t *)L_23;
		ObjectU5BU5D_t280* L_24 = L_20;
		float L_25 = (__this->___m12_9);
		float L_26 = L_25;
		Object_t * L_27 = Box(Single_t281_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6, sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t280* L_28 = L_24;
		float L_29 = (__this->___m13_13);
		float L_30 = L_29;
		Object_t * L_31 = Box(Single_t281_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7, sizeof(Object_t *))) = (Object_t *)L_31;
		ObjectU5BU5D_t280* L_32 = L_28;
		float L_33 = (__this->___m20_2);
		float L_34 = L_33;
		Object_t * L_35 = Box(Single_t281_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8, sizeof(Object_t *))) = (Object_t *)L_35;
		ObjectU5BU5D_t280* L_36 = L_32;
		float L_37 = (__this->___m21_6);
		float L_38 = L_37;
		Object_t * L_39 = Box(Single_t281_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_39;
		ObjectU5BU5D_t280* L_40 = L_36;
		float L_41 = (__this->___m22_10);
		float L_42 = L_41;
		Object_t * L_43 = Box(Single_t281_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_43;
		ObjectU5BU5D_t280* L_44 = L_40;
		float L_45 = (__this->___m23_14);
		float L_46 = L_45;
		Object_t * L_47 = Box(Single_t281_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_47;
		ObjectU5BU5D_t280* L_48 = L_44;
		float L_49 = (__this->___m30_3);
		float L_50 = L_49;
		Object_t * L_51 = Box(Single_t281_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)L_51;
		ObjectU5BU5D_t280* L_52 = L_48;
		float L_53 = (__this->___m31_7);
		float L_54 = L_53;
		Object_t * L_55 = Box(Single_t281_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t280* L_56 = L_52;
		float L_57 = (__this->___m32_11);
		float L_58 = L_57;
		Object_t * L_59 = Box(Single_t281_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)L_59;
		ObjectU5BU5D_t280* L_60 = L_56;
		float L_61 = (__this->___m33_15);
		float L_62 = L_61;
		Object_t * L_63 = Box(Single_t281_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral136, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// System.String UnityEngine.Matrix4x4::ToString(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral137;
extern "C" String_t* Matrix4x4_ToString_m2233 (Matrix4x4_t332 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		_stringLiteral137 = il2cpp_codegen_string_literal_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, ((int32_t)16)));
		float* L_1 = &(__this->___m00_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m2876(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		float* L_5 = &(__this->___m01_4);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m2876(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		float* L_9 = &(__this->___m02_8);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m2876(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t280* L_12 = L_8;
		float* L_13 = &(__this->___m03_12);
		String_t* L_14 = ___format;
		String_t* L_15 = Single_ToString_m2876(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t280* L_16 = L_12;
		float* L_17 = &(__this->___m10_1);
		String_t* L_18 = ___format;
		String_t* L_19 = Single_ToString_m2876(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t280* L_20 = L_16;
		float* L_21 = &(__this->___m11_5);
		String_t* L_22 = ___format;
		String_t* L_23 = Single_ToString_m2876(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5, sizeof(Object_t *))) = (Object_t *)L_23;
		ObjectU5BU5D_t280* L_24 = L_20;
		float* L_25 = &(__this->___m12_9);
		String_t* L_26 = ___format;
		String_t* L_27 = Single_ToString_m2876(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6, sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t280* L_28 = L_24;
		float* L_29 = &(__this->___m13_13);
		String_t* L_30 = ___format;
		String_t* L_31 = Single_ToString_m2876(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7, sizeof(Object_t *))) = (Object_t *)L_31;
		ObjectU5BU5D_t280* L_32 = L_28;
		float* L_33 = &(__this->___m20_2);
		String_t* L_34 = ___format;
		String_t* L_35 = Single_ToString_m2876(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8, sizeof(Object_t *))) = (Object_t *)L_35;
		ObjectU5BU5D_t280* L_36 = L_32;
		float* L_37 = &(__this->___m21_6);
		String_t* L_38 = ___format;
		String_t* L_39 = Single_ToString_m2876(L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_39;
		ObjectU5BU5D_t280* L_40 = L_36;
		float* L_41 = &(__this->___m22_10);
		String_t* L_42 = ___format;
		String_t* L_43 = Single_ToString_m2876(L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_43;
		ObjectU5BU5D_t280* L_44 = L_40;
		float* L_45 = &(__this->___m23_14);
		String_t* L_46 = ___format;
		String_t* L_47 = Single_ToString_m2876(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_47;
		ObjectU5BU5D_t280* L_48 = L_44;
		float* L_49 = &(__this->___m30_3);
		String_t* L_50 = ___format;
		String_t* L_51 = Single_ToString_m2876(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)L_51;
		ObjectU5BU5D_t280* L_52 = L_48;
		float* L_53 = &(__this->___m31_7);
		String_t* L_54 = ___format;
		String_t* L_55 = Single_ToString_m2876(L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t280* L_56 = L_52;
		float* L_57 = &(__this->___m32_11);
		String_t* L_58 = ___format;
		String_t* L_59 = Single_ToString_m2876(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)L_59;
		ObjectU5BU5D_t280* L_60 = L_56;
		float* L_61 = &(__this->___m33_15);
		String_t* L_62 = ___format;
		String_t* L_63 = Single_ToString_m2876(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral137, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t332  Matrix4x4_Ortho_m2234 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t332  (*Matrix4x4_Ortho_m2234_ftn) (float, float, float, float, float, float);
	static Matrix4x4_Ortho_m2234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Ortho_m2234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___left, ___right, ___bottom, ___top, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t332  Matrix4x4_Perspective_m2235 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t332  (*Matrix4x4_Perspective_m2235_ftn) (float, float, float, float);
	static Matrix4x4_Perspective_m2235_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Perspective_m2235_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___fov, ___aspect, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern TypeInfo* Matrix4x4_t332_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t332  Matrix4x4_op_Multiply_m2236 (Object_t * __this /* static, unused */, Matrix4x4_t332  ___lhs, Matrix4x4_t332  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t332  V_0 = {0};
	{
		Initobj (Matrix4x4_t332_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___rhs)->___m00_0);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___rhs)->___m10_1);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___rhs)->___m20_2);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___rhs)->___m30_3);
		(&V_0)->___m00_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m00_0);
		float L_9 = ((&___rhs)->___m01_4);
		float L_10 = ((&___lhs)->___m01_4);
		float L_11 = ((&___rhs)->___m11_5);
		float L_12 = ((&___lhs)->___m02_8);
		float L_13 = ((&___rhs)->___m21_6);
		float L_14 = ((&___lhs)->___m03_12);
		float L_15 = ((&___rhs)->___m31_7);
		(&V_0)->___m01_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m00_0);
		float L_17 = ((&___rhs)->___m02_8);
		float L_18 = ((&___lhs)->___m01_4);
		float L_19 = ((&___rhs)->___m12_9);
		float L_20 = ((&___lhs)->___m02_8);
		float L_21 = ((&___rhs)->___m22_10);
		float L_22 = ((&___lhs)->___m03_12);
		float L_23 = ((&___rhs)->___m32_11);
		(&V_0)->___m02_8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m00_0);
		float L_25 = ((&___rhs)->___m03_12);
		float L_26 = ((&___lhs)->___m01_4);
		float L_27 = ((&___rhs)->___m13_13);
		float L_28 = ((&___lhs)->___m02_8);
		float L_29 = ((&___rhs)->___m23_14);
		float L_30 = ((&___lhs)->___m03_12);
		float L_31 = ((&___rhs)->___m33_15);
		(&V_0)->___m03_12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		float L_32 = ((&___lhs)->___m10_1);
		float L_33 = ((&___rhs)->___m00_0);
		float L_34 = ((&___lhs)->___m11_5);
		float L_35 = ((&___rhs)->___m10_1);
		float L_36 = ((&___lhs)->___m12_9);
		float L_37 = ((&___rhs)->___m20_2);
		float L_38 = ((&___lhs)->___m13_13);
		float L_39 = ((&___rhs)->___m30_3);
		(&V_0)->___m10_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		float L_40 = ((&___lhs)->___m10_1);
		float L_41 = ((&___rhs)->___m01_4);
		float L_42 = ((&___lhs)->___m11_5);
		float L_43 = ((&___rhs)->___m11_5);
		float L_44 = ((&___lhs)->___m12_9);
		float L_45 = ((&___rhs)->___m21_6);
		float L_46 = ((&___lhs)->___m13_13);
		float L_47 = ((&___rhs)->___m31_7);
		(&V_0)->___m11_5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = ((&___lhs)->___m10_1);
		float L_49 = ((&___rhs)->___m02_8);
		float L_50 = ((&___lhs)->___m11_5);
		float L_51 = ((&___rhs)->___m12_9);
		float L_52 = ((&___lhs)->___m12_9);
		float L_53 = ((&___rhs)->___m22_10);
		float L_54 = ((&___lhs)->___m13_13);
		float L_55 = ((&___rhs)->___m32_11);
		(&V_0)->___m12_9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		float L_56 = ((&___lhs)->___m10_1);
		float L_57 = ((&___rhs)->___m03_12);
		float L_58 = ((&___lhs)->___m11_5);
		float L_59 = ((&___rhs)->___m13_13);
		float L_60 = ((&___lhs)->___m12_9);
		float L_61 = ((&___rhs)->___m23_14);
		float L_62 = ((&___lhs)->___m13_13);
		float L_63 = ((&___rhs)->___m33_15);
		(&V_0)->___m13_13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		float L_64 = ((&___lhs)->___m20_2);
		float L_65 = ((&___rhs)->___m00_0);
		float L_66 = ((&___lhs)->___m21_6);
		float L_67 = ((&___rhs)->___m10_1);
		float L_68 = ((&___lhs)->___m22_10);
		float L_69 = ((&___rhs)->___m20_2);
		float L_70 = ((&___lhs)->___m23_14);
		float L_71 = ((&___rhs)->___m30_3);
		(&V_0)->___m20_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		float L_72 = ((&___lhs)->___m20_2);
		float L_73 = ((&___rhs)->___m01_4);
		float L_74 = ((&___lhs)->___m21_6);
		float L_75 = ((&___rhs)->___m11_5);
		float L_76 = ((&___lhs)->___m22_10);
		float L_77 = ((&___rhs)->___m21_6);
		float L_78 = ((&___lhs)->___m23_14);
		float L_79 = ((&___rhs)->___m31_7);
		(&V_0)->___m21_6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		float L_80 = ((&___lhs)->___m20_2);
		float L_81 = ((&___rhs)->___m02_8);
		float L_82 = ((&___lhs)->___m21_6);
		float L_83 = ((&___rhs)->___m12_9);
		float L_84 = ((&___lhs)->___m22_10);
		float L_85 = ((&___rhs)->___m22_10);
		float L_86 = ((&___lhs)->___m23_14);
		float L_87 = ((&___rhs)->___m32_11);
		(&V_0)->___m22_10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		float L_88 = ((&___lhs)->___m20_2);
		float L_89 = ((&___rhs)->___m03_12);
		float L_90 = ((&___lhs)->___m21_6);
		float L_91 = ((&___rhs)->___m13_13);
		float L_92 = ((&___lhs)->___m22_10);
		float L_93 = ((&___rhs)->___m23_14);
		float L_94 = ((&___lhs)->___m23_14);
		float L_95 = ((&___rhs)->___m33_15);
		(&V_0)->___m23_14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		float L_96 = ((&___lhs)->___m30_3);
		float L_97 = ((&___rhs)->___m00_0);
		float L_98 = ((&___lhs)->___m31_7);
		float L_99 = ((&___rhs)->___m10_1);
		float L_100 = ((&___lhs)->___m32_11);
		float L_101 = ((&___rhs)->___m20_2);
		float L_102 = ((&___lhs)->___m33_15);
		float L_103 = ((&___rhs)->___m30_3);
		(&V_0)->___m30_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		float L_104 = ((&___lhs)->___m30_3);
		float L_105 = ((&___rhs)->___m01_4);
		float L_106 = ((&___lhs)->___m31_7);
		float L_107 = ((&___rhs)->___m11_5);
		float L_108 = ((&___lhs)->___m32_11);
		float L_109 = ((&___rhs)->___m21_6);
		float L_110 = ((&___lhs)->___m33_15);
		float L_111 = ((&___rhs)->___m31_7);
		(&V_0)->___m31_7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		float L_112 = ((&___lhs)->___m30_3);
		float L_113 = ((&___rhs)->___m02_8);
		float L_114 = ((&___lhs)->___m31_7);
		float L_115 = ((&___rhs)->___m12_9);
		float L_116 = ((&___lhs)->___m32_11);
		float L_117 = ((&___rhs)->___m22_10);
		float L_118 = ((&___lhs)->___m33_15);
		float L_119 = ((&___rhs)->___m32_11);
		(&V_0)->___m32_11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		float L_120 = ((&___lhs)->___m30_3);
		float L_121 = ((&___rhs)->___m03_12);
		float L_122 = ((&___lhs)->___m31_7);
		float L_123 = ((&___rhs)->___m13_13);
		float L_124 = ((&___lhs)->___m32_11);
		float L_125 = ((&___rhs)->___m23_14);
		float L_126 = ((&___lhs)->___m33_15);
		float L_127 = ((&___rhs)->___m33_15);
		(&V_0)->___m33_15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		Matrix4x4_t332  L_128 = V_0;
		return L_128;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Vector4_t232  Matrix4x4_op_Multiply_m2237 (Object_t * __this /* static, unused */, Matrix4x4_t332  ___lhs, Vector4_t232  ___v, const MethodInfo* method)
{
	Vector4_t232  V_0 = {0};
	{
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___v)->___w_4);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m10_1);
		float L_9 = ((&___v)->___x_1);
		float L_10 = ((&___lhs)->___m11_5);
		float L_11 = ((&___v)->___y_2);
		float L_12 = ((&___lhs)->___m12_9);
		float L_13 = ((&___v)->___z_3);
		float L_14 = ((&___lhs)->___m13_13);
		float L_15 = ((&___v)->___w_4);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m20_2);
		float L_17 = ((&___v)->___x_1);
		float L_18 = ((&___lhs)->___m21_6);
		float L_19 = ((&___v)->___y_2);
		float L_20 = ((&___lhs)->___m22_10);
		float L_21 = ((&___v)->___z_3);
		float L_22 = ((&___lhs)->___m23_14);
		float L_23 = ((&___v)->___w_4);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m30_3);
		float L_25 = ((&___v)->___x_1);
		float L_26 = ((&___lhs)->___m31_7);
		float L_27 = ((&___v)->___y_2);
		float L_28 = ((&___lhs)->___m32_11);
		float L_29 = ((&___v)->___z_3);
		float L_30 = ((&___lhs)->___m33_15);
		float L_31 = ((&___v)->___w_4);
		(&V_0)->___w_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		Vector4_t232  L_32 = V_0;
		return L_32;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m2238 (Object_t * __this /* static, unused */, Matrix4x4_t332  ___lhs, Matrix4x4_t332  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		Vector4_t232  L_0 = Matrix4x4_GetColumn_m2220((&___lhs), 0, /*hidden argument*/NULL);
		Vector4_t232  L_1 = Matrix4x4_GetColumn_m2220((&___rhs), 0, /*hidden argument*/NULL);
		bool L_2 = Vector4_op_Equality_m2273(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t232  L_3 = Matrix4x4_GetColumn_m2220((&___lhs), 1, /*hidden argument*/NULL);
		Vector4_t232  L_4 = Matrix4x4_GetColumn_m2220((&___rhs), 1, /*hidden argument*/NULL);
		bool L_5 = Vector4_op_Equality_m2273(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t232  L_6 = Matrix4x4_GetColumn_m2220((&___lhs), 2, /*hidden argument*/NULL);
		Vector4_t232  L_7 = Matrix4x4_GetColumn_m2220((&___rhs), 2, /*hidden argument*/NULL);
		bool L_8 = Vector4_op_Equality_m2273(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t232  L_9 = Matrix4x4_GetColumn_m2220((&___lhs), 3, /*hidden argument*/NULL);
		Vector4_t232  L_10 = Matrix4x4_GetColumn_m2220((&___rhs), 3, /*hidden argument*/NULL);
		bool L_11 = Vector4_op_Equality_m2273(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Inequality_m2239 (Object_t * __this /* static, unused */, Matrix4x4_t332  ___lhs, Matrix4x4_t332  ___rhs, const MethodInfo* method)
{
	{
		Matrix4x4_t332  L_0 = ___lhs;
		Matrix4x4_t332  L_1 = ___rhs;
		bool L_2 = Matrix4x4_op_Equality_m2238(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Bounds__ctor_m1886 (Bounds_t178 * __this, Vector3_t42  ___center, Vector3_t42  ___size, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___center;
		__this->___m_Center_0 = L_0;
		Vector3_t42  L_1 = ___size;
		Vector3_t42  L_2 = Vector3_op_Multiply_m1935(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.Bounds::GetHashCode()
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
extern "C" int32_t Bounds_GetHashCode_m2240 (Bounds_t178 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	{
		Vector3_t42  L_0 = Bounds_get_center_m1888(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector3_GetHashCode_m2184((&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_2 = Bounds_get_extents_m2242(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector3_GetHashCode_m2184((&V_1), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Bounds_t178_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t42_il2cpp_TypeInfo_var;
extern "C" bool Bounds_Equals_m2241 (Bounds_t178 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bounds_t178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		Vector3_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t178  V_0 = {0};
	Vector3_t42  V_1 = {0};
	Vector3_t42  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Bounds_t178_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Bounds_t178 *)((Bounds_t178 *)UnBox (L_1, Bounds_t178_il2cpp_TypeInfo_var))));
		Vector3_t42  L_2 = Bounds_get_center_m1888(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_t42  L_3 = Bounds_get_center_m1888((&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t42_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector3_Equals_m2185((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t42  L_7 = Bounds_get_extents_m2242(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector3_t42  L_8 = Bounds_get_extents_m2242((&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_9 = L_8;
		Object_t * L_10 = Box(Vector3_t42_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector3_Equals_m2185((&V_2), L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t42  Bounds_get_center_m1888 (Bounds_t178 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Center_0);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m1890 (Bounds_t178 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___value;
		__this->___m_Center_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" Vector3_t42  Bounds_get_size_m1877 (Bounds_t178 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Extents_1);
		Vector3_t42  L_1 = Vector3_op_Multiply_m1935(NULL /*static, unused*/, L_0, (2.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C" void Bounds_set_size_m1889 (Bounds_t178 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___value;
		Vector3_t42  L_1 = Vector3_op_Multiply_m1935(NULL /*static, unused*/, L_0, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t42  Bounds_get_extents_m2242 (Bounds_t178 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Extents_1);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m2243 (Bounds_t178 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___value;
		__this->___m_Extents_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t42  Bounds_get_min_m1882 (Bounds_t178 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Bounds_get_center_m1888(__this, /*hidden argument*/NULL);
		Vector3_t42  L_1 = Bounds_get_extents_m2242(__this, /*hidden argument*/NULL);
		Vector3_t42  L_2 = Vector3_op_Subtraction_m1702(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern "C" void Bounds_set_min_m2244 (Bounds_t178 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___value;
		Vector3_t42  L_1 = Bounds_get_max_m1896(__this, /*hidden argument*/NULL);
		Bounds_SetMinMax_m2246(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t42  Bounds_get_max_m1896 (Bounds_t178 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Bounds_get_center_m1888(__this, /*hidden argument*/NULL);
		Vector3_t42  L_1 = Bounds_get_extents_m2242(__this, /*hidden argument*/NULL);
		Vector3_t42  L_2 = Vector3_op_Addition_m1830(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern "C" void Bounds_set_max_m2245 (Bounds_t178 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Bounds_get_min_m1882(__this, /*hidden argument*/NULL);
		Vector3_t42  L_1 = ___value;
		Bounds_SetMinMax_m2246(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m2246 (Bounds_t178 * __this, Vector3_t42  ___min, Vector3_t42  ___max, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___max;
		Vector3_t42  L_1 = ___min;
		Vector3_t42  L_2 = Vector3_op_Subtraction_m1702(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t42  L_3 = Vector3_op_Multiply_m1935(NULL /*static, unused*/, L_2, (0.5f), /*hidden argument*/NULL);
		Bounds_set_extents_m2243(__this, L_3, /*hidden argument*/NULL);
		Vector3_t42  L_4 = ___min;
		Vector3_t42  L_5 = Bounds_get_extents_m2242(__this, /*hidden argument*/NULL);
		Vector3_t42  L_6 = Vector3_op_Addition_m1830(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Bounds_set_center_m1890(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m1895 (Bounds_t178 * __this, Vector3_t42  ___point, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Bounds_get_min_m1882(__this, /*hidden argument*/NULL);
		Vector3_t42  L_1 = ___point;
		Vector3_t42  L_2 = Vector3_Min_m1893(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t42  L_3 = Bounds_get_max_m1896(__this, /*hidden argument*/NULL);
		Vector3_t42  L_4 = ___point;
		Vector3_t42  L_5 = Vector3_Max_m1894(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_SetMinMax_m2246(__this, L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
extern "C" void Bounds_Encapsulate_m2247 (Bounds_t178 * __this, Bounds_t178  ___bounds, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Bounds_get_center_m1888((&___bounds), /*hidden argument*/NULL);
		Vector3_t42  L_1 = Bounds_get_extents_m2242((&___bounds), /*hidden argument*/NULL);
		Vector3_t42  L_2 = Vector3_op_Subtraction_m1702(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Bounds_Encapsulate_m1895(__this, L_2, /*hidden argument*/NULL);
		Vector3_t42  L_3 = Bounds_get_center_m1888((&___bounds), /*hidden argument*/NULL);
		Vector3_t42  L_4 = Bounds_get_extents_m2242((&___bounds), /*hidden argument*/NULL);
		Vector3_t42  L_5 = Vector3_op_Addition_m1830(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_Encapsulate_m1895(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Bounds_Expand_m2248 (Bounds_t178 * __this, float ___amount, const MethodInfo* method)
{
	{
		float L_0 = ___amount;
		___amount = ((float)((float)L_0*(float)(0.5f)));
		Vector3_t42  L_1 = Bounds_get_extents_m2242(__this, /*hidden argument*/NULL);
		float L_2 = ___amount;
		float L_3 = ___amount;
		float L_4 = ___amount;
		Vector3_t42  L_5 = {0};
		Vector3__ctor_m1736(&L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		Vector3_t42  L_6 = Vector3_op_Addition_m1830(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		Bounds_set_extents_m2243(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern "C" void Bounds_Expand_m2249 (Bounds_t178 * __this, Vector3_t42  ___amount, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Bounds_get_extents_m2242(__this, /*hidden argument*/NULL);
		Vector3_t42  L_1 = ___amount;
		Vector3_t42  L_2 = Vector3_op_Multiply_m1935(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		Vector3_t42  L_3 = Vector3_op_Addition_m1830(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Bounds_set_extents_m2243(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C" bool Bounds_Intersects_m2250 (Bounds_t178 * __this, Bounds_t178  ___bounds, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	Vector3_t42  V_2 = {0};
	Vector3_t42  V_3 = {0};
	Vector3_t42  V_4 = {0};
	Vector3_t42  V_5 = {0};
	Vector3_t42  V_6 = {0};
	Vector3_t42  V_7 = {0};
	Vector3_t42  V_8 = {0};
	Vector3_t42  V_9 = {0};
	Vector3_t42  V_10 = {0};
	Vector3_t42  V_11 = {0};
	int32_t G_B7_0 = 0;
	{
		Vector3_t42  L_0 = Bounds_get_min_m1882(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t42  L_2 = Bounds_get_max_m1896((&___bounds), /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->___x_1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t42  L_4 = Bounds_get_max_m1896(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = ((&V_2)->___x_1);
		Vector3_t42  L_6 = Bounds_get_min_m1882((&___bounds), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t42  L_8 = Bounds_get_min_m1882(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_2);
		Vector3_t42  L_10 = Bounds_get_max_m1896((&___bounds), /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = ((&V_5)->___y_2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t42  L_12 = Bounds_get_max_m1896(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		float L_13 = ((&V_6)->___y_2);
		Vector3_t42  L_14 = Bounds_get_min_m1882((&___bounds), /*hidden argument*/NULL);
		V_7 = L_14;
		float L_15 = ((&V_7)->___y_2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t42  L_16 = Bounds_get_min_m1882(__this, /*hidden argument*/NULL);
		V_8 = L_16;
		float L_17 = ((&V_8)->___z_3);
		Vector3_t42  L_18 = Bounds_get_max_m1896((&___bounds), /*hidden argument*/NULL);
		V_9 = L_18;
		float L_19 = ((&V_9)->___z_3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t42  L_20 = Bounds_get_max_m1896(__this, /*hidden argument*/NULL);
		V_10 = L_20;
		float L_21 = ((&V_10)->___z_3);
		Vector3_t42  L_22 = Bounds_get_min_m1882((&___bounds), /*hidden argument*/NULL);
		V_11 = L_22;
		float L_23 = ((&V_11)->___z_3);
		G_B7_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m2251 (Object_t * __this /* static, unused */, Bounds_t178  ___m, Vector3_t42  ___point, const MethodInfo* method)
{
	{
		bool L_0 = Bounds_INTERNAL_CALL_Internal_Contains_m2252(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m2252 (Object_t * __this /* static, unused */, Bounds_t178 * ___m, Vector3_t42 * ___point, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_Contains_m2252_ftn) (Bounds_t178 *, Vector3_t42 *);
	static Bounds_INTERNAL_CALL_Internal_Contains_m2252_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_Contains_m2252_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C" bool Bounds_Contains_m2253 (Bounds_t178 * __this, Vector3_t42  ___point, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___point;
		bool L_1 = Bounds_Internal_Contains_m2251(NULL /*static, unused*/, (*(Bounds_t178 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m2254 (Object_t * __this /* static, unused */, Bounds_t178  ___m, Vector3_t42  ___point, const MethodInfo* method)
{
	{
		float L_0 = Bounds_INTERNAL_CALL_Internal_SqrDistance_m2255(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m2255 (Object_t * __this /* static, unused */, Bounds_t178 * ___m, Vector3_t42 * ___point, const MethodInfo* method)
{
	typedef float (*Bounds_INTERNAL_CALL_Internal_SqrDistance_m2255_ftn) (Bounds_t178 *, Vector3_t42 *);
	static Bounds_INTERNAL_CALL_Internal_SqrDistance_m2255_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_SqrDistance_m2255_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern "C" float Bounds_SqrDistance_m2256 (Bounds_t178 * __this, Vector3_t42  ___point, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___point;
		float L_1 = Bounds_Internal_SqrDistance_m2254(NULL /*static, unused*/, (*(Bounds_t178 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m2257 (Object_t * __this /* static, unused */, Ray_t292 * ___ray, Bounds_t178 * ___bounds, float* ___distance, const MethodInfo* method)
{
	{
		Ray_t292 * L_0 = ___ray;
		Bounds_t178 * L_1 = ___bounds;
		float* L_2 = ___distance;
		bool L_3 = Bounds_INTERNAL_CALL_Internal_IntersectRay_m2258(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m2258 (Object_t * __this /* static, unused */, Ray_t292 * ___ray, Bounds_t178 * ___bounds, float* ___distance, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_IntersectRay_m2258_ftn) (Ray_t292 *, Bounds_t178 *, float*);
	static Bounds_INTERNAL_CALL_Internal_IntersectRay_m2258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_IntersectRay_m2258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(___ray, ___bounds, ___distance);
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" bool Bounds_IntersectRay_m2259 (Bounds_t178 * __this, Ray_t292  ___ray, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = Bounds_Internal_IntersectRay_m2257(NULL /*static, unused*/, (&___ray), __this, (&V_0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern "C" bool Bounds_IntersectRay_m2260 (Bounds_t178 * __this, Ray_t292  ___ray, float* ___distance, const MethodInfo* method)
{
	{
		float* L_0 = ___distance;
		bool L_1 = Bounds_Internal_IntersectRay_m2257(NULL /*static, unused*/, (&___ray), __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t42  Bounds_Internal_GetClosestPoint_m2261 (Object_t * __this /* static, unused */, Bounds_t178 * ___bounds, Vector3_t42 * ___point, const MethodInfo* method)
{
	{
		Bounds_t178 * L_0 = ___bounds;
		Vector3_t42 * L_1 = ___point;
		Vector3_t42  L_2 = Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2262(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t42  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2262 (Object_t * __this /* static, unused */, Bounds_t178 * ___bounds, Vector3_t42 * ___point, const MethodInfo* method)
{
	typedef Vector3_t42  (*Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2262_ftn) (Bounds_t178 *, Vector3_t42 *);
	static Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___bounds, ___point);
}
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
extern "C" Vector3_t42  Bounds_ClosestPoint_m2263 (Bounds_t178 * __this, Vector3_t42  ___point, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Bounds_Internal_GetClosestPoint_m2261(NULL /*static, unused*/, __this, (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Bounds::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t42_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral138;
extern "C" String_t* Bounds_ToString_m2264 (Bounds_t178 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Vector3_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		_stringLiteral138 = il2cpp_codegen_string_literal_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 2));
		Vector3_t42  L_1 = (__this->___m_Center_0);
		Vector3_t42  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t42_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		Vector3_t42  L_5 = (__this->___m_Extents_1);
		Vector3_t42  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t42_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral138, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String UnityEngine.Bounds::ToString(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral138;
extern "C" String_t* Bounds_ToString_m2265 (Bounds_t178 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		_stringLiteral138 = il2cpp_codegen_string_literal_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 2));
		Vector3_t42 * L_1 = &(__this->___m_Center_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Vector3_ToString_m2188(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		Vector3_t42 * L_5 = &(__this->___m_Extents_1);
		String_t* L_6 = ___format;
		String_t* L_7 = Vector3_ToString_m2188(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral138, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m2266 (Object_t * __this /* static, unused */, Bounds_t178  ___lhs, Bounds_t178  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Vector3_t42  L_0 = Bounds_get_center_m1888((&___lhs), /*hidden argument*/NULL);
		Vector3_t42  L_1 = Bounds_get_center_m1888((&___rhs), /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Equality_m2192(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t42  L_3 = Bounds_get_extents_m2242((&___lhs), /*hidden argument*/NULL);
		Vector3_t42  L_4 = Bounds_get_extents_m2242((&___rhs), /*hidden argument*/NULL);
		bool L_5 = Vector3_op_Equality_m2192(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Inequality_m1880 (Object_t * __this /* static, unused */, Bounds_t178  ___lhs, Bounds_t178  ___rhs, const MethodInfo* method)
{
	{
		Bounds_t178  L_0 = ___lhs;
		Bounds_t178  L_1 = ___rhs;
		bool L_2 = Bounds_op_Equality_m2266(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Vector4__ctor_m1671 (Vector4_t232 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		float L_3 = ___w;
		__this->___w_4 = L_3;
		return;
	}
}
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral139;
extern "C" float Vector4_get_Item_m1737 (Vector4_t232 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral139 = il2cpp_codegen_string_literal_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0024;
		}
		if (L_1 == 2)
		{
			goto IL_002b;
		}
		if (L_1 == 3)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_001d:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0024:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_002b:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_0032:
	{
		float L_5 = (__this->___w_4);
		return L_5;
	}

IL_0039:
	{
		IndexOutOfRangeException_t545 * L_6 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_6, _stringLiteral139, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral139;
extern "C" void Vector4_set_Item_m1739 (Vector4_t232 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral139 = il2cpp_codegen_string_literal_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0035;
		}
		if (L_1 == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_001d:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0058;
	}

IL_0029:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0058;
	}

IL_0035:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0058;
	}

IL_0041:
	{
		float L_5 = ___value;
		__this->___w_4 = L_5;
		goto IL_0058;
	}

IL_004d:
	{
		IndexOutOfRangeException_t545 * L_6 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_6, _stringLiteral139, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Vector4_GetHashCode_m2267 (Vector4_t232 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m2869(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m2869(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m2869(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_4);
		int32_t L_7 = Single_GetHashCode_m2869(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Vector4_t232_il2cpp_TypeInfo_var;
extern "C" bool Vector4_Equals_m2268 (Vector4_t232 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t232  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector4_t232_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector4_t232 *)((Vector4_t232 *)UnBox (L_1, Vector4_t232_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m1634(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m1634(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m1634(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_4);
		float L_12 = ((&V_0)->___w_4);
		bool L_13 = Single_Equals_m1634(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.Vector4::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t281_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral133;
extern "C" String_t* Vector4_ToString_m2269 (Vector4_t232 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Single_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral133 = il2cpp_codegen_string_literal_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t281_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t281_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t280* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t280* L_12 = L_8;
		float L_13 = (__this->___w_4);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t281_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral133, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" float Vector4_Dot_m2270 (Object_t * __this /* static, unused */, Vector4_t232  ___a, Vector4_t232  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" float Vector4_SqrMagnitude_m2271 (Object_t * __this /* static, unused */, Vector4_t232  ___a, const MethodInfo* method)
{
	{
		Vector4_t232  L_0 = ___a;
		Vector4_t232  L_1 = ___a;
		float L_2 = Vector4_Dot_m2270(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" float Vector4_get_sqrMagnitude_m1719 (Vector4_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = Vector4_Dot_m2270(NULL /*static, unused*/, (*(Vector4_t232 *)__this), (*(Vector4_t232 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" Vector4_t232  Vector4_get_zero_m1723 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector4_t232  L_0 = {0};
		Vector4__ctor_m1671(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t232  Vector4_op_Subtraction_m2272 (Object_t * __this /* static, unused */, Vector4_t232  ___a, Vector4_t232  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		Vector4_t232  L_8 = {0};
		Vector4__ctor_m1671(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C" Vector4_t232  Vector4_op_Division_m1733 (Object_t * __this /* static, unused */, Vector4_t232  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t232  L_8 = {0};
		Vector4__ctor_m1671(&L_8, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m2273 (Object_t * __this /* static, unused */, Vector4_t232  ___lhs, Vector4_t232  ___rhs, const MethodInfo* method)
{
	{
		Vector4_t232  L_0 = ___lhs;
		Vector4_t232  L_1 = ___rhs;
		Vector4_t232  L_2 = Vector4_op_Subtraction_m2272(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector4_SqrMagnitude_m2271(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Ray__ctor_m2274 (Ray_t292 * __this, Vector3_t42  ___origin, Vector3_t42  ___direction, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___origin;
		__this->___m_Origin_0 = L_0;
		Vector3_t42  L_1 = Vector3_get_normalized_m1908((&___direction), /*hidden argument*/NULL);
		__this->___m_Direction_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" Vector3_t42  Ray_get_origin_m1491 (Ray_t292 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Origin_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" Vector3_t42  Ray_get_direction_m1492 (Ray_t292 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Direction_1);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" Vector3_t42  Ray_GetPoint_m1785 (Ray_t292 * __this, float ___distance, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Origin_0);
		Vector3_t42  L_1 = (__this->___m_Direction_1);
		float L_2 = ___distance;
		Vector3_t42  L_3 = Vector3_op_Multiply_m1935(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t42  L_4 = Vector3_op_Addition_m1830(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.Ray::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t42_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral140;
extern "C" String_t* Ray_ToString_m2275 (Ray_t292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Vector3_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 2));
		Vector3_t42  L_1 = (__this->___m_Origin_0);
		Vector3_t42  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t42_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t280* L_4 = L_0;
		Vector3_t42  L_5 = (__this->___m_Direction_1);
		Vector3_t42  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t42_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2339(NULL /*static, unused*/, _stringLiteral140, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Plane__ctor_m1783 (Plane_t324 * __this, Vector3_t42  ___inNormal, Vector3_t42  ___inPoint, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___inNormal;
		Vector3_t42  L_1 = Vector3_Normalize_m2186(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___m_Normal_0 = L_1;
		Vector3_t42  L_2 = ___inNormal;
		Vector3_t42  L_3 = ___inPoint;
		float L_4 = Vector3_Dot_m1700(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___m_Distance_1 = ((-L_4));
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t42  Plane_get_normal_m2276 (Plane_t324 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Normal_0);
		return L_0;
	}
}
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m2277 (Plane_t324 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" bool Plane_Raycast_m1784 (Plane_t324 * __this, Ray_t292  ___ray, float* ___enter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t42  L_0 = Ray_get_direction_m1492((&___ray), /*hidden argument*/NULL);
		Vector3_t42  L_1 = Plane_get_normal_m2276(__this, /*hidden argument*/NULL);
		float L_2 = Vector3_Dot_m1700(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t42  L_3 = Ray_get_origin_m1491((&___ray), /*hidden argument*/NULL);
		Vector3_t42  L_4 = Plane_get_normal_m2276(__this, /*hidden argument*/NULL);
		float L_5 = Vector3_Dot_m1700(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Plane_get_distance_m2277(__this, /*hidden argument*/NULL);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_7, (0.0f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		float* L_9 = ___enter;
		*((float*)(L_9)) = (float)(0.0f);
		return 0;
	}

IL_0047:
	{
		float* L_10 = ___enter;
		float L_11 = V_1;
		float L_12 = V_0;
		*((float*)(L_10)) = (float)((float)((float)L_11/(float)L_12));
		float* L_13 = ___enter;
		return ((((float)(*((float*)L_13))) > ((float)(0.0f)))? 1 : 0);
	}
}
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternal.h"
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternalMethodDeclarations.h"
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern TypeInfo* MathfInternal_t397_il2cpp_TypeInfo_var;
extern "C" void MathfInternal__cctor_m2278 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t397_StaticFields*)MathfInternal_t397_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0 = (1.17549435E-38f);
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t397_StaticFields*)MathfInternal_t397_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1 = (1.401298E-45f);
		float L_0 = ((MathfInternal_t397_StaticFields*)MathfInternal_t397_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t397_StaticFields*)MathfInternal_t397_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_Mathf.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Void UnityEngine.Mathf::.cctor()
extern TypeInfo* MathfInternal_t397_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" void Mathf__cctor_m2279 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t397_il2cpp_TypeInfo_var);
		bool L_0 = ((MathfInternal_t397_StaticFields*)MathfInternal_t397_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t397_il2cpp_TypeInfo_var);
		float L_1 = ((MathfInternal_t397_StaticFields*)MathfInternal_t397_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t397_il2cpp_TypeInfo_var);
		float L_2 = ((MathfInternal_t397_StaticFields*)MathfInternal_t397_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((Mathf_t284_StaticFields*)Mathf_t284_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0 = G_B3_0;
		return;
	}
}
// System.Single UnityEngine.Mathf::Sin(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" float Mathf_Sin_m2280 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern "C" float Mathf_Cos_m2281 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = cos((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m2282 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sqrt((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m2283 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = fabsf(L_0);
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m1946 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Mathf_Min_m1803 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m1912 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m1801 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern "C" float Mathf_Pow_m2284 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" float Mathf_Log_m1951 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = Math_Log_m2877(NULL /*static, unused*/, (((double)L_0)), (((double)L_1)), /*hidden argument*/NULL);
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m2285 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m2286 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" int32_t Mathf_CeilToInt_m1961 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = ceil((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" int32_t Mathf_FloorToInt_m1963 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" int32_t Mathf_RoundToInt_m1726 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C" float Mathf_Sign_m1885 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (-1.0f);
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m1722 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = ___min;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		float L_3 = ___value;
		float L_4 = ___max;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		float L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		float L_6 = ___value;
		return L_6;
	}
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" int32_t Mathf_Clamp_m1583 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = ___min;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_3 = ___value;
		int32_t L_4 = ___max;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		int32_t L_6 = ___value;
		return L_6;
	}
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m1714 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		float L_1 = ___value;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		float L_2 = ___value;
		return L_2;
	}
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" float Mathf_Lerp_m1521 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___a;
		float L_1 = ___b;
		float L_2 = ___a;
		float L_3 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp01_m1714(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return ((float)((float)L_0+(float)((float)((float)((float)((float)L_1-(float)L_2))*(float)L_4))));
	}
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" bool Mathf_Approximately_m1464 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___b;
		float L_1 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = ___a;
		float L_4 = fabsf(L_3);
		float L_5 = ___b;
		float L_6 = fabsf(L_5);
		float L_7 = Mathf_Max_m1912(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		float L_8 = ((Mathf_t284_StaticFields*)Mathf_t284_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		float L_9 = Mathf_Max_m1912(NULL /*static, unused*/, ((float)((float)(1.0E-06f)*(float)L_7)), ((float)((float)L_8*(float)(8.0f))), /*hidden argument*/NULL);
		return ((((float)L_2) < ((float)L_9))? 1 : 0);
	}
}
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" float Mathf_SmoothDamp_m1878 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float L_0 = ___smoothTime;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m1912(NULL /*static, unused*/, (0.0001f), L_0, /*hidden argument*/NULL);
		___smoothTime = L_1;
		float L_2 = ___smoothTime;
		V_0 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_0;
		float L_4 = ___deltaTime;
		V_1 = ((float)((float)L_3*(float)L_4));
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_1;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)L_5))+(float)((float)((float)((float)((float)(0.48f)*(float)L_6))*(float)L_7))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)L_8))*(float)L_9))*(float)L_10))))));
		float L_11 = ___current;
		float L_12 = ___target;
		V_3 = ((float)((float)L_11-(float)L_12));
		float L_13 = ___target;
		V_4 = L_13;
		float L_14 = ___maxSpeed;
		float L_15 = ___smoothTime;
		V_5 = ((float)((float)L_14*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_5;
		float L_18 = V_5;
		float L_19 = Mathf_Clamp_m1722(NULL /*static, unused*/, L_16, ((-L_17)), L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = ___current;
		float L_21 = V_3;
		___target = ((float)((float)L_20-(float)L_21));
		float* L_22 = ___currentVelocity;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___deltaTime;
		V_6 = ((float)((float)((float)((float)(*((float*)L_22))+(float)((float)((float)L_23*(float)L_24))))*(float)L_25));
		float* L_26 = ___currentVelocity;
		float* L_27 = ___currentVelocity;
		float L_28 = V_0;
		float L_29 = V_6;
		float L_30 = V_2;
		*((float*)(L_26)) = (float)((float)((float)((float)((float)(*((float*)L_27))-(float)((float)((float)L_28*(float)L_29))))*(float)L_30));
		float L_31 = ___target;
		float L_32 = V_3;
		float L_33 = V_6;
		float L_34 = V_2;
		V_7 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_32+(float)L_33))*(float)L_34))));
		float L_35 = V_4;
		float L_36 = ___current;
		float L_37 = V_7;
		float L_38 = V_4;
		if ((!(((uint32_t)((((float)((float)((float)L_35-(float)L_36))) > ((float)(0.0f)))? 1 : 0)) == ((uint32_t)((((float)L_37) > ((float)L_38))? 1 : 0)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_39 = V_4;
		V_7 = L_39;
		float* L_40 = ___currentVelocity;
		float L_41 = V_7;
		float L_42 = V_4;
		float L_43 = ___deltaTime;
		*((float*)(L_40)) = (float)((float)((float)((float)((float)L_41-(float)L_42))/(float)L_43));
	}

IL_00a0:
	{
		float L_44 = V_7;
		return L_44;
	}
}
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" float Mathf_Repeat_m1749 (Object_t * __this /* static, unused */, float ___t, float ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		float L_1 = ___t;
		float L_2 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_3 = floorf(((float)((float)L_1/(float)L_2)));
		float L_4 = ___length;
		return ((float)((float)L_0-(float)((float)((float)L_3*(float)L_4))));
	}
}
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t284_il2cpp_TypeInfo_var;
extern "C" float Mathf_InverseLerp_m1748 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		float L_2 = ___value;
		float L_3 = ___a;
		float L_4 = ___b;
		float L_5 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t284_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp01_m1714(NULL /*static, unused*/, ((float)((float)((float)((float)L_2-(float)L_3))/(float)((float)((float)L_4-(float)L_5)))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0014:
	{
		return (0.0f);
	}
}
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformPropertiesMethodDeclarations.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTrackerMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
extern "C" void DrivenRectTransformTracker_Add_m1871 (DrivenRectTransformTracker_t172 * __this, Object_t269 * ___driver, RectTransform_t90 * ___rectTransform, int32_t ___drivenProperties, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern "C" void DrivenRectTransformTracker_Clear_m1870 (DrivenRectTransformTracker_t172 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_EdgeMethodDeclarations.h"
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_Axis.h"
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_AxisMethodDeclarations.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ReapplyDrivenProperties__ctor_m1976 (ReapplyDrivenProperties_t346 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
extern "C" void ReapplyDrivenProperties_Invoke_m2287 (ReapplyDrivenProperties_t346 * __this, RectTransform_t90 * ___driven, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ReapplyDrivenProperties_Invoke_m2287((ReapplyDrivenProperties_t346 *)__this->___prev_9,___driven, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RectTransform_t90 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RectTransform_t90 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t346(Il2CppObject* delegate, RectTransform_t90 * ___driven)
{
	// Marshaling of parameter '___driven' to native representation
	RectTransform_t90 * ____driven_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m2288 (ReapplyDrivenProperties_t346 * __this, RectTransform_t90 * ___driven, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern "C" void ReapplyDrivenProperties_EndInvoke_m2289 (ReapplyDrivenProperties_t346 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// System.Void UnityEngine.RectTransform::add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* RectTransform_t90_il2cpp_TypeInfo_var;
extern TypeInfo* ReapplyDrivenProperties_t346_il2cpp_TypeInfo_var;
extern "C" void RectTransform_add_reapplyDrivenProperties_m1977 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t346 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		ReapplyDrivenProperties_t346_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t346 * L_0 = ((RectTransform_t90_StaticFields*)RectTransform_t90_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t346 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((RectTransform_t90_StaticFields*)RectTransform_t90_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t346 *)CastclassSealed(L_2, ReapplyDrivenProperties_t346_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.RectTransform::remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
extern TypeInfo* RectTransform_t90_il2cpp_TypeInfo_var;
extern TypeInfo* ReapplyDrivenProperties_t346_il2cpp_TypeInfo_var;
extern "C" void RectTransform_remove_reapplyDrivenProperties_m2290 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t346 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		ReapplyDrivenProperties_t346_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t346 * L_0 = ((RectTransform_t90_StaticFields*)RectTransform_t90_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t346 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((RectTransform_t90_StaticFields*)RectTransform_t90_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t346 *)CastclassSealed(L_2, ReapplyDrivenProperties_t346_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern "C" Rect_t145  RectTransform_get_rect_m1601 (RectTransform_t90 * __this, const MethodInfo* method)
{
	Rect_t145  V_0 = {0};
	{
		RectTransform_INTERNAL_get_rect_m2291(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t145  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void RectTransform_INTERNAL_get_rect_m2291 (RectTransform_t90 * __this, Rect_t145 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_rect_m2291_ftn) (RectTransform_t90 *, Rect_t145 *);
	static RectTransform_INTERNAL_get_rect_m2291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_rect_m2291_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
extern "C" Vector2_t43  RectTransform_get_anchorMin_m1614 (RectTransform_t90 * __this, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMin_m2292(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t43  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void RectTransform_set_anchorMin_m1551 (RectTransform_t90 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMin_m2293(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMin_m2292 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMin_m2292_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_get_anchorMin_m2292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMin_m2292_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMin_m2293 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMin_m2293_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_set_anchorMin_m2293_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMin_m2293_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
extern "C" Vector2_t43  RectTransform_get_anchorMax_m1615 (RectTransform_t90 * __this, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMax_m2294(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t43  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchorMax_m1553 (RectTransform_t90 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMax_m2295(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMax_m2294 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMax_m2294_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_get_anchorMax_m2294_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMax_m2294_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMax_m2295 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMax_m2295_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_set_anchorMax_m2295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMax_m2295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C" Vector2_t43  RectTransform_get_anchoredPosition_m1616 (RectTransform_t90 * __this, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchoredPosition_m2296(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t43  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchoredPosition_m1554 (RectTransform_t90 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchoredPosition_m2297(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchoredPosition_m2296 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchoredPosition_m2296_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_get_anchoredPosition_m2296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchoredPosition_m2296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchoredPosition_m2297 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchoredPosition_m2297_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_set_anchoredPosition_m2297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchoredPosition_m2297_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" Vector2_t43  RectTransform_get_sizeDelta_m1569 (RectTransform_t90 * __this, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		RectTransform_INTERNAL_get_sizeDelta_m2298(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t43  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" void RectTransform_set_sizeDelta_m1543 (RectTransform_t90 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_sizeDelta_m2299(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_sizeDelta_m2298 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_sizeDelta_m2298_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_get_sizeDelta_m2298_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_sizeDelta_m2298_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_sizeDelta_m2299 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_sizeDelta_m2299_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_set_sizeDelta_m2299_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_sizeDelta_m2299_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C" Vector2_t43  RectTransform_get_pivot_m1617 (RectTransform_t90 * __this, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		RectTransform_INTERNAL_get_pivot_m2300(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t43  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
extern "C" void RectTransform_set_pivot_m1568 (RectTransform_t90 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_pivot_m2301(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_pivot_m2300 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_pivot_m2300_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_get_pivot_m2300_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_pivot_m2300_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_pivot_m2301 (RectTransform_t90 * __this, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_pivot_m2301_ftn) (RectTransform_t90 *, Vector2_t43 *);
	static RectTransform_INTERNAL_set_pivot_m2301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_pivot_m2301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::SendReapplyDrivenProperties(UnityEngine.RectTransform)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"
extern TypeInfo* RectTransform_t90_il2cpp_TypeInfo_var;
extern "C" void RectTransform_SendReapplyDrivenProperties_m2302 (Object_t * __this /* static, unused */, RectTransform_t90 * ___driven, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t346 * L_0 = ((RectTransform_t90_StaticFields*)RectTransform_t90_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ReapplyDrivenProperties_t346 * L_1 = ((RectTransform_t90_StaticFields*)RectTransform_t90_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		RectTransform_t90 * L_2 = ___driven;
		NullCheck(L_1);
		ReapplyDrivenProperties_Invoke_m2287(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetLocalCorners(UnityEngine.Vector3[])
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral141;
extern "C" void RectTransform_GetLocalCorners_m2303 (RectTransform_t90 * __this, Vector3U5BU5D_t129* ___fourCornersArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t145  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Vector3U5BU5D_t129* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t129* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m1369(NULL /*static, unused*/, _stringLiteral141, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		Rect_t145  L_2 = RectTransform_get_rect_m1601(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_x_m1669((&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Rect_get_y_m1670((&V_0), /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_xMax_m1743((&V_0), /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = Rect_get_yMax_m1744((&V_0), /*hidden argument*/NULL);
		V_4 = L_6;
		Vector3U5BU5D_t129* L_7 = ___fourCornersArray;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		float L_8 = V_1;
		float L_9 = V_2;
		Vector3_t42  L_10 = {0};
		Vector3__ctor_m1736(&L_10, L_8, L_9, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_7, 0, sizeof(Vector3_t42 ))) = L_10;
		Vector3U5BU5D_t129* L_11 = ___fourCornersArray;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		float L_12 = V_1;
		float L_13 = V_4;
		Vector3_t42  L_14 = {0};
		Vector3__ctor_m1736(&L_14, L_12, L_13, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_11, 1, sizeof(Vector3_t42 ))) = L_14;
		Vector3U5BU5D_t129* L_15 = ___fourCornersArray;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		float L_16 = V_3;
		float L_17 = V_4;
		Vector3_t42  L_18 = {0};
		Vector3__ctor_m1736(&L_18, L_16, L_17, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_15, 2, sizeof(Vector3_t42 ))) = L_18;
		Vector3U5BU5D_t129* L_19 = ___fourCornersArray;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		float L_20 = V_3;
		float L_21 = V_2;
		Vector3_t42  L_22 = {0};
		Vector3__ctor_m1736(&L_22, L_20, L_21, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_19, 3, sizeof(Vector3_t42 ))) = L_22;
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral142;
extern "C" void RectTransform_GetWorldCorners_m1610 (RectTransform_t90 * __this, Vector3U5BU5D_t129* ___fourCornersArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral142 = il2cpp_codegen_string_literal_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t189 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Vector3U5BU5D_t129* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t129* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m1369(NULL /*static, unused*/, _stringLiteral142, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		Vector3U5BU5D_t129* L_2 = ___fourCornersArray;
		RectTransform_GetLocalCorners_m2303(__this, L_2, /*hidden argument*/NULL);
		Transform_t189 * L_3 = Component_get_transform_m1496(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0051;
	}

IL_002f:
	{
		Vector3U5BU5D_t129* L_4 = ___fourCornersArray;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Transform_t189 * L_6 = V_0;
		Vector3U5BU5D_t129* L_7 = ___fourCornersArray;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		NullCheck(L_6);
		Vector3_t42  L_9 = Transform_TransformPoint_m1910(L_6, (*(Vector3_t42 *)((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_7, L_8, sizeof(Vector3_t42 )))), /*hidden argument*/NULL);
		*((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_4, L_5, sizeof(Vector3_t42 ))) = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" void RectTransform_set_offsetMin_m1562 (RectTransform_t90 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		Vector2_t43  L_0 = ___value;
		Vector2_t43  L_1 = RectTransform_get_anchoredPosition_m1616(__this, /*hidden argument*/NULL);
		Vector2_t43  L_2 = RectTransform_get_sizeDelta_m1569(__this, /*hidden argument*/NULL);
		Vector2_t43  L_3 = RectTransform_get_pivot_m1617(__this, /*hidden argument*/NULL);
		Vector2_t43  L_4 = Vector2_Scale_m1827(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Vector2_t43  L_5 = Vector2_op_Subtraction_m1439(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		Vector2_t43  L_6 = Vector2_op_Subtraction_m1439(NULL /*static, unused*/, L_0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector2_t43  L_7 = RectTransform_get_sizeDelta_m1569(__this, /*hidden argument*/NULL);
		Vector2_t43  L_8 = V_0;
		Vector2_t43  L_9 = Vector2_op_Subtraction_m1439(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m1543(__this, L_9, /*hidden argument*/NULL);
		Vector2_t43  L_10 = RectTransform_get_anchoredPosition_m1616(__this, /*hidden argument*/NULL);
		Vector2_t43  L_11 = V_0;
		Vector2_t43  L_12 = Vector2_get_one_m1552(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t43  L_13 = RectTransform_get_pivot_m1617(__this, /*hidden argument*/NULL);
		Vector2_t43  L_14 = Vector2_op_Subtraction_m1439(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Vector2_t43  L_15 = Vector2_Scale_m1827(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		Vector2_t43  L_16 = Vector2_op_Addition_m1604(NULL /*static, unused*/, L_10, L_15, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m1554(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
extern "C" void RectTransform_set_offsetMax_m1563 (RectTransform_t90 * __this, Vector2_t43  ___value, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		Vector2_t43  L_0 = ___value;
		Vector2_t43  L_1 = RectTransform_get_anchoredPosition_m1616(__this, /*hidden argument*/NULL);
		Vector2_t43  L_2 = RectTransform_get_sizeDelta_m1569(__this, /*hidden argument*/NULL);
		Vector2_t43  L_3 = Vector2_get_one_m1552(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t43  L_4 = RectTransform_get_pivot_m1617(__this, /*hidden argument*/NULL);
		Vector2_t43  L_5 = Vector2_op_Subtraction_m1439(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector2_t43  L_6 = Vector2_Scale_m1827(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		Vector2_t43  L_7 = Vector2_op_Addition_m1604(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/NULL);
		Vector2_t43  L_8 = Vector2_op_Subtraction_m1439(NULL /*static, unused*/, L_0, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector2_t43  L_9 = RectTransform_get_sizeDelta_m1569(__this, /*hidden argument*/NULL);
		Vector2_t43  L_10 = V_0;
		Vector2_t43  L_11 = Vector2_op_Addition_m1604(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m1543(__this, L_11, /*hidden argument*/NULL);
		Vector2_t43  L_12 = RectTransform_get_anchoredPosition_m1616(__this, /*hidden argument*/NULL);
		Vector2_t43  L_13 = V_0;
		Vector2_t43  L_14 = RectTransform_get_pivot_m1617(__this, /*hidden argument*/NULL);
		Vector2_t43  L_15 = Vector2_Scale_m1827(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		Vector2_t43  L_16 = Vector2_op_Addition_m1604(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m1554(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge,System.Single,System.Single)
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void RectTransform_SetInsetAndSizeFromParentEdge_m1974 (RectTransform_t90 * __this, int32_t ___edge, float ___inset, float ___size, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector2_t43  V_3 = {0};
	Vector2_t43  V_4 = {0};
	Vector2_t43  V_5 = {0};
	Vector2_t43  V_6 = {0};
	Vector2_t43  V_7 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	Vector2_t43 * G_B12_1 = {0};
	int32_t G_B11_0 = 0;
	Vector2_t43 * G_B11_1 = {0};
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	Vector2_t43 * G_B13_2 = {0};
	{
		int32_t L_0 = ___edge;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___edge;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}

IL_000e:
	{
		G_B4_0 = 1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B4_0;
		int32_t L_2 = ___edge;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___edge;
		G_B7_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B7_0 = 1;
	}

IL_0024:
	{
		V_1 = G_B7_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B10_0 = 1;
		goto IL_0032;
	}

IL_0031:
	{
		G_B10_0 = 0;
	}

IL_0032:
	{
		V_2 = (((float)G_B10_0));
		Vector2_t43  L_5 = RectTransform_get_anchorMin_m1614(__this, /*hidden argument*/NULL);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		Vector2_set_Item_m1747((&V_3), L_6, L_7, /*hidden argument*/NULL);
		Vector2_t43  L_8 = V_3;
		RectTransform_set_anchorMin_m1551(__this, L_8, /*hidden argument*/NULL);
		Vector2_t43  L_9 = RectTransform_get_anchorMax_m1615(__this, /*hidden argument*/NULL);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		Vector2_set_Item_m1747((&V_3), L_10, L_11, /*hidden argument*/NULL);
		Vector2_t43  L_12 = V_3;
		RectTransform_set_anchorMax_m1553(__this, L_12, /*hidden argument*/NULL);
		Vector2_t43  L_13 = RectTransform_get_sizeDelta_m1569(__this, /*hidden argument*/NULL);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = ___size;
		Vector2_set_Item_m1747((&V_4), L_14, L_15, /*hidden argument*/NULL);
		Vector2_t43  L_16 = V_4;
		RectTransform_set_sizeDelta_m1543(__this, L_16, /*hidden argument*/NULL);
		Vector2_t43  L_17 = RectTransform_get_anchoredPosition_m1616(__this, /*hidden argument*/NULL);
		V_5 = L_17;
		int32_t L_18 = V_0;
		bool L_19 = V_1;
		G_B11_0 = L_18;
		G_B11_1 = (&V_5);
		if (!L_19)
		{
			G_B12_0 = L_18;
			G_B12_1 = (&V_5);
			goto IL_00ac;
		}
	}
	{
		float L_20 = ___inset;
		float L_21 = ___size;
		Vector2_t43  L_22 = RectTransform_get_pivot_m1617(__this, /*hidden argument*/NULL);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = Vector2_get_Item_m1738((&V_6), L_23, /*hidden argument*/NULL);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = ___inset;
		float L_26 = ___size;
		Vector2_t43  L_27 = RectTransform_get_pivot_m1617(__this, /*hidden argument*/NULL);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = Vector2_get_Item_m1738((&V_7), L_28, /*hidden argument*/NULL);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		Vector2_set_Item_m1747(G_B13_2, G_B13_1, G_B13_0, /*hidden argument*/NULL);
		Vector2_t43  L_30 = V_5;
		RectTransform_set_anchoredPosition_m1554(__this, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_Axis.h"
extern "C" void RectTransform_SetSizeWithCurrentAnchors_m1949 (RectTransform_t90 * __this, int32_t ___axis, float ___size, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t43  V_1 = {0};
	Vector2_t43  V_2 = {0};
	Vector2_t43  V_3 = {0};
	Vector2_t43  V_4 = {0};
	{
		int32_t L_0 = ___axis;
		V_0 = L_0;
		Vector2_t43  L_1 = RectTransform_get_sizeDelta_m1569(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = ___size;
		Vector2_t43  L_4 = RectTransform_GetParentSize_m2304(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = Vector2_get_Item_m1738((&V_2), L_5, /*hidden argument*/NULL);
		Vector2_t43  L_7 = RectTransform_get_anchorMax_m1615(__this, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = Vector2_get_Item_m1738((&V_3), L_8, /*hidden argument*/NULL);
		Vector2_t43  L_10 = RectTransform_get_anchorMin_m1614(__this, /*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = Vector2_get_Item_m1738((&V_4), L_11, /*hidden argument*/NULL);
		Vector2_set_Item_m1747((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), /*hidden argument*/NULL);
		Vector2_t43  L_13 = V_1;
		RectTransform_set_sizeDelta_m1543(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransform::GetParentSize()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* RectTransform_t90_il2cpp_TypeInfo_var;
extern "C" Vector2_t43  RectTransform_GetParentSize_m2304 (RectTransform_t90 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t90 * V_0 = {0};
	Rect_t145  V_1 = {0};
	{
		Transform_t189 * L_0 = Transform_get_parent_m1414(__this, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t90 *)IsInstSealed(L_0, RectTransform_t90_il2cpp_TypeInfo_var));
		RectTransform_t90 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m1367(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Vector2_t43  L_3 = Vector2_get_zero_m1419(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		RectTransform_t90 * L_4 = V_0;
		NullCheck(L_4);
		Rect_t145  L_5 = RectTransform_get_rect_m1601(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector2_t43  L_6 = Rect_get_size_m1606((&V_1), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequest.h"
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequestMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// System.Void UnityEngine.ResourceRequest::.ctor()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern "C" void ResourceRequest__ctor_m2305 (ResourceRequest_t401 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2340(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
extern "C" Object_t269 * ResourceRequest_get_asset_m2306 (ResourceRequest_t401 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Path_1);
		Type_t * L_1 = (__this->___m_Type_2);
		Object_t269 * L_2 = Resources_Load_m2307(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
extern "C" Object_t269 * Resources_Load_m2307 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method)
{
	typedef Object_t269 * (*Resources_Load_m2307_ftn) (String_t*, Type_t *);
	static Resources_Load_m2307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_Load_m2307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(___path, ___systemTypeInstance);
}
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariables.h"
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariablesMethodDeclarations.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Void UnityEngine.SerializePrivateVariables::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SerializePrivateVariables__ctor_m2308 (SerializePrivateVariables_t403 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
// System.Void UnityEngine.SerializeField::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SerializeField__ctor_m2309 (SerializeField_t405 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" int32_t Shader_PropertyToID_m2310 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Shader_PropertyToID_m2310_ftn) (String_t*);
	static Shader_PropertyToID_m2310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m2310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern "C" void Material__ctor_m1924 (Material_t107 * __this, Material_t107 * ___source, const MethodInfo* method)
{
	{
		Object__ctor_m2414(__this, /*hidden argument*/NULL);
		Material_t107 * L_0 = ___source;
		Material_Internal_CreateWithMaterial_m2316(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern Il2CppCodeGenString* _stringLiteral143;
extern "C" Texture_t163 * Material_get_mainTexture_m1929 (Material_t107 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral143 = il2cpp_codegen_string_literal_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture_t163 * L_0 = Material_GetTexture_m2311(__this, _stringLiteral143, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern "C" Texture_t163 * Material_GetTexture_m2311 (Material_t107 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2310(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture_t163 * L_2 = Material_GetTexture_m2312(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Texture_t163 * Material_GetTexture_m2312 (Material_t107 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef Texture_t163 * (*Material_GetTexture_m2312_ftn) (Material_t107 *, int32_t);
	static Material_GetTexture_m2312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTexture_m2312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Material_SetFloat_m2313 (Material_t107 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2310(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___value;
		Material_SetFloat_m2314(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m2314 (Material_t107 * __this, int32_t ___nameID, float ___value, const MethodInfo* method)
{
	typedef void (*Material_SetFloat_m2314_ftn) (Material_t107 *, int32_t, float);
	static Material_SetFloat_m2314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetFloat_m2314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___nameID, ___value);
}
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m1926 (Material_t107 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = ___value;
		Material_SetFloat_m2313(__this, L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m1922 (Material_t107 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2310(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Material_HasProperty_m2315(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m2315 (Material_t107 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef bool (*Material_HasProperty_m2315_ftn) (Material_t107 *, int32_t);
	static Material_HasProperty_m2315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_HasProperty_m2315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m2316 (Object_t * __this /* static, unused */, Material_t107 * ___mono, Material_t107 * ___source, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithMaterial_m2316_ftn) (Material_t107 *, Material_t107 *);
	static Material_Internal_CreateWithMaterial_m2316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithMaterial_m2316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(___mono, ___source);
}
// UnityEngine.SortingLayer
#include "UnityEngine_UnityEngine_SortingLayer.h"
// UnityEngine.SortingLayer
#include "UnityEngine_UnityEngine_SortingLayerMethodDeclarations.h"
// System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t SortingLayer_GetLayerValueFromID_m1376 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	typedef int32_t (*SortingLayer_GetLayerValueFromID_m1376_ftn) (int32_t);
	static SortingLayer_GetLayerValueFromID_m1376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingLayer_GetLayerValueFromID_m1376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)");
	return _il2cpp_icall_func(___id);
}
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"
extern "C" void SphericalHarmonicsL2_Clear_m2317 (SphericalHarmonicsL2_t408 * __this, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_ClearInternal_m2318(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m2318 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t408 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t408 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2319(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2319 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t408 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2319_ftn) (SphericalHarmonicsL2_t408 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m2320 (SphericalHarmonicsL2_t408 * __this, Color_t68  ___color, const MethodInfo* method)
{
	{
		Color_t68  L_0 = ___color;
		SphericalHarmonicsL2_AddAmbientLightInternal_m2321(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m2321 (Object_t * __this /* static, unused */, Color_t68  ___color, SphericalHarmonicsL2_t408 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t408 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2322(NULL /*static, unused*/, (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2322 (Object_t * __this /* static, unused */, Color_t68 * ___color, SphericalHarmonicsL2_t408 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2322_ftn) (Color_t68 *, SphericalHarmonicsL2_t408 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2322_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2322_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___color, ___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m2323 (SphericalHarmonicsL2_t408 * __this, Vector3_t42  ___direction, Color_t68  ___color, float ___intensity, const MethodInfo* method)
{
	Color_t68  V_0 = {0};
	{
		Color_t68  L_0 = ___color;
		float L_1 = ___intensity;
		Color_t68  L_2 = Color_op_Multiply_m1907(NULL /*static, unused*/, L_0, ((float)((float)(2.0f)*(float)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t42  L_3 = ___direction;
		Color_t68  L_4 = V_0;
		SphericalHarmonicsL2_AddDirectionalLightInternal_m2324(NULL /*static, unused*/, L_3, L_4, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m2324 (Object_t * __this /* static, unused */, Vector3_t42  ___direction, Color_t68  ___color, SphericalHarmonicsL2_t408 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t408 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2325(NULL /*static, unused*/, (&___direction), (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2325 (Object_t * __this /* static, unused */, Vector3_t42 * ___direction, Color_t68 * ___color, SphericalHarmonicsL2_t408 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2325_ftn) (Vector3_t42 *, Color_t68 *, SphericalHarmonicsL2_t408 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___direction, ___color, ___sh);
}
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral144;
extern "C" float SphericalHarmonicsL2_get_Item_m2326 (SphericalHarmonicsL2_t408 * __this, int32_t ___rgb, int32_t ___coefficient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral144 = il2cpp_codegen_string_literal_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->___shr0_0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->___shr1_1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->___shr2_2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->___shr3_3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->___shr4_4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->___shr5_5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->___shr6_6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->___shr7_7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->___shr8_8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->___shg0_9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->___shg1_10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->___shg2_11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->___shg3_12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->___shg4_13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->___shg5_14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->___shg6_15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->___shg7_16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->___shg8_17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->___shb0_18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->___shb1_19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->___shb2_20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->___shb3_21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->___shb4_22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->___shb5_23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->___shb6_24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->___shb7_25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->___shb8_26);
		return L_30;
	}

IL_013d:
	{
		IndexOutOfRangeException_t545 * L_31 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_31, _stringLiteral144, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_31);
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t545_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral144;
extern "C" void SphericalHarmonicsL2_set_Item_m2327 (SphericalHarmonicsL2_t408 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		_stringLiteral144 = il2cpp_codegen_string_literal_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = ___value;
		__this->___shr0_0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = ___value;
		__this->___shr1_1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = ___value;
		__this->___shr2_2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = ___value;
		__this->___shr3_3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = ___value;
		__this->___shr4_4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = ___value;
		__this->___shr5_5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = ___value;
		__this->___shr6_6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = ___value;
		__this->___shr7_7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = ___value;
		__this->___shr8_8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = ___value;
		__this->___shg0_9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = ___value;
		__this->___shg1_10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = ___value;
		__this->___shg2_11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = ___value;
		__this->___shg3_12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = ___value;
		__this->___shg4_13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = ___value;
		__this->___shg5_14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = ___value;
		__this->___shg6_15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = ___value;
		__this->___shg7_16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = ___value;
		__this->___shg8_17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = ___value;
		__this->___shb0_18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = ___value;
		__this->___shb1_19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = ___value;
		__this->___shb2_20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = ___value;
		__this->___shb3_21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = ___value;
		__this->___shb4_22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = ___value;
		__this->___shb5_23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = ___value;
		__this->___shb6_24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = ___value;
		__this->___shb7_25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = ___value;
		__this->___shb8_26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		IndexOutOfRangeException_t545 * L_31 = (IndexOutOfRangeException_t545 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t545_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2875(L_31, _stringLiteral144, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_31);
	}

IL_01cf:
	{
		return;
	}
}
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m2328 (SphericalHarmonicsL2_t408 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->___shr0_0);
		int32_t L_2 = Single_GetHashCode_m2869(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->___shr1_1);
		int32_t L_5 = Single_GetHashCode_m2869(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->___shr2_2);
		int32_t L_8 = Single_GetHashCode_m2869(L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->___shr3_3);
		int32_t L_11 = Single_GetHashCode_m2869(L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->___shr4_4);
		int32_t L_14 = Single_GetHashCode_m2869(L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->___shr5_5);
		int32_t L_17 = Single_GetHashCode_m2869(L_16, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->___shr6_6);
		int32_t L_20 = Single_GetHashCode_m2869(L_19, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->___shr7_7);
		int32_t L_23 = Single_GetHashCode_m2869(L_22, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->___shr8_8);
		int32_t L_26 = Single_GetHashCode_m2869(L_25, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->___shg0_9);
		int32_t L_29 = Single_GetHashCode_m2869(L_28, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->___shg1_10);
		int32_t L_32 = Single_GetHashCode_m2869(L_31, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->___shg2_11);
		int32_t L_35 = Single_GetHashCode_m2869(L_34, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->___shg3_12);
		int32_t L_38 = Single_GetHashCode_m2869(L_37, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->___shg4_13);
		int32_t L_41 = Single_GetHashCode_m2869(L_40, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->___shg5_14);
		int32_t L_44 = Single_GetHashCode_m2869(L_43, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->___shg6_15);
		int32_t L_47 = Single_GetHashCode_m2869(L_46, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->___shg7_16);
		int32_t L_50 = Single_GetHashCode_m2869(L_49, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->___shg8_17);
		int32_t L_53 = Single_GetHashCode_m2869(L_52, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->___shb0_18);
		int32_t L_56 = Single_GetHashCode_m2869(L_55, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->___shb1_19);
		int32_t L_59 = Single_GetHashCode_m2869(L_58, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->___shb2_20);
		int32_t L_62 = Single_GetHashCode_m2869(L_61, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->___shb3_21);
		int32_t L_65 = Single_GetHashCode_m2869(L_64, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->___shb4_22);
		int32_t L_68 = Single_GetHashCode_m2869(L_67, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->___shb5_23);
		int32_t L_71 = Single_GetHashCode_m2869(L_70, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->___shb6_24);
		int32_t L_74 = Single_GetHashCode_m2869(L_73, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->___shb7_25);
		int32_t L_77 = Single_GetHashCode_m2869(L_76, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->___shb8_26);
		int32_t L_80 = Single_GetHashCode_m2869(L_79, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var;
extern "C" bool SphericalHarmonicsL2_Equals_m2329 (SphericalHarmonicsL2_t408 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t408  V_0 = {0};
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(SphericalHarmonicsL2_t408 *)((SphericalHarmonicsL2_t408 *)UnBox (L_1, SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var))));
		SphericalHarmonicsL2_t408  L_2 = V_0;
		bool L_3 = SphericalHarmonicsL2_op_Equality_m2333(NULL /*static, unused*/, (*(SphericalHarmonicsL2_t408 *)__this), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
extern TypeInfo* SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t408  SphericalHarmonicsL2_op_Multiply_m2330 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t408  ___lhs, float ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t408  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ___rhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ___rhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ___rhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ___rhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ___rhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ___rhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ___rhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ___rhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ___rhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ___rhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ___rhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ___rhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ___rhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ___rhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ___rhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ___rhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ___rhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ___rhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ___rhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ___rhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ___rhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ___rhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ___rhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ___rhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ___rhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ___rhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ___rhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t408  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t408  SphericalHarmonicsL2_op_Multiply_m2331 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t408  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t408  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___rhs)->___shr0_0);
		float L_1 = ___lhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___rhs)->___shr1_1);
		float L_3 = ___lhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___rhs)->___shr2_2);
		float L_5 = ___lhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___rhs)->___shr3_3);
		float L_7 = ___lhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___rhs)->___shr4_4);
		float L_9 = ___lhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___rhs)->___shr5_5);
		float L_11 = ___lhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___rhs)->___shr6_6);
		float L_13 = ___lhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___rhs)->___shr7_7);
		float L_15 = ___lhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___rhs)->___shr8_8);
		float L_17 = ___lhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___rhs)->___shg0_9);
		float L_19 = ___lhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___rhs)->___shg1_10);
		float L_21 = ___lhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___rhs)->___shg2_11);
		float L_23 = ___lhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___rhs)->___shg3_12);
		float L_25 = ___lhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___rhs)->___shg4_13);
		float L_27 = ___lhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___rhs)->___shg5_14);
		float L_29 = ___lhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___rhs)->___shg6_15);
		float L_31 = ___lhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___rhs)->___shg7_16);
		float L_33 = ___lhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___rhs)->___shg8_17);
		float L_35 = ___lhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___rhs)->___shb0_18);
		float L_37 = ___lhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___rhs)->___shb1_19);
		float L_39 = ___lhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___rhs)->___shb2_20);
		float L_41 = ___lhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___rhs)->___shb3_21);
		float L_43 = ___lhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___rhs)->___shb4_22);
		float L_45 = ___lhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___rhs)->___shb5_23);
		float L_47 = ___lhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___rhs)->___shb6_24);
		float L_49 = ___lhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___rhs)->___shb7_25);
		float L_51 = ___lhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___rhs)->___shb8_26);
		float L_53 = ___lhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t408  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t408  SphericalHarmonicsL2_op_Addition_m2332 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t408  ___lhs, SphericalHarmonicsL2_t408  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t408  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t408_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		(&V_0)->___shr0_0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		(&V_0)->___shr1_1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		(&V_0)->___shr2_2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		(&V_0)->___shr3_3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		(&V_0)->___shr4_4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		(&V_0)->___shr5_5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		(&V_0)->___shr6_6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		(&V_0)->___shr7_7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		(&V_0)->___shr8_8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		(&V_0)->___shg0_9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		(&V_0)->___shg1_10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		(&V_0)->___shg2_11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		(&V_0)->___shg3_12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		(&V_0)->___shg4_13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		(&V_0)->___shg5_14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		(&V_0)->___shg6_15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		(&V_0)->___shg7_16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		(&V_0)->___shg8_17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		(&V_0)->___shb0_18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		(&V_0)->___shb1_19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		(&V_0)->___shb2_20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		(&V_0)->___shb3_21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		(&V_0)->___shb4_22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		(&V_0)->___shb5_23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		(&V_0)->___shb6_24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		(&V_0)->___shb7_25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		(&V_0)->___shb8_26 = ((float)((float)L_52+(float)L_53));
		SphericalHarmonicsL2_t408  L_54 = V_0;
		return L_54;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m2333 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t408  ___lhs, SphericalHarmonicsL2_t408  ___rhs, const MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Inequality_m2334 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t408  ___lhs, SphericalHarmonicsL2_t408  ___rhs, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t408  L_0 = ___lhs;
		SphericalHarmonicsL2_t408  L_1 = ___rhs;
		bool L_2 = SphericalHarmonicsL2_op_Equality_m2333(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"
extern "C" Rect_t145  Sprite_get_rect_m1725 (Sprite_t85 * __this, const MethodInfo* method)
{
	Rect_t145  V_0 = {0};
	{
		Sprite_INTERNAL_get_rect_m2335(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t145  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_rect_m2335 (Sprite_t85 * __this, Rect_t145 * ___value, const MethodInfo* method)
{
	typedef void (*Sprite_INTERNAL_get_rect_m2335_ftn) (Sprite_t85 *, Rect_t145 *);
	static Sprite_INTERNAL_get_rect_m2335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_get_rect_m2335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m1720 (Sprite_t85 * __this, const MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m1720_ftn) (Sprite_t85 *);
	static Sprite_get_pixelsPerUnit_m1720_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m1720_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t112 * Sprite_get_texture_m1717 (Sprite_t85 * __this, const MethodInfo* method)
{
	typedef Texture2D_t112 * (*Sprite_get_texture_m1717_ftn) (Sprite_t85 *);
	static Sprite_get_texture_m1717_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m1717_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t145  Sprite_get_textureRect_m1742 (Sprite_t85 * __this, const MethodInfo* method)
{
	Rect_t145  V_0 = {0};
	{
		Sprite_INTERNAL_get_textureRect_m2336(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t145  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_textureRect_m2336 (Sprite_t85 * __this, Rect_t145 * ___value, const MethodInfo* method)
{
	typedef void (*Sprite_INTERNAL_get_textureRect_m2336_ftn) (Sprite_t85 *, Rect_t145 *);
	static Sprite_INTERNAL_get_textureRect_m2336_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_get_textureRect_m2336_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t232  Sprite_get_border_m1718 (Sprite_t85 * __this, const MethodInfo* method)
{
	Vector4_t232  V_0 = {0};
	{
		Sprite_INTERNAL_get_border_m2337(__this, (&V_0), /*hidden argument*/NULL);
		Vector4_t232  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
extern "C" void Sprite_INTERNAL_get_border_m2337 (Sprite_t85 * __this, Vector4_t232 * ___value, const MethodInfo* method)
{
	typedef void (*Sprite_INTERNAL_get_border_m2337_ftn) (Sprite_t85 *, Vector4_t232 *);
	static Sprite_INTERNAL_get_border_m2337_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_get_border_m2337_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtility.h"
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
extern "C" Vector4_t232  DataUtility_GetInnerUV_m1732 (Object_t * __this /* static, unused */, Sprite_t85 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t232  (*DataUtility_GetInnerUV_m1732_ftn) (Sprite_t85 *);
	static DataUtility_GetInnerUV_m1732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m1732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern "C" Vector4_t232  DataUtility_GetOuterUV_m1731 (Object_t * __this /* static, unused */, Sprite_t85 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t232  (*DataUtility_GetOuterUV_m1731_ftn) (Sprite_t85 *);
	static DataUtility_GetOuterUV_m1731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m1731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern "C" Vector4_t232  DataUtility_GetPadding_m1724 (Object_t * __this /* static, unused */, Sprite_t85 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t232  (*DataUtility_GetPadding_m1724_ftn) (Sprite_t85 *);
	static DataUtility_GetPadding_m1724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m1724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"
extern "C" Vector2_t43  DataUtility_GetMinSize_m1740 (Object_t * __this /* static, unused */, Sprite_t85 * ___sprite, const MethodInfo* method)
{
	Vector2_t43  V_0 = {0};
	{
		Sprite_t85 * L_0 = ___sprite;
		DataUtility_Internal_GetMinSize_m2338(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		Vector2_t43  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m2338 (Object_t * __this /* static, unused */, Sprite_t85 * ___sprite, Vector2_t43 * ___output, const MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m2338_ftn) (Sprite_t85 *, Vector2_t43 *);
	static DataUtility_Internal_GetMinSize_m2338_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m2338_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___sprite, ___output);
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.CacheIndex
extern "C" void CacheIndex_t410_marshal(const CacheIndex_t410& unmarshaled, CacheIndex_t410_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
extern "C" void CacheIndex_t410_marshal_back(const CacheIndex_t410_marshaled& marshaled, CacheIndex_t410& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
extern "C" void CacheIndex_t410_marshal_cleanup(CacheIndex_t410_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityString_Format_m2339 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t280* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t280* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1925(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
// System.Void UnityEngine.AsyncOperation::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void AsyncOperation__ctor_m2340 (AsyncOperation_t361 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2458(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2341 (AsyncOperation_t361 * __this, const MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m2341_ftn) (AsyncOperation_t361 *);
	static AsyncOperation_InternalDestroy_m2341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m2341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AsyncOperation_Finalize_m2342 (AsyncOperation_t361 * __this, const MethodInfo* method)
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
		AsyncOperation_InternalDestroy_m2341(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t361_marshal(const AsyncOperation_t361& unmarshaled, AsyncOperation_t361_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void AsyncOperation_t361_marshal_back(const AsyncOperation_t361_marshaled& marshaled, AsyncOperation_t361& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t361_marshal_cleanup(AsyncOperation_t361_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void LogCallback__ctor_m2343 (LogCallback_t412 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
extern "C" void LogCallback_Invoke_m2344 (LogCallback_t412 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m2344((LogCallback_t412 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t412(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* LogType_t366_il2cpp_TypeInfo_var;
extern "C" Object_t * LogCallback_BeginInvoke_m2345 (LogCallback_t412 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(LogType_t366_il2cpp_TypeInfo_var, &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m2346 (LogCallback_t412 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m1582 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m1582_ftn) ();
	static Application_get_isPlaying_m1582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m1582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m1860 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m1860_ftn) ();
	static Application_get_isEditor_m1860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m1860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m1756 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m1756_ftn) ();
	static Application_get_platform_m1756_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m1756_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
extern TypeInfo* Application_t413_il2cpp_TypeInfo_var;
extern "C" void Application_CallLogCallback_m2347 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(300);
		s_Il2CppMethodIntialized = true;
	}
	LogCallback_t412 * V_0 = {0};
	LogCallback_t412 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t412 * L_1 = ((Application_t413_StaticFields*)Application_t413_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t412 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t412 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		LogCallback_Invoke_m2344(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001b:
	{
		LogCallback_t412 * L_7 = ((Application_t413_StaticFields*)Application_t413_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t412 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t412 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		LogCallback_Invoke_m2344(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// System.Void UnityEngine.Behaviour::.ctor()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void Behaviour__ctor_m2348 (Behaviour_t349 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m2426(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" bool Behaviour_get_enabled_m1432 (Behaviour_t349 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m1432_ftn) (Behaviour_t349 *);
	static Behaviour_get_enabled_m1432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m1432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Behaviour_set_enabled_m1587 (Behaviour_t349 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m1587_ftn) (Behaviour_t349 *, bool);
	static Behaviour_set_enabled_m1587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m1587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" bool Behaviour_get_isActiveAndEnabled_m1423 (Behaviour_t349 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m1423_ftn) (Behaviour_t349 *);
	static Behaviour_get_isActiveAndEnabled_m1423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m1423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void CameraCallback__ctor_m2349 (CameraCallback_t414 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern "C" void CameraCallback_Invoke_m2350 (CameraCallback_t414 * __this, Camera_t61 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m2350((CameraCallback_t414 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t61 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t61 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t414(Il2CppObject* delegate, Camera_t61 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t61 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * CameraCallback_BeginInvoke_m2351 (CameraCallback_t414 * __this, Camera_t61 * ___cam, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m2352 (CameraCallback_t414 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m1490 (Camera_t61 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m1490_ftn) (Camera_t61 *);
	static Camera_get_nearClipPlane_m1490_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m1490_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m1489 (Camera_t61 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m1489_ftn) (Camera_t61 *);
	static Camera_get_farClipPlane_m1489_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m1489_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m1374 (Camera_t61 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_depth_m1374_ftn) (Camera_t61 *);
	static Camera_get_depth_m1374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m1374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m1507 (Camera_t61 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m1507_ftn) (Camera_t61 *);
	static Camera_get_cullingMask_m1507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m1507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m2353 (Camera_t61 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m2353_ftn) (Camera_t61 *);
	static Camera_get_eventMask_m2353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m2353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" Rect_t145  Camera_get_pixelRect_m2354 (Camera_t61 * __this, const MethodInfo* method)
{
	Rect_t145  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m2355(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t145  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m2355 (Camera_t61 * __this, Rect_t145 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m2355_ftn) (Camera_t61 *, Rect_t145 *);
	static Camera_INTERNAL_get_pixelRect_m2355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m2355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t388 * Camera_get_targetTexture_m2356 (Camera_t61 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t388 * (*Camera_get_targetTexture_m2356_ftn) (Camera_t61 *);
	static Camera_get_targetTexture_m2356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m2356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m2357 (Camera_t61 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m2357_ftn) (Camera_t61 *);
	static Camera_get_clearFlags_m2357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m2357_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector3_t42  Camera_ScreenToViewportPoint_m1693 (Camera_t61 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m2358(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern "C" Vector3_t42  Camera_INTERNAL_CALL_ScreenToViewportPoint_m2358 (Object_t * __this /* static, unused */, Camera_t61 * ___self, Vector3_t42 * ___position, const MethodInfo* method)
{
	typedef Vector3_t42  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m2358_ftn) (Camera_t61 *, Vector3_t42 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m2358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m2358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t292  Camera_ScreenPointToRay_m1488 (Camera_t61 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Ray_t292  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m2359(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t292  Camera_INTERNAL_CALL_ScreenPointToRay_m2359 (Object_t * __this /* static, unused */, Camera_t61 * ___self, Vector3_t42 * ___position, const MethodInfo* method)
{
	typedef Ray_t292  (*Camera_INTERNAL_CALL_ScreenPointToRay_m2359_ftn) (Camera_t61 *, Vector3_t42 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m2359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m2359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t61 * Camera_get_main_m1506 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t61 * (*Camera_get_main_m1506_ftn) ();
	static Camera_get_main_m1506_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m1506_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m2360 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m2360_ftn) ();
	static Camera_get_allCamerasCount_m2360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m2360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
#include "UnityEngine_ArrayTypes.h"
extern "C" int32_t Camera_GetAllCameras_m2361 (Object_t * __this /* static, unused */, CameraU5BU5D_t490* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m2361_ftn) (CameraU5BU5D_t490*);
	static Camera_GetAllCameras_m2361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m2361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"
extern TypeInfo* Camera_t61_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m2362 (Object_t * __this /* static, unused */, Camera_t61 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t414 * L_0 = ((Camera_t61_StaticFields*)Camera_t61_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t414 * L_1 = ((Camera_t61_StaticFields*)Camera_t61_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		Camera_t61 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m2350(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern TypeInfo* Camera_t61_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreRender_m2363 (Object_t * __this /* static, unused */, Camera_t61 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t414 * L_0 = ((Camera_t61_StaticFields*)Camera_t61_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t414 * L_1 = ((Camera_t61_StaticFields*)Camera_t61_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		Camera_t61 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m2350(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern TypeInfo* Camera_t61_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPostRender_m2364 (Object_t * __this /* static, unused */, Camera_t61 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t414 * L_0 = ((Camera_t61_StaticFields*)Camera_t61_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t414 * L_1 = ((Camera_t61_StaticFields*)Camera_t61_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		Camera_t61 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m2350(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" GameObject_t6 * Camera_RaycastTry_m2365 (Camera_t61 * __this, Ray_t292  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		int32_t L_2 = V_0;
		GameObject_t6 * L_3 = Camera_INTERNAL_CALL_RaycastTry_m2366(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
extern "C" GameObject_t6 * Camera_INTERNAL_CALL_RaycastTry_m2366 (Object_t * __this /* static, unused */, Camera_t61 * ___self, Ray_t292 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef GameObject_t6 * (*Camera_INTERNAL_CALL_RaycastTry_m2366_ftn) (Camera_t61 *, Ray_t292 *, float, int32_t, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m2366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m2366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask, ___queryTriggerInteraction);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t6 * Camera_RaycastTry2D_m2367 (Camera_t61 * __this, Ray_t292  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t6 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m2368(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t6 * Camera_INTERNAL_CALL_RaycastTry2D_m2368 (Object_t * __this /* static, unused */, Camera_t61 * ___self, Ray_t292 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t6 * (*Camera_INTERNAL_CALL_RaycastTry2D_m2368_ftn) (Camera_t61 *, Ray_t292 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m2368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m2368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" void Debug_Internal_Log_m2369 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t269 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m2369_ftn) (int32_t, String_t*, Object_t269 *);
	static Debug_Internal_Log_m2369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m2369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
// System.Exception
#include "mscorlib_System_Exception.h"
extern "C" void Debug_Internal_LogException_m2370 (Object_t * __this /* static, unused */, Exception_t287 * ___exception, Object_t269 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m2370_ftn) (Exception_t287 *, Object_t269 *);
	static Debug_Internal_LogException_m2370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m2370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral145;
extern "C" void Debug_Log_m2371 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral145 = il2cpp_codegen_string_literal_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral145;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m2369(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern Il2CppCodeGenString* _stringLiteral145;
extern "C" void Debug_LogError_m1369 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral145 = il2cpp_codegen_string_literal_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral145;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m2369(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m1588 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t269 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t269 * L_2 = ___context;
		Debug_Internal_Log_m2369(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m2372 (Object_t * __this /* static, unused */, Exception_t287 * ___exception, const MethodInfo* method)
{
	{
		Exception_t287 * L_0 = ___exception;
		Debug_Internal_LogException_m2370(NULL /*static, unused*/, L_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m1536 (Object_t * __this /* static, unused */, Exception_t287 * ___exception, Object_t269 * ___context, const MethodInfo* method)
{
	{
		Exception_t287 * L_0 = ___exception;
		Object_t269 * L_1 = ___context;
		Debug_Internal_LogException_m2370(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m2373 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m2369(NULL /*static, unused*/, 1, L_1, (Object_t269 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m1923 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t269 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t269 * L_2 = ___context;
		Debug_Internal_Log_m2369(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void DisplaysUpdatedDelegate__ctor_m2374 (DisplaysUpdatedDelegate_t416 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m2375 (DisplaysUpdatedDelegate_t416 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m2375((DisplaysUpdatedDelegate_t416 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t416(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m2376 (DisplaysUpdatedDelegate_t416 * __this, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m2377 (DisplaysUpdatedDelegate_t416 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Void UnityEngine.Display::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern "C" void Display__ctor_m2378 (Display_t417 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m2879(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Display__ctor_m2379 (Display_t417 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"
extern TypeInfo* DisplayU5BU5D_t418_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m2380 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t418* L_0 = ((DisplayU5BU5D_t418*)SZArrayNew(DisplayU5BU5D_t418_il2cpp_TypeInfo_var, 1));
		Display_t417 * L_1 = (Display_t417 *)il2cpp_codegen_object_new (Display_t417_il2cpp_TypeInfo_var);
		Display__ctor_m2378(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t417 **)(Display_t417 **)SZArrayLdElema(L_0, 0, sizeof(Display_t417 *))) = (Display_t417 *)L_1;
		((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t418* L_2 = ((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t417 **)(Display_t417 **)SZArrayLdElema(L_2, L_3, sizeof(Display_t417 *)));
		((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t416 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t416_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m2381 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t416 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		DisplaysUpdatedDelegate_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t416 * L_0 = ((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t416 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t416 *)CastclassSealed(L_2, DisplaysUpdatedDelegate_t416_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t416_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m2382 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t416 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		DisplaysUpdatedDelegate_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t416 * L_0 = ((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t416 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t416 *)CastclassSealed(L_2, DisplaysUpdatedDelegate_t416_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m2383 (Display_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m2399(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m2384 (Display_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m2399(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m2385 (Display_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m2398(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m2386 (Display_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m2398(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t473  Display_get_colorBuffer_m2387 (Display_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t473  V_0 = {0};
	RenderBuffer_t473  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m2400(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t473  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t473  Display_get_depthBuffer_m2388 (Display_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t473  V_0 = {0};
	RenderBuffer_t473  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m2400(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t473  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m2389 (Display_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m2402(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m2390 (Display_t417 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m2402(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m2391 (Display_t417 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m2403(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m2392 (Display_t417 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m2401(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m2393 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m2404(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  Display_RelativeMouseAt_m2394 (Object_t * __this /* static, unused */, Vector3_t42  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m2405(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t42  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" Display_t417 * Display_get_main_m2395 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		Display_t417 * L_0 = ((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* DisplayU5BU5D_t418_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m2396 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t527* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t527* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t418*)SZArrayNew(DisplayU5BU5D_t418_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t418* L_1 = ((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t527* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t417 * L_6 = (Display_t417 *)il2cpp_codegen_object_new (Display_t417_il2cpp_TypeInfo_var);
		Display__ctor_m2379(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5, sizeof(IntPtr_t))), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t417 **)(Display_t417 **)SZArrayLdElema(L_1, L_2, sizeof(Display_t417 *))) = (Display_t417 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t527* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t418* L_10 = ((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t417 **)(Display_t417 **)SZArrayLdElema(L_10, L_11, sizeof(Display_t417 *)));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"
extern TypeInfo* Display_t417_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m2397 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t416 * L_0 = ((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t417_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t416 * L_1 = ((Display_t417_StaticFields*)Display_t417_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		DisplaysUpdatedDelegate_Invoke_m2375(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m2398 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m2398_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m2398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m2398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m2399 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m2399_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m2399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m2399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m2400 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t473 * ___color, RenderBuffer_t473 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m2400_ftn) (IntPtr_t, RenderBuffer_t473 *, RenderBuffer_t473 *);
	static Display_GetRenderingBuffersImpl_m2400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m2400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m2401 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m2401_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m2401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m2401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m2402 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m2402_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m2402_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m2402_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m2403 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m2403_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m2403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m2403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m2404 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m2404_ftn) ();
	static Display_MultiDisplayLicenseImpl_m2404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m2404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m2405 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m2405_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m2405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m2405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Void UnityEngine.MonoBehaviour::.ctor()
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" void MonoBehaviour__ctor_m1388 (MonoBehaviour_t13 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m2348(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" Coroutine_t148 * MonoBehaviour_StartCoroutine_m1528 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t148 * L_1 = MonoBehaviour_StartCoroutine_Auto_m2406(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t148 * MonoBehaviour_StartCoroutine_Auto_m2406 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t148 * (*MonoBehaviour_StartCoroutine_Auto_m2406_ftn) (MonoBehaviour_t13 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m2406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m2406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m2407 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2408(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern "C" void MonoBehaviour_StopCoroutine_m1867 (MonoBehaviour_t13 * __this, Coroutine_t148 * ___routine, const MethodInfo* method)
{
	{
		Coroutine_t148 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m2409(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2408 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2408_ftn) (MonoBehaviour_t13 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m2409 (MonoBehaviour_t13 * __this, Coroutine_t148 * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m2409_ftn) (MonoBehaviour_t13 *, Coroutine_t148 *);
	static MonoBehaviour_StopCoroutine_Auto_m2409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m2409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1436 (Touch_t257 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t43  Touch_get_position_m1438 (Touch_t257 * __this, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m1437 (Touch_t257 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// Conversion methods for marshalling of: UnityEngine.Touch
extern "C" void Touch_t257_marshal(const Touch_t257& unmarshaled, Touch_t257_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
extern "C" void Touch_t257_marshal_back(const Touch_t257_marshaled& marshaled, Touch_t257& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
extern "C" void Touch_t257_marshal_cleanup(Touch_t257_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m2410 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" float Input_GetAxisRaw_m1463 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m1463_ftn) (String_t*);
	static Input_GetAxisRaw_m1463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m1463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m1462 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m1462_ftn) (String_t*);
	static Input_GetButtonDown_m1462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m1462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool Input_GetMouseButton_m1484 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m1484_ftn) (int32_t);
	static Input_GetMouseButton_m1484_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m1484_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m1440 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m1440_ftn) (int32_t);
	static Input_GetMouseButtonDown_m1440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m1440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m1441 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m1441_ftn) (int32_t);
	static Input_GetMouseButtonUp_m1441_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m1441_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
extern TypeInfo* Input_t285_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  Input_get_mousePosition_m1442 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t285_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mousePosition_m2411(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C" void Input_INTERNAL_get_mousePosition_m2411 (Object_t * __this /* static, unused */, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mousePosition_m2411_ftn) (Vector3_t42 *);
	static Input_INTERNAL_get_mousePosition_m2411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mousePosition_m2411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern TypeInfo* Input_t285_il2cpp_TypeInfo_var;
extern "C" Vector2_t43  Input_get_mouseScrollDelta_m1444 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t43  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t285_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mouseScrollDelta_m2412(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector2_t43  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_get_mouseScrollDelta_m2412 (Object_t * __this /* static, unused */, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mouseScrollDelta_m2412_ftn) (Vector2_t43 *);
	static Input_INTERNAL_get_mouseScrollDelta_m2412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mouseScrollDelta_m2412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m1461 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m1461_ftn) ();
	static Input_get_mousePresent_m1461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m1461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t257  Input_GetTouch_m1482 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t257  (*Input_GetTouch_m1482_ftn) (int32_t);
	static Input_GetTouch_m1482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m1482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m1483 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m1483_ftn) ();
	static Input_get_touchCount_m1483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m1483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m1481 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
extern "C" void Input_set_imeCompositionMode_m1842 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m1842_ftn) (int32_t);
	static Input_set_imeCompositionMode_m1842_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m1842_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m1773 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m1773_ftn) ();
	static Input_get_compositionString_m1773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m1773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* Input_t285_il2cpp_TypeInfo_var;
extern "C" void Input_set_compositionCursorPos_m1829 (Object_t * __this /* static, unused */, Vector2_t43  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t285_il2cpp_TypeInfo_var);
		Input_INTERNAL_set_compositionCursorPos_m2413(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m2413 (Object_t * __this /* static, unused */, Vector2_t43 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m2413_ftn) (Vector2_t43 *);
	static Input_INTERNAL_set_compositionCursorPos_m2413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m2413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"
// System.Void UnityEngine.Object::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Object__ctor_m2414 (Object_t269 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" Object_t269 * Object_Internal_CloneSingle_m2415 (Object_t * __this /* static, unused */, Object_t269 * ___data, const MethodInfo* method)
{
	typedef Object_t269 * (*Object_Internal_CloneSingle_m2415_ftn) (Object_t269 *);
	static Object_Internal_CloneSingle_m2415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m2415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Object_Destroy_m2416 (Object_t * __this /* static, unused */, Object_t269 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_Destroy_m2416_ftn) (Object_t269 *, float);
	static Object_Destroy_m2416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m2416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Object_Destroy_m1628 (Object_t * __this /* static, unused */, Object_t269 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t269 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m2416(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Object_DestroyImmediate_m2417 (Object_t * __this /* static, unused */, Object_t269 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m2417_ftn) (Object_t269 *, bool);
	static Object_DestroyImmediate_m2417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m2417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m1774 (Object_t * __this /* static, unused */, Object_t269 * ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t269 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m2417(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m1813 (Object_t269 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m1813_ftn) (Object_t269 *);
	static Object_get_name_m1813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m1813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Object_set_name_m1565 (Object_t269 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Object_set_name_m1565_ftn) (Object_t269 *, String_t*);
	static Object_set_name_m1565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m1565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
extern "C" void Object_set_hideFlags_m1668 (Object_t269 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m1668_ftn) (Object_t269 *, int32_t);
	static Object_set_hideFlags_m1668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m1668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m2418 (Object_t269 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m2418_ftn) (Object_t269 *);
	static Object_ToString_m2418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m2418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Object_t269_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m2419 (Object_t269 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m2421(NULL /*static, unused*/, __this, ((Object_t269 *)IsInstClass(L_0, Object_t269_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m2420 (Object_t269 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m2423(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m2421 (Object_t * __this /* static, unused */, Object_t269 * ___lhs, Object_t269 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t269 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t269 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t269 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t269 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t269 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m2422(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t269 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m2422(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t269 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t269 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m2422 (Object_t * __this /* static, unused */, Object_t269 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t269 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m2424(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m2871(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m2423 (Object_t269 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m2424 (Object_t269 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t339_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m2425 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t339 * L_2 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_000d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m1367 (Object_t * __this /* static, unused */, Object_t269 * ___exists, const MethodInfo* method)
{
	{
		Object_t269 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m2421(NULL /*static, unused*/, L_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m1370 (Object_t * __this /* static, unused */, Object_t269 * ___x, Object_t269 * ___y, const MethodInfo* method)
{
	{
		Object_t269 * L_0 = ___x;
		Object_t269 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m2421(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m1373 (Object_t * __this /* static, unused */, Object_t269 * ___x, Object_t269 * ___y, const MethodInfo* method)
{
	{
		Object_t269 * L_0 = ___x;
		Object_t269 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m2421(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
extern "C" void Object_t269_marshal(const Object_t269& unmarshaled, Object_t269_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = reinterpret_cast<intptr_t>((unmarshaled.___m_CachedPtr_1).___m_value_0);
}
extern "C" void Object_t269_marshal_back(const Object_t269_marshaled& marshaled, Object_t269& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	(unmarshaled.___m_CachedPtr_1).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_CachedPtr_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
extern "C" void Object_t269_marshal_cleanup(Object_t269_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Void UnityEngine.Component::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Component__ctor_m2426 (Component_t267 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2414(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t189 * Component_get_transform_m1496 (Component_t267 * __this, const MethodInfo* method)
{
	typedef Transform_t189 * (*Component_get_transform_m1496_ftn) (Component_t267 *);
	static Component_get_transform_m1496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m1496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t6 * Component_get_gameObject_m1429 (Component_t267 * __this, const MethodInfo* method)
{
	typedef GameObject_t6 * (*Component_get_gameObject_m1429_ftn) (Component_t267 *);
	static Component_get_gameObject_m1429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m1429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" Component_t267 * Component_GetComponent_m1973 (Component_t267 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		GameObject_t6 * L_0 = Component_get_gameObject_m1429(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t267 * L_2 = GameObject_GetComponent_m2431(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Component_GetComponentFastPath_m2427 (Component_t267 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m2427_ftn) (Component_t267 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m2427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m2427_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t267 * Component_GetComponentInChildren_m2428 (Component_t267 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t6 * L_0 = Component_get_gameObject_m1429(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t267 * L_2 = GameObject_GetComponentInChildren_m2433(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" Component_t267 * Component_GetComponentInParent_m2429 (Component_t267 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t6 * L_0 = Component_get_gameObject_m1429(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t267 * L_2 = GameObject_GetComponentInParent_m2434(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void Component_GetComponentsForListInternal_m2430 (Component_t267 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m2430_ftn) (Component_t267 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m2430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m2430_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
extern "C" void Component_GetComponents_m1657 (Component_t267 * __this, Type_t * ___type, List_1_t274 * ___results, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t274 * L_1 = ___results;
		Component_GetComponentsForListInternal_m2430(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" void GameObject__ctor_m1541 (GameObject_t6 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m2414(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m2439(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" Component_t267 * GameObject_GetComponent_m2431 (GameObject_t6 * __this, Type_t * ___type, const MethodInfo* method)
{
	typedef Component_t267 * (*GameObject_GetComponent_m2431_ftn) (GameObject_t6 *, Type_t *);
	static GameObject_GetComponent_m2431_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m2431_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void GameObject_GetComponentFastPath_m2432 (GameObject_t6 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m2432_ftn) (GameObject_t6 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m2432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m2432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t189_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" Component_t267 * GameObject_GetComponentInChildren_m2433 (GameObject_t6 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		Transform_t189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Component_t267 * V_0 = {0};
	Transform_t189 * V_1 = {0};
	Transform_t189 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t267 * V_4 = {0};
	Component_t267 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m1433(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t267 * L_2 = GameObject_GetComponent_m2431(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t267 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_3, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t267 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t189 * L_6 = GameObject_get_transform_m1413(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t189 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_7, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t189 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_11);
			V_2 = ((Transform_t189 *)CastclassClass(L_12, Transform_t189_il2cpp_TypeInfo_var));
			Transform_t189 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t6 * L_14 = Component_get_gameObject_m1429(L_13, /*hidden argument*/NULL);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t267 * L_16 = GameObject_GetComponentInChildren_m2433(L_14, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			Component_t267 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_17, (Object_t269 *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t267 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0040;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_6;
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(128)
		}

IL_008d:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0095:
	{
		return (Component_t267 *)NULL;
	}

IL_0097:
	{
		Component_t267 * L_25 = V_5;
		return L_25;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Component_t267 * GameObject_GetComponentInParent_m2434 (GameObject_t6 * __this, Type_t * ___type, const MethodInfo* method)
{
	Component_t267 * V_0 = {0};
	Transform_t189 * V_1 = {0};
	Component_t267 * V_2 = {0};
	{
		bool L_0 = GameObject_get_activeInHierarchy_m1433(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t267 * L_2 = GameObject_GetComponent_m2431(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t267 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_3, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t267 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t189 * L_6 = GameObject_get_transform_m1413(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t189 * L_7 = Transform_get_parent_m1414(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_t189 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_8, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0070;
	}

IL_003e:
	{
		Transform_t189 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t6 * L_11 = Component_get_gameObject_m1429(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = GameObject_get_activeInHierarchy_m1433(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		Transform_t189 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_t6 * L_14 = Component_get_gameObject_m1429(L_13, /*hidden argument*/NULL);
		Type_t * L_15 = ___type;
		NullCheck(L_14);
		Component_t267 * L_16 = GameObject_GetComponent_m2431(L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		Component_t267 * L_17 = V_2;
		bool L_18 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_17, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		Component_t267 * L_19 = V_2;
		return L_19;
	}

IL_0069:
	{
		Transform_t189 * L_20 = V_1;
		NullCheck(L_20);
		Transform_t189 * L_21 = Transform_get_parent_m1414(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
	}

IL_0070:
	{
		Transform_t189 * L_22 = V_1;
		bool L_23 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_22, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_003e;
		}
	}

IL_007c:
	{
		return (Component_t267 *)NULL;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Array_t * GameObject_GetComponentsInternal_m2435 (GameObject_t6 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m2435_ftn) (GameObject_t6 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m2435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m2435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t189 * GameObject_get_transform_m1413 (GameObject_t6 * __this, const MethodInfo* method)
{
	typedef Transform_t189 * (*GameObject_get_transform_m1413_ftn) (GameObject_t6 *);
	static GameObject_get_transform_m1413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m1413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m1546 (GameObject_t6 * __this, const MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m1546_ftn) (GameObject_t6 *);
	static GameObject_get_layer_m1546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m1546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GameObject_set_layer_m1547 (GameObject_t6 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m1547_ftn) (GameObject_t6 *, int32_t);
	static GameObject_set_layer_m1547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m1547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m1573 (GameObject_t6 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m1573_ftn) (GameObject_t6 *, bool);
	static GameObject_SetActive_m1573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m1573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m1887 (GameObject_t6 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m1887_ftn) (GameObject_t6 *);
	static GameObject_get_activeSelf_m1887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m1887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m1433 (GameObject_t6 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m1433_ftn) (GameObject_t6 *);
	static GameObject_get_activeInHierarchy_m1433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m1433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern "C" void GameObject_SendMessage_m2436 (GameObject_t6 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m2436_ftn) (GameObject_t6 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m2436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m2436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t267 * GameObject_Internal_AddComponentWithType_m2437 (GameObject_t6 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t267 * (*GameObject_Internal_AddComponentWithType_m2437_ftn) (GameObject_t6 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m2437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m2437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t267 * GameObject_AddComponent_m2438 (GameObject_t6 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t267 * L_1 = GameObject_Internal_AddComponentWithType_m2437(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern "C" void GameObject_Internal_CreateGameObject_m2439 (Object_t * __this /* static, unused */, GameObject_t6 * ___mono, String_t* ___name, const MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m2439_ftn) (GameObject_t6 *, String_t*);
	static GameObject_Internal_CreateGameObject_m2439_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m2439_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Enumerator__ctor_m2440 (Enumerator_t422 * __this, Transform_t189 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Transform_t189 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Object_t * Enumerator_get_Current_m2441 (Enumerator_t422 * __this, const MethodInfo* method)
{
	{
		Transform_t189 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t189 * L_2 = Transform_GetChild_m1548(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m2442 (Enumerator_t422 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t189 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m1549(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Vector3_t42  Transform_get_position_m1497 (Transform_t189 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m2443(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m2443 (Transform_t189 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m2443_ftn) (Transform_t189 *, Vector3_t42 *);
	static Transform_INTERNAL_get_position_m2443_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m2443_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t42  Transform_get_localPosition_m1603 (Transform_t189 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m2444(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Transform_set_localPosition_m1824 (Transform_t189 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m2445(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m2444 (Transform_t189 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m2444_ftn) (Transform_t189 *, Vector3_t42 *);
	static Transform_INTERNAL_get_localPosition_m2444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m2444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m2445 (Transform_t189 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m2445_ftn) (Transform_t189 *, Vector3_t42 *);
	static Transform_INTERNAL_set_localPosition_m2445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m2445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern "C" Vector3_t42  Transform_get_forward_m1701 (Transform_t189 * __this, const MethodInfo* method)
{
	{
		Quaternion_t315  L_0 = Transform_get_rotation_m1697(__this, /*hidden argument*/NULL);
		Vector3_t42  L_1 = Vector3_get_forward_m1698(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_2 = Quaternion_op_Multiply_m1699(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t315  Transform_get_rotation_m1697 (Transform_t189 * __this, const MethodInfo* method)
{
	Quaternion_t315  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m2446(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t315  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m2446 (Transform_t189 * __this, Quaternion_t315 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m2446_ftn) (Transform_t189 *, Quaternion_t315 *);
	static Transform_INTERNAL_get_rotation_m2446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m2446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t315  Transform_get_localRotation_m1820 (Transform_t189 * __this, const MethodInfo* method)
{
	Quaternion_t315  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m2447(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t315  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" void Transform_set_localRotation_m1825 (Transform_t189 * __this, Quaternion_t315  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m2448(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m2447 (Transform_t189 * __this, Quaternion_t315 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m2447_ftn) (Transform_t189 *, Quaternion_t315 *);
	static Transform_INTERNAL_get_localRotation_m2447_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m2447_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m2448 (Transform_t189 * __this, Quaternion_t315 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m2448_ftn) (Transform_t189 *, Quaternion_t315 *);
	static Transform_INTERNAL_set_localRotation_m2448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m2448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t42  Transform_get_localScale_m1822 (Transform_t189 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m2449(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t42  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m1826 (Transform_t189 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m2450(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m2449 (Transform_t189 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m2449_ftn) (Transform_t189 *, Vector3_t42 *);
	static Transform_INTERNAL_get_localScale_m2449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m2449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m2450 (Transform_t189 * __this, Vector3_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m2450_ftn) (Transform_t189 *, Vector3_t42 *);
	static Transform_INTERNAL_set_localScale_m2450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m2450_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t189 * Transform_get_parent_m1414 (Transform_t189 * __this, const MethodInfo* method)
{
	{
		Transform_t189 * L_0 = Transform_get_parentInternal_m2451(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* RectTransform_t90_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral146;
extern "C" void Transform_set_parent_m1859 (Transform_t189 * __this, Transform_t189 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		_stringLiteral146 = il2cpp_codegen_string_literal_from_index(146);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((RectTransform_t90 *)IsInstSealed(__this, RectTransform_t90_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m1923(NULL /*static, unused*/, _stringLiteral146, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Transform_t189 * L_0 = ___value;
		Transform_set_parentInternal_m2452(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t189 * Transform_get_parentInternal_m2451 (Transform_t189 * __this, const MethodInfo* method)
{
	typedef Transform_t189 * (*Transform_get_parentInternal_m2451_ftn) (Transform_t189 *);
	static Transform_get_parentInternal_m2451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m2451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m2452 (Transform_t189 * __this, Transform_t189 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m2452_ftn) (Transform_t189 *, Transform_t189 *);
	static Transform_set_parentInternal_m2452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m2452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m1814 (Transform_t189 * __this, Transform_t189 * ___parent, const MethodInfo* method)
{
	{
		Transform_t189 * L_0 = ___parent;
		Transform_SetParent_m1545(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Transform_SetParent_m1545 (Transform_t189 * __this, Transform_t189 * ___parent, bool ___worldPositionStays, const MethodInfo* method)
{
	typedef void (*Transform_SetParent_m1545_ftn) (Transform_t189 *, Transform_t189 *, bool);
	static Transform_SetParent_m1545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m1545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t332  Transform_get_worldToLocalMatrix_m1891 (Transform_t189 * __this, const MethodInfo* method)
{
	Matrix4x4_t332  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m2453(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t332  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m2453 (Transform_t189 * __this, Matrix4x4_t332 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m2453_ftn) (Transform_t189 *, Matrix4x4_t332 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m2453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m2453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t42  Transform_TransformPoint_m1910 (Transform_t189 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Transform_INTERNAL_CALL_TransformPoint_m2454(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t42  Transform_INTERNAL_CALL_TransformPoint_m2454 (Object_t * __this /* static, unused */, Transform_t189 * ___self, Vector3_t42 * ___position, const MethodInfo* method)
{
	typedef Vector3_t42  (*Transform_INTERNAL_CALL_TransformPoint_m2454_ftn) (Transform_t189 *, Vector3_t42 *);
	static Transform_INTERNAL_CALL_TransformPoint_m2454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m2454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t42  Transform_InverseTransformPoint_m1611 (Transform_t189 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m2455(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t42  Transform_INTERNAL_CALL_InverseTransformPoint_m2455 (Object_t * __this /* static, unused */, Transform_t189 * ___self, Vector3_t42 * ___position, const MethodInfo* method)
{
	typedef Vector3_t42  (*Transform_INTERNAL_CALL_InverseTransformPoint_m2455_ftn) (Transform_t189 *, Vector3_t42 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m2455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m2455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m1549 (Transform_t189 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m1549_ftn) (Transform_t189 *);
	static Transform_get_childCount_m1549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m1549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m1815 (Transform_t189 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m1815_ftn) (Transform_t189 *);
	static Transform_SetAsFirstSibling_m1815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m1815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" bool Transform_IsChildOf_m1590 (Transform_t189 * __this, Transform_t189 * ___parent, const MethodInfo* method)
{
	typedef bool (*Transform_IsChildOf_m1590_ftn) (Transform_t189 *, Transform_t189 *);
	static Transform_IsChildOf_m1590_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_IsChildOf_m1590_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::IsChildOf(UnityEngine.Transform)");
	return _il2cpp_icall_func(__this, ___parent);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"
extern TypeInfo* Enumerator_t422_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m2456 (Transform_t189 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t422 * L_0 = (Enumerator_t422 *)il2cpp_codegen_object_new (Enumerator_t422_il2cpp_TypeInfo_var);
		Enumerator__ctor_m2440(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Transform_t189 * Transform_GetChild_m1548 (Transform_t189 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t189 * (*Transform_GetChild_m1548_ftn) (Transform_t189 *, int32_t);
	static Transform_GetChild_m1548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m1548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m2457 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m2457_ftn) ();
	static Time_get_deltaTime_m2457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m2457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m1467 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m1467_ftn) ();
	static Time_get_unscaledTime_m1467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m1467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m1525 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m1525_ftn) ();
	static Time_get_unscaledDeltaTime_m1525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m1525_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
// System.Void UnityEngine.YieldInstruction::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void YieldInstruction__ctor_m2458 (YieldInstruction_t367 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t367_marshal(const YieldInstruction_t367& unmarshaled, YieldInstruction_t367_marshaled& marshaled)
{
}
extern "C" void YieldInstruction_t367_marshal_back(const YieldInstruction_t367_marshaled& marshaled, YieldInstruction_t367& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t367_marshal_cleanup(YieldInstruction_t367_marshaled& marshaled)
{
}
// UnityEngine.Experimental.Director.DirectorPlayer
#include "UnityEngine_UnityEngine_Experimental_Director_DirectorPlayer.h"
// UnityEngine.Experimental.Director.DirectorPlayer
#include "UnityEngine_UnityEngine_Experimental_Director_DirectorPlayerMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsInternal
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsInternal.h"
// UnityEngine.Advertisements.UnityAdsInternal
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsInternalMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge.h"
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_geMethodDeclarations.h"
// System.Void UnityEngine.Advertisements.UnityAdsInternal::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void UnityAdsInternal__ctor_m2459 (UnityAdsInternal_t425 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onCampaignsAvailable_m2460 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onCampaignsAvailable_m2461 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onCampaignsFetchFailed_m2462 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onCampaignsFetchFailed_m2463 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onShow_m2464 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onShow_2;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onShow_2 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onShow_m2465 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onShow_2;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onShow_2 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onHide_m2466 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onHide_3;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onHide_3 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onHide_m2467 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onHide_3;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onHide_3 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge.h"
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_2_t427_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onVideoCompleted_m2468 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t427 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_2_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(308);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_2_t427 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4;
		UnityAdsDelegate_2_t427 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4 = ((UnityAdsDelegate_2_t427 *)CastclassSealed(L_2, UnityAdsDelegate_2_t427_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_2_t427_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onVideoCompleted_m2469 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t427 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_2_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(308);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_2_t427 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4;
		UnityAdsDelegate_2_t427 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4 = ((UnityAdsDelegate_2_t427 *)CastclassSealed(L_2, UnityAdsDelegate_2_t427_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onVideoStarted_m2470 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Combine_m1685(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t426_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onVideoStarted_m2471 (Object_t * __this /* static, unused */, UnityAdsDelegate_t426 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5;
		UnityAdsDelegate_t426 * L_1 = ___value;
		Delegate_t314 * L_2 = Delegate_Remove_m1686(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5 = ((UnityAdsDelegate_t426 *)CastclassSealed(L_2, UnityAdsDelegate_t426_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RegisterNative()
extern "C" void UnityAdsInternal_RegisterNative_m2472 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_RegisterNative_m2472_ftn) ();
	static UnityAdsInternal_RegisterNative_m2472_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_RegisterNative_m2472_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::RegisterNative()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::Init(System.String,System.Boolean,System.Boolean,System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void UnityAdsInternal_Init_m2473 (Object_t * __this /* static, unused */, String_t* ___gameId, bool ___testModeEnabled, bool ___debugModeEnabled, String_t* ___unityVersion, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_Init_m2473_ftn) (String_t*, bool, bool, String_t*);
	static UnityAdsInternal_Init_m2473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_Init_m2473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::Init(System.String,System.Boolean,System.Boolean,System.String)");
	_il2cpp_icall_func(___gameId, ___testModeEnabled, ___debugModeEnabled, ___unityVersion);
}
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::Show(System.String,System.String,System.String)
extern "C" bool UnityAdsInternal_Show_m2474 (Object_t * __this /* static, unused */, String_t* ___zoneId, String_t* ___rewardItemKey, String_t* ___options, const MethodInfo* method)
{
	typedef bool (*UnityAdsInternal_Show_m2474_ftn) (String_t*, String_t*, String_t*);
	static UnityAdsInternal_Show_m2474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_Show_m2474_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::Show(System.String,System.String,System.String)");
	return _il2cpp_icall_func(___zoneId, ___rewardItemKey, ___options);
}
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::CanShowAds(System.String)
extern "C" bool UnityAdsInternal_CanShowAds_m2475 (Object_t * __this /* static, unused */, String_t* ___zoneId, const MethodInfo* method)
{
	typedef bool (*UnityAdsInternal_CanShowAds_m2475_ftn) (String_t*);
	static UnityAdsInternal_CanShowAds_m2475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_CanShowAds_m2475_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::CanShowAds(System.String)");
	return _il2cpp_icall_func(___zoneId);
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetLogLevel(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UnityAdsInternal_SetLogLevel_m2476 (Object_t * __this /* static, unused */, int32_t ___logLevel, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_SetLogLevel_m2476_ftn) (int32_t);
	static UnityAdsInternal_SetLogLevel_m2476_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_SetLogLevel_m2476_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::SetLogLevel(System.Int32)");
	_il2cpp_icall_func(___logLevel);
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetCampaignDataURL(System.String)
extern "C" void UnityAdsInternal_SetCampaignDataURL_m2477 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_SetCampaignDataURL_m2477_ftn) (String_t*);
	static UnityAdsInternal_SetCampaignDataURL_m2477_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_SetCampaignDataURL_m2477_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::SetCampaignDataURL(System.String)");
	_il2cpp_icall_func(___url);
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RemoveAllEventHandlers()
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_RemoveAllEventHandlers_m2478 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0 = (UnityAdsDelegate_t426 *)NULL;
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1 = (UnityAdsDelegate_t426 *)NULL;
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onShow_2 = (UnityAdsDelegate_t426 *)NULL;
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onHide_3 = (UnityAdsDelegate_t426 *)NULL;
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4 = (UnityAdsDelegate_2_t427 *)NULL;
		((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5 = (UnityAdsDelegate_t426 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsAvailable()
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsAvailable_m2479 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t426 * V_0 = {0};
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0;
		V_0 = L_0;
		UnityAdsDelegate_t426 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t426 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m2848(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsFetchFailed()
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsFetchFailed_m2480 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t426 * V_0 = {0};
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1;
		V_0 = L_0;
		UnityAdsDelegate_t426 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t426 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m2848(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsShow()
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsShow_m2481 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t426 * V_0 = {0};
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onShow_2;
		V_0 = L_0;
		UnityAdsDelegate_t426 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t426 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m2848(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsHide()
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsHide_m2482 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t426 * V_0 = {0};
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onHide_3;
		V_0 = L_0;
		UnityAdsDelegate_t426 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t426 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m2848(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoCompleted(System.String,System.Boolean)
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_geMethodDeclarations.h"
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern const MethodInfo* UnityAdsDelegate_2_Invoke_m2880_MethodInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsVideoCompleted_m2483 (Object_t * __this /* static, unused */, String_t* ___rewardItemKey, bool ___skipped, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		UnityAdsDelegate_2_Invoke_m2880_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483940);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_2_t427 * V_0 = {0};
	{
		UnityAdsDelegate_2_t427 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4;
		V_0 = L_0;
		UnityAdsDelegate_2_t427 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		UnityAdsDelegate_2_t427 * L_2 = V_0;
		String_t* L_3 = ___rewardItemKey;
		bool L_4 = ___skipped;
		NullCheck(L_2);
		UnityAdsDelegate_2_Invoke_m2880(L_2, L_3, L_4, /*hidden argument*/UnityAdsDelegate_2_Invoke_m2880_MethodInfo_var);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoStarted()
extern TypeInfo* UnityAdsInternal_t425_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsVideoStarted_m2484 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t426 * V_0 = {0};
	{
		UnityAdsDelegate_t426 * L_0 = ((UnityAdsInternal_t425_StaticFields*)UnityAdsInternal_t425_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5;
		V_0 = L_0;
		UnityAdsDelegate_t426 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t426 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m2848(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"
// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t42  Particle_get_position_m2485 (Particle_t428 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Particle_set_position_m2486 (Particle_t428 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t42  Particle_get_velocity_m2487 (Particle_t428 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m2488 (Particle_t428 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m2489 (Particle_t428 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Particle_set_energy_m2490 (Particle_t428 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m2491 (Particle_t428 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m2492 (Particle_t428 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m2493 (Particle_t428 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m2494 (Particle_t428 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m2495 (Particle_t428 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m2496 (Particle_t428 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m2497 (Particle_t428 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m2498 (Particle_t428 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t68  Particle_get_color_m2499 (Particle_t428 * __this, const MethodInfo* method)
{
	{
		Color_t68  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void Particle_set_color_m2500 (Particle_t428 * __this, Color_t68  ___value, const MethodInfo* method)
{
	{
		Color_t68  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteractionMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
extern "C" bool Physics_Raycast_m2501 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, RaycastHit_t258 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___origin;
		Vector3_t42  L_1 = ___direction;
		RaycastHit_t258 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		int32_t L_5 = ___queryTriggerInteraction;
		bool L_6 = Physics_Internal_Raycast_m2506(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" bool Physics_Raycast_m1694 (Object_t * __this /* static, unused */, Ray_t292  ___ray, RaycastHit_t258 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		Ray_t292  L_0 = ___ray;
		RaycastHit_t258 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m2502(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern "C" bool Physics_Raycast_m2502 (Object_t * __this /* static, unused */, Ray_t292  ___ray, RaycastHit_t258 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Ray_get_origin_m1491((&___ray), /*hidden argument*/NULL);
		Vector3_t42  L_1 = Ray_get_direction_m1492((&___ray), /*hidden argument*/NULL);
		RaycastHit_t258 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		int32_t L_5 = ___queryTriggerInteraction;
		bool L_6 = Physics_Raycast_m2501(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t298* Physics_RaycastAll_m1509 (Object_t * __this /* static, unused */, Ray_t292  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		Ray_t292  L_0 = ___ray;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layerMask;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t298* L_4 = Physics_RaycastAll_m2503(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t298* Physics_RaycastAll_m2503 (Object_t * __this /* static, unused */, Ray_t292  ___ray, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Ray_get_origin_m1491((&___ray), /*hidden argument*/NULL);
		Vector3_t42  L_1 = Ray_get_direction_m1492((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		int32_t L_4 = ___queryTriggerInteraction;
		RaycastHitU5BU5D_t298* L_5 = Physics_RaycastAll_m2504(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t298* Physics_RaycastAll_m2504 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		int32_t L_2 = ___queryTriggerInteraction;
		RaycastHitU5BU5D_t298* L_3 = Physics_INTERNAL_CALL_RaycastAll_m2505(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t298* Physics_INTERNAL_CALL_RaycastAll_m2505 (Object_t * __this /* static, unused */, Vector3_t42 * ___origin, Vector3_t42 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t298* (*Physics_INTERNAL_CALL_RaycastAll_m2505_ftn) (Vector3_t42 *, Vector3_t42 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m2505_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m2505_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask, ___queryTriggerInteraction);
}
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Internal_Raycast_m2506 (Object_t * __this /* static, unused */, Vector3_t42  ___origin, Vector3_t42  ___direction, RaycastHit_t258 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		RaycastHit_t258 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		int32_t L_3 = ___queryTriggerInteraction;
		bool L_4 = Physics_INTERNAL_CALL_Internal_Raycast_m2507(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m2507 (Object_t * __this /* static, unused */, Vector3_t42 * ___origin, Vector3_t42 * ___direction, RaycastHit_t258 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m2507_ftn) (Vector3_t42 *, Vector3_t42 *, RaycastHit_t258 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m2507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m2507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask, ___queryTriggerInteraction);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t42  RaycastHit_get_point_m1514 (RaycastHit_t258 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t42  RaycastHit_get_normal_m1515 (RaycastHit_t258 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m1513 (RaycastHit_t258 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t299 * RaycastHit_get_collider_m1512 (RaycastHit_t258 * __this, const MethodInfo* method)
{
	{
		Collider_t299 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_27.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_27MethodDeclarations.h"
// System.Void UnityEngine.Physics2D::.cctor()
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_27MethodDeclarations.h"
extern TypeInfo* List_1_t431_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t295_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2881_MethodInfo_var;
extern "C" void Physics2D__cctor_m2508 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		Physics2D_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		List_1__ctor_m2881_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483941);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t431 * L_0 = (List_1_t431 *)il2cpp_codegen_object_new (List_1_t431_il2cpp_TypeInfo_var);
		List_1__ctor_m2881(L_0, /*hidden argument*/List_1__ctor_m2881_MethodInfo_var);
		((Physics2D_t295_StaticFields*)Physics2D_t295_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
extern TypeInfo* Physics2D_t295_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m2509 (Object_t * __this /* static, unused */, Vector2_t43  ___origin, Vector2_t43  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t296 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t296 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t295_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m2510(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m2510 (Object_t * __this /* static, unused */, Vector2_t43 * ___origin, Vector2_t43 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t296 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m2510_ftn) (Vector2_t43 *, Vector2_t43 *, float, int32_t, float, float, RaycastHit2D_t296 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m2510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m2510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t295_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t296  Physics2D_Raycast_m1695 (Object_t * __this /* static, unused */, Vector2_t43  ___origin, Vector2_t43  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t43  L_0 = ___origin;
		Vector2_t43  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t295_il2cpp_TypeInfo_var);
		RaycastHit2D_t296  L_6 = Physics2D_Raycast_m2511(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t295_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t296  Physics2D_Raycast_m2511 (Object_t * __this /* static, unused */, Vector2_t43  ___origin, Vector2_t43  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t296  V_0 = {0};
	{
		Vector2_t43  L_0 = ___origin;
		Vector2_t43  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t295_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m2509(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t296  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t295_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t293* Physics2D_RaycastAll_m1493 (Object_t * __this /* static, unused */, Vector2_t43  ___origin, Vector2_t43  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t295_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t293* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m2512(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t293* Physics2D_INTERNAL_CALL_RaycastAll_m2512 (Object_t * __this /* static, unused */, Vector2_t43 * ___origin, Vector2_t43 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t293* (*Physics2D_INTERNAL_CALL_RaycastAll_m2512_ftn) (Vector2_t43 *, Vector2_t43 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m2512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m2512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t43  RaycastHit2D_get_point_m1500 (RaycastHit2D_t296 * __this, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t43  RaycastHit2D_get_normal_m1501 (RaycastHit2D_t296 * __this, const MethodInfo* method)
{
	{
		Vector2_t43  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m1696 (RaycastHit2D_t296 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t297 * RaycastHit2D_get_collider_m1494 (RaycastHit2D_t296 * __this, const MethodInfo* method)
{
	{
		Collider2D_t297 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern "C" Rigidbody2D_t432 * RaycastHit2D_get_rigidbody_m2513 (RaycastHit2D_t296 * __this, const MethodInfo* method)
{
	Rigidbody2D_t432 * G_B3_0 = {0};
	{
		Collider2D_t297 * L_0 = RaycastHit2D_get_collider_m1494(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_0, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t297 * L_2 = RaycastHit2D_get_collider_m1494(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t432 * L_3 = Collider2D_get_attachedRigidbody_m2514(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t432 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" Transform_t189 * RaycastHit2D_get_transform_m1498 (RaycastHit2D_t296 * __this, const MethodInfo* method)
{
	Rigidbody2D_t432 * V_0 = {0};
	{
		Rigidbody2D_t432 * L_0 = RaycastHit2D_get_rigidbody_m2513(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t432 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_1, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t432 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t189 * L_4 = Component_get_transform_m1496(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t297 * L_5 = RaycastHit2D_get_collider_m1494(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m1373(NULL /*static, unused*/, L_5, (Object_t269 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t297 * L_7 = RaycastHit2D_get_collider_m1494(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t189 * L_8 = Component_get_transform_m1496(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t189 *)NULL;
	}
}
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t432 * Collider2D_get_attachedRigidbody_m2514 (Collider2D_t297 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t432 * (*Collider2D_get_attachedRigidbody_m2514_ftn) (Collider2D_t297 *);
	static Collider2D_get_attachedRigidbody_m2514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m2514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
