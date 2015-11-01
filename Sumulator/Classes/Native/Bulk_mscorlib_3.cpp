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

// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t560_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m7692 (NeutralResourcesLanguageAttribute_t1227 * __this, String_t* ___cultureName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		_stringLiteral1829 = il2cpp_codegen_string_literal_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t560 * L_1 = (ArgumentNullException_t560 *)il2cpp_codegen_object_new (ArgumentNullException_t560_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2917(L_1, _stringLiteral1829, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		String_t* L_2 = ___cultureName;
		__this->___culture_0 = L_2;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"
// System.Version
#include "mscorlib_System_Version.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
extern TypeInfo* Version_t814_il2cpp_TypeInfo_var;
extern "C" void SatelliteContractVersionAttribute__ctor_m7693 (SatelliteContractVersionAttribute_t1228 * __this, String_t* ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t814_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version;
		Version_t814 * L_1 = (Version_t814 *)il2cpp_codegen_object_new (Version_t814_il2cpp_TypeInfo_var);
		Version__ctor_m9886(L_1, L_0, /*hidden argument*/NULL);
		__this->___ver_0 = L_1;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void CompilationRelaxationsAttribute__ctor_m7694 (CompilationRelaxationsAttribute_t1230 * __this, int32_t ___relaxations, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"
// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DefaultDependencyAttribute__ctor_m7695 (DefaultDependencyAttribute_t1231 * __this, int32_t ___loadHintArgument, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___loadHintArgument;
		__this->___hint_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttriMethodDeclarations.h"
// System.Void System.Runtime.CompilerServices.StringFreezingAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void StringFreezingAttribute__ctor_m7696 (StringFreezingAttribute_t1234 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_CerMethodDeclarations.h"
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_ConsistencyMethodDeclarations.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CriticalFinalizerObject__ctor_m7697 (CriticalFinalizerObject_t1237 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::Finalize()
extern "C" void CriticalFinalizerObject_Finalize_m7698 (CriticalFinalizerObject_t1237 * __this, const MethodInfo* method)
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
		IL2CPP_LEAVE(0xC, FINALLY_0005);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0005;
	}

FINALLY_0005:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(5)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(5)
	{
		IL2CPP_JUMP_TBL(0xC, IL_000c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_000c:
	{
		return;
	}
}
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContMethodDeclarations.h"
// System.Void System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::.ctor(System.Runtime.ConstrainedExecution.Consistency,System.Runtime.ConstrainedExecution.Cer)
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ReliabilityContractAttribute__ctor_m7699 (ReliabilityContractAttribute_t1238 * __this, int32_t ___consistencyGuarantee, int32_t ___cer, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___consistencyGuarantee;
		__this->___consistency_0 = L_0;
		int32_t L_1 = ___cer;
		__this->___cer_1 = L_1;
		return;
	}
}
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArguments.h"
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArgumentsMethodDeclarations.h"
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConventionMethodDeclarations.h"
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSetMethodDeclarations.h"
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttribMethodDeclarations.h"
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"
// System.Void System.Runtime.InteropServices.ClassInterfaceAttribute::.ctor(System.Runtime.InteropServices.ClassInterfaceType)
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ClassInterfaceAttribute__ctor_m7700 (ClassInterfaceAttribute_t1242 * __this, int32_t ___classInterfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___classInterfaceType;
		__this->___ciType_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceTypeMethodDeclarations.h"
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceAMethodDeclarations.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Void System.Runtime.InteropServices.ComDefaultInterfaceAttribute::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ComDefaultInterfaceAttribute__ctor_m7701 (ComDefaultInterfaceAttribute_t1244 * __this, Type_t * ___defaultInterface, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___defaultInterface;
		__this->____type_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceTypeMethodDeclarations.h"
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttributeMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.DispIdAttribute::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DispIdAttribute__ctor_m7702 (DispIdAttribute_t1246 * __this, int32_t ___dispId, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___dispId;
		__this->___id_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"
extern "C" void GCHandle__ctor_m7703 (GCHandle_t1247 * __this, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		int32_t L_0 = ___type;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___type;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0011;
		}
	}

IL_000e:
	{
		___type = 2;
	}

IL_0011:
	{
		Object_t * L_2 = ___value;
		int32_t L_3 = ___type;
		int32_t L_4 = GCHandle_GetTargetHandle_m7709(NULL /*static, unused*/, L_2, 0, L_3, /*hidden argument*/NULL);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m7704 (GCHandle_t1247 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t765_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1830;
extern "C" Object_t * GCHandle_get_Target_m7705 (GCHandle_t1247 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		_stringLiteral1830 = il2cpp_codegen_string_literal_from_index(1830);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GCHandle_get_IsAllocated_m7704(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m5844(NULL /*static, unused*/, _stringLiteral1830, /*hidden argument*/NULL);
		InvalidOperationException_t765 * L_2 = (InvalidOperationException_t765 *)il2cpp_codegen_object_new (InvalidOperationException_t765_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3958(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001b:
	{
		int32_t L_3 = (__this->___handle_0);
		Object_t * L_4 = GCHandle_GetTarget_m7708(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" GCHandle_t1247  GCHandle_Alloc_m7706 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = ___type;
		GCHandle_t1247  L_2 = {0};
		GCHandle__ctor_m7703(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" void GCHandle_Free_m7707 (GCHandle_t1247 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		GCHandle_FreeHandle_m7710(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___handle_0 = 0;
		return;
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Object_t * GCHandle_GetTarget_m7708 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*GCHandle_GetTarget_m7708_ftn) (int32_t);
	return  ((GCHandle_GetTarget_m7708_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::GetTarget) (___handle);
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m7709 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef int32_t (*GCHandle_GetTargetHandle_m7709_ftn) (Object_t *, int32_t, int32_t);
	return  ((GCHandle_GetTargetHandle_m7709_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::GetTargetHandle) (___obj, ___handle, ___type);
}
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m7710 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*GCHandle_FreeHandle_m7710_ftn) (int32_t);
	 ((GCHandle_FreeHandle_m7710_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::FreeHandle) (___handle);
}
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern TypeInfo* GCHandle_t1247_il2cpp_TypeInfo_var;
extern "C" bool GCHandle_Equals_m7711 (GCHandle_t1247 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GCHandle_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(863);
		s_Il2CppMethodIntialized = true;
	}
	GCHandle_t1247  V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Object_t * L_1 = ___o;
		if (((Object_t *)IsInstSealed(L_1, GCHandle_t1247_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		int32_t L_2 = (__this->___handle_0);
		Object_t * L_3 = ___o;
		V_0 = ((*(GCHandle_t1247 *)((GCHandle_t1247 *)UnBox (L_3, GCHandle_t1247_il2cpp_TypeInfo_var))));
		int32_t L_4 = ((&V_0)->___handle_0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern "C" int32_t GCHandle_GetHashCode_m7712 (GCHandle_t1247 * __this, const MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___handle_0);
		int32_t L_1 = Int32_GetHashCode_m2868(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleTypeMethodDeclarations.h"
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribuMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.InterfaceTypeAttribute::.ctor(System.Runtime.InteropServices.ComInterfaceType)
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void InterfaceTypeAttribute__ctor_m7713 (InterfaceTypeAttribute_t1249 * __this, int32_t ___interfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___interfaceType;
		__this->___intType_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_Marshal.h"
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.Marshal::.cctor()
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"
extern TypeInfo* Marshal_t1250_il2cpp_TypeInfo_var;
extern "C" void Marshal__cctor_m7714 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		((Marshal_t1250_StaticFields*)Marshal_t1250_il2cpp_TypeInfo_var->static_fields)->___SystemMaxDBCSCharSize_0 = 2;
		OperatingSystem_t1530 * L_0 = Environment_get_OSVersion_m9514(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = OperatingSystem_get_Platform_m9774(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		((Marshal_t1250_StaticFields*)Marshal_t1250_il2cpp_TypeInfo_var->static_fields)->___SystemDefaultCharSize_1 = G_B3_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void Marshal_copy_from_unmanaged_m7715 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*Marshal_copy_from_unmanaged_m7715_ftn) (IntPtr_t, int32_t, Array_t *, int32_t);
	 ((Marshal_copy_from_unmanaged_m7715_ftn)mscorlib::System::Runtime::InteropServices::Marshal::copy_from_unmanaged) (___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"
extern TypeInfo* Marshal_t1250_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m7716 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t576* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		ByteU5BU5D_t576* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1250_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m7715(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t1250_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m7717 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t151* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		CharU5BU5D_t151* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1250_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m7715(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExce.h"
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExceMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor()
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral1831;
extern "C" void MarshalDirectiveException__ctor_m7718 (MarshalDirectiveException_t1251 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1831 = il2cpp_codegen_string_literal_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m5844(NULL /*static, unused*/, _stringLiteral1831, /*hidden argument*/NULL);
		SystemException__ctor_m4949(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m2913(__this, ((int32_t)-2146233035), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void MarshalDirectiveException__ctor_m7719 (MarshalDirectiveException_t1251 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t534 * L_0 = ___info;
		StreamingContext_t535  L_1 = ___context;
		SystemException__ctor_m9806(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.PreserveSigAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void PreserveSigAttribute__ctor_m7720 (PreserveSigAttribute_t1252 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"
extern "C" void SafeHandle__ctor_m7721 (SafeHandle_t994 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, const MethodInfo* method)
{
	{
		CriticalFinalizerObject__ctor_m7697(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___invalidHandleValue;
		__this->___invalid_handle_value_1 = L_0;
		bool L_1 = ___ownsHandle;
		__this->___owns_handle_3 = L_1;
		__this->___refcount_2 = 1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t592_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_Close_m7722 (SafeHandle_t994 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t592 * L_3 = (ObjectDisposedException_t592 *)il2cpp_codegen_object_new (ObjectDisposedException_t592_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2994(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m9014(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0070;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_0070;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
		__this->___refcount_2 = (-1);
	}

IL_0070:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern TypeInfo* ObjectDisposedException_t592_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousAddRef_m7723 (SafeHandle_t994 * __this, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t592 * L_3 = (ObjectDisposedException_t592 *)il2cpp_codegen_object_new (ObjectDisposedException_t592_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2994(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001d:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_7 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_7);
		ObjectDisposedException_t592 * L_9 = (ObjectDisposedException_t592 *)il2cpp_codegen_object_new (ObjectDisposedException_t592_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2994(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0040:
	{
		int32_t* L_10 = &(__this->___refcount_2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = Interlocked_CompareExchange_m9014(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_001d;
		}
	}
	{
		bool* L_15 = ___success;
		*((int8_t*)(L_15)) = (int8_t)1;
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern TypeInfo* ObjectDisposedException_t592_il2cpp_TypeInfo_var;
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m7724 (SafeHandle_t994 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t592 * L_3 = (ObjectDisposedException_t592 *)il2cpp_codegen_object_new (ObjectDisposedException_t592_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2994(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001d:
	{
		IntPtr_t L_4 = (__this->___handle_0);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern TypeInfo* ObjectDisposedException_t592_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousRelease_m7725 (SafeHandle_t994 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t592 * L_3 = (ObjectDisposedException_t592 *)il2cpp_codegen_object_new (ObjectDisposedException_t592_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2994(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001d:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m9014(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_006a;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_006a;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
	}

IL_006a:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
extern "C" void SafeHandle_Dispose_m7726 (SafeHandle_t994 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m2989(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"
extern "C" void SafeHandle_Dispose_m7727 (SafeHandle_t994 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		SafeHandle_Close_m7722(__this, /*hidden argument*/NULL);
		goto IL_0011;
	}

IL_0011:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C" void SafeHandle_SetHandle_m7728 (SafeHandle_t994 * __this, IntPtr_t ___handle, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		__this->___handle_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C" void SafeHandle_Finalize_m7729 (SafeHandle_t994 * __this, const MethodInfo* method)
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
			bool L_0 = (__this->___owns_handle_3);
			if (!L_0)
			{
				goto IL_0029;
			}
		}

IL_000b:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
			if (L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
			IntPtr_t L_2 = (__this->___invalid_handle_value_1);
			__this->___handle_0 = L_2;
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m7698(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAtMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.TypeLibImportClassAttribute::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void TypeLibImportClassAttribute__ctor_m7730 (TypeLibImportClassAttribute_t1253 * __this, Type_t * ___importClass, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___importClass;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		__this->____importClass_0 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttribMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.TypeLibVersionAttribute::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void TypeLibVersionAttribute__ctor_m7731 (TypeLibVersionAttribute_t1254 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major;
		__this->___major_0 = L_0;
		int32_t L_1 = ___minor;
		__this->___minor_1 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedTypeMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
extern TypeInfo* ActivationServices_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionLevelActivator_t1259_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m7732 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivationServices_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(864);
		ConstructionLevelActivator_t1259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(865);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivationServices_t1256_StaticFields*)ActivationServices_t1256_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ConstructionLevelActivator_t1259 * L_1 = (ConstructionLevelActivator_t1259 *)il2cpp_codegen_object_new (ConstructionLevelActivator_t1259_il2cpp_TypeInfo_var);
		ConstructionLevelActivator__ctor_m7738(L_1, /*hidden argument*/NULL);
		((ActivationServices_t1256_StaticFields*)ActivationServices_t1256_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = ((ActivationServices_t1256_StaticFields*)ActivationServices_t1256_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
// System.Type
#include "mscorlib_System_Type.h"
#include "mscorlib_ArrayTypes.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* IContextAttribute_t1629_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* UrlAttribute_t1262_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1344_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1832;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m7733 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t280* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IContextAttribute_t1629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(866);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		UrlAttribute_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(868);
		RemotingServices_t1344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(869);
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		_stringLiteral1832 = il2cpp_codegen_string_literal_from_index(1832);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t280* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t1327 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		ObjectU5BU5D_t280* L_0 = ___activationAttributes;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0040;
	}

IL_000b:
	{
		ObjectU5BU5D_t280* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3, sizeof(Object_t *)));
		Object_t * L_4 = V_1;
		if (((Object_t *)IsInst(L_4, IContextAttribute_t1629_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RemotingException_t1343 * L_5 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_5, _stringLiteral1832, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0025:
	{
		Object_t * L_6 = V_1;
		if (!((UrlAttribute_t1262 *)IsInstSealed(L_6, UrlAttribute_t1262_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_7 = V_1;
		NullCheck(((UrlAttribute_t1262 *)CastclassSealed(L_7, UrlAttribute_t1262_il2cpp_TypeInfo_var)));
		String_t* L_8 = UrlAttribute_get_UrlValue_m7740(((UrlAttribute_t1262 *)CastclassSealed(L_7, UrlAttribute_t1262_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003c:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_10 = V_3;
		ObjectU5BU5D_t280* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_13 = ___type;
		String_t* L_14 = V_0;
		ObjectU5BU5D_t280* L_15 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		Object_t * L_16 = RemotingServices_CreateClientProxy_m8124(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0058:
	{
		Type_t * L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry_t1327 * L_18 = RemotingConfiguration_IsRemotelyActivatedClientType_m8066(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		ActivatedClientTypeEntry_t1327 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_0070;
		}
	}
	{
		ActivatedClientTypeEntry_t1327 * L_20 = V_4;
		ObjectU5BU5D_t280* L_21 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		Object_t * L_22 = RemotingServices_CreateClientProxy_m8123(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_0070:
	{
		Type_t * L_23 = ___type;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_23);
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		Type_t * L_25 = ___type;
		ObjectU5BU5D_t280* L_26 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		Object_t * L_27 = RemotingServices_CreateClientProxyForContextBound_m8125(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_0083:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
extern TypeInfo* ConstructionCall_t1296_il2cpp_TypeInfo_var;
extern TypeInfo* AppDomainLevelActivator_t1258_il2cpp_TypeInfo_var;
extern TypeInfo* ContextLevelActivator_t1260_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1281_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IContextAttribute_t1629_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" ConstructionCall_t1296 * ActivationServices_CreateConstructionCall_m7734 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t280* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t1296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(871);
		AppDomainLevelActivator_t1258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(872);
		ContextLevelActivator_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(873);
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Thread_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(648);
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IContextAttribute_t1629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(866);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCall_t1296 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t607 * V_2 = {0};
	bool V_3 = false;
	Context_t1271 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t280* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t280* V_9 = {0};
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		Type_t * L_0 = ___type;
		ConstructionCall_t1296 * L_1 = (ConstructionCall_t1296 *)il2cpp_codegen_object_new (ConstructionCall_t1296_il2cpp_TypeInfo_var);
		ConstructionCall__ctor_m7864(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ConstructionCall_t1296 * L_4 = V_0;
		String_t* L_5 = ___activationUrl;
		Object_t * L_6 = ActivationServices_get_ConstructionActivator_m7732(NULL /*static, unused*/, /*hidden argument*/NULL);
		AppDomainLevelActivator_t1258 * L_7 = (AppDomainLevelActivator_t1258 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t1258_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m7737(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_4, L_7);
		ConstructionCall_t1296 * L_8 = V_0;
		NullCheck(L_8);
		ConstructionCall_set_IsContextOk_m7867(L_8, 0, /*hidden argument*/NULL);
		ConstructionCall_t1296 * L_9 = V_0;
		return L_9;
	}

IL_002c:
	{
		Object_t * L_10 = ActivationServices_get_ConstructionActivator_m7732(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ContextLevelActivator_t1260 * L_12 = (ContextLevelActivator_t1260 *)il2cpp_codegen_object_new (ContextLevelActivator_t1260_il2cpp_TypeInfo_var);
		ContextLevelActivator__ctor_m7739(L_12, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		ArrayList_t607 * L_13 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_13, /*hidden argument*/NULL);
		V_2 = L_13;
		ObjectU5BU5D_t280* L_14 = ___activationAttributes;
		if (!L_14)
		{
			goto IL_004c;
		}
	}
	{
		ArrayList_t607 * L_15 = V_2;
		ObjectU5BU5D_t280* L_16 = ___activationAttributes;
		NullCheck(L_15);
		VirtActionInvoker1< Object_t * >::Invoke(43 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_15, (Object_t *)(Object_t *)L_16);
	}

IL_004c:
	{
		String_t* L_17 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		String_t* L_18 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1759(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
		Context_t1271 * L_20 = Thread_get_CurrentContext_m9033(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00bd;
		}
	}
	{
		ArrayList_t607 * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
		V_6 = L_23;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0096;
		}

IL_0072:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_24);
			V_5 = ((Object_t *)Castclass(L_25, IContextAttribute_t1629_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_5;
			Context_t1271 * L_27 = V_4;
			ConstructionCall_t1296 * L_28 = V_0;
			NullCheck(L_26);
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, Context_t1271 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1629_il2cpp_TypeInfo_var, L_26, L_27, L_28);
			if (L_29)
			{
				goto IL_0096;
			}
		}

IL_008f:
		{
			V_3 = 0;
			goto IL_00a2;
		}

IL_0096:
		{
			Object_t * L_30 = V_6;
			NullCheck(L_30);
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_0072;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_00a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		{
			Object_t * L_32 = V_6;
			V_13 = ((Object_t *)IsInst(L_32, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_33 = V_13;
			if (L_33)
			{
				goto IL_00b5;
			}
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(167)
		}

IL_00b5:
		{
			Object_t * L_34 = V_13;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_34);
			IL2CPP_END_FINALLY(167)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00bd:
	{
		Type_t * L_35 = ___type;
		NullCheck(L_35);
		ObjectU5BU5D_t280* L_36 = (ObjectU5BU5D_t280*)VirtFuncInvoker1< ObjectU5BU5D_t280*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_35, 1);
		V_7 = L_36;
		ObjectU5BU5D_t280* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_010d;
	}

IL_00d2:
	{
		ObjectU5BU5D_t280* L_38 = V_9;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_38, L_40, sizeof(Object_t *)));
		Object_t * L_41 = V_8;
		if (!((Object_t *)IsInst(L_41, IContextAttribute_t1629_il2cpp_TypeInfo_var)))
		{
			goto IL_0107;
		}
	}
	{
		bool L_42 = V_3;
		if (!L_42)
		{
			goto IL_00fc;
		}
	}
	{
		Object_t * L_43 = V_8;
		Context_t1271 * L_44 = V_4;
		ConstructionCall_t1296 * L_45 = V_0;
		NullCheck(((Object_t *)Castclass(L_43, IContextAttribute_t1629_il2cpp_TypeInfo_var)));
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, Context_t1271 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1629_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_43, IContextAttribute_t1629_il2cpp_TypeInfo_var)), L_44, L_45);
		G_B19_0 = ((int32_t)(L_46));
		goto IL_00fd;
	}

IL_00fc:
	{
		G_B19_0 = 0;
	}

IL_00fd:
	{
		V_3 = G_B19_0;
		ArrayList_t607 * L_47 = V_2;
		Object_t * L_48 = V_8;
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_48);
	}

IL_0107:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_010d:
	{
		int32_t L_50 = V_10;
		ObjectU5BU5D_t280* L_51 = V_9;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((Array_t *)L_51)->max_length))))))
		{
			goto IL_00d2;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0174;
		}
	}
	{
		ConstructionCall_t1296 * L_53 = V_0;
		ArrayList_t607 * L_54 = V_2;
		NullCheck(L_54);
		ObjectU5BU5D_t280* L_55 = (ObjectU5BU5D_t280*)VirtFuncInvoker0< ObjectU5BU5D_t280* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_54);
		NullCheck(L_53);
		ConstructionCall_SetActivationAttributes_m7873(L_53, L_55, /*hidden argument*/NULL);
		ArrayList_t607 * L_56 = V_2;
		NullCheck(L_56);
		Object_t * L_57 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_56);
		V_12 = L_57;
	}

IL_0132:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014d;
		}

IL_0137:
		{
			Object_t * L_58 = V_12;
			NullCheck(L_58);
			Object_t * L_59 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_58);
			V_11 = ((Object_t *)Castclass(L_59, IContextAttribute_t1629_il2cpp_TypeInfo_var));
			Object_t * L_60 = V_11;
			ConstructionCall_t1296 * L_61 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Contexts.IContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1629_il2cpp_TypeInfo_var, L_60, L_61);
		}

IL_014d:
		{
			Object_t * L_62 = V_12;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_0137;
			}
		}

IL_0159:
		{
			IL2CPP_LEAVE(0x174, FINALLY_015e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_015e;
	}

FINALLY_015e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_12;
			V_14 = ((Object_t *)IsInst(L_64, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_65 = V_14;
			if (L_65)
			{
				goto IL_016c;
			}
		}

IL_016b:
		{
			IL2CPP_END_FINALLY(350)
		}

IL_016c:
		{
			Object_t * L_66 = V_14;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_66);
			IL2CPP_END_FINALLY(350)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(350)
	{
		IL2CPP_JUMP_TBL(0x174, IL_0174)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0174:
	{
		String_t* L_67 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		String_t* L_68 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Inequality_m1779(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_018c;
		}
	}
	{
		String_t* L_70 = ___activationUrl;
		Object_t * L_71 = V_1;
		AppDomainLevelActivator_t1258 * L_72 = (AppDomainLevelActivator_t1258 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t1258_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m7737(L_72, L_70, L_71, /*hidden argument*/NULL);
		V_1 = L_72;
	}

IL_018c:
	{
		ConstructionCall_t1296 * L_73 = V_0;
		Object_t * L_74 = V_1;
		NullCheck(L_73);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_73, L_74);
		ConstructionCall_t1296 * L_75 = V_0;
		bool L_76 = V_3;
		NullCheck(L_75);
		ConstructionCall_set_IsContextOk_m7867(L_75, L_76, /*hidden argument*/NULL);
		ConstructionCall_t1296 * L_77 = V_0;
		return L_77;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m7735 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m7735_ftn) (Type_t *);
	return  ((ActivationServices_AllocateUninitializedClassInstance_m7735_ftn)mscorlib::System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance) (___type);
}
// System.Void System.Runtime.Remoting.Activation.ActivationServices::EnableProxyActivation(System.Type,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void ActivationServices_EnableProxyActivation_m7736 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___enable, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*ActivationServices_EnableProxyActivation_m7736_ftn) (Type_t *, bool);
	 ((ActivationServices_EnableProxyActivation_m7736_ftn)mscorlib::System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation) (___type, ___enable);
}
// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AppDomainLevelActivator__ctor_m7737 (AppDomainLevelActivator_t1258 * __this, String_t* ___activationUrl, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___activationUrl;
		__this->____activationUrl_0 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_1 = L_1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Activation.ConstructionLevelActivator::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ConstructionLevelActivator__ctor_m7738 (ConstructionLevelActivator_t1259 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Activation.ContextLevelActivator::.ctor(System.Runtime.Remoting.Activation.IActivator)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ContextLevelActivator__ctor_m7739 (ContextLevelActivator_t1260 * __this, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___next;
		__this->___m_NextActivator_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivator.h"
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivatorMethodDeclarations.h"
// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m7740 (UrlAttribute_t1262 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* UrlAttribute_t1262_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool UrlAttribute_Equals_m7741 (UrlAttribute_t1262 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UrlAttribute_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(868);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (((UrlAttribute_t1262 *)IsInstSealed(L_0, UrlAttribute_t1262_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___o;
		NullCheck(((UrlAttribute_t1262 *)CastclassSealed(L_1, UrlAttribute_t1262_il2cpp_TypeInfo_var)));
		String_t* L_2 = UrlAttribute_get_UrlValue_m7740(((UrlAttribute_t1262 *)CastclassSealed(L_1, UrlAttribute_t1262_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1759(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern "C" int32_t UrlAttribute_GetHashCode_m7742 (UrlAttribute_t1262 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m3938(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void UrlAttribute_GetPropertiesForNewContext_m7743 (UrlAttribute_t1262 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
extern "C" bool UrlAttribute_IsContextOK_m7744 (UrlAttribute_t1262 * __this, Context_t1271 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern "C" void ChannelInfo__ctor_m7745 (ChannelInfo_t1264 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t280* L_0 = ChannelServices_GetCurrentChannelInfo_m7754(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern "C" ObjectU5BU5D_t280* ChannelInfo_get_ChannelData_m7746 (ChannelInfo_t1264 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t280* L_0 = (__this->___channelData_0);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderData.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern TypeInfo* CrossContextChannel_t1266_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t484_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1833;
extern Il2CppCodeGenString* _stringLiteral1834;
extern Il2CppCodeGenString* _stringLiteral1835;
extern "C" void ChannelServices__cctor_m7747 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		CrossContextChannel_t1266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(875);
		StringU5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		_stringLiteral1833 = il2cpp_codegen_string_literal_from_index(1833);
		_stringLiteral1834 = il2cpp_codegen_string_literal_from_index(1834);
		_stringLiteral1835 = il2cpp_codegen_string_literal_from_index(1835);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_0, /*hidden argument*/NULL);
		((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t607 * L_1 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_1, /*hidden argument*/NULL);
		((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t1266 * L_2 = (CrossContextChannel_t1266 *)il2cpp_codegen_object_new (CrossContextChannel_t1266_il2cpp_TypeInfo_var);
		CrossContextChannel__ctor_m7823(L_2, /*hidden argument*/NULL);
		((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3 = _stringLiteral1833;
		StringU5BU5D_t484* L_3 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, _stringLiteral1834);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1834;
		StringU5BU5D_t484* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, _stringLiteral1835);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1, sizeof(String_t*))) = (String_t*)_stringLiteral1835;
		((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.String,System.Object,System.String&)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1613_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelSender_t1612_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m7748 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___remoteChannelData, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IChannel_t1613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(876);
		IChannelSender_t1612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(877);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t280* V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Object_t * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___remoteChannelData;
		V_0 = ((ObjectU5BU5D_t280*)Castclass(L_0, ObjectU5BU5D_t280_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		ArrayList_t607 * L_1 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_4 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0023:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_0028:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_6);
				V_2 = ((Object_t *)Castclass(L_7, IChannel_t1613_il2cpp_TypeInfo_var));
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelSender_t1612_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (L_9)
				{
					goto IL_0048;
				}
			}

IL_0043:
			{
				goto IL_0064;
			}

IL_0048:
			{
				Object_t * L_10 = V_4;
				String_t* L_11 = ___url;
				ObjectU5BU5D_t280* L_12 = V_0;
				String_t** L_13 = ___objectUri;
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
				Object_t * L_14 = ChannelServices_CreateClientChannelSinkChain_m7749(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
				V_5 = L_14;
				Object_t * L_15 = V_5;
				if (!L_15)
				{
					goto IL_0064;
				}
			}

IL_005b:
			{
				Object_t * L_16 = V_5;
				V_9 = L_16;
				IL2CPP_LEAVE(0x114, FINALLY_0074);
			}

IL_0064:
			{
				Object_t * L_17 = V_3;
				NullCheck(L_17);
				bool L_18 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0028;
				}
			}

IL_006f:
			{
				IL2CPP_LEAVE(0x89, FINALLY_0074);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t287 *)e.ex;
			goto FINALLY_0074;
		}

FINALLY_0074:
		{ // begin finally (depth: 2)
			{
				Object_t * L_19 = V_3;
				V_10 = ((Object_t *)IsInst(L_19, IDisposable_t289_il2cpp_TypeInfo_var));
				Object_t * L_20 = V_10;
				if (L_20)
				{
					goto IL_0081;
				}
			}

IL_0080:
			{
				IL2CPP_END_FINALLY(116)
			}

IL_0081:
			{
				Object_t * L_21 = V_10;
				NullCheck(L_21);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_21);
				IL2CPP_END_FINALLY(116)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(116)
		{
			IL2CPP_END_CLEANUP(0x114, FINALLY_0108);
			IL2CPP_JUMP_TBL(0x89, IL_0089)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
		}

IL_0089:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			RemotingConfiguration_LoadDefaultDelayedChannels_m8065(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_22 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
			NullCheck(L_22);
			Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
			V_7 = L_23;
		}

IL_009a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00dc;
			}

IL_009f:
			{
				Object_t * L_24 = V_7;
				NullCheck(L_24);
				Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_24);
				V_6 = ((Object_t *)Castclass(L_25, IChannelSender_t1612_il2cpp_TypeInfo_var));
				Object_t * L_26 = V_6;
				String_t* L_27 = ___url;
				ObjectU5BU5D_t280* L_28 = V_0;
				String_t** L_29 = ___objectUri;
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
				Object_t * L_30 = ChannelServices_CreateClientChannelSinkChain_m7749(NULL /*static, unused*/, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
				V_8 = L_30;
				Object_t * L_31 = V_8;
				if (!L_31)
				{
					goto IL_00dc;
				}
			}

IL_00c0:
			{
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
				ArrayList_t607 * L_32 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
				Object_t * L_33 = V_6;
				NullCheck(L_32);
				VirtActionInvoker1< Object_t * >::Invoke(37 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_32, L_33);
				Object_t * L_34 = V_6;
				ChannelServices_RegisterChannel_m7750(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
				Object_t * L_35 = V_8;
				V_9 = L_35;
				IL2CPP_LEAVE(0x114, FINALLY_00ed);
			}

IL_00dc:
			{
				Object_t * L_36 = V_7;
				NullCheck(L_36);
				bool L_37 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_009f;
				}
			}

IL_00e8:
			{
				IL2CPP_LEAVE(0x103, FINALLY_00ed);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t287 *)e.ex;
			goto FINALLY_00ed;
		}

FINALLY_00ed:
		{ // begin finally (depth: 2)
			{
				Object_t * L_38 = V_7;
				V_11 = ((Object_t *)IsInst(L_38, IDisposable_t289_il2cpp_TypeInfo_var));
				Object_t * L_39 = V_11;
				if (L_39)
				{
					goto IL_00fb;
				}
			}

IL_00fa:
			{
				IL2CPP_END_FINALLY(237)
			}

IL_00fb:
			{
				Object_t * L_40 = V_11;
				NullCheck(L_40);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_40);
				IL2CPP_END_FINALLY(237)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(237)
		{
			IL2CPP_END_CLEANUP(0x114, FINALLY_0108);
			IL2CPP_JUMP_TBL(0x103, IL_0103)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
		}

IL_0103:
		{
			IL2CPP_LEAVE(0x10F, FINALLY_0108);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0108;
	}

FINALLY_0108:
	{ // begin finally (depth: 1)
		Object_t * L_41 = V_1;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(264)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(264)
	{
		IL2CPP_JUMP_TBL(0x114, IL_0114)
		IL2CPP_JUMP_TBL(0x10F, IL_010f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_010f:
	{
		String_t** L_42 = ___objectUri;
		*((Object_t **)(L_42)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}

IL_0114:
	{
		Object_t * L_43 = V_9;
		return L_43;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.Runtime.Remoting.Channels.IChannelSender,System.String,System.Object[],System.String&)
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* IChannelSender_t1612_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelDataStore_t1630_il2cpp_TypeInfo_var;
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m7749 (Object_t * __this /* static, unused */, Object_t * ___sender, String_t* ___url, ObjectU5BU5D_t280* ___channelDataArray, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelSender_t1612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(877);
		IChannelDataStore_t1630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(878);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t280* V_1 = {0};
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		String_t** L_0 = ___objectUri;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		ObjectU5BU5D_t280* L_1 = ___channelDataArray;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_2 = ___sender;
		String_t* L_3 = ___url;
		String_t** L_4 = ___objectUri;
		NullCheck(L_2);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1612_il2cpp_TypeInfo_var, L_2, L_3, NULL, L_4);
		return L_5;
	}

IL_0013:
	{
		ObjectU5BU5D_t280* L_6 = ___channelDataArray;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0050;
	}

IL_001c:
	{
		ObjectU5BU5D_t280* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9, sizeof(Object_t *)));
		Object_t * L_10 = V_0;
		if (!((Object_t *)IsInst(L_10, IChannelDataStore_t1630_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		Object_t * L_11 = ___sender;
		Object_t * L_12 = V_0;
		String_t** L_13 = ___objectUri;
		NullCheck(L_11);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1612_il2cpp_TypeInfo_var, L_11, (String_t*)NULL, L_12, L_13);
		V_3 = L_14;
		goto IL_0044;
	}

IL_003a:
	{
		Object_t * L_15 = ___sender;
		String_t* L_16 = ___url;
		Object_t * L_17 = V_0;
		String_t** L_18 = ___objectUri;
		NullCheck(L_15);
		Object_t * L_19 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1612_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18);
		V_3 = L_19;
	}

IL_0044:
	{
		Object_t * L_20 = V_3;
		if (!L_20)
		{
			goto IL_004c;
		}
	}
	{
		Object_t * L_21 = V_3;
		return L_21;
	}

IL_004c:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_23 = V_2;
		ObjectU5BU5D_t280* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		return (Object_t *)NULL;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m7750 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___chnl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m7751(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t560_il2cpp_TypeInfo_var;
extern TypeInfo* ISecurableChannel_t1631_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1613_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1632_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t897_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1836;
extern Il2CppCodeGenString* _stringLiteral1837;
extern Il2CppCodeGenString* _stringLiteral1838;
extern Il2CppCodeGenString* _stringLiteral1839;
extern "C" void ChannelServices_RegisterChannel_m7751 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		ISecurableChannel_t1631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(879);
		IChannel_t1613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(876);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		IChannelReceiver_t1632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(880);
		IList_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		_stringLiteral1836 = il2cpp_codegen_string_literal_from_index(1836);
		_stringLiteral1837 = il2cpp_codegen_string_literal_from_index(1837);
		_stringLiteral1838 = il2cpp_codegen_string_literal_from_index(1838);
		_stringLiteral1839 = il2cpp_codegen_string_literal_from_index(1839);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___chnl;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t560 * L_1 = (ArgumentNullException_t560 *)il2cpp_codegen_object_new (ArgumentNullException_t560_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2917(L_1, _stringLiteral1836, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		bool L_2 = ___ensureSecurity;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_3 = ___chnl;
		V_1 = ((Object_t *)IsInst(L_3, ISecurableChannel_t1631_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		Object_t * L_5 = ___chnl;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1613_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m1537(NULL /*static, unused*/, _stringLiteral1837, L_6, /*hidden argument*/NULL);
		RemotingException_t1343 * L_8 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_003a:
	{
		Object_t * L_9 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean) */, ISecurableChannel_t1631_il2cpp_TypeInfo_var, L_9, 1);
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		ArrayList_t607 * L_10 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_10);
		V_0 = L_11;
		Object_t * L_12 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00d4;
		}

IL_005b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_13 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_14 = V_3;
			NullCheck(L_13);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
			V_4 = ((Object_t *)Castclass(L_15, IChannel_t1613_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1613_il2cpp_TypeInfo_var, L_16);
			Object_t * L_18 = ___chnl;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1613_il2cpp_TypeInfo_var, L_18);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_20 = String_op_Equality_m1759(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00b5;
			}
		}

IL_0084:
		{
			Object_t * L_21 = ___chnl;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1613_il2cpp_TypeInfo_var, L_21);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			bool L_24 = String_op_Inequality_m1779(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00b5;
			}
		}

IL_0099:
		{
			Object_t * L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1613_il2cpp_TypeInfo_var, L_25);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1838, L_26, _stringLiteral1839, /*hidden argument*/NULL);
			RemotingException_t1343 * L_28 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
			RemotingException__ctor_m8110(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_28);
		}

IL_00b5:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t1613_il2cpp_TypeInfo_var, L_29);
			Object_t * L_31 = ___chnl;
			NullCheck(L_31);
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t1613_il2cpp_TypeInfo_var, L_31);
			if ((((int32_t)L_30) >= ((int32_t)L_32)))
			{
				goto IL_00d0;
			}
		}

IL_00c7:
		{
			int32_t L_33 = V_2;
			if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
			{
				goto IL_00d0;
			}
		}

IL_00ce:
		{
			int32_t L_34 = V_3;
			V_2 = L_34;
		}

IL_00d0:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
		}

IL_00d4:
		{
			int32_t L_36 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_37 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_37);
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
			if ((((int32_t)L_36) < ((int32_t)L_38)))
			{
				goto IL_005b;
			}
		}

IL_00e4:
		{
			int32_t L_39 = V_2;
			if ((((int32_t)L_39) == ((int32_t)(-1))))
			{
				goto IL_00fc;
			}
		}

IL_00eb:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_40 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_41 = V_2;
			Object_t * L_42 = ___chnl;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(35 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_40, L_41, L_42);
			goto IL_0108;
		}

IL_00fc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_43 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			Object_t * L_44 = ___chnl;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		}

IL_0108:
		{
			Object_t * L_45 = ___chnl;
			V_5 = ((Object_t *)IsInst(L_45, IChannelReceiver_t1632_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0139;
			}
		}

IL_0117:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			Object_t * L_47 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4;
			Object_t * L_48 = ___chnl;
			NullCheck(L_48);
			Type_t * L_49 = Object_GetType_m1452(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_49);
			NullCheck(L_47);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t897_il2cpp_TypeInfo_var, L_47, L_50);
			if (!L_51)
			{
				goto IL_0139;
			}
		}

IL_0131:
		{
			Object_t * L_52 = V_5;
			NullCheck(L_52);
			InterfaceActionInvoker1< Object_t * >::Invoke(1 /* System.Void System.Runtime.Remoting.Channels.IChannelReceiver::StartListening(System.Object) */, IChannelReceiver_t1632_il2cpp_TypeInfo_var, L_52, NULL);
		}

IL_0139:
		{
			IL2CPP_LEAVE(0x145, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		Object_t * L_53 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_JUMP_TBL(0x145, IL_0145)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0145:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannelConfig(System.Runtime.Remoting.ChannelData)
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern const Il2CppType* IChannelSender_t1612_0_0_0_var;
extern const Il2CppType* IChannelReceiver_t1632_0_0_0_var;
extern const Il2CppType* IDictionary_t871_0_0_0_var;
extern const Il2CppType* IClientChannelSinkProvider_t1634_0_0_0_var;
extern const Il2CppType* IServerChannelSinkProvider_t1633_0_0_0_var;
extern TypeInfo* ProviderData_t1341_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern TypeInfo* IServerChannelSinkProvider_t1633_il2cpp_TypeInfo_var;
extern TypeInfo* IClientChannelSinkProvider_t1634_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t532_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1613_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1224_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1632_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1840;
extern Il2CppCodeGenString* _stringLiteral1841;
extern Il2CppCodeGenString* _stringLiteral1842;
extern Il2CppCodeGenString* _stringLiteral1843;
extern Il2CppCodeGenString* _stringLiteral1844;
extern "C" void ChannelServices_RegisterChannelConfig_m7752 (Object_t * __this /* static, unused */, ChannelData_t1340 * ___channel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelSender_t1612_0_0_0_var = il2cpp_codegen_type_from_index(877);
		IChannelReceiver_t1632_0_0_0_var = il2cpp_codegen_type_from_index(880);
		IDictionary_t871_0_0_0_var = il2cpp_codegen_type_from_index(510);
		IClientChannelSinkProvider_t1634_0_0_0_var = il2cpp_codegen_type_from_index(881);
		IServerChannelSinkProvider_t1633_0_0_0_var = il2cpp_codegen_type_from_index(882);
		ProviderData_t1341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(883);
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		IServerChannelSinkProvider_t1633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		IClientChannelSinkProvider_t1634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		TypeU5BU5D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		IChannel_t1613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(876);
		TargetInvocationException_t1224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		IChannelReceiver_t1632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(880);
		_stringLiteral1840 = il2cpp_codegen_string_literal_from_index(1840);
		_stringLiteral1841 = il2cpp_codegen_string_literal_from_index(1841);
		_stringLiteral1842 = il2cpp_codegen_string_literal_from_index(1842);
		_stringLiteral1843 = il2cpp_codegen_string_literal_from_index(1843);
		_stringLiteral1844 = il2cpp_codegen_string_literal_from_index(1844);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	ProviderData_t1341 * V_3 = {0};
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
	ProviderData_t1341 * V_6 = {0};
	Object_t * V_7 = {0};
	Type_t * V_8 = {0};
	ObjectU5BU5D_t280* V_9 = {0};
	TypeU5BU5D_t532* V_10 = {0};
	bool V_11 = false;
	bool V_12 = false;
	ConstructorInfo_t565 * V_13 = {0};
	Object_t * V_14 = {0};
	Object_t * V_15 = {0};
	TargetInvocationException_t1224 * V_16 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Object_t *)NULL;
		V_1 = (Object_t *)NULL;
		ChannelData_t1340 * L_0 = ___channel;
		NullCheck(L_0);
		ArrayList_t607 * L_1 = ChannelData_get_ServerProviders_m8102(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)1));
		goto IL_0045;
	}

IL_0017:
	{
		ChannelData_t1340 * L_3 = ___channel;
		NullCheck(L_3);
		ArrayList_t607 * L_4 = ChannelData_get_ServerProviders_m8102(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		V_3 = ((ProviderData_t1341 *)IsInstClass(L_6, ProviderData_t1341_il2cpp_TypeInfo_var));
		ProviderData_t1341 * L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		Object_t * L_8 = ChannelServices_CreateProvider_m7753(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_4 = ((Object_t *)Castclass(L_8, IServerChannelSinkProvider_t1633_il2cpp_TypeInfo_var));
		Object_t * L_9 = V_4;
		Object_t * L_10 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.IServerChannelSinkProvider::set_Next(System.Runtime.Remoting.Channels.IServerChannelSinkProvider) */, IServerChannelSinkProvider_t1633_il2cpp_TypeInfo_var, L_9, L_10);
		Object_t * L_11 = V_4;
		V_0 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12-(int32_t)1));
	}

IL_0045:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		ChannelData_t1340 * L_14 = ___channel;
		NullCheck(L_14);
		ArrayList_t607 * L_15 = ChannelData_get_ClientProviders_m8103(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_15);
		V_5 = ((int32_t)((int32_t)L_16-(int32_t)1));
		goto IL_0093;
	}

IL_0060:
	{
		ChannelData_t1340 * L_17 = ___channel;
		NullCheck(L_17);
		ArrayList_t607 * L_18 = ChannelData_get_ClientProviders_m8103(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_5;
		NullCheck(L_18);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_18, L_19);
		V_6 = ((ProviderData_t1341 *)IsInstClass(L_20, ProviderData_t1341_il2cpp_TypeInfo_var));
		ProviderData_t1341 * L_21 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		Object_t * L_22 = ChannelServices_CreateProvider_m7753(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_7 = ((Object_t *)Castclass(L_22, IClientChannelSinkProvider_t1634_il2cpp_TypeInfo_var));
		Object_t * L_23 = V_7;
		Object_t * L_24 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.IClientChannelSinkProvider::set_Next(System.Runtime.Remoting.Channels.IClientChannelSinkProvider) */, IClientChannelSinkProvider_t1634_il2cpp_TypeInfo_var, L_23, L_24);
		Object_t * L_25 = V_7;
		V_1 = L_25;
		int32_t L_26 = V_5;
		V_5 = ((int32_t)((int32_t)L_26-(int32_t)1));
	}

IL_0093:
	{
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		ChannelData_t1340 * L_28 = ___channel;
		NullCheck(L_28);
		String_t* L_29 = (L_28->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m5756, L_29, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		V_8 = L_30;
		Type_t * L_31 = V_8;
		if (L_31)
		{
			goto IL_00ca;
		}
	}
	{
		ChannelData_t1340 * L_32 = ___channel;
		NullCheck(L_32);
		String_t* L_33 = (L_32->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1840, L_33, _stringLiteral1841, /*hidden argument*/NULL);
		RemotingException_t1343 * L_35 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_35, L_34, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_35);
	}

IL_00ca:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IChannelSender_t1612_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_37 = V_8;
		NullCheck(L_36);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_36, L_37);
		V_11 = L_38;
		Type_t * L_39 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IChannelReceiver_t1632_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_40 = V_8;
		NullCheck(L_39);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_39, L_40);
		V_12 = L_41;
		bool L_42 = V_11;
		if (!L_42)
		{
			goto IL_014b;
		}
	}
	{
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_014b;
		}
	}
	{
		TypeU5BU5D_t532* L_44 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IDictionary_t871_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, 0);
		ArrayElementTypeCheck (L_44, L_45);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_44, 0, sizeof(Type_t *))) = (Type_t *)L_45;
		TypeU5BU5D_t532* L_46 = L_44;
		Type_t * L_47 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IClientChannelSinkProvider_t1634_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 1);
		ArrayElementTypeCheck (L_46, L_47);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_46, 1, sizeof(Type_t *))) = (Type_t *)L_47;
		TypeU5BU5D_t532* L_48 = L_46;
		Type_t * L_49 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IServerChannelSinkProvider_t1633_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 2);
		ArrayElementTypeCheck (L_48, L_49);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_48, 2, sizeof(Type_t *))) = (Type_t *)L_49;
		V_10 = L_48;
		ObjectU5BU5D_t280* L_50 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 3));
		ChannelData_t1340 * L_51 = ___channel;
		NullCheck(L_51);
		Hashtable_t672 * L_52 = ChannelData_get_CustomProperties_m8104(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 0);
		ArrayElementTypeCheck (L_50, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 0, sizeof(Object_t *))) = (Object_t *)L_52;
		ObjectU5BU5D_t280* L_53 = L_50;
		Object_t * L_54 = V_1;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 1);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 1, sizeof(Object_t *))) = (Object_t *)L_54;
		ObjectU5BU5D_t280* L_55 = L_53;
		Object_t * L_56 = V_0;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 2);
		ArrayElementTypeCheck (L_55, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, 2, sizeof(Object_t *))) = (Object_t *)L_56;
		V_9 = L_55;
		goto IL_01e3;
	}

IL_014b:
	{
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_018e;
		}
	}
	{
		TypeU5BU5D_t532* L_58 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IDictionary_t871_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
		ArrayElementTypeCheck (L_58, L_59);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_58, 0, sizeof(Type_t *))) = (Type_t *)L_59;
		TypeU5BU5D_t532* L_60 = L_58;
		Type_t * L_61 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IClientChannelSinkProvider_t1634_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 1);
		ArrayElementTypeCheck (L_60, L_61);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_60, 1, sizeof(Type_t *))) = (Type_t *)L_61;
		V_10 = L_60;
		ObjectU5BU5D_t280* L_62 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 2));
		ChannelData_t1340 * L_63 = ___channel;
		NullCheck(L_63);
		Hashtable_t672 * L_64 = ChannelData_get_CustomProperties_m8104(L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 0);
		ArrayElementTypeCheck (L_62, L_64);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_62, 0, sizeof(Object_t *))) = (Object_t *)L_64;
		ObjectU5BU5D_t280* L_65 = L_62;
		Object_t * L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 1);
		ArrayElementTypeCheck (L_65, L_66);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_65, 1, sizeof(Object_t *))) = (Object_t *)L_66;
		V_9 = L_65;
		goto IL_01e3;
	}

IL_018e:
	{
		bool L_67 = V_12;
		if (!L_67)
		{
			goto IL_01d1;
		}
	}
	{
		TypeU5BU5D_t532* L_68 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_69 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IDictionary_t871_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, 0);
		ArrayElementTypeCheck (L_68, L_69);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_68, 0, sizeof(Type_t *))) = (Type_t *)L_69;
		TypeU5BU5D_t532* L_70 = L_68;
		Type_t * L_71 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IServerChannelSinkProvider_t1633_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 1);
		ArrayElementTypeCheck (L_70, L_71);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_70, 1, sizeof(Type_t *))) = (Type_t *)L_71;
		V_10 = L_70;
		ObjectU5BU5D_t280* L_72 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 2));
		ChannelData_t1340 * L_73 = ___channel;
		NullCheck(L_73);
		Hashtable_t672 * L_74 = ChannelData_get_CustomProperties_m8104(L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, 0);
		ArrayElementTypeCheck (L_72, L_74);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_72, 0, sizeof(Object_t *))) = (Object_t *)L_74;
		ObjectU5BU5D_t280* L_75 = L_72;
		Object_t * L_76 = V_0;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, 1);
		ArrayElementTypeCheck (L_75, L_76);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_75, 1, sizeof(Object_t *))) = (Object_t *)L_76;
		V_9 = L_75;
		goto IL_01e3;
	}

IL_01d1:
	{
		Type_t * L_77 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m1380(NULL /*static, unused*/, L_77, _stringLiteral1842, /*hidden argument*/NULL);
		RemotingException_t1343 * L_79 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_79, L_78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_79);
	}

IL_01e3:
	{
		Type_t * L_80 = V_8;
		TypeU5BU5D_t532* L_81 = V_10;
		NullCheck(L_80);
		ConstructorInfo_t565 * L_82 = (ConstructorInfo_t565 *)VirtFuncInvoker1< ConstructorInfo_t565 *, TypeU5BU5D_t532* >::Invoke(67 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_80, L_81);
		V_13 = L_82;
		ConstructorInfo_t565 * L_83 = V_13;
		if (L_83)
		{
			goto IL_0207;
		}
	}
	{
		Type_t * L_84 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_85 = String_Concat_m1380(NULL /*static, unused*/, L_84, _stringLiteral1843, /*hidden argument*/NULL);
		RemotingException_t1343 * L_86 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_86, L_85, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_86);
	}

IL_0207:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t565 * L_87 = V_13;
		ObjectU5BU5D_t280* L_88 = V_9;
		NullCheck(L_87);
		Object_t * L_89 = ConstructorInfo_Invoke_m2924(L_87, L_88, /*hidden argument*/NULL);
		V_14 = ((Object_t *)Castclass(L_89, IChannel_t1613_il2cpp_TypeInfo_var));
		goto IL_022b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t287 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t1224_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_021c;
		throw e;
	}

CATCH_021c:
	{ // begin catch(System.Reflection.TargetInvocationException)
		V_16 = ((TargetInvocationException_t1224 *)__exception_local);
		TargetInvocationException_t1224 * L_90 = V_16;
		NullCheck(L_90);
		Exception_t287 * L_91 = (Exception_t287 *)VirtFuncInvoker0< Exception_t287 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_90);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_91);
		goto IL_022b;
	} // end catch (depth: 1)

IL_022b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		ArrayList_t607 * L_92 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_92);
		Object_t * L_93 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_92);
		V_15 = L_93;
		Object_t * L_94 = V_15;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
	}

IL_023e:
	try
	{ // begin try (depth: 1)
		{
			ChannelData_t1340 * L_95 = ___channel;
			NullCheck(L_95);
			String_t* L_96 = (L_95->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_97 = String_op_Equality_m1759(NULL /*static, unused*/, L_96, _stringLiteral1844, /*hidden argument*/NULL);
			if (!L_97)
			{
				goto IL_0271;
			}
		}

IL_0253:
		{
			Object_t * L_98 = V_14;
			if (((Object_t *)IsInst(L_98, IChannelReceiver_t1632_il2cpp_TypeInfo_var)))
			{
				goto IL_0271;
			}
		}

IL_025f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_99 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
			Object_t * L_100 = V_14;
			NullCheck(L_99);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_99, L_100);
			goto IL_0278;
		}

IL_0271:
		{
			Object_t * L_101 = V_14;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ChannelServices_RegisterChannel_m7750(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
		}

IL_0278:
		{
			IL2CPP_LEAVE(0x285, FINALLY_027d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_027d;
	}

FINALLY_027d:
	{ // begin finally (depth: 1)
		Object_t * L_102 = V_15;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_102, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(637)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(637)
	{
		IL2CPP_JUMP_TBL(0x285, IL_0285)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0285:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.Channels.ChannelServices::CreateProvider(System.Runtime.Remoting.ProviderData)
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderData.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t287_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1224_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1840;
extern Il2CppCodeGenString* _stringLiteral1841;
extern Il2CppCodeGenString* _stringLiteral1845;
extern Il2CppCodeGenString* _stringLiteral1846;
extern "C" Object_t * ChannelServices_CreateProvider_m7753 (Object_t * __this /* static, unused */, ProviderData_t1341 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Exception_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		TargetInvocationException_t1224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		_stringLiteral1840 = il2cpp_codegen_string_literal_from_index(1840);
		_stringLiteral1841 = il2cpp_codegen_string_literal_from_index(1841);
		_stringLiteral1845 = il2cpp_codegen_string_literal_from_index(1845);
		_stringLiteral1846 = il2cpp_codegen_string_literal_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	ObjectU5BU5D_t280* V_1 = {0};
	Exception_t287 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ProviderData_t1341 * L_0 = ___prov;
		NullCheck(L_0);
		String_t* L_1 = (L_0->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m5756, L_1, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		ProviderData_t1341 * L_4 = ___prov;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1840, L_5, _stringLiteral1841, /*hidden argument*/NULL);
		RemotingException_t1343 * L_7 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_002d:
	{
		ObjectU5BU5D_t280* L_8 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 2));
		ProviderData_t1341 * L_9 = ___prov;
		NullCheck(L_9);
		Hashtable_t672 * L_10 = (L_9->___CustomProperties_3);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t280* L_11 = L_8;
		ProviderData_t1341 * L_12 = ___prov;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___CustomData_4);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1, sizeof(Object_t *))) = (Object_t *)L_13;
		V_1 = L_11;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_14 = V_0;
			ObjectU5BU5D_t280* L_15 = V_1;
			Object_t * L_16 = Activator_CreateInstance_m9102(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			goto IL_00a3;
		}

IL_0053:
		{
			; // IL_0053: leave IL_00a3
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t287 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t287_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0058;
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t287 *)__exception_local);
			Exception_t287 * L_17 = V_2;
			if (!((TargetInvocationException_t1224 *)IsInstSealed(L_17, TargetInvocationException_t1224_il2cpp_TypeInfo_var)))
			{
				goto IL_0070;
			}
		}

IL_0064:
		{
			Exception_t287 * L_18 = V_2;
			NullCheck(((TargetInvocationException_t1224 *)CastclassSealed(L_18, TargetInvocationException_t1224_il2cpp_TypeInfo_var)));
			Exception_t287 * L_19 = (Exception_t287 *)VirtFuncInvoker0< Exception_t287 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, ((TargetInvocationException_t1224 *)CastclassSealed(L_18, TargetInvocationException_t1224_il2cpp_TypeInfo_var)));
			V_2 = L_19;
		}

IL_0070:
		{
			ObjectU5BU5D_t280* L_20 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 4));
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
			ArrayElementTypeCheck (L_20, _stringLiteral1845);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral1845;
			ObjectU5BU5D_t280* L_21 = L_20;
			Type_t * L_22 = V_0;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
			ArrayElementTypeCheck (L_21, L_22);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 1, sizeof(Object_t *))) = (Object_t *)L_22;
			ObjectU5BU5D_t280* L_23 = L_21;
			NullCheck(L_23);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
			ArrayElementTypeCheck (L_23, _stringLiteral1846);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_23, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral1846;
			ObjectU5BU5D_t280* L_24 = L_23;
			Exception_t287 * L_25 = V_2;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_25);
			NullCheck(L_24);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
			ArrayElementTypeCheck (L_24, L_26);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 3, sizeof(Object_t *))) = (Object_t *)L_26;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m1421(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			RemotingException_t1343 * L_28 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
			RemotingException__ctor_m8110(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_28);
			goto IL_00a3;
		}
	} // end catch (depth: 1)

IL_00a3:
	{
		Object_t * L_29 = V_3;
		return L_29;
	}
}
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1632_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t280* ChannelServices_GetCurrentChannelInfo_m7754 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IChannelReceiver_t1632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(880);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t607 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t607 * L_0 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		ArrayList_t607 * L_1 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_4 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0056;
			}

IL_0027:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelReceiver_t1632_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (!L_9)
				{
					goto IL_0056;
				}
			}

IL_003d:
			{
				Object_t * L_10 = V_4;
				NullCheck(L_10);
				Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Runtime.Remoting.Channels.IChannelReceiver::get_ChannelData() */, IChannelReceiver_t1632_il2cpp_TypeInfo_var, L_10);
				V_5 = L_11;
				Object_t * L_12 = V_5;
				if (!L_12)
				{
					goto IL_0056;
				}
			}

IL_004d:
			{
				ArrayList_t607 * L_13 = V_0;
				Object_t * L_14 = V_5;
				NullCheck(L_13);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
			}

IL_0056:
			{
				Object_t * L_15 = V_3;
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0027;
				}
			}

IL_0061:
			{
				IL2CPP_LEAVE(0x7B, FINALLY_0066);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t287 *)e.ex;
			goto FINALLY_0066;
		}

FINALLY_0066:
		{ // begin finally (depth: 2)
			{
				Object_t * L_17 = V_3;
				V_6 = ((Object_t *)IsInst(L_17, IDisposable_t289_il2cpp_TypeInfo_var));
				Object_t * L_18 = V_6;
				if (L_18)
				{
					goto IL_0073;
				}
			}

IL_0072:
			{
				IL2CPP_END_FINALLY(102)
			}

IL_0073:
			{
				Object_t * L_19 = V_6;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_19);
				IL2CPP_END_FINALLY(102)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(102)
		{
			IL2CPP_JUMP_TBL(0x7B, IL_007b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(128)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0087:
	{
		ArrayList_t607 * L_21 = V_0;
		NullCheck(L_21);
		ObjectU5BU5D_t280* L_22 = (ObjectU5BU5D_t280*)VirtFuncInvoker0< ObjectU5BU5D_t280* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_21);
		return L_22;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainData__ctor_m7755 (CrossAppDomainData_t1267 * __this, int32_t ___domainId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_0);
		__this->____ContextID_0 = L_1;
		int32_t L_2 = ___domainId;
		__this->____DomainID_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		String_t* L_3 = RemotingConfiguration_get_ProcessId_m8064(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____processGuid_2 = L_3;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::get_DomainID()
extern "C" int32_t CrossAppDomainData_get_DomainID_m7756 (CrossAppDomainData_t1267 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____DomainID_1);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::get_ProcessID()
extern "C" String_t* CrossAppDomainData_get_ProcessID_m7757 (CrossAppDomainData_t1267 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____processGuid_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CrossAppDomainChannel__ctor_m7758 (CrossAppDomainChannel_t1268 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainChannel_t1268_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel__cctor_m7759 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CrossAppDomainChannel_t1268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(884);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1387(L_0, /*hidden argument*/NULL);
		((CrossAppDomainChannel_t1268_StaticFields*)CrossAppDomainChannel_t1268_il2cpp_TypeInfo_var->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
extern TypeInfo* CrossAppDomainChannel_t1268_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m7760 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t1268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(884);
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t1268 * V_1 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t1268_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((CrossAppDomainChannel_t1268_StaticFields*)CrossAppDomainChannel_t1268_il2cpp_TypeInfo_var->static_fields)->___s_lock_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		CrossAppDomainChannel_t1268 * L_2 = (CrossAppDomainChannel_t1268 *)il2cpp_codegen_object_new (CrossAppDomainChannel_t1268_il2cpp_TypeInfo_var);
		CrossAppDomainChannel__ctor_m7758(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		CrossAppDomainChannel_t1268 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m7750(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x24, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0024:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern Il2CppCodeGenString* _stringLiteral1847;
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m7761 (CrossAppDomainChannel_t1268 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1847 = il2cpp_codegen_string_literal_from_index(1847);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral1847;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m7762 (CrossAppDomainChannel_t1268 * __this, const MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"
extern TypeInfo* Thread_t1281_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainData_t1267_il2cpp_TypeInfo_var;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m7763 (CrossAppDomainChannel_t1268 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(648);
		CrossAppDomainData_t1267_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(885);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetDomainID_m9037(NULL /*static, unused*/, /*hidden argument*/NULL);
		CrossAppDomainData_t1267 * L_1 = (CrossAppDomainData_t1267 *)il2cpp_codegen_object_new (CrossAppDomainData_t1267_il2cpp_TypeInfo_var);
		CrossAppDomainData__ctor_m7755(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void CrossAppDomainChannel_StartListening_m7764 (CrossAppDomainChannel_t1268 * __this, Object_t * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.CrossAppDomainChannel::CreateMessageSink(System.String,System.Object,System.String&)
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* CrossAppDomainData_t1267_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1269_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t300_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1847;
extern Il2CppCodeGenString* _stringLiteral1848;
extern "C" Object_t * CrossAppDomainChannel_CreateMessageSink_m7765 (CrossAppDomainChannel_t1268 * __this, String_t* ___url, Object_t * ___data, String_t** ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainData_t1267_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(885);
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		CrossAppDomainSink_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(886);
		NotSupportedException_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		_stringLiteral1847 = il2cpp_codegen_string_literal_from_index(1847);
		_stringLiteral1848 = il2cpp_codegen_string_literal_from_index(1848);
		s_Il2CppMethodIntialized = true;
	}
	CrossAppDomainData_t1267 * V_0 = {0};
	{
		String_t** L_0 = ___uri;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		Object_t * L_1 = ___data;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		Object_t * L_2 = ___data;
		V_0 = ((CrossAppDomainData_t1267 *)IsInstClass(L_2, CrossAppDomainData_t1267_il2cpp_TypeInfo_var));
		CrossAppDomainData_t1267 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		CrossAppDomainData_t1267 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = CrossAppDomainData_get_ProcessID_m7757(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		String_t* L_6 = RemotingConfiguration_get_ProcessId_m8064(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1759(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		CrossAppDomainData_t1267 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = CrossAppDomainData_get_DomainID_m7756(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1269_il2cpp_TypeInfo_var);
		CrossAppDomainSink_t1269 * L_10 = CrossAppDomainSink_GetSink_m7768(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0037:
	{
		String_t* L_11 = ___url;
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_12 = ___url;
		NullCheck(L_12);
		bool L_13 = String_StartsWith_m2899(L_12, _stringLiteral1847, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t300 * L_14 = (NotSupportedException_t300 *)il2cpp_codegen_object_new (NotSupportedException_t300_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3878(L_14, _stringLiteral1848, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_0058:
	{
		return (Object_t *)NULL;
	}
}
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CrossAppDomainSink__ctor_m7766 (CrossAppDomainSink_t1269 * __this, int32_t ___domainID, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___domainID;
		__this->____domainID_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* CrossAppDomainSink_t1269_0_0_0_var;
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1269_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1849;
extern "C" void CrossAppDomainSink__cctor_m7767 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t1269_0_0_0_var = il2cpp_codegen_type_from_index(886);
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		CrossAppDomainSink_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(886);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		_stringLiteral1849 = il2cpp_codegen_string_literal_from_index(1849);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t672 * L_0 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_0, /*hidden argument*/NULL);
		((CrossAppDomainSink_t1269_StaticFields*)CrossAppDomainSink_t1269_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(CrossAppDomainSink_t1269_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_2 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral1849, ((int32_t)40));
		((CrossAppDomainSink_t1269_StaticFields*)CrossAppDomainSink_t1269_il2cpp_TypeInfo_var->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainSink System.Runtime.Remoting.Channels.CrossAppDomainSink::GetSink(System.Int32)
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
extern TypeInfo* CrossAppDomainSink_t1269_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern "C" CrossAppDomainSink_t1269 * CrossAppDomainSink_GetSink_m7768 (Object_t * __this /* static, unused */, int32_t ___domainID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(886);
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainSink_t1269 * V_1 = {0};
	CrossAppDomainSink_t1269 * V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1269_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((CrossAppDomainSink_t1269_StaticFields*)CrossAppDomainSink_t1269_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1269_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_3 = ((CrossAppDomainSink_t1269_StaticFields*)CrossAppDomainSink_t1269_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_4 = ___domainID;
			int32_t L_5 = L_4;
			Object_t * L_6 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_5);
			NullCheck(L_3);
			bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_3, L_6);
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_0026:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1269_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_8 = ((CrossAppDomainSink_t1269_StaticFields*)CrossAppDomainSink_t1269_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_9 = ___domainID;
			int32_t L_10 = L_9;
			Object_t * L_11 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_10);
			NullCheck(L_8);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, L_11);
			V_2 = ((CrossAppDomainSink_t1269 *)CastclassClass(L_12, CrossAppDomainSink_t1269_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}

IL_0041:
		{
			int32_t L_13 = ___domainID;
			CrossAppDomainSink_t1269 * L_14 = (CrossAppDomainSink_t1269 *)il2cpp_codegen_object_new (CrossAppDomainSink_t1269_il2cpp_TypeInfo_var);
			CrossAppDomainSink__ctor_m7766(L_14, L_13, /*hidden argument*/NULL);
			V_1 = L_14;
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1269_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_15 = ((CrossAppDomainSink_t1269_StaticFields*)CrossAppDomainSink_t1269_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_16 = ___domainID;
			int32_t L_17 = L_16;
			Object_t * L_18 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_17);
			CrossAppDomainSink_t1269 * L_19 = V_1;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_18, L_19);
			CrossAppDomainSink_t1269 * L_20 = V_1;
			V_2 = L_20;
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}

IL_0060:
		{
			; // IL_0060: leave IL_006c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Object_t * L_21 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_006c:
	{
		CrossAppDomainSink_t1269 * L_22 = V_2;
		return L_22;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m7769 (CrossAppDomainSink_t1269 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderData.h"
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderDataMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.SinkProviderData::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern "C" void SinkProviderData__ctor_m7770 (SinkProviderData_t1270 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___sinkName_0 = L_0;
		ArrayList_t607 * L_1 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_1, /*hidden argument*/NULL);
		__this->___children_1 = L_1;
		Hashtable_t672 * L_2 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_2, /*hidden argument*/NULL);
		__this->___properties_2 = L_2;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Channels.SinkProviderData::get_Children()
extern "C" Object_t * SinkProviderData_get_Children_m7771 (SinkProviderData_t1270 * __this, const MethodInfo* method)
{
	{
		ArrayList_t607 * L_0 = (__this->___children_1);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Channels.SinkProviderData::get_Properties()
extern "C" Object_t * SinkProviderData_get_Properties_m7772 (SinkProviderData_t1270 * __this, const MethodInfo* method)
{
	{
		Hashtable_t672 * L_0 = (__this->___properties_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0.h"
// System.ContextBoundObject
#include "mscorlib_System_ContextBoundObject.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentity.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ClientContextTerm.h"
// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerContextTerm.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Runtime.Remoting.Messaging.StackBuilderSink
#include "mscorlib_System_Runtime_Remoting_Messaging_StackBuilderSink.h"
// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerObjectTermi.h"
// System.Runtime.Remoting.Lifetime.LeaseSink
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseSink.h"
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
// System.Runtime.Remoting.Contexts.CrossContextDelegate
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextDelega.h"
// System.Runtime.Remoting.Contexts.ContextCallbackObject
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextCallbackObj.h"
// System.LocalDataStoreSlot
#include "mscorlib_System_LocalDataStoreSlot.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0MethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerContextTermMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ClientContextTermMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.StackBuilderSink
#include "mscorlib_System_Runtime_Remoting_Messaging_StackBuilderSinkMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerObjectTermiMethodDeclarations.h"
// System.Runtime.Remoting.Lifetime.LeaseSink
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseSinkMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.ContextCallbackObject
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextCallbackObjMethodDeclarations.h"
// System.LocalDataStoreSlot
#include "mscorlib_System_LocalDataStoreSlotMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.Context::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
extern TypeInfo* Thread_t1281_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" void Context__ctor_m7773 (Context_t1271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(648);
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetDomainID_m9037(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___domain_id_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_count_9;
		int32_t L_2 = L_1;
		((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_count_9 = ((int32_t)((int32_t)L_2+(int32_t)1));
		__this->___context_id_1 = ((int32_t)((int32_t)1+(int32_t)L_2));
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" void Context__cctor_m7774 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t672 * L_0 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_0, /*hidden argument*/NULL);
		((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C" void Context_Finalize_m7775 (Context_t1271 * __this, const MethodInfo* method)
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
		IL2CPP_LEAVE(0xC, FINALLY_0005);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0005;
	}

FINALLY_0005:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(5)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(5)
	{
		IL2CPP_JUMP_TBL(0xC, IL_000c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_000c:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
extern "C" Context_t1271 * Context_get_DefaultContext_m7776 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Context_t1271 * L_0 = AppDomain_InternalGetDefaultContext_m9116(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.Context::get_ContextID()
extern "C" int32_t Context_get_ContextID_m7777 (Context_t1271 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty[] System.Runtime.Remoting.Contexts.Context::get_ContextProperties()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* IContextPropertyU5BU5D_t1614_0_0_0_var;
extern TypeInfo* IContextPropertyU5BU5D_t1614_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" IContextPropertyU5BU5D_t1614* Context_get_ContextProperties_m7778 (Context_t1271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IContextPropertyU5BU5D_t1614_0_0_0_var = il2cpp_codegen_type_from_index(888);
		IContextPropertyU5BU5D_t1614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(888);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (__this->___context_properties_7);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		return ((IContextPropertyU5BU5D_t1614*)SZArrayNew(IContextPropertyU5BU5D_t1614_il2cpp_TypeInfo_var, 0));
	}

IL_0012:
	{
		ArrayList_t607 * L_1 = (__this->___context_properties_7);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IContextPropertyU5BU5D_t1614_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Array_t * L_3 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(47 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_1, L_2);
		return ((IContextPropertyU5BU5D_t1614*)Castclass(L_3, IContextPropertyU5BU5D_t1614_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C" bool Context_get_IsDefaultContext_m7779 (Context_t1271 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_1);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_NeedsContextSink()
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0MethodDeclarations.h"
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" bool Context_get_NeedsContextSink_m7780 (Context_t1271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = (__this->___context_id_1);
		if (L_0)
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_1 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_2 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		NullCheck(L_2);
		bool L_3 = DynamicPropertyCollection_get_HasProperties_m7808(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}

IL_0024:
	{
		DynamicPropertyCollection_t1272 * L_4 = (__this->___context_dynamic_properties_12);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		DynamicPropertyCollection_t1272 * L_5 = (__this->___context_dynamic_properties_12);
		NullCheck(L_5);
		bool L_6 = DynamicPropertyCollection_get_HasProperties_m7808(L_5, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_6));
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 0;
	}

IL_003d:
	{
		G_B8_0 = G_B6_0;
		goto IL_0040;
	}

IL_003f:
	{
		G_B8_0 = 1;
	}

IL_0040:
	{
		return G_B8_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
// System.ContextBoundObject
#include "mscorlib_System_ContextBoundObject.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" bool Context_RegisterDynamicProperty_m7781 (Object_t * __this /* static, unused */, Object_t * ___prop, ContextBoundObject_t1278 * ___obj, Context_t1271 * ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	DynamicPropertyCollection_t1272 * V_0 = {0};
	{
		ContextBoundObject_t1278 * L_0 = ___obj;
		Context_t1271 * L_1 = ___ctx;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_2 = Context_GetDynamicPropertyCollection_m7783(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DynamicPropertyCollection_t1272 * L_3 = V_0;
		Object_t * L_4 = ___prop;
		NullCheck(L_3);
		bool L_5 = DynamicPropertyCollection_RegisterDynamicProperty_m7809(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::UnregisterDynamicProperty(System.String,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" bool Context_UnregisterDynamicProperty_m7782 (Object_t * __this /* static, unused */, String_t* ___name, ContextBoundObject_t1278 * ___obj, Context_t1271 * ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	DynamicPropertyCollection_t1272 * V_0 = {0};
	{
		ContextBoundObject_t1278 * L_0 = ___obj;
		Context_t1271 * L_1 = ___ctx;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_2 = Context_GetDynamicPropertyCollection_m7783(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DynamicPropertyCollection_t1272 * L_3 = V_0;
		String_t* L_4 = ___name;
		NullCheck(L_3);
		bool L_5 = DynamicPropertyCollection_UnregisterDynamicProperty_m7810(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::GetDynamicPropertyCollection(System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* RemotingServices_t1344_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t339_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1850;
extern "C" DynamicPropertyCollection_t1272 * Context_GetDynamicPropertyCollection_m7783 (Object_t * __this /* static, unused */, ContextBoundObject_t1278 * ___obj, Context_t1271 * ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(869);
		DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(890);
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		ArgumentException_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		_stringLiteral1850 = il2cpp_codegen_string_literal_from_index(1850);
		s_Il2CppMethodIntialized = true;
	}
	RealProxy_t1316 * V_0 = {0};
	{
		Context_t1271 * L_0 = ___ctx;
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		ContextBoundObject_t1278 * L_1 = ___obj;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		ContextBoundObject_t1278 * L_2 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		bool L_3 = RemotingServices_IsTransparentProxy_m8115(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ContextBoundObject_t1278 * L_4 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		RealProxy_t1316 * L_5 = RemotingServices_GetRealProxy_m8119(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RealProxy_t1316 * L_6 = V_0;
		NullCheck(L_6);
		Identity_t1324 * L_7 = RealProxy_get_ObjectIdentity_m8010(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		DynamicPropertyCollection_t1272 * L_8 = Identity_get_ClientDynamicProperties_m8037(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002a:
	{
		ContextBoundObject_t1278 * L_9 = ___obj;
		NullCheck(L_9);
		ServerIdentity_t988 * L_10 = MarshalByRefObject_get_ObjectIdentity_m5841(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		DynamicPropertyCollection_t1272 * L_11 = Identity_get_ServerDynamicProperties_m8038(L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0036:
	{
		Context_t1271 * L_12 = ___ctx;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		ContextBoundObject_t1278 * L_13 = ___obj;
		if (L_13)
		{
			goto IL_005f;
		}
	}
	{
		Context_t1271 * L_14 = ___ctx;
		NullCheck(L_14);
		DynamicPropertyCollection_t1272 * L_15 = (L_14->___context_dynamic_properties_12);
		if (L_15)
		{
			goto IL_0058;
		}
	}
	{
		Context_t1271 * L_16 = ___ctx;
		DynamicPropertyCollection_t1272 * L_17 = (DynamicPropertyCollection_t1272 *)il2cpp_codegen_object_new (DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var);
		DynamicPropertyCollection__ctor_m7807(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->___context_dynamic_properties_12 = L_17;
	}

IL_0058:
	{
		Context_t1271 * L_18 = ___ctx;
		NullCheck(L_18);
		DynamicPropertyCollection_t1272 * L_19 = (L_18->___context_dynamic_properties_12);
		return L_19;
	}

IL_005f:
	{
		Context_t1271 * L_20 = ___ctx;
		if (L_20)
		{
			goto IL_0085;
		}
	}
	{
		ContextBoundObject_t1278 * L_21 = ___obj;
		if (L_21)
		{
			goto IL_0085;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_22 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		if (L_22)
		{
			goto IL_007f;
		}
	}
	{
		DynamicPropertyCollection_t1272 * L_23 = (DynamicPropertyCollection_t1272 *)il2cpp_codegen_object_new (DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var);
		DynamicPropertyCollection__ctor_m7807(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11 = L_23;
	}

IL_007f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_24 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		return L_24;
	}

IL_0085:
	{
		ArgumentException_t339 * L_25 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_25, _stringLiteral1850, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_25);
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyGlobalDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" void Context_NotifyGlobalDynamicSinks_m7784 (Object_t * __this /* static, unused */, bool ___start, Object_t * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_0 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_1 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		NullCheck(L_1);
		bool L_2 = DynamicPropertyCollection_get_HasProperties_m7808(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_3 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		bool L_4 = ___start;
		Object_t * L_5 = ___req_msg;
		bool L_6 = ___client_site;
		bool L_7 = ___async;
		NullCheck(L_3);
		DynamicPropertyCollection_NotifyMessage_m7811(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasGlobalDynamicSinks()
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" bool Context_get_HasGlobalDynamicSinks_m7785 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_0 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1272 * L_1 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		NullCheck(L_1);
		bool L_2 = DynamicPropertyCollection_get_HasProperties_m7808(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C" void Context_NotifyDynamicSinks_m7786 (Context_t1271 * __this, bool ___start, Object_t * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method)
{
	{
		DynamicPropertyCollection_t1272 * L_0 = (__this->___context_dynamic_properties_12);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		DynamicPropertyCollection_t1272 * L_1 = (__this->___context_dynamic_properties_12);
		NullCheck(L_1);
		bool L_2 = DynamicPropertyCollection_get_HasProperties_m7808(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		DynamicPropertyCollection_t1272 * L_3 = (__this->___context_dynamic_properties_12);
		bool L_4 = ___start;
		Object_t * L_5 = ___req_msg;
		bool L_6 = ___client_site;
		bool L_7 = ___async;
		NullCheck(L_3);
		DynamicPropertyCollection_NotifyMessage_m7811(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasDynamicSinks()
extern "C" bool Context_get_HasDynamicSinks_m7787 (Context_t1271 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		DynamicPropertyCollection_t1272 * L_0 = (__this->___context_dynamic_properties_12);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		DynamicPropertyCollection_t1272 * L_1 = (__this->___context_dynamic_properties_12);
		NullCheck(L_1);
		bool L_2 = DynamicPropertyCollection_get_HasProperties_m7808(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasExitSinks()
extern TypeInfo* ClientContextTerminatorSink_t1295_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" bool Context_get_HasExitSinks_m7788 (Context_t1271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContextTerminatorSink_t1295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(891);
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = Context_GetClientContextSinkChain_m7794(__this, /*hidden argument*/NULL);
		if (!((ClientContextTerminatorSink_t1295 *)IsInstClass(L_0, ClientContextTerminatorSink_t1295_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = Context_get_HasDynamicSinks_m7787(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		bool L_2 = Context_get_HasGlobalDynamicSinks_m7785(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
	}

IL_0023:
	{
		return G_B4_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1615_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetProperty_m7789 (Context_t1271 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IContextProperty_t1615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(889);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t607 * L_0 = (__this->___context_properties_7);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000d:
	{
		ArrayList_t607 * L_1 = (__this->___context_properties_7);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001e:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Object_t *)Castclass(L_4, IContextProperty_t1615_il2cpp_TypeInfo_var));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name() */, IContextProperty_t1615_il2cpp_TypeInfo_var, L_5);
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m1759(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			Object_t * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x66, FINALLY_0052);
		}

IL_0042:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001e;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_3 = ((Object_t *)IsInst(L_12, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_3;
			if (L_13)
			{
				goto IL_005d;
			}
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(82)
		}

IL_005d:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0064:
	{
		return (Object_t *)NULL;
	}

IL_0066:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::SetProperty(System.Runtime.Remoting.Contexts.IContextProperty)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t560_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t765_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1851;
extern Il2CppCodeGenString* _stringLiteral1852;
extern Il2CppCodeGenString* _stringLiteral1853;
extern "C" void Context_SetProperty_m7790 (Context_t1271 * __this, Object_t * ___prop, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		InvalidOperationException_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral1851 = il2cpp_codegen_string_literal_from_index(1851);
		_stringLiteral1852 = il2cpp_codegen_string_literal_from_index(1852);
		_stringLiteral1853 = il2cpp_codegen_string_literal_from_index(1853);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___prop;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t560 * L_1 = (ArgumentNullException_t560 *)il2cpp_codegen_object_new (ArgumentNullException_t560_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2917(L_1, _stringLiteral1851, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		Context_t1271 * L_2 = Context_get_DefaultContext_m7776(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(Context_t1271 *)__this) == ((Object_t*)(Context_t1271 *)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		InvalidOperationException_t765 * L_3 = (InvalidOperationException_t765 *)il2cpp_codegen_object_new (InvalidOperationException_t765_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3958(L_3, _stringLiteral1852, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0027:
	{
		bool L_4 = (__this->___frozen_8);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t765 * L_5 = (InvalidOperationException_t765 *)il2cpp_codegen_object_new (InvalidOperationException_t765_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3958(L_5, _stringLiteral1853, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_003d:
	{
		ArrayList_t607 * L_6 = (__this->___context_properties_7);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		ArrayList_t607 * L_7 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_7, /*hidden argument*/NULL);
		__this->___context_properties_7 = L_7;
	}

IL_0053:
	{
		ArrayList_t607 * L_8 = (__this->___context_properties_7);
		Object_t * L_9 = ___prop;
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Freeze()
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1615_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" void Context_Freeze_m7791 (Context_t1271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IContextProperty_t1615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(889);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t607 * L_0 = (__this->___context_properties_7);
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		ArrayList_t607 * L_1 = (__this->___context_properties_7);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_001c:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Object_t *)Castclass(L_4, IContextProperty_t1615_il2cpp_TypeInfo_var));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker1< Context_t1271 * >::Invoke(1 /* System.Void System.Runtime.Remoting.Contexts.IContextProperty::Freeze(System.Runtime.Remoting.Contexts.Context) */, IContextProperty_t1615_il2cpp_TypeInfo_var, L_5, __this);
		}

IL_002f:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_001c;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x51, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_8 = V_1;
			V_2 = ((Object_t *)IsInst(L_8, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_2;
			if (L_9)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(63)
		}

IL_004a:
		{
			Object_t * L_10 = V_2;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_10);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0051:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1854;
extern "C" String_t* Context_ToString_m7792 (Context_t1271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral1854 = il2cpp_codegen_string_literal_from_index(1854);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___context_id_1);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t282_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1380(NULL /*static, unused*/, _stringLiteral1854, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetServerContextSinkChain()
// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerContextTermMethodDeclarations.h"
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern TypeInfo* ServerContextTerminatorSink_t1313_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeServerContextSink_t1635_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetServerContextSinkChain_m7793 (Context_t1271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		ServerContextTerminatorSink_t1313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(892);
		IContributeServerContextSink_t1635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(893);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->___server_context_sink_chain_4);
		if (L_0)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___default_server_context_sink_3;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ServerContextTerminatorSink_t1313 * L_2 = (ServerContextTerminatorSink_t1313 *)il2cpp_codegen_object_new (ServerContextTerminatorSink_t1313_il2cpp_TypeInfo_var);
		ServerContextTerminatorSink__ctor_m7976(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___default_server_context_sink_3 = L_2;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		Object_t * L_3 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___default_server_context_sink_3;
		__this->___server_context_sink_chain_4 = L_3;
		ArrayList_t607 * L_4 = (__this->___context_properties_7);
		if (!L_4)
		{
			goto IL_007d;
		}
	}
	{
		ArrayList_t607 * L_5 = (__this->___context_properties_7);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_5);
		V_0 = ((int32_t)((int32_t)L_6-(int32_t)1));
		goto IL_0076;
	}

IL_0048:
	{
		ArrayList_t607 * L_7 = (__this->___context_properties_7);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_7, L_8);
		V_1 = ((Object_t *)IsInst(L_9, IContributeServerContextSink_t1635_il2cpp_TypeInfo_var));
		Object_t * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		Object_t * L_11 = V_1;
		Object_t * L_12 = (__this->___server_context_sink_chain_4);
		NullCheck(L_11);
		Object_t * L_13 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeServerContextSink::GetServerContextSink(System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeServerContextSink_t1635_il2cpp_TypeInfo_var, L_11, L_12);
		__this->___server_context_sink_chain_4 = L_13;
	}

IL_0072:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14-(int32_t)1));
	}

IL_0076:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}

IL_007d:
	{
		Object_t * L_16 = (__this->___server_context_sink_chain_4);
		return L_16;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetClientContextSinkChain()
// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ClientContextTermMethodDeclarations.h"
extern TypeInfo* ClientContextTerminatorSink_t1295_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1615_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeClientContextSink_t1636_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetClientContextSinkChain_m7794 (Context_t1271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContextTerminatorSink_t1295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(891);
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IContextProperty_t1615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(889);
		IContributeClientContextSink_t1636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(894);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___client_context_sink_chain_5);
		if (L_0)
		{
			goto IL_0080;
		}
	}
	{
		ClientContextTerminatorSink_t1295 * L_1 = (ClientContextTerminatorSink_t1295 *)il2cpp_codegen_object_new (ClientContextTerminatorSink_t1295_il2cpp_TypeInfo_var);
		ClientContextTerminatorSink__ctor_m7863(L_1, __this, /*hidden argument*/NULL);
		__this->___client_context_sink_chain_5 = L_1;
		ArrayList_t607 * L_2 = (__this->___context_properties_7);
		if (!L_2)
		{
			goto IL_0080;
		}
	}
	{
		ArrayList_t607 * L_3 = (__this->___context_properties_7);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_0033:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_5);
			V_0 = ((Object_t *)Castclass(L_6, IContextProperty_t1615_il2cpp_TypeInfo_var));
			Object_t * L_7 = V_0;
			V_2 = ((Object_t *)IsInst(L_7, IContributeClientContextSink_t1636_il2cpp_TypeInfo_var));
			Object_t * L_8 = V_2;
			if (!L_8)
			{
				goto IL_005e;
			}
		}

IL_004c:
		{
			Object_t * L_9 = V_2;
			Object_t * L_10 = (__this->___client_context_sink_chain_5);
			NullCheck(L_9);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeClientContextSink::GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeClientContextSink_t1636_il2cpp_TypeInfo_var, L_9, L_10);
			__this->___client_context_sink_chain_5 = L_11;
		}

IL_005e:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0033;
			}
		}

IL_0069:
		{
			IL2CPP_LEAVE(0x80, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_3 = ((Object_t *)IsInst(L_14, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_3;
			if (L_15)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(110)
		}

IL_0079:
		{
			Object_t * L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(110)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x80, IL_0080)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0080:
	{
		Object_t * L_17 = (__this->___client_context_sink_chain_5);
		return L_17;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateServerObjectSinkChain(System.MarshalByRefObject,System.Boolean)
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Runtime.Remoting.Messaging.StackBuilderSink
#include "mscorlib_System_Runtime_Remoting_Messaging_StackBuilderSinkMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerObjectTermiMethodDeclarations.h"
// System.Runtime.Remoting.Lifetime.LeaseSink
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseSinkMethodDeclarations.h"
extern TypeInfo* StackBuilderSink_t1315_il2cpp_TypeInfo_var;
extern TypeInfo* ServerObjectTerminatorSink_t1314_il2cpp_TypeInfo_var;
extern TypeInfo* LeaseSink_t1286_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1615_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeObjectSink_t1637_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_CreateServerObjectSinkChain_m7795 (Context_t1271 * __this, MarshalByRefObject_t824 * ___obj, bool ___forceInternalExecute, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackBuilderSink_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(895);
		ServerObjectTerminatorSink_t1314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(896);
		LeaseSink_t1286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(897);
		IContextProperty_t1615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(889);
		IContributeObjectSink_t1637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(898);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	{
		MarshalByRefObject_t824 * L_0 = ___obj;
		bool L_1 = ___forceInternalExecute;
		StackBuilderSink_t1315 * L_2 = (StackBuilderSink_t1315 *)il2cpp_codegen_object_new (StackBuilderSink_t1315_il2cpp_TypeInfo_var);
		StackBuilderSink__ctor_m7978(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		ServerObjectTerminatorSink_t1314 * L_4 = (ServerObjectTerminatorSink_t1314 *)il2cpp_codegen_object_new (ServerObjectTerminatorSink_t1314_il2cpp_TypeInfo_var);
		ServerObjectTerminatorSink__ctor_m7977(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Object_t * L_5 = V_0;
		LeaseSink_t1286 * L_6 = (LeaseSink_t1286 *)il2cpp_codegen_object_new (LeaseSink_t1286_il2cpp_TypeInfo_var);
		LeaseSink__ctor_m7838(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		ArrayList_t607 * L_7 = (__this->___context_properties_7);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		ArrayList_t607 * L_8 = (__this->___context_properties_7);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_8);
		V_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		goto IL_0060;
	}

IL_0034:
	{
		ArrayList_t607 * L_10 = (__this->___context_properties_7);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_10, L_11);
		V_2 = ((Object_t *)Castclass(L_12, IContextProperty_t1615_il2cpp_TypeInfo_var));
		Object_t * L_13 = V_2;
		V_3 = ((Object_t *)IsInst(L_13, IContributeObjectSink_t1637_il2cpp_TypeInfo_var));
		Object_t * L_14 = V_3;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		Object_t * L_15 = V_3;
		MarshalByRefObject_t824 * L_16 = ___obj;
		Object_t * L_17 = V_0;
		NullCheck(L_15);
		Object_t * L_18 = (Object_t *)InterfaceFuncInvoker2< Object_t *, MarshalByRefObject_t824 *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeObjectSink::GetObjectSink(System.MarshalByRefObject,System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeObjectSink_t1637_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		V_0 = L_18;
	}

IL_005c:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_0060:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_0067:
	{
		Object_t * L_21 = V_0;
		return L_21;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern TypeInfo* EnvoyTerminatorSink_t1300_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1615_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeEnvoySink_t1638_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_CreateEnvoySink_m7796 (Context_t1271 * __this, MarshalByRefObject_t824 * ___serverObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(899);
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IContextProperty_t1615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(889);
		IContributeEnvoySink_t1638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(900);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(EnvoyTerminatorSink_t1300_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink_t1300 * L_0 = ((EnvoyTerminatorSink_t1300_StaticFields*)EnvoyTerminatorSink_t1300_il2cpp_TypeInfo_var->static_fields)->___Instance_0;
		V_0 = L_0;
		ArrayList_t607 * L_1 = (__this->___context_properties_7);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		ArrayList_t607 * L_2 = (__this->___context_properties_7);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0022:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Object_t *)Castclass(L_5, IContextProperty_t1615_il2cpp_TypeInfo_var));
			Object_t * L_6 = V_1;
			V_3 = ((Object_t *)IsInst(L_6, IContributeEnvoySink_t1638_il2cpp_TypeInfo_var));
			Object_t * L_7 = V_3;
			if (!L_7)
			{
				goto IL_0044;
			}
		}

IL_003b:
		{
			Object_t * L_8 = V_3;
			MarshalByRefObject_t824 * L_9 = ___serverObject;
			Object_t * L_10 = V_0;
			NullCheck(L_8);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker2< Object_t *, MarshalByRefObject_t824 *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeEnvoySink::GetEnvoySink(System.MarshalByRefObject,System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeEnvoySink_t1638_il2cpp_TypeInfo_var, L_8, L_9, L_10);
			V_0 = L_11;
		}

IL_0044:
		{
			Object_t * L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0022;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_2;
			V_4 = ((Object_t *)IsInst(L_14, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_4;
			if (L_15)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(84)
		}

IL_0061:
		{
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0069:
	{
		Object_t * L_17 = V_0;
		return L_17;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::SwitchToContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1271 * Context_SwitchToContext_m7797 (Object_t * __this /* static, unused */, Context_t1271 * ___newContext, const MethodInfo* method)
{
	{
		Context_t1271 * L_0 = ___newContext;
		Context_t1271 * L_1 = AppDomain_InternalSetContext_m9114(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::CreateNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1611_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t754_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1615_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1855;
extern "C" Context_t1271 * Context_CreateNewContext_m7798 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		IConstructionCallMessage_t1611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		IEnumerable_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IContextProperty_t1615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(889);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1855 = il2cpp_codegen_string_literal_from_index(1855);
		s_Il2CppMethodIntialized = true;
	}
	Context_t1271 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t1271 * L_0 = (Context_t1271 *)il2cpp_codegen_object_new (Context_t1271_il2cpp_TypeInfo_var);
		Context__ctor_m7773(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = ___msg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t754_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0017:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Object_t *)Castclass(L_5, IContextProperty_t1615_il2cpp_TypeInfo_var));
			Context_t1271 * L_6 = V_0;
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name() */, IContextProperty_t1615_il2cpp_TypeInfo_var, L_7);
			NullCheck(L_6);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_6, L_8);
			if (L_9)
			{
				goto IL_003b;
			}
		}

IL_0034:
		{
			Context_t1271 * L_10 = V_0;
			Object_t * L_11 = V_1;
			NullCheck(L_10);
			VirtActionInvoker1< Object_t * >::Invoke(7 /* System.Void System.Runtime.Remoting.Contexts.Context::SetProperty(System.Runtime.Remoting.Contexts.IContextProperty) */, L_10, L_11);
		}

IL_003b:
		{
			Object_t * L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0017;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x60, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_2;
			V_5 = ((Object_t *)IsInst(L_14, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_5;
			if (L_15)
			{
				goto IL_0058;
			}
		}

IL_0057:
		{
			IL2CPP_END_FINALLY(75)
		}

IL_0058:
		{
			Object_t * L_16 = V_5;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0060:
	{
		Context_t1271 * L_17 = V_0;
		NullCheck(L_17);
		VirtActionInvoker0::Invoke(8 /* System.Void System.Runtime.Remoting.Contexts.Context::Freeze() */, L_17);
		Object_t * L_18 = ___msg;
		NullCheck(L_18);
		Object_t * L_19 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_19);
		Object_t * L_20 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t754_il2cpp_TypeInfo_var, L_19);
		V_4 = L_20;
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009c;
		}

IL_0078:
		{
			Object_t * L_21 = V_4;
			NullCheck(L_21);
			Object_t * L_22 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_21);
			V_3 = ((Object_t *)Castclass(L_22, IContextProperty_t1615_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_3;
			Context_t1271 * L_24 = V_0;
			NullCheck(L_23);
			bool L_25 = (bool)InterfaceFuncInvoker1< bool, Context_t1271 * >::Invoke(2 /* System.Boolean System.Runtime.Remoting.Contexts.IContextProperty::IsNewContextOK(System.Runtime.Remoting.Contexts.Context) */, IContextProperty_t1615_il2cpp_TypeInfo_var, L_23, L_24);
			if (L_25)
			{
				goto IL_009c;
			}
		}

IL_0091:
		{
			RemotingException_t1343 * L_26 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
			RemotingException__ctor_m8110(L_26, _stringLiteral1855, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
		}

IL_009c:
		{
			Object_t * L_27 = V_4;
			NullCheck(L_27);
			bool L_28 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_27);
			if (L_28)
			{
				goto IL_0078;
			}
		}

IL_00a8:
		{
			IL2CPP_LEAVE(0xC3, FINALLY_00ad);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_00ad;
	}

FINALLY_00ad:
	{ // begin finally (depth: 1)
		{
			Object_t * L_29 = V_4;
			V_6 = ((Object_t *)IsInst(L_29, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_30 = V_6;
			if (L_30)
			{
				goto IL_00bb;
			}
		}

IL_00ba:
		{
			IL2CPP_END_FINALLY(173)
		}

IL_00bb:
		{
			Object_t * L_31 = V_6;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_31);
			IL2CPP_END_FINALLY(173)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(173)
	{
		IL2CPP_JUMP_TBL(0xC3, IL_00c3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00c3:
	{
		Context_t1271 * L_32 = V_0;
		return L_32;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate)
// System.Runtime.Remoting.Contexts.CrossContextDelegate
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextDelega.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.ContextCallbackObject
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextCallbackObjMethodDeclarations.h"
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern TypeInfo* ContextCallbackObject_t1273_il2cpp_TypeInfo_var;
extern "C" void Context_DoCallBack_m7799 (Context_t1271 * __this, CrossContextDelegate_t1573 * ___deleg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		ContextCallbackObject_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(902);
		s_Il2CppMethodIntialized = true;
	}
	Context_t1271 * V_0 = {0};
	Context_t1271 * V_1 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		Context_t1271 * L_0 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			ContextCallbackObject_t1273 * L_1 = (__this->___callback_object_13);
			if (L_1)
			{
				goto IL_002c;
			}
		}

IL_0013:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
			Context_t1271 * L_2 = Context_SwitchToContext_m7797(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			V_1 = L_2;
			ContextCallbackObject_t1273 * L_3 = (ContextCallbackObject_t1273 *)il2cpp_codegen_object_new (ContextCallbackObject_t1273_il2cpp_TypeInfo_var);
			ContextCallbackObject__ctor_m7813(L_3, /*hidden argument*/NULL);
			__this->___callback_object_13 = L_3;
			Context_t1271 * L_4 = V_1;
			Context_SwitchToContext_m7797(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Context_t1271 * L_5 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0038:
	{
		ContextCallbackObject_t1273 * L_6 = (__this->___callback_object_13);
		CrossContextDelegate_t1573 * L_7 = ___deleg;
		NullCheck(L_6);
		ContextCallbackObject_DoCallBack_m7814(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateDataSlot()
// System.LocalDataStoreSlot
#include "mscorlib_System_LocalDataStoreSlotMethodDeclarations.h"
extern TypeInfo* LocalDataStoreSlot_t1539_il2cpp_TypeInfo_var;
extern "C" LocalDataStoreSlot_t1539 * Context_AllocateDataSlot_m7800 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LocalDataStoreSlot_t1539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(903);
		s_Il2CppMethodIntialized = true;
	}
	{
		LocalDataStoreSlot_t1539 * L_0 = (LocalDataStoreSlot_t1539 *)il2cpp_codegen_object_new (LocalDataStoreSlot_t1539_il2cpp_TypeInfo_var);
		LocalDataStoreSlot__ctor_m9559(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateNamedDataSlot(System.String)
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" LocalDataStoreSlot_t1539 * Context_AllocateNamedDataSlot_m7801 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	LocalDataStoreSlot_t1539 * V_1 = {0};
	LocalDataStoreSlot_t1539 * V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
			LocalDataStoreSlot_t1539 * L_3 = Context_AllocateDataSlot_m7800(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_1 = L_3;
			Hashtable_t672 * L_4 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
			String_t* L_5 = ___name;
			LocalDataStoreSlot_t1539 * L_6 = V_1;
			NullCheck(L_4);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_4, L_5, L_6);
			LocalDataStoreSlot_t1539 * L_7 = V_1;
			V_2 = L_7;
			IL2CPP_LEAVE(0x36, FINALLY_002f);
		}

IL_002a:
		{
			; // IL_002a: leave IL_0036
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0036:
	{
		LocalDataStoreSlot_t1539 * L_9 = V_2;
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::FreeNamedDataSlot(System.String)
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern "C" void Context_FreeNamedDataSlot_m7802 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_3 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_3, L_4);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0028:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.Contexts.Context::GetData(System.LocalDataStoreSlot)
// System.LocalDataStoreSlot
#include "mscorlib_System_LocalDataStoreSlot.h"
extern TypeInfo* Thread_t1281_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetData_m7803 (Object_t * __this /* static, unused */, LocalDataStoreSlot_t1539 * ___slot, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(648);
		s_Il2CppMethodIntialized = true;
	}
	Context_t1271 * V_0 = {0};
	Context_t1271 * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
		Context_t1271 * L_0 = Thread_get_CurrentContext_m9033(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Context_t1271 * L_1 = V_0;
		V_1 = L_1;
		Context_t1271 * L_2 = V_1;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			Context_t1271 * L_3 = V_0;
			NullCheck(L_3);
			ObjectU5BU5D_t280* L_4 = (L_3->___datastore_6);
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_0019:
		{
			LocalDataStoreSlot_t1539 * L_5 = ___slot;
			NullCheck(L_5);
			int32_t L_6 = (L_5->___slot_0);
			Context_t1271 * L_7 = V_0;
			NullCheck(L_7);
			ObjectU5BU5D_t280* L_8 = (L_7->___datastore_6);
			NullCheck(L_8);
			if ((((int32_t)L_6) >= ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
			{
				goto IL_003f;
			}
		}

IL_002c:
		{
			Context_t1271 * L_9 = V_0;
			NullCheck(L_9);
			ObjectU5BU5D_t280* L_10 = (L_9->___datastore_6);
			LocalDataStoreSlot_t1539 * L_11 = ___slot;
			NullCheck(L_11);
			int32_t L_12 = (L_11->___slot_0);
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_12);
			int32_t L_13 = L_12;
			V_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_13, sizeof(Object_t *)));
			IL2CPP_LEAVE(0x52, FINALLY_004b);
		}

IL_003f:
		{
			V_2 = NULL;
			IL2CPP_LEAVE(0x52, FINALLY_004b);
		}

IL_0046:
		{
			; // IL_0046: leave IL_0052
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Context_t1271 * L_14 = V_1;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0052:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::GetNamedDataSlot(System.String)
extern TypeInfo* Context_t1271_il2cpp_TypeInfo_var;
extern TypeInfo* LocalDataStoreSlot_t1539_il2cpp_TypeInfo_var;
extern "C" LocalDataStoreSlot_t1539 * Context_GetNamedDataSlot_m7804 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		LocalDataStoreSlot_t1539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(903);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	LocalDataStoreSlot_t1539 * V_1 = {0};
	LocalDataStoreSlot_t1539 * V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_3 = ((Context_t1271_StaticFields*)Context_t1271_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
			String_t* L_4 = ___name;
			NullCheck(L_3);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
			V_1 = ((LocalDataStoreSlot_t1539 *)IsInstSealed(L_5, LocalDataStoreSlot_t1539_il2cpp_TypeInfo_var));
			LocalDataStoreSlot_t1539 * L_6 = V_1;
			if (L_6)
			{
				goto IL_0034;
			}
		}

IL_0028:
		{
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(Context_t1271_il2cpp_TypeInfo_var);
			LocalDataStoreSlot_t1539 * L_8 = Context_AllocateNamedDataSlot_m7801(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}

IL_0034:
		{
			LocalDataStoreSlot_t1539 * L_9 = V_1;
			V_2 = L_9;
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}

IL_003b:
		{
			; // IL_003b: leave IL_0047
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Object_t * L_10 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0047:
	{
		LocalDataStoreSlot_t1539 * L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::SetData(System.LocalDataStoreSlot,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Thread_t1281_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern "C" void Context_SetData_m7805 (Object_t * __this /* static, unused */, LocalDataStoreSlot_t1539 * ___slot, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(648);
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	Context_t1271 * V_0 = {0};
	Context_t1271 * V_1 = {0};
	ObjectU5BU5D_t280* V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
		Context_t1271 * L_0 = Thread_get_CurrentContext_m9033(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Context_t1271 * L_1 = V_0;
		V_1 = L_1;
		Context_t1271 * L_2 = V_1;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			Context_t1271 * L_3 = V_0;
			NullCheck(L_3);
			ObjectU5BU5D_t280* L_4 = (L_3->___datastore_6);
			if (L_4)
			{
				goto IL_0031;
			}
		}

IL_0019:
		{
			Context_t1271 * L_5 = V_0;
			LocalDataStoreSlot_t1539 * L_6 = ___slot;
			NullCheck(L_6);
			int32_t L_7 = (L_6->___slot_0);
			NullCheck(L_5);
			L_5->___datastore_6 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_7+(int32_t)2))));
			goto IL_0066;
		}

IL_0031:
		{
			LocalDataStoreSlot_t1539 * L_8 = ___slot;
			NullCheck(L_8);
			int32_t L_9 = (L_8->___slot_0);
			Context_t1271 * L_10 = V_0;
			NullCheck(L_10);
			ObjectU5BU5D_t280* L_11 = (L_10->___datastore_6);
			NullCheck(L_11);
			if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
			{
				goto IL_0066;
			}
		}

IL_0044:
		{
			LocalDataStoreSlot_t1539 * L_12 = ___slot;
			NullCheck(L_12);
			int32_t L_13 = (L_12->___slot_0);
			V_2 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_13+(int32_t)2))));
			Context_t1271 * L_14 = V_0;
			NullCheck(L_14);
			ObjectU5BU5D_t280* L_15 = (L_14->___datastore_6);
			ObjectU5BU5D_t280* L_16 = V_2;
			NullCheck(L_15);
			VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_15, (Array_t *)(Array_t *)L_16, 0);
			Context_t1271 * L_17 = V_0;
			ObjectU5BU5D_t280* L_18 = V_2;
			NullCheck(L_17);
			L_17->___datastore_6 = L_18;
		}

IL_0066:
		{
			Context_t1271 * L_19 = V_0;
			NullCheck(L_19);
			ObjectU5BU5D_t280* L_20 = (L_19->___datastore_6);
			LocalDataStoreSlot_t1539 * L_21 = ___slot;
			NullCheck(L_21);
			int32_t L_22 = (L_21->___slot_0);
			Object_t * L_23 = ___data;
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
			ArrayElementTypeCheck (L_20, L_23);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22, sizeof(Object_t *))) = (Object_t *)L_23;
			IL2CPP_LEAVE(0x80, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		Context_t1271 * L_24 = V_1;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(121)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x80, IL_0080)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0080:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyColMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void DynamicPropertyReg__ctor_m7806 (DynamicPropertyReg_t1275 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::.ctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern "C" void DynamicPropertyCollection__ctor_m7807 (DynamicPropertyCollection_t1272 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_0, /*hidden argument*/NULL);
		__this->____properties_0 = L_0;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::get_HasProperties()
extern "C" bool DynamicPropertyCollection_get_HasProperties_m7808 (DynamicPropertyCollection_t1272 * __this, const MethodInfo* method)
{
	{
		ArrayList_t607 * L_0 = (__this->____properties_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty)
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0MethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyColMethodDeclarations.h"
extern TypeInfo* IDynamicProperty_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t765_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicPropertyReg_t1275_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeDynamicSink_t1639_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1856;
extern "C" bool DynamicPropertyCollection_RegisterDynamicProperty_m7809 (DynamicPropertyCollection_t1272 * __this, Object_t * ___prop, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDynamicProperty_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(904);
		InvalidOperationException_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		DynamicPropertyReg_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(905);
		IContributeDynamicSink_t1639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(906);
		_stringLiteral1856 = il2cpp_codegen_string_literal_from_index(1856);
		s_Il2CppMethodIntialized = true;
	}
	DynamicPropertyCollection_t1272 * V_0 = {0};
	ArrayList_t607 * V_1 = {0};
	DynamicPropertyReg_t1275 * V_2 = {0};
	Object_t * V_3 = {0};
	bool V_4 = false;
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		DynamicPropertyCollection_t1272 * L_0 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_1 = ___prop;
			NullCheck(L_1);
			String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IDynamicProperty::get_Name() */, IDynamicProperty_t1276_il2cpp_TypeInfo_var, L_1);
			int32_t L_3 = DynamicPropertyCollection_FindProperty_m7812(__this, L_2, /*hidden argument*/NULL);
			if ((((int32_t)L_3) == ((int32_t)(-1))))
			{
				goto IL_0025;
			}
		}

IL_001a:
		{
			InvalidOperationException_t765 * L_4 = (InvalidOperationException_t765 *)il2cpp_codegen_object_new (InvalidOperationException_t765_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m3958(L_4, _stringLiteral1856, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
		}

IL_0025:
		{
			ArrayList_t607 * L_5 = (__this->____properties_0);
			ArrayList_t607 * L_6 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
			ArrayList__ctor_m4922(L_6, L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			DynamicPropertyReg_t1275 * L_7 = (DynamicPropertyReg_t1275 *)il2cpp_codegen_object_new (DynamicPropertyReg_t1275_il2cpp_TypeInfo_var);
			DynamicPropertyReg__ctor_m7806(L_7, /*hidden argument*/NULL);
			V_2 = L_7;
			DynamicPropertyReg_t1275 * L_8 = V_2;
			Object_t * L_9 = ___prop;
			NullCheck(L_8);
			L_8->___Property_0 = L_9;
			Object_t * L_10 = ___prop;
			V_3 = ((Object_t *)IsInst(L_10, IContributeDynamicSink_t1639_il2cpp_TypeInfo_var));
			Object_t * L_11 = V_3;
			if (!L_11)
			{
				goto IL_0057;
			}
		}

IL_004b:
		{
			DynamicPropertyReg_t1275 * L_12 = V_2;
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			Object_t * L_14 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.IContributeDynamicSink::GetDynamicSink() */, IContributeDynamicSink_t1639_il2cpp_TypeInfo_var, L_13);
			NullCheck(L_12);
			L_12->___Sink_1 = L_14;
		}

IL_0057:
		{
			ArrayList_t607 * L_15 = V_1;
			DynamicPropertyReg_t1275 * L_16 = V_2;
			NullCheck(L_15);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_15, L_16);
			ArrayList_t607 * L_17 = V_1;
			__this->____properties_0 = L_17;
			V_4 = 1;
			IL2CPP_LEAVE(0x7A, FINALLY_0073);
		}

IL_006e:
		{
			; // IL_006e: leave IL_007a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		DynamicPropertyCollection_t1272 * L_18 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_007a:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::UnregisterDynamicProperty(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1857;
extern Il2CppCodeGenString* _stringLiteral1858;
extern "C" bool DynamicPropertyCollection_UnregisterDynamicProperty_m7810 (DynamicPropertyCollection_t1272 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1857 = il2cpp_codegen_string_literal_from_index(1857);
		_stringLiteral1858 = il2cpp_codegen_string_literal_from_index(1858);
		s_Il2CppMethodIntialized = true;
	}
	DynamicPropertyCollection_t1272 * V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		DynamicPropertyCollection_t1272 * L_0 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_1 = ___name;
			int32_t L_2 = DynamicPropertyCollection_FindProperty_m7812(__this, L_1, /*hidden argument*/NULL);
			V_1 = L_2;
			int32_t L_3 = V_1;
			if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
			{
				goto IL_002d;
			}
		}

IL_0017:
		{
			String_t* L_4 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_5 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1857, L_4, _stringLiteral1858, /*hidden argument*/NULL);
			RemotingException_t1343 * L_6 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
			RemotingException__ctor_m8110(L_6, L_5, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
		}

IL_002d:
		{
			ArrayList_t607 * L_7 = (__this->____properties_0);
			int32_t L_8 = V_1;
			NullCheck(L_7);
			VirtActionInvoker1< int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_7, L_8);
			V_2 = 1;
			IL2CPP_LEAVE(0x4C, FINALLY_0045);
		}

IL_0040:
		{
			; // IL_0040: leave IL_004c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		DynamicPropertyCollection_t1272 * L_9 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_004c:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::NotifyMessage(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicPropertyReg_t1275_il2cpp_TypeInfo_var;
extern TypeInfo* IDynamicMessageSink_t1277_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" void DynamicPropertyCollection_NotifyMessage_m7811 (DynamicPropertyCollection_t1272 * __this, bool ___start, Object_t * ___msg, bool ___client_site, bool ___async, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		DynamicPropertyReg_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(905);
		IDynamicMessageSink_t1277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(907);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t607 * V_0 = {0};
	DynamicPropertyReg_t1275 * V_1 = {0};
	Object_t * V_2 = {0};
	DynamicPropertyReg_t1275 * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t607 * L_0 = (__this->____properties_0);
		V_0 = L_0;
		bool L_1 = ___start;
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		ArrayList_t607 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0019:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_4);
			V_1 = ((DynamicPropertyReg_t1275 *)CastclassClass(L_5, DynamicPropertyReg_t1275_il2cpp_TypeInfo_var));
			DynamicPropertyReg_t1275 * L_6 = V_1;
			NullCheck(L_6);
			Object_t * L_7 = (L_6->___Sink_1);
			if (!L_7)
			{
				goto IL_003f;
			}
		}

IL_0030:
		{
			DynamicPropertyReg_t1275 * L_8 = V_1;
			NullCheck(L_8);
			Object_t * L_9 = (L_8->___Sink_1);
			Object_t * L_10 = ___msg;
			bool L_11 = ___client_site;
			bool L_12 = ___async;
			NullCheck(L_9);
			InterfaceActionInvoker3< Object_t *, bool, bool >::Invoke(1 /* System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageStart(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean) */, IDynamicMessageSink_t1277_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
		}

IL_003f:
		{
			Object_t * L_13 = V_2;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0019;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x64, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_2;
			V_5 = ((Object_t *)IsInst(L_15, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_5;
			if (L_16)
			{
				goto IL_005c;
			}
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(79)
		}

IL_005c:
		{
			Object_t * L_17 = V_5;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0064:
	{
		goto IL_00c4;
	}

IL_0069:
	{
		ArrayList_t607 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_18);
		V_4 = L_19;
	}

IL_0071:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009d;
		}

IL_0076:
		{
			Object_t * L_20 = V_4;
			NullCheck(L_20);
			Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_20);
			V_3 = ((DynamicPropertyReg_t1275 *)CastclassClass(L_21, DynamicPropertyReg_t1275_il2cpp_TypeInfo_var));
			DynamicPropertyReg_t1275 * L_22 = V_3;
			NullCheck(L_22);
			Object_t * L_23 = (L_22->___Sink_1);
			if (!L_23)
			{
				goto IL_009d;
			}
		}

IL_008e:
		{
			DynamicPropertyReg_t1275 * L_24 = V_3;
			NullCheck(L_24);
			Object_t * L_25 = (L_24->___Sink_1);
			Object_t * L_26 = ___msg;
			bool L_27 = ___client_site;
			bool L_28 = ___async;
			NullCheck(L_25);
			InterfaceActionInvoker3< Object_t *, bool, bool >::Invoke(0 /* System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean) */, IDynamicMessageSink_t1277_il2cpp_TypeInfo_var, L_25, L_26, L_27, L_28);
		}

IL_009d:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_0076;
			}
		}

IL_00a9:
		{
			IL2CPP_LEAVE(0xC4, FINALLY_00ae);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_00ae;
	}

FINALLY_00ae:
	{ // begin finally (depth: 1)
		{
			Object_t * L_31 = V_4;
			V_6 = ((Object_t *)IsInst(L_31, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_32 = V_6;
			if (L_32)
			{
				goto IL_00bc;
			}
		}

IL_00bb:
		{
			IL2CPP_END_FINALLY(174)
		}

IL_00bc:
		{
			Object_t * L_33 = V_6;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_33);
			IL2CPP_END_FINALLY(174)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(174)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00c4:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.DynamicPropertyCollection::FindProperty(System.String)
extern TypeInfo* DynamicPropertyReg_t1275_il2cpp_TypeInfo_var;
extern TypeInfo* IDynamicProperty_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t DynamicPropertyCollection_FindProperty_m7812 (DynamicPropertyCollection_t1272 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DynamicPropertyReg_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(905);
		IDynamicProperty_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(904);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0007:
	{
		ArrayList_t607 * L_0 = (__this->____properties_0);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(((DynamicPropertyReg_t1275 *)CastclassClass(L_2, DynamicPropertyReg_t1275_il2cpp_TypeInfo_var)));
		Object_t * L_3 = (((DynamicPropertyReg_t1275 *)CastclassClass(L_2, DynamicPropertyReg_t1275_il2cpp_TypeInfo_var))->___Property_0);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IDynamicProperty::get_Name() */, IDynamicProperty_t1276_il2cpp_TypeInfo_var, L_3);
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1759(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002f:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		ArrayList_t607 * L_10 = (__this->____properties_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.ContextBoundObject
#include "mscorlib_System_ContextBoundObjectMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.ContextCallbackObject::.ctor()
// System.ContextBoundObject
#include "mscorlib_System_ContextBoundObjectMethodDeclarations.h"
extern "C" void ContextCallbackObject__ctor_m7813 (ContextCallbackObject_t1273 * __this, const MethodInfo* method)
{
	{
		ContextBoundObject__ctor_m9167(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextCallbackObject::DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate)
// System.Runtime.Remoting.Contexts.CrossContextDelegate
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextDelega.h"
extern "C" void ContextCallbackObject_DoCallBack_m7814 (ContextCallbackObject_t1273 * __this, CrossContextDelegate_t1573 * ___deleg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ContextAttribute__ctor_m7815 (ContextAttribute_t1263 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___AttributeName_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern "C" String_t* ContextAttribute_get_Name_m7816 (ContextAttribute_t1263 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ContextAttribute_t1263_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_Equals_m7817 (ContextAttribute_t1263 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ContextAttribute_t1263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(908);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	ContextAttribute_t1263 * V_0 = {0};
	{
		Object_t * L_0 = ___o;
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
		Object_t * L_1 = ___o;
		if (((ContextAttribute_t1263 *)IsInstClass(L_1, ContextAttribute_t1263_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		Object_t * L_2 = ___o;
		V_0 = ((ContextAttribute_t1263 *)CastclassClass(L_2, ContextAttribute_t1263_il2cpp_TypeInfo_var));
		ContextAttribute_t1263 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___AttributeName_0);
		String_t* L_5 = (__this->___AttributeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m1779(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::Freeze(System.Runtime.Remoting.Contexts.Context)
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
extern "C" void ContextAttribute_Freeze_m7818 (ContextAttribute_t1263 * __this, Context_t1271 * ___newContext, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern "C" int32_t ContextAttribute_GetHashCode_m7819 (ContextAttribute_t1263 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
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
		String_t* L_1 = (__this->___AttributeName_0);
		NullCheck(L_1);
		int32_t L_2 = String_GetHashCode_m3938(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t560_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1611_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t897_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1859;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m7820 (ContextAttribute_t1263 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		IConstructionCallMessage_t1611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		IList_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		_stringLiteral1859 = il2cpp_codegen_string_literal_from_index(1859);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t560 * L_1 = (ArgumentNullException_t560 *)il2cpp_codegen_object_new (ArgumentNullException_t560_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2917(L_1, _stringLiteral1859, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___ctorMsg;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t897_il2cpp_TypeInfo_var, L_4, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t560_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1859;
extern Il2CppCodeGenString* _stringLiteral1860;
extern "C" bool ContextAttribute_IsContextOK_m7821 (ContextAttribute_t1263 * __this, Context_t1271 * ___ctx, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		IConstructionCallMessage_t1611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		_stringLiteral1859 = il2cpp_codegen_string_literal_from_index(1859);
		_stringLiteral1860 = il2cpp_codegen_string_literal_from_index(1860);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t560 * L_1 = (ArgumentNullException_t560 *)il2cpp_codegen_object_new (ArgumentNullException_t560_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2917(L_1, _stringLiteral1859, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Context_t1271 * L_2 = ___ctx;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t560 * L_3 = (ArgumentNullException_t560 *)il2cpp_codegen_object_new (ArgumentNullException_t560_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2917(L_3, _stringLiteral1860, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0022:
	{
		Object_t * L_4 = ___ctorMsg;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_5);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Context_t1271 * L_7 = ___ctx;
		String_t* L_8 = (__this->___AttributeName_0);
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_7, L_8);
		V_0 = L_9;
		Object_t * L_10 = V_0;
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		return 0;
	}

IL_0049:
	{
		Object_t * L_11 = V_0;
		if ((((Object_t*)(ContextAttribute_t1263 *)__this) == ((Object_t*)(Object_t *)L_11)))
		{
			goto IL_0052;
		}
	}
	{
		return 0;
	}

IL_0052:
	{
		return 1;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsNewContextOK(System.Runtime.Remoting.Contexts.Context)
extern "C" bool ContextAttribute_IsNewContextOK_m7822 (ContextAttribute_t1263 * __this, Context_t1271 * ___newCtx, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CrossContextChannel__ctor_m7823 (CrossContextChannel_t1266 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedClient.h"
// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedServer.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedClientMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedServerMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"
extern "C" void SynchronizationAttribute__ctor_m7824 (SynchronizationAttribute_t1279 * __this, const MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m7825(__this, 8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* Mutex_t1280_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t339_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1861;
extern Il2CppCodeGenString* _stringLiteral731;
extern "C" void SynchronizationAttribute__ctor_m7825 (SynchronizationAttribute_t1279 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mutex_t1280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(909);
		ArgumentException_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		_stringLiteral1861 = il2cpp_codegen_string_literal_from_index(1861);
		_stringLiteral731 = il2cpp_codegen_string_literal_from_index(731);
		s_Il2CppMethodIntialized = true;
	}
	{
		Mutex_t1280 * L_0 = (Mutex_t1280 *)il2cpp_codegen_object_new (Mutex_t1280_il2cpp_TypeInfo_var);
		Mutex__ctor_m9020(L_0, 0, /*hidden argument*/NULL);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m7815(__this, _stringLiteral1861, /*hidden argument*/NULL);
		int32_t L_1 = ___flag;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = ___flag;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = ___flag;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = ___flag;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_t339 * L_5 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_5, _stringLiteral731, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_003e:
	{
		bool L_6 = ___reEntrant;
		__this->____bReEntrant_1 = L_6;
		int32_t L_7 = ___flag;
		__this->____flavor_2 = L_7;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
extern TypeInfo* Thread_t1281_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_set_Locked_m7826 (SynchronizationAttribute_t1279 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(648);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1279 * V_0 = {0};
	SynchronizationAttribute_t1279 * V_1 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		Mutex_t1280 * L_1 = (__this->____mutex_4);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		V_0 = __this;
		SynchronizationAttribute_t1279 * L_2 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
			int32_t L_4 = (__this->____lockCount_3);
			if ((((int32_t)L_4) <= ((int32_t)1)))
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			SynchronizationAttribute_ReleaseLock_m7827(__this, /*hidden argument*/NULL);
		}

IL_003a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
			Thread_t1281 * L_5 = Thread_get_CurrentThread_m9035(NULL /*static, unused*/, /*hidden argument*/NULL);
			__this->____ownerThread_5 = L_5;
			IL2CPP_LEAVE(0x51, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1279 * L_6 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0051:
	{
		goto IL_00ab;
	}

IL_0056:
	{
		V_1 = __this;
		SynchronizationAttribute_t1279 * L_7 = V_1;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_005e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0083;
		}

IL_0063:
		{
			int32_t L_8 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_8-(int32_t)1));
			Mutex_t1280 * L_9 = (__this->____mutex_4);
			NullCheck(L_9);
			Mutex_ReleaseMutex_m9023(L_9, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1281 *)NULL;
		}

IL_0083:
		{
			int32_t L_10 = (__this->____lockCount_3);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_009f;
			}
		}

IL_008f:
		{
			Thread_t1281 * L_11 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
			Thread_t1281 * L_12 = Thread_get_CurrentThread_m9035(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(Thread_t1281 *)L_11) == ((Object_t*)(Thread_t1281 *)L_12)))
			{
				goto IL_0063;
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1279 * L_13 = V_1;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00ab:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern TypeInfo* Thread_t1281_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ReleaseLock_m7827 (SynchronizationAttribute_t1279 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(648);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1279 * V_0 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizationAttribute_t1279 * L_0 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->____lockCount_3);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_0044;
			}
		}

IL_0014:
		{
			Thread_t1281 * L_2 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
			Thread_t1281 * L_3 = Thread_get_CurrentThread_m9035(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((!(((Object_t*)(Thread_t1281 *)L_2) == ((Object_t*)(Thread_t1281 *)L_3))))
			{
				goto IL_0044;
			}
		}

IL_0024:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t1280 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m9023(L_5, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1281 *)NULL;
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1279 * L_6 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0050:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* IConstructionCallMessage_t1611_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t897_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m7828 (SynchronizationAttribute_t1279 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConstructionCallMessage_t1611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		IList_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____flavor_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		Object_t * L_1 = ___ctorMsg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t897_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0019:
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedClientMethodDeclarations.h"
extern TypeInfo* SynchronizedClientContextSink_t1282_il2cpp_TypeInfo_var;
extern "C" Object_t * SynchronizationAttribute_GetClientContextSink_m7829 (SynchronizationAttribute_t1279 * __this, Object_t * ___nextSink, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizedClientContextSink_t1282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(910);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___nextSink;
		SynchronizedClientContextSink_t1282 * L_1 = (SynchronizedClientContextSink_t1282 *)il2cpp_codegen_object_new (SynchronizedClientContextSink_t1282_il2cpp_TypeInfo_var);
		SynchronizedClientContextSink__ctor_m7834(L_1, L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetServerContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedServerMethodDeclarations.h"
extern TypeInfo* SynchronizedServerContextSink_t1283_il2cpp_TypeInfo_var;
extern "C" Object_t * SynchronizationAttribute_GetServerContextSink_m7830 (SynchronizationAttribute_t1279 * __this, Object_t * ___nextSink, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizedServerContextSink_t1283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(911);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___nextSink;
		SynchronizedServerContextSink_t1283 * L_1 = (SynchronizedServerContextSink_t1283 *)il2cpp_codegen_object_new (SynchronizedServerContextSink_t1283_il2cpp_TypeInfo_var);
		SynchronizedServerContextSink__ctor_m7835(L_1, L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
extern TypeInfo* SynchronizationAttribute_t1279_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1861;
extern "C" bool SynchronizationAttribute_IsContextOK_m7831 (SynchronizationAttribute_t1279 * __this, Context_t1271 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizationAttribute_t1279_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(912);
		_stringLiteral1861 = il2cpp_codegen_string_literal_from_index(1861);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1279 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t1271 * L_0 = ___ctx;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_0, _stringLiteral1861);
		V_0 = ((SynchronizationAttribute_t1279 *)IsInstClass(L_1, SynchronizationAttribute_t1279_il2cpp_TypeInfo_var));
		int32_t L_2 = (__this->____flavor_2);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_004a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 7)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0056;
	}

IL_0045:
	{
		SynchronizationAttribute_t1279 * L_4 = V_0;
		return ((((Object_t*)(SynchronizationAttribute_t1279 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_004a:
	{
		SynchronizationAttribute_t1279 * L_5 = V_0;
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t1279 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0052:
	{
		return 0;
	}

IL_0054:
	{
		return 1;
	}

IL_0056:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"
extern TypeInfo* Thread_t1281_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t1279_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1861;
extern "C" void SynchronizationAttribute_ExitContext_m7832 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(648);
		SynchronizationAttribute_t1279_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(912);
		_stringLiteral1861 = il2cpp_codegen_string_literal_from_index(1861);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1279 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
		Context_t1271 * L_0 = Thread_get_CurrentContext_m9033(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m7779(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
		Context_t1271 * L_2 = Thread_get_CurrentContext_m9033(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, _stringLiteral1861);
		V_0 = ((SynchronizationAttribute_t1279 *)IsInstClass(L_3, SynchronizationAttribute_t1279_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t1279 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		SynchronizationAttribute_t1279 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern TypeInfo* Thread_t1281_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t1279_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1861;
extern "C" void SynchronizationAttribute_EnterContext_m7833 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(648);
		SynchronizationAttribute_t1279_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(912);
		_stringLiteral1861 = il2cpp_codegen_string_literal_from_index(1861);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1279 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
		Context_t1271 * L_0 = Thread_get_CurrentContext_m9033(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m7779(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1281_il2cpp_TypeInfo_var);
		Context_t1271 * L_2 = Thread_get_CurrentContext_m9033(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, _stringLiteral1861);
		V_0 = ((SynchronizationAttribute_t1279 *)IsInstClass(L_3, SynchronizationAttribute_t1279_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t1279 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		SynchronizationAttribute_t1279 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 1);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::.ctor(System.Runtime.Remoting.Messaging.IMessageSink,System.Runtime.Remoting.Contexts.SynchronizationAttribute)
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void SynchronizedClientContextSink__ctor_m7834 (SynchronizedClientContextSink_t1282 * __this, Object_t * ___next, SynchronizationAttribute_t1279 * ___att, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		SynchronizationAttribute_t1279 * L_0 = ___att;
		__this->____att_1 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_0 = L_1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::.ctor(System.Runtime.Remoting.Messaging.IMessageSink,System.Runtime.Remoting.Contexts.SynchronizationAttribute)
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void SynchronizedServerContextSink__ctor_m7835 (SynchronizedServerContextSink_t1283 * __this, Object_t * ___next, SynchronizationAttribute_t1279 * ___att, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		SynchronizationAttribute_t1279 * L_0 = ___att;
		__this->____att_1 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_0 = L_1;
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManager.h"
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern "C" void LeaseManager__ctor_m7836 (LeaseManager_t1284 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_0, /*hidden argument*/NULL);
		__this->____objects_0 = L_0;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"
extern "C" void LeaseManager_SetPollTime_m7837 (LeaseManager_t1284 * __this, TimeSpan_t846  ___timeSpan, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t607 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			Timer_t1285 * L_3 = (__this->____timer_1);
			if (!L_3)
			{
				goto IL_002b;
			}
		}

IL_001d:
		{
			Timer_t1285 * L_4 = (__this->____timer_1);
			TimeSpan_t846  L_5 = ___timeSpan;
			TimeSpan_t846  L_6 = ___timeSpan;
			NullCheck(L_4);
			Timer_Change_m9081(L_4, L_5, L_6, /*hidden argument*/NULL);
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Object_t * L_7 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseSink::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void LeaseSink__ctor_m7838 (LeaseSink_t1286 * __this, Object_t * ___nextSink, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___nextSink;
		__this->____nextSink_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h"
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern TypeInfo* LeaseManager_t1284_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t1287_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t846_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices__cctor_m7839 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseManager_t1284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(913);
		LifetimeServices_t1287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(914);
		TimeSpan_t846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	{
		LeaseManager_t1284 * L_0 = (LeaseManager_t1284 *)il2cpp_codegen_object_new (LeaseManager_t1284_il2cpp_TypeInfo_var);
		LeaseManager__ctor_m7836(L_0, /*hidden argument*/NULL);
		((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t846_il2cpp_TypeInfo_var);
		TimeSpan_t846  L_1 = TimeSpan_FromSeconds_m9835(NULL /*static, unused*/, (10.0), /*hidden argument*/NULL);
		((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_1;
		TimeSpan_t846  L_2 = TimeSpan_FromMinutes_m9834(NULL /*static, unused*/, (5.0), /*hidden argument*/NULL);
		((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_2;
		TimeSpan_t846  L_3 = TimeSpan_FromMinutes_m9834(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_3;
		TimeSpan_t846  L_4 = TimeSpan_FromMinutes_m9834(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
extern TypeInfo* LifetimeServices_t1287_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_LeaseManagerPollTime_m7840 (Object_t * __this /* static, unused */, TimeSpan_t846  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(914);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t846  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1287_il2cpp_TypeInfo_var);
		((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_0;
		LeaseManager_t1284 * L_1 = ((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4;
		TimeSpan_t846  L_2 = ___value;
		NullCheck(L_1);
		LeaseManager_SetPollTime_m7837(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1287_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_LeaseTime_m7841 (Object_t * __this /* static, unused */, TimeSpan_t846  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(914);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t846  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1287_il2cpp_TypeInfo_var);
		((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_RenewOnCallTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1287_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_RenewOnCallTime_m7842 (Object_t * __this /* static, unused */, TimeSpan_t846  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(914);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t846  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1287_il2cpp_TypeInfo_var);
		((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_SponsorshipTimeout(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1287_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_SponsorshipTimeout_m7843 (Object_t * __this /* static, unused */, TimeSpan_t846  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(914);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t846  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1287_il2cpp_TypeInfo_var);
		((LifetimeServices_t1287_StaticFields*)LifetimeServices_t1287_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern TypeInfo* Int32U5BU5D_t357_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m7844 (ArgInfo_t1289 * __this, MethodBase_t556 * ___method, uint8_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t557* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		MethodBase_t556 * L_0 = ___method;
		__this->____method_2 = L_0;
		MethodBase_t556 * L_1 = (__this->____method_2);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t557* L_2 = (ParameterInfoU5BU5D_t557*)VirtFuncInvoker0< ParameterInfoU5BU5D_t557* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t557* L_3 = V_0;
		NullCheck(L_3);
		__this->____paramMap_0 = ((Int32U5BU5D_t357*)SZArrayNew(Int32U5BU5D_t357_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		__this->____inoutArgCount_1 = 0;
		uint8_t L_4 = ___type;
		if (L_4)
		{
			goto IL_0078;
		}
	}
	{
		V_1 = 0;
		goto IL_006a;
	}

IL_003b:
	{
		ParameterInfoU5BU5D_t557* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_5, L_7, sizeof(ParameterInfo_t558 *))));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_5, L_7, sizeof(ParameterInfo_t558 *))));
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_8);
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t357* L_10 = (__this->____paramMap_0);
		int32_t L_11 = (__this->____inoutArgCount_1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_13, sizeof(int32_t))) = (int32_t)L_14;
	}

IL_0066:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_16 = V_1;
		ParameterInfoU5BU5D_t557* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c4;
	}

IL_0078:
	{
		V_2 = 0;
		goto IL_00bb;
	}

IL_007f:
	{
		ParameterInfoU5BU5D_t557* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_18, L_20, sizeof(ParameterInfo_t558 *))));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_18, L_20, sizeof(ParameterInfo_t558 *))));
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_21);
		if (L_22)
		{
			goto IL_009e;
		}
	}
	{
		ParameterInfoU5BU5D_t557* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_23, L_25, sizeof(ParameterInfo_t558 *))));
		bool L_26 = ParameterInfo_get_IsOut_m7665((*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_23, L_25, sizeof(ParameterInfo_t558 *))), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b7;
		}
	}

IL_009e:
	{
		Int32U5BU5D_t357* L_27 = (__this->____paramMap_0);
		int32_t L_28 = (__this->____inoutArgCount_1);
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, L_30, sizeof(int32_t))) = (int32_t)L_31;
	}

IL_00b7:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00bb:
	{
		int32_t L_33 = V_2;
		ParameterInfoU5BU5D_t557* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_00c4:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t280* ArgInfo_GetInOutArgs_m7845 (ArgInfo_t1289 * __this, ObjectU5BU5D_t280* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t280* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0024;
	}

IL_0013:
	{
		ObjectU5BU5D_t280* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t280* L_3 = ___args;
		Int32U5BU5D_t357* L_4 = (__this->____paramMap_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t))));
		int32_t L_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7, sizeof(Object_t *))));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2, sizeof(Object_t *))) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7, sizeof(Object_t *)));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (__this->____inoutArgCount_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t280* L_11 = V_0;
		return L_11;
	}
}
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AsyncResult__ctor_m7846 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C" Object_t * AsyncResult_get_AsyncState_m7847 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
extern TypeInfo* ManualResetEvent_t686_il2cpp_TypeInfo_var;
extern "C" WaitHandle_t738 * AsyncResult_get_AsyncWaitHandle_m7848 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t1290 * V_0 = {0};
	WaitHandle_t738 * V_1 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1290 * L_0 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t738 * L_1 = (__this->___handle_1);
			if (L_1)
			{
				goto IL_0024;
			}
		}

IL_0013:
		{
			bool L_2 = (__this->___completed_6);
			ManualResetEvent_t686 * L_3 = (ManualResetEvent_t686 *)il2cpp_codegen_object_new (ManualResetEvent_t686_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_m3980(L_3, L_2, /*hidden argument*/NULL);
			__this->___handle_1 = L_3;
		}

IL_0024:
		{
			WaitHandle_t738 * L_4 = (__this->___handle_1);
			V_1 = L_4;
			IL2CPP_LEAVE(0x3C, FINALLY_0035);
		}

IL_0030:
		{
			; // IL_0030: leave IL_003c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		AsyncResult_t1290 * L_5 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_003c:
	{
		WaitHandle_t738 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C" bool AsyncResult_get_CompletedSynchronously_m7849 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C" bool AsyncResult_get_IsCompleted_m7850 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C" bool AsyncResult_get_EndInvokeCalled_m7851 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void AsyncResult_set_EndInvokeCalled_m7852 (AsyncResult_t1290 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___endinvoke_called_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m7853 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C" Object_t * AsyncResult_get_NextSink_m7854 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t300_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m7855 (AsyncResult_t1290 * __this, Object_t * ___msg, Object_t * ___replySink, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t300 * L_0 = (NotSupportedException_t300 *)il2cpp_codegen_object_new (NotSupportedException_t300_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1526(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C" Object_t * AsyncResult_GetReplyMessage_m7856 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C" void AsyncResult_SetMessageCtrl_m7857 (AsyncResult_t1290 * __this, Object_t * ___mc, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___mc;
		__this->___message_ctrl_13 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C" void AsyncResult_SetCompletedSynchronously_m7858 (AsyncResult_t1290 * __this, bool ___completed, const MethodInfo* method)
{
	{
		bool L_0 = ___completed;
		__this->___sync_completed_5 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C" Object_t * AsyncResult_EndInvoke_m7859 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	AsyncResult_t1290 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1290 * L_0 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = (__this->___completed_6);
			if (!L_1)
			{
				goto IL_001f;
			}
		}

IL_0013:
		{
			Object_t * L_2 = (__this->___reply_message_14);
			V_1 = L_2;
			IL2CPP_LEAVE(0x3E, FINALLY_0024);
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2B, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		AsyncResult_t1290 * L_3 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_002b:
	{
		WaitHandle_t738 * L_4 = (WaitHandle_t738 *)VirtFuncInvoker0< WaitHandle_t738 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
		Object_t * L_5 = (__this->___reply_message_14);
		return L_5;
	}

IL_003e:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
extern TypeInfo* ManualResetEvent_t686_il2cpp_TypeInfo_var;
extern TypeInfo* AsyncCallback_t141_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m7860 (AsyncResult_t1290 * __this, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		AsyncCallback_t141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t1290 * V_0 = {0};
	AsyncCallback_t141 * V_1 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___msg;
		__this->___reply_message_14 = L_0;
		V_0 = __this;
		AsyncResult_t1290 * L_1 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t738 * L_2 = (__this->___handle_1);
			if (!L_2)
			{
				goto IL_0032;
			}
		}

IL_0021:
		{
			WaitHandle_t738 * L_3 = (WaitHandle_t738 *)VirtFuncInvoker0< WaitHandle_t738 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
			NullCheck(((ManualResetEvent_t686 *)CastclassSealed(L_3, ManualResetEvent_t686_il2cpp_TypeInfo_var)));
			EventWaitHandle_Set_m3981(((ManualResetEvent_t686 *)CastclassSealed(L_3, ManualResetEvent_t686_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		AsyncResult_t1290 * L_4 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_003e:
	{
		Object_t * L_5 = (__this->___async_callback_8);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Object_t * L_6 = (__this->___async_callback_8);
		V_1 = ((AsyncCallback_t141 *)CastclassSealed(L_6, AsyncCallback_t141_il2cpp_TypeInfo_var));
		AsyncCallback_t141 * L_7 = V_1;
		NullCheck(L_7);
		AsyncCallback_Invoke_m5835(L_7, __this, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C" MonoMethodMessage_t1292 * AsyncResult_get_CallMessage_m7861 (AsyncResult_t1290 * __this, const MethodInfo* method)
{
	{
		MonoMethodMessage_t1292 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
extern "C" void AsyncResult_set_CallMessage_m7862 (AsyncResult_t1290 * __this, MonoMethodMessage_t1292 * ___value, const MethodInfo* method)
{
	{
		MonoMethodMessage_t1292 * L_0 = ___value;
		__this->___call_message_12 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ClientContextTerminatorSink::.ctor(System.Runtime.Remoting.Contexts.Context)
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ClientContextTerminatorSink__ctor_m7863 (ClientContextTerminatorSink_t1295 * __this, Context_t1271 * ___ctx, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Context_t1271 * L_0 = ___ctx;
		__this->____context_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
extern "C" void ConstructionCall__ctor_m7864 (ConstructionCall_t1296 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		MethodCall__ctor_m7894(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->____activationType_14 = L_0;
		Type_t * L_1 = ___type;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_1);
		__this->____activationTypeName_15 = L_2;
		__this->____isContextOk_16 = 1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void ConstructionCall__ctor_m7865 (ConstructionCall_t1296 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t534 * L_0 = ___info;
		StreamingContext_t535  L_1 = ___context;
		MethodCall__ctor_m7893(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_InitDictionary_m7866 (ConstructionCall_t1296 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(915);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCallDictionary_t1298 * V_0 = {0};
	{
		ConstructionCallDictionary_t1298 * L_0 = (ConstructionCallDictionary_t1298 *)il2cpp_codegen_object_new (ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var);
		ConstructionCallDictionary__ctor_m7878(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConstructionCallDictionary_t1298 * L_1 = V_0;
		((MethodCall_t1297 *)__this)->___ExternalProperties_8 = L_1;
		ConstructionCallDictionary_t1298 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m7925(L_2, /*hidden argument*/NULL);
		((MethodCall_t1297 *)__this)->___InternalProperties_9 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void ConstructionCall_set_IsContextOk_m7867 (ConstructionCall_t1296 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isContextOk_16 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ConstructionCall_get_ActivationType_m7868 (ConstructionCall_t1296 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____activationType_14);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = (__this->____activationTypeName_15);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m5756, L_1, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		__this->____activationType_14 = L_2;
	}

IL_001c:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m7869 (ConstructionCall_t1296 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m7870 (ConstructionCall_t1296 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m7871 (ConstructionCall_t1296 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____activator_11 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t280* ConstructionCall_get_CallSiteActivationAttributes_m7872 (ConstructionCall_t1296 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t280* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void ConstructionCall_SetActivationAttributes_m7873 (ConstructionCall_t1296 * __this, ObjectU5BU5D_t280* ___attributes, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t280* L_0 = ___attributes;
		__this->____activationAttributes_12 = L_0;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m7874 (ConstructionCall_t1296 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____contextProperties_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t607 * L_1 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_1, /*hidden argument*/NULL);
		__this->____contextProperties_13 = L_1;
	}

IL_0016:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
extern TypeInfo* ConstructionCall_t1296_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t152_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t1257_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t897_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1798_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1862;
extern Il2CppCodeGenString* _stringLiteral1863;
extern Il2CppCodeGenString* _stringLiteral1864;
extern Il2CppCodeGenString* _stringLiteral1865;
extern Il2CppCodeGenString* _stringLiteral1866;
extern "C" void ConstructionCall_InitMethodProperty_m7875 (ConstructionCall_t1296 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t1296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(871);
		Dictionary_2_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		IActivator_t1257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		IList_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2__ctor_m1798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		_stringLiteral1862 = il2cpp_codegen_string_literal_from_index(1862);
		_stringLiteral1863 = il2cpp_codegen_string_literal_from_index(1863);
		_stringLiteral1864 = il2cpp_codegen_string_literal_from_index(1864);
		_stringLiteral1865 = il2cpp_codegen_string_literal_from_index(1865);
		_stringLiteral1866 = il2cpp_codegen_string_literal_from_index(1866);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t152 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cd;
		}
	}
	{
		Dictionary_2_t152 * L_2 = ((ConstructionCall_t1296_StaticFields*)ConstructionCall_t1296_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t152 * L_3 = (Dictionary_2_t152 *)il2cpp_codegen_object_new (Dictionary_2_t152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1798(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m1798_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t152 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1862, 0);
		Dictionary_2_t152 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1863, 1);
		Dictionary_2_t152 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1864, 2);
		Dictionary_2_t152 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1865, 3);
		Dictionary_2_t152 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1866, 4);
		Dictionary_2_t152 * L_9 = V_1;
		((ConstructionCall_t1296_StaticFields*)ConstructionCall_t1296_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17 = L_9;
	}

IL_005b:
	{
		Dictionary_2_t152 * L_10 = ((ConstructionCall_t1296_StaticFields*)ConstructionCall_t1296_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_008c;
		}
		if (L_13 == 1)
		{
			goto IL_0099;
		}
		if (L_13 == 2)
		{
			goto IL_00a6;
		}
		if (L_13 == 3)
		{
			goto IL_00b3;
		}
		if (L_13 == 4)
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_00cd;
	}

IL_008c:
	{
		Object_t * L_14 = ___value;
		__this->____activator_11 = ((Object_t *)Castclass(L_14, IActivator_t1257_il2cpp_TypeInfo_var));
		return;
	}

IL_0099:
	{
		Object_t * L_15 = ___value;
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t280*)Castclass(L_15, ObjectU5BU5D_t280_il2cpp_TypeInfo_var));
		return;
	}

IL_00a6:
	{
		Object_t * L_16 = ___value;
		__this->____activationType_14 = ((Type_t *)CastclassClass(L_16, Type_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b3:
	{
		Object_t * L_17 = ___value;
		__this->____contextProperties_13 = ((Object_t *)Castclass(L_17, IList_t897_il2cpp_TypeInfo_var));
		return;
	}

IL_00c0:
	{
		Object_t * L_18 = ___value;
		__this->____activationTypeName_15 = ((String_t*)CastclassSealed(L_18, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00cd:
	{
		String_t* L_19 = ___key;
		Object_t * L_20 = ___value;
		MethodCall_InitMethodProperty_m7896(__this, L_19, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ICollection_t938_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1862;
extern Il2CppCodeGenString* _stringLiteral1863;
extern Il2CppCodeGenString* _stringLiteral1864;
extern Il2CppCodeGenString* _stringLiteral1865;
extern Il2CppCodeGenString* _stringLiteral1866;
extern "C" void ConstructionCall_GetObjectData_m7876 (ConstructionCall_t1296 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t938_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		_stringLiteral1862 = il2cpp_codegen_string_literal_from_index(1862);
		_stringLiteral1863 = il2cpp_codegen_string_literal_from_index(1863);
		_stringLiteral1864 = il2cpp_codegen_string_literal_from_index(1864);
		_stringLiteral1865 = il2cpp_codegen_string_literal_from_index(1865);
		_stringLiteral1866 = il2cpp_codegen_string_literal_from_index(1866);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		SerializationInfo_t534 * L_0 = ___info;
		StreamingContext_t535  L_1 = ___context;
		MethodCall_GetObjectData_m7897(__this, L_0, L_1, /*hidden argument*/NULL);
		Object_t * L_2 = (__this->____contextProperties_13);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t938_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (Object_t *)NULL;
	}

IL_0022:
	{
		SerializationInfo_t534 * L_6 = ___info;
		Object_t * L_7 = (__this->____activator_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m3932(L_6, _stringLiteral1862, L_7, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_8 = ___info;
		ObjectU5BU5D_t280* L_9 = (__this->____activationAttributes_12);
		NullCheck(L_8);
		SerializationInfo_AddValue_m3932(L_8, _stringLiteral1863, (Object_t *)(Object_t *)L_9, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_10 = ___info;
		NullCheck(L_10);
		SerializationInfo_AddValue_m3932(L_10, _stringLiteral1864, NULL, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_11 = ___info;
		Object_t * L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m3932(L_11, _stringLiteral1865, L_12, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_13 = ___info;
		String_t* L_14 = (__this->____activationTypeName_15);
		NullCheck(L_13);
		SerializationInfo_AddValue_m3932(L_13, _stringLiteral1866, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m7877 (ConstructionCall_t1296 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m7903(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__ctor_m7878 (ConstructionCallDictionary_t1298 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(915);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m7921(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var);
		StringU5BU5D_t484* L_1 = ((ConstructionCallDictionary_t1298_StaticFields*)ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m7923(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t484_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1867;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1870;
extern Il2CppCodeGenString* _stringLiteral1871;
extern Il2CppCodeGenString* _stringLiteral1872;
extern Il2CppCodeGenString* _stringLiteral1863;
extern Il2CppCodeGenString* _stringLiteral1864;
extern Il2CppCodeGenString* _stringLiteral1865;
extern Il2CppCodeGenString* _stringLiteral1862;
extern Il2CppCodeGenString* _stringLiteral1866;
extern "C" void ConstructionCallDictionary__cctor_m7879 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(915);
		_stringLiteral1867 = il2cpp_codegen_string_literal_from_index(1867);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1870 = il2cpp_codegen_string_literal_from_index(1870);
		_stringLiteral1871 = il2cpp_codegen_string_literal_from_index(1871);
		_stringLiteral1872 = il2cpp_codegen_string_literal_from_index(1872);
		_stringLiteral1863 = il2cpp_codegen_string_literal_from_index(1863);
		_stringLiteral1864 = il2cpp_codegen_string_literal_from_index(1864);
		_stringLiteral1865 = il2cpp_codegen_string_literal_from_index(1865);
		_stringLiteral1862 = il2cpp_codegen_string_literal_from_index(1862);
		_stringLiteral1866 = il2cpp_codegen_string_literal_from_index(1866);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t484* L_0 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral1867);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1867;
		StringU5BU5D_t484* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral1868);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1, sizeof(String_t*))) = (String_t*)_stringLiteral1868;
		StringU5BU5D_t484* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral1869);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2, sizeof(String_t*))) = (String_t*)_stringLiteral1869;
		StringU5BU5D_t484* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral1870);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3, sizeof(String_t*))) = (String_t*)_stringLiteral1870;
		StringU5BU5D_t484* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral1871);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4, sizeof(String_t*))) = (String_t*)_stringLiteral1871;
		StringU5BU5D_t484* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral1872);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5, sizeof(String_t*))) = (String_t*)_stringLiteral1872;
		StringU5BU5D_t484* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, _stringLiteral1863);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6, sizeof(String_t*))) = (String_t*)_stringLiteral1863;
		StringU5BU5D_t484* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, _stringLiteral1864);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7, sizeof(String_t*))) = (String_t*)_stringLiteral1864;
		StringU5BU5D_t484* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, _stringLiteral1865);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8, sizeof(String_t*))) = (String_t*)_stringLiteral1865;
		StringU5BU5D_t484* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, _stringLiteral1862);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral1862;
		StringU5BU5D_t484* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, _stringLiteral1866);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10), sizeof(String_t*))) = (String_t*)_stringLiteral1866;
		((ConstructionCallDictionary_t1298_StaticFields*)ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
extern TypeInfo* ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t152_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1611_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1798_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1862;
extern Il2CppCodeGenString* _stringLiteral1863;
extern Il2CppCodeGenString* _stringLiteral1864;
extern Il2CppCodeGenString* _stringLiteral1865;
extern Il2CppCodeGenString* _stringLiteral1866;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m7880 (ConstructionCallDictionary_t1298 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(915);
		Dictionary_2_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		IConstructionCallMessage_t1611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		Dictionary_2__ctor_m1798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		_stringLiteral1862 = il2cpp_codegen_string_literal_from_index(1862);
		_stringLiteral1863 = il2cpp_codegen_string_literal_from_index(1863);
		_stringLiteral1864 = il2cpp_codegen_string_literal_from_index(1864);
		_stringLiteral1865 = il2cpp_codegen_string_literal_from_index(1865);
		_stringLiteral1866 = il2cpp_codegen_string_literal_from_index(1866);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t152 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var);
		Dictionary_2_t152 * L_2 = ((ConstructionCallDictionary_t1298_StaticFields*)ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t152 * L_3 = (Dictionary_2_t152 *)il2cpp_codegen_object_new (Dictionary_2_t152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1798(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m1798_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t152 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1862, 0);
		Dictionary_2_t152 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1863, 1);
		Dictionary_2_t152 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1864, 2);
		Dictionary_2_t152 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1865, 3);
		Dictionary_2_t152 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1866, 4);
		Dictionary_2_t152 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t1298_StaticFields*)ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var);
		Dictionary_2_t152 * L_10 = ((ConstructionCallDictionary_t1298_StaticFields*)ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_008c;
		}
		if (L_13 == 1)
		{
			goto IL_009d;
		}
		if (L_13 == 2)
		{
			goto IL_00ae;
		}
		if (L_13 == 3)
		{
			goto IL_00bf;
		}
		if (L_13 == 4)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00e1;
	}

IL_008c:
	{
		Object_t * L_14 = (((MethodDictionary_t1299 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_14, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.IConstructionCallMessage::get_Activator() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_14, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		return L_15;
	}

IL_009d:
	{
		Object_t * L_16 = (((MethodDictionary_t1299 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_16, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t280* L_17 = (ObjectU5BU5D_t280*)InterfaceFuncInvoker0< ObjectU5BU5D_t280* >::Invoke(4 /* System.Object[] System.Runtime.Remoting.Activation.IConstructionCallMessage::get_CallSiteActivationAttributes() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_16, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		return (Object_t *)L_17;
	}

IL_00ae:
	{
		Object_t * L_18 = (((MethodDictionary_t1299 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_18, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		Type_t * L_19 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		return L_19;
	}

IL_00bf:
	{
		Object_t * L_20 = (((MethodDictionary_t1299 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_20, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_20, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		return L_21;
	}

IL_00d0:
	{
		Object_t * L_22 = (((MethodDictionary_t1299 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_22, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		String_t* L_23 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationTypeName() */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_22, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		return L_23;
	}

IL_00e1:
	{
		String_t* L_24 = ___key;
		Object_t * L_25 = MethodDictionary_GetMethodProperty_m7929(__this, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t152_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1611_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t1257_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t339_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1798_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1862;
extern Il2CppCodeGenString* _stringLiteral1863;
extern Il2CppCodeGenString* _stringLiteral1864;
extern Il2CppCodeGenString* _stringLiteral1865;
extern Il2CppCodeGenString* _stringLiteral1866;
extern Il2CppCodeGenString* _stringLiteral1873;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m7881 (ConstructionCallDictionary_t1298 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(915);
		Dictionary_2_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		IConstructionCallMessage_t1611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		IActivator_t1257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		ArgumentException_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		Dictionary_2__ctor_m1798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		_stringLiteral1862 = il2cpp_codegen_string_literal_from_index(1862);
		_stringLiteral1863 = il2cpp_codegen_string_literal_from_index(1863);
		_stringLiteral1864 = il2cpp_codegen_string_literal_from_index(1864);
		_stringLiteral1865 = il2cpp_codegen_string_literal_from_index(1865);
		_stringLiteral1866 = il2cpp_codegen_string_literal_from_index(1866);
		_stringLiteral1873 = il2cpp_codegen_string_literal_from_index(1873);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t152 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var);
		Dictionary_2_t152 * L_2 = ((ConstructionCallDictionary_t1298_StaticFields*)ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t152 * L_3 = (Dictionary_2_t152 *)il2cpp_codegen_object_new (Dictionary_2_t152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1798(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m1798_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t152 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1862, 0);
		Dictionary_2_t152 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1863, 1);
		Dictionary_2_t152 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1864, 1);
		Dictionary_2_t152 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1865, 1);
		Dictionary_2_t152 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1866, 1);
		Dictionary_2_t152 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t1298_StaticFields*)ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var);
		Dictionary_2_t152 * L_10 = ((ConstructionCallDictionary_t1298_StaticFields*)ConstructionCallDictionary_t1298_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00a5;
	}

IL_007f:
	{
		Object_t * L_15 = (((MethodDictionary_t1299 *)__this)->____message_1);
		Object_t * L_16 = ___value;
		NullCheck(((Object_t *)Castclass(L_15, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< Object_t * >::Invoke(3 /* System.Void System.Runtime.Remoting.Activation.IConstructionCallMessage::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_15, IConstructionCallMessage_t1611_il2cpp_TypeInfo_var)), ((Object_t *)Castclass(L_16, IActivator_t1257_il2cpp_TypeInfo_var)));
		goto IL_00b2;
	}

IL_009a:
	{
		ArgumentException_t339 * L_17 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_17, _stringLiteral1873, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_00a5:
	{
		String_t* L_18 = ___key;
		Object_t * L_19 = ___value;
		MethodDictionary_SetMethodProperty_m7930(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_00b2:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EnvoyTerminatorSink__ctor_m7882 (EnvoyTerminatorSink_t1300 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"
extern TypeInfo* EnvoyTerminatorSink_t1300_il2cpp_TypeInfo_var;
extern "C" void EnvoyTerminatorSink__cctor_m7883 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(899);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnvoyTerminatorSink_t1300 * L_0 = (EnvoyTerminatorSink_t1300 *)il2cpp_codegen_object_new (EnvoyTerminatorSink_t1300_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink__ctor_m7882(L_0, /*hidden argument*/NULL);
		((EnvoyTerminatorSink_t1300_StaticFields*)EnvoyTerminatorSink_t1300_il2cpp_TypeInfo_var->static_fields)->___Instance_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"
extern "C" void Header__ctor_m7884 (Header_t1301 * __this, String_t* ____Name, Object_t * ____Value, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		Header__ctor_m7885(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Header__ctor_m7885 (Header_t1301 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		bool L_2 = ____MustUnderstand;
		Header__ctor_m7886(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Header__ctor_m7886 (Header_t1301 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		String_t* L_0 = ____Name;
		__this->___Name_2 = L_0;
		Object_t * L_1 = ____Value;
		__this->___Value_3 = L_1;
		bool L_2 = ____MustUnderstand;
		__this->___MustUnderstand_1 = L_2;
		String_t* L_3 = ____HeaderNamespace;
		__this->___HeaderNamespace_0 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemoti.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* CallContextRemotingData_t1303_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m7887 (LogicalCallContext_t1302 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t1303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(917);
		s_Il2CppMethodIntialized = true;
	}
	{
		CallContextRemotingData_t1303 * L_0 = (CallContextRemotingData_t1303 *)il2cpp_codegen_object_new (CallContextRemotingData_t1303_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m7891(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"
extern TypeInfo* CallContextRemotingData_t1303_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1874;
extern "C" void LogicalCallContext__ctor_m7888 (LogicalCallContext_t1302 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t1303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(917);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral1874 = il2cpp_codegen_string_literal_from_index(1874);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t1386  V_0 = {0};
	SerializationInfoEnumerator_t1388 * V_1 = {0};
	{
		CallContextRemotingData_t1303 * L_0 = (CallContextRemotingData_t1303 *)il2cpp_codegen_object_new (CallContextRemotingData_t1303_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m7891(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfoEnumerator_t1388 * L_2 = SerializationInfo_GetEnumerator_m8289(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0065;
	}

IL_001d:
	{
		SerializationInfoEnumerator_t1388 * L_3 = V_1;
		NullCheck(L_3);
		SerializationEntry_t1386  L_4 = SerializationInfoEnumerator_get_Current_m8297(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = SerializationEntry_get_Name_m8283((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1759(NULL /*static, unused*/, L_5, _stringLiteral1874, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_7 = SerializationEntry_get_Value_m8284((&V_0), /*hidden argument*/NULL);
		__this->____remotingData_1 = ((CallContextRemotingData_t1303 *)CastclassClass(L_7, CallContextRemotingData_t1303_il2cpp_TypeInfo_var));
		goto IL_0065;
	}

IL_0051:
	{
		String_t* L_8 = SerializationEntry_get_Name_m8283((&V_0), /*hidden argument*/NULL);
		Object_t * L_9 = SerializationEntry_get_Value_m8284((&V_0), /*hidden argument*/NULL);
		LogicalCallContext_SetData_m7890(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0065:
	{
		SerializationInfoEnumerator_t1388 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = SerializationInfoEnumerator_MoveNext_m8300(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t937_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1874;
extern "C" void LogicalCallContext_GetObjectData_m7889 (LogicalCallContext_t1302 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		DictionaryEntry_t937_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		_stringLiteral1874 = il2cpp_codegen_string_literal_from_index(1874);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t937  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t534 * L_0 = ___info;
		CallContextRemotingData_t1303 * L_1 = (__this->____remotingData_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m3932(L_0, _stringLiteral1874, L_1, /*hidden argument*/NULL);
		Hashtable_t672 * L_2 = (__this->____data_0);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		Hashtable_t672 * L_3 = (__this->____data_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_002d:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_5);
			V_0 = ((*(DictionaryEntry_t937 *)((DictionaryEntry_t937 *)UnBox (L_6, DictionaryEntry_t937_il2cpp_TypeInfo_var))));
			SerializationInfo_t534 * L_7 = ___info;
			Object_t * L_8 = DictionaryEntry_get_Key_m6510((&V_0), /*hidden argument*/NULL);
			Object_t * L_9 = DictionaryEntry_get_Value_m6511((&V_0), /*hidden argument*/NULL);
			NullCheck(L_7);
			SerializationInfo_AddValue_m3932(L_7, ((String_t*)CastclassSealed(L_8, String_t_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
		}

IL_0052:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_002d;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_2 = ((Object_t *)IsInst(L_12, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_006d;
			}
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(98)
		}

IL_006d:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(98)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_SetData_m7890 (LogicalCallContext_t1302 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t672 * L_0 = (__this->____data_0);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_t672 * L_1 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_1, /*hidden argument*/NULL);
		__this->____data_0 = L_1;
	}

IL_0016:
	{
		Hashtable_t672 * L_2 = (__this->____data_0);
		String_t* L_3 = ___name;
		Object_t * L_4 = ___data;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CallContextRemotingData__ctor_m7891 (CallContextRemotingData_t1303 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDiction.h"
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
extern "C" void MethodCall__ctor_m7892 (MethodCall_t1297 * __this, HeaderU5BU5D_t1575* ___h1, const MethodInfo* method)
{
	Header_t1301 * V_0 = {0};
	HeaderU5BU5D_t1575* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		HeaderU5BU5D_t1575* L_0 = ___h1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		HeaderU5BU5D_t1575* L_1 = ___h1;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		HeaderU5BU5D_t1575* L_2 = ___h1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_003e;
	}

IL_0024:
	{
		HeaderU5BU5D_t1575* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Header_t1301 **)(Header_t1301 **)SZArrayLdElema(L_3, L_5, sizeof(Header_t1301 *)));
		Header_t1301 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___Name_2);
		Header_t1301 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___Value_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_11 = V_2;
		HeaderU5BU5D_t1575* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		MethodCall_ResolveMethod_m7909(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
extern "C" void MethodCall__ctor_m7893 (MethodCall_t1297 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	SerializationEntry_t1386  V_0 = {0};
	SerializationInfoEnumerator_t1388 * V_1 = {0};
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		SerializationInfo_t534 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1388 * L_1 = SerializationInfo_GetEnumerator_m8289(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0033;
	}

IL_0018:
	{
		SerializationInfoEnumerator_t1388 * L_2 = V_1;
		NullCheck(L_2);
		SerializationEntry_t1386  L_3 = SerializationInfoEnumerator_get_Current_m8297(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = SerializationEntry_get_Name_m8283((&V_0), /*hidden argument*/NULL);
		Object_t * L_5 = SerializationEntry_get_Value_m8284((&V_0), /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_4, L_5);
	}

IL_0033:
	{
		SerializationInfoEnumerator_t1388 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = SerializationInfoEnumerator_MoveNext_m8300(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m7894 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m7895 (MethodCall_t1297 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
extern TypeInfo* MethodCall_t1297_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t152_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t532_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* LogicalCallContext_t1302_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t871_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1798_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1870;
extern Il2CppCodeGenString* _stringLiteral1871;
extern Il2CppCodeGenString* _stringLiteral1872;
extern Il2CppCodeGenString* _stringLiteral1867;
extern Il2CppCodeGenString* _stringLiteral1875;
extern "C" void MethodCall_InitMethodProperty_m7896 (MethodCall_t1297 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCall_t1297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(918);
		Dictionary_2_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		TypeU5BU5D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		LogicalCallContext_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(919);
		IDictionary_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		Dictionary_2__ctor_m1798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1870 = il2cpp_codegen_string_literal_from_index(1870);
		_stringLiteral1871 = il2cpp_codegen_string_literal_from_index(1871);
		_stringLiteral1872 = il2cpp_codegen_string_literal_from_index(1872);
		_stringLiteral1867 = il2cpp_codegen_string_literal_from_index(1867);
		_stringLiteral1875 = il2cpp_codegen_string_literal_from_index(1875);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t152 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0107;
		}
	}
	{
		Dictionary_2_t152 * L_2 = ((MethodCall_t1297_StaticFields*)MethodCall_t1297_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		if (L_2)
		{
			goto IL_0073;
		}
	}
	{
		Dictionary_2_t152 * L_3 = (Dictionary_2_t152 *)il2cpp_codegen_object_new (Dictionary_2_t152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1798(L_3, 7, /*hidden argument*/Dictionary_2__ctor_m1798_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t152 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1869, 0);
		Dictionary_2_t152 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1868, 1);
		Dictionary_2_t152 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1870, 2);
		Dictionary_2_t152 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1871, 3);
		Dictionary_2_t152 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1872, 4);
		Dictionary_2_t152 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1867, 5);
		Dictionary_2_t152 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1875, 6);
		Dictionary_2_t152 * L_11 = V_1;
		((MethodCall_t1297_StaticFields*)MethodCall_t1297_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10 = L_11;
	}

IL_0073:
	{
		Dictionary_2_t152 * L_12 = ((MethodCall_t1297_StaticFields*)MethodCall_t1297_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_2));
		if (!L_14)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15 == 0)
		{
			goto IL_00ac;
		}
		if (L_15 == 1)
		{
			goto IL_00b9;
		}
		if (L_15 == 2)
		{
			goto IL_00c6;
		}
		if (L_15 == 3)
		{
			goto IL_00d3;
		}
		if (L_15 == 4)
		{
			goto IL_00e0;
		}
		if (L_15 == 5)
		{
			goto IL_00ed;
		}
		if (L_15 == 6)
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0107;
	}

IL_00ac:
	{
		Object_t * L_16 = ___value;
		__this->____typeName_1 = ((String_t*)CastclassSealed(L_16, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b9:
	{
		Object_t * L_17 = ___value;
		__this->____methodName_2 = ((String_t*)CastclassSealed(L_17, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00c6:
	{
		Object_t * L_18 = ___value;
		__this->____methodSignature_4 = ((TypeU5BU5D_t532*)Castclass(L_18, TypeU5BU5D_t532_il2cpp_TypeInfo_var));
		return;
	}

IL_00d3:
	{
		Object_t * L_19 = ___value;
		__this->____args_3 = ((ObjectU5BU5D_t280*)Castclass(L_19, ObjectU5BU5D_t280_il2cpp_TypeInfo_var));
		return;
	}

IL_00e0:
	{
		Object_t * L_20 = ___value;
		__this->____callContext_6 = ((LogicalCallContext_t1302 *)CastclassSealed(L_20, LogicalCallContext_t1302_il2cpp_TypeInfo_var));
		return;
	}

IL_00ed:
	{
		Object_t * L_21 = ___value;
		__this->____uri_0 = ((String_t*)CastclassSealed(L_21, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00fa:
	{
		Object_t * L_22 = ___value;
		__this->____genericArguments_7 = ((TypeU5BU5D_t532*)Castclass(L_22, TypeU5BU5D_t532_il2cpp_TypeInfo_var));
		return;
	}

IL_0107:
	{
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties() */, __this);
		String_t* L_24 = ___key;
		Object_t * L_25 = ___value;
		NullCheck(L_23);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t871_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern TypeInfo* IDictionary_t871_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t937_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1870;
extern Il2CppCodeGenString* _stringLiteral1871;
extern Il2CppCodeGenString* _stringLiteral1872;
extern Il2CppCodeGenString* _stringLiteral1867;
extern Il2CppCodeGenString* _stringLiteral1875;
extern "C" void MethodCall_GetObjectData_m7897 (MethodCall_t1297 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		DictionaryEntry_t937_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1870 = il2cpp_codegen_string_literal_from_index(1870);
		_stringLiteral1871 = il2cpp_codegen_string_literal_from_index(1871);
		_stringLiteral1872 = il2cpp_codegen_string_literal_from_index(1872);
		_stringLiteral1867 = il2cpp_codegen_string_literal_from_index(1867);
		_stringLiteral1875 = il2cpp_codegen_string_literal_from_index(1875);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t937  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t534 * L_0 = ___info;
		String_t* L_1 = (__this->____typeName_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m3932(L_0, _stringLiteral1869, L_1, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_2 = ___info;
		String_t* L_3 = (__this->____methodName_2);
		NullCheck(L_2);
		SerializationInfo_AddValue_m3932(L_2, _stringLiteral1868, L_3, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_4 = ___info;
		TypeU5BU5D_t532* L_5 = (__this->____methodSignature_4);
		NullCheck(L_4);
		SerializationInfo_AddValue_m3932(L_4, _stringLiteral1870, (Object_t *)(Object_t *)L_5, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_6 = ___info;
		ObjectU5BU5D_t280* L_7 = (__this->____args_3);
		NullCheck(L_6);
		SerializationInfo_AddValue_m3932(L_6, _stringLiteral1871, (Object_t *)(Object_t *)L_7, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_8 = ___info;
		LogicalCallContext_t1302 * L_9 = (__this->____callContext_6);
		NullCheck(L_8);
		SerializationInfo_AddValue_m3932(L_8, _stringLiteral1872, L_9, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_10 = ___info;
		String_t* L_11 = (__this->____uri_0);
		NullCheck(L_10);
		SerializationInfo_AddValue_m3932(L_10, _stringLiteral1867, L_11, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_12 = ___info;
		TypeU5BU5D_t532* L_13 = (__this->____genericArguments_7);
		NullCheck(L_12);
		SerializationInfo_AddValue_m3932(L_12, _stringLiteral1875, (Object_t *)(Object_t *)L_13, /*hidden argument*/NULL);
		Object_t * L_14 = (__this->___InternalProperties_9);
		if (!L_14)
		{
			goto IL_00da;
		}
	}
	{
		Object_t * L_15 = (__this->___InternalProperties_9);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t871_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_008e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b8;
		}

IL_0093:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t937 *)((DictionaryEntry_t937 *)UnBox (L_18, DictionaryEntry_t937_il2cpp_TypeInfo_var))));
			SerializationInfo_t534 * L_19 = ___info;
			Object_t * L_20 = DictionaryEntry_get_Key_m6510((&V_0), /*hidden argument*/NULL);
			Object_t * L_21 = DictionaryEntry_get_Value_m6511((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			SerializationInfo_AddValue_m3932(L_19, ((String_t*)CastclassSealed(L_20, String_t_il2cpp_TypeInfo_var)), L_21, /*hidden argument*/NULL);
		}

IL_00b8:
		{
			Object_t * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0093;
			}
		}

IL_00c3:
		{
			IL2CPP_LEAVE(0xDA, FINALLY_00c8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_00c8;
	}

FINALLY_00c8:
	{ // begin finally (depth: 1)
		{
			Object_t * L_24 = V_1;
			V_2 = ((Object_t *)IsInst(L_24, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_25 = V_2;
			if (L_25)
			{
				goto IL_00d3;
			}
		}

IL_00d2:
		{
			IL2CPP_END_FINALLY(200)
		}

IL_00d3:
		{
			Object_t * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(200)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(200)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00da:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C" ObjectU5BU5D_t280* MethodCall_get_Args_m7898 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t280* L_0 = (__this->____args_3);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"
extern TypeInfo* LogicalCallContext_t1302_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t1302 * MethodCall_get_LogicalCallContext_m7899 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t1302 * L_0 = (__this->____callContext_6);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		LogicalCallContext_t1302 * L_1 = (LogicalCallContext_t1302 *)il2cpp_codegen_object_new (LogicalCallContext_t1302_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m7887(L_1, /*hidden argument*/NULL);
		__this->____callContext_6 = L_1;
	}

IL_0016:
	{
		LogicalCallContext_t1302 * L_2 = (__this->____callContext_6);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t556 * MethodCall_get_MethodBase_m7900 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	{
		MethodBase_t556 * L_0 = (__this->____methodBase_5);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		MethodCall_ResolveMethod_m7909(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		MethodBase_t556 * L_1 = (__this->____methodBase_5);
		return L_1;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C" String_t* MethodCall_get_MethodName_m7901 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____methodName_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		MethodBase_t556 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		__this->____methodName_2 = L_2;
	}

IL_001c:
	{
		String_t* L_3 = (__this->____methodName_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t532_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodCall_get_MethodSignature_m7902 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t557* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t532* L_0 = (__this->____methodSignature_4);
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t556 * L_1 = (__this->____methodBase_5);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t556 * L_2 = (__this->____methodBase_5);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t557* L_3 = (ParameterInfoU5BU5D_t557*)VirtFuncInvoker0< ParameterInfoU5BU5D_t557* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t557* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_4 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_004b;
	}

IL_0037:
	{
		TypeU5BU5D_t532* L_5 = (__this->____methodSignature_4);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t557* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_7, L_9, sizeof(ParameterInfo_t558 *))));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_7, L_9, sizeof(ParameterInfo_t558 *))));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6, sizeof(Type_t *))) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t557* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0037;
		}
	}

IL_0054:
	{
		TypeU5BU5D_t532* L_14 = (__this->____methodSignature_4);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m7903 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ExternalProperties_8);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary() */, __this);
	}

IL_0011:
	{
		Object_t * L_1 = (__this->___ExternalProperties_8);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* MethodCallDictionary_t1304_il2cpp_TypeInfo_var;
extern "C" void MethodCall_InitDictionary_m7904 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t1304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	MethodCallDictionary_t1304 * V_0 = {0};
	{
		MethodCallDictionary_t1304 * L_0 = (MethodCallDictionary_t1304 *)il2cpp_codegen_object_new (MethodCallDictionary_t1304_il2cpp_TypeInfo_var);
		MethodCallDictionary__ctor_m7913(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		MethodCallDictionary_t1304 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		MethodCallDictionary_t1304 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m7925(L_2, /*hidden argument*/NULL);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m7905 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____typeName_1);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		MethodBase_t556 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->____typeName_1 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = (__this->____typeName_1);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C" String_t* MethodCall_get_Uri_m7906 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m7907 (MethodCall_t1297 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m7908 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* RemotingServices_t1344_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t484_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral786;
extern Il2CppCodeGenString* _stringLiteral209;
extern Il2CppCodeGenString* _stringLiteral1876;
extern Il2CppCodeGenString* _stringLiteral1877;
extern Il2CppCodeGenString* _stringLiteral1878;
extern Il2CppCodeGenString* _stringLiteral1879;
extern Il2CppCodeGenString* _stringLiteral94;
extern Il2CppCodeGenString* _stringLiteral1880;
extern Il2CppCodeGenString* _stringLiteral1881;
extern Il2CppCodeGenString* _stringLiteral1882;
extern "C" void MethodCall_ResolveMethod_m7909 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(869);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		StringU5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(354);
		_stringLiteral786 = il2cpp_codegen_string_literal_from_index(786);
		_stringLiteral209 = il2cpp_codegen_string_literal_from_index(209);
		_stringLiteral1876 = il2cpp_codegen_string_literal_from_index(1876);
		_stringLiteral1877 = il2cpp_codegen_string_literal_from_index(1877);
		_stringLiteral1878 = il2cpp_codegen_string_literal_from_index(1878);
		_stringLiteral1879 = il2cpp_codegen_string_literal_from_index(1879);
		_stringLiteral94 = il2cpp_codegen_string_literal_from_index(94);
		_stringLiteral1880 = il2cpp_codegen_string_literal_from_index(1880);
		_stringLiteral1881 = il2cpp_codegen_string_literal_from_index(1881);
		_stringLiteral1882 = il2cpp_codegen_string_literal_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Type_t * V_2 = {0};
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->____uri_0);
		if (!L_0)
		{
			goto IL_0171;
		}
	}
	{
		String_t* L_1 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		Type_t * L_2 = RemotingServices_GetServerTypeForUri_m8116(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_4 = (__this->____typeName_1);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = (__this->____typeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral786, L_5, _stringLiteral209, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_0047;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B5_0 = L_7;
	}

IL_0047:
	{
		V_1 = G_B5_0;
		String_t* L_8 = V_1;
		String_t* L_9 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2902(NULL /*static, unused*/, _stringLiteral1876, L_8, _stringLiteral1877, L_9, /*hidden argument*/NULL);
		RemotingException_t1343 * L_11 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0064:
	{
		String_t* L_12 = (__this->____typeName_1);
		Type_t * L_13 = V_0;
		Type_t * L_14 = MethodCall_CastTo_m7910(__this, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Type_t * L_15 = V_2;
		if (L_15)
		{
			goto IL_00b3;
		}
	}
	{
		StringU5BU5D_t484* L_16 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 5));
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, _stringLiteral1878);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1878;
		StringU5BU5D_t484* L_17 = L_16;
		String_t* L_18 = (__this->____typeName_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 1, sizeof(String_t*))) = (String_t*)L_18;
		StringU5BU5D_t484* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, _stringLiteral1879);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2, sizeof(String_t*))) = (String_t*)_stringLiteral1879;
		StringU5BU5D_t484* L_20 = L_19;
		Type_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_22);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3, sizeof(String_t*))) = (String_t*)L_22;
		StringU5BU5D_t484* L_23 = L_20;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 4);
		ArrayElementTypeCheck (L_23, _stringLiteral94);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 4, sizeof(String_t*))) = (String_t*)_stringLiteral94;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m4912(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		RemotingException_t1343 * L_25 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_25, L_24, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_25);
	}

IL_00b3:
	{
		Type_t * L_26 = V_2;
		String_t* L_27 = (__this->____methodName_2);
		TypeU5BU5D_t532* L_28 = (__this->____methodSignature_4);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		MethodBase_t556 * L_29 = RemotingServices_GetMethodBaseFromName_m8121(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_29;
		MethodBase_t556 * L_30 = (__this->____methodBase_5);
		if (L_30)
		{
			goto IL_0104;
		}
	}
	{
		ObjectU5BU5D_t280* L_31 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 4));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, _stringLiteral1880);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral1880;
		ObjectU5BU5D_t280* L_32 = L_31;
		String_t* L_33 = (__this->____methodName_2);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1, sizeof(Object_t *))) = (Object_t *)L_33;
		ObjectU5BU5D_t280* L_34 = L_32;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, _stringLiteral1881);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral1881;
		ObjectU5BU5D_t280* L_35 = L_34;
		Type_t * L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3, sizeof(Object_t *))) = (Object_t *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m1421(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RemotingException_t1343 * L_38 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_38, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_38);
	}

IL_0104:
	{
		Type_t * L_39 = V_2;
		Type_t * L_40 = V_0;
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_41 = V_2;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_41);
		if (!L_42)
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_43);
		if (L_44)
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_45 = V_0;
		MethodBase_t556 * L_46 = (__this->____methodBase_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		MethodBase_t556 * L_47 = RemotingServices_GetVirtualMethod_m8114(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_47;
		MethodBase_t556 * L_48 = (__this->____methodBase_5);
		if (L_48)
		{
			goto IL_016c;
		}
	}
	{
		ObjectU5BU5D_t280* L_49 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 4));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, _stringLiteral1880);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral1880;
		ObjectU5BU5D_t280* L_50 = L_49;
		String_t* L_51 = (__this->____methodName_2);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 1, sizeof(Object_t *))) = (Object_t *)L_51;
		ObjectU5BU5D_t280* L_52 = L_50;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, _stringLiteral1881);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral1881;
		ObjectU5BU5D_t280* L_53 = L_52;
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 3, sizeof(Object_t *))) = (Object_t *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m1421(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		RemotingException_t1343 * L_56 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_56, L_55, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_56);
	}

IL_016c:
	{
		goto IL_01a9;
	}

IL_0171:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		MethodBase_t556 * L_57 = RemotingServices_GetMethodBaseFromMethodMessage_m8120(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_57;
		MethodBase_t556 * L_58 = (__this->____methodBase_5);
		if (L_58)
		{
			goto IL_01a9;
		}
	}
	{
		String_t* L_59 = (__this->____methodName_2);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m2902(NULL /*static, unused*/, _stringLiteral1880, L_59, _stringLiteral1881, L_60, /*hidden argument*/NULL);
		RemotingException_t1343 * L_62 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_62, L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_62);
	}

IL_01a9:
	{
		MethodBase_t556 * L_63 = (__this->____methodBase_5);
		NullCheck(L_63);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_63);
		if (!L_64)
		{
			goto IL_01fb;
		}
	}
	{
		MethodBase_t556 * L_65 = (__this->____methodBase_5);
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_65);
		if (!L_66)
		{
			goto IL_01fb;
		}
	}
	{
		TypeU5BU5D_t532* L_67 = MethodCall_get_GenericArguments_m7912(__this, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_01df;
		}
	}
	{
		RemotingException_t1343 * L_68 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_68, _stringLiteral1882, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_68);
	}

IL_01df:
	{
		MethodBase_t556 * L_69 = (__this->____methodBase_5);
		TypeU5BU5D_t532* L_70 = MethodCall_get_GenericArguments_m7912(__this, /*hidden argument*/NULL);
		NullCheck(((MethodInfo_t *)CastclassClass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t * L_71 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t532* >::Invoke(32 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, ((MethodInfo_t *)CastclassClass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)), L_70);
		__this->____methodBase_5 = L_71;
	}

IL_01fb:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Type_t * MethodCall_CastTo_m7910 (MethodCall_t1297 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t532* V_1 = {0};
	Type_t * V_2 = {0};
	TypeU5BU5D_t532* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___clientType;
		String_t* L_1 = MethodCall_GetTypeNameFromAssemblyQualifiedName_m7911(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___clientType = L_1;
		String_t* L_2 = ___clientType;
		Type_t * L_3 = ___serverType;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1759(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		Type_t * L_6 = ___serverType;
		return L_6;
	}

IL_001b:
	{
		Type_t * L_7 = ___serverType;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_7);
		V_0 = L_8;
		goto IL_0041;
	}

IL_0027:
	{
		String_t* L_9 = ___clientType;
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m1759(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		Type_t * L_13 = V_0;
		return L_13;
	}

IL_003a:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_14);
		V_0 = L_15;
	}

IL_0041:
	{
		Type_t * L_16 = V_0;
		if (L_16)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_17 = ___serverType;
		NullCheck(L_17);
		TypeU5BU5D_t532* L_18 = (TypeU5BU5D_t532*)VirtFuncInvoker0< TypeU5BU5D_t532* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_17);
		V_1 = L_18;
		TypeU5BU5D_t532* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0076;
	}

IL_0058:
	{
		TypeU5BU5D_t532* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_20, L_22, sizeof(Type_t *)));
		String_t* L_23 = ___clientType;
		Type_t * L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Equality_m1759(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		Type_t * L_27 = V_2;
		return L_27;
	}

IL_0070:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_29 = V_4;
		TypeU5BU5D_t532* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_0058;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern Il2CppCodeGenString* _stringLiteral1883;
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m7911 (Object_t * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1883 = il2cpp_codegen_string_literal_from_index(1883);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = ___aqname;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2905(L_0, _stringLiteral1883, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___aqname;
		int32_t L_3 = V_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = L_2;
			goto IL_001c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		NullCheck(G_B3_2);
		int32_t L_5 = String_IndexOf_m4008(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_7 = ___aqname;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m1781(L_7, 0, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m2901(L_9, /*hidden argument*/NULL);
		___aqname = L_10;
	}

IL_003b:
	{
		String_t* L_11 = ___aqname;
		return L_11;
	}
}
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C" TypeU5BU5D_t532* MethodCall_get_GenericArguments_m7912 (MethodCall_t1297 * __this, const MethodInfo* method)
{
	TypeU5BU5D_t532* V_0 = {0};
	{
		TypeU5BU5D_t532* L_0 = (__this->____genericArguments_7);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		TypeU5BU5D_t532* L_1 = (__this->____genericArguments_7);
		return L_1;
	}

IL_0012:
	{
		MethodBase_t556 * L_2 = (MethodBase_t556 *)VirtFuncInvoker0< MethodBase_t556 * >::Invoke(8 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase() */, __this);
		NullCheck(L_2);
		TypeU5BU5D_t532* L_3 = (TypeU5BU5D_t532*)VirtFuncInvoker0< TypeU5BU5D_t532* >::Invoke(26 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_2);
		TypeU5BU5D_t532* L_4 = L_3;
		V_0 = L_4;
		__this->____genericArguments_7 = L_4;
		TypeU5BU5D_t532* L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* MethodCallDictionary_t1304_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__ctor_m7913 (MethodCallDictionary_t1304 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t1304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m7921(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MethodCallDictionary_t1304_il2cpp_TypeInfo_var);
		StringU5BU5D_t484* L_1 = ((MethodCallDictionary_t1304_StaticFields*)MethodCallDictionary_t1304_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m7923(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t484_il2cpp_TypeInfo_var;
extern TypeInfo* MethodCallDictionary_t1304_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1867;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1870;
extern Il2CppCodeGenString* _stringLiteral1871;
extern Il2CppCodeGenString* _stringLiteral1872;
extern "C" void MethodCallDictionary__cctor_m7914 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		MethodCallDictionary_t1304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(920);
		_stringLiteral1867 = il2cpp_codegen_string_literal_from_index(1867);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1870 = il2cpp_codegen_string_literal_from_index(1870);
		_stringLiteral1871 = il2cpp_codegen_string_literal_from_index(1871);
		_stringLiteral1872 = il2cpp_codegen_string_literal_from_index(1872);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t484* L_0 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral1867);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1867;
		StringU5BU5D_t484* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral1868);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1, sizeof(String_t*))) = (String_t*)_stringLiteral1868;
		StringU5BU5D_t484* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral1869);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2, sizeof(String_t*))) = (String_t*)_stringLiteral1869;
		StringU5BU5D_t484* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral1870);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3, sizeof(String_t*))) = (String_t*)_stringLiteral1870;
		StringU5BU5D_t484* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral1871);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4, sizeof(String_t*))) = (String_t*)_stringLiteral1871;
		StringU5BU5D_t484* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral1872);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5, sizeof(String_t*))) = (String_t*)_stringLiteral1872;
		((MethodCallDictionary_t1304_StaticFields*)MethodCallDictionary_t1304_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_5;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_.h"
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* IDictionary_t871_il2cpp_TypeInfo_var;
extern "C" void DictionaryEnumerator__ctor_m7915 (DictionaryEnumerator_t1305 * __this, MethodDictionary_t1299 * ___methodDictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	DictionaryEnumerator_t1305 * G_B2_0 = {0};
	DictionaryEnumerator_t1305 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	DictionaryEnumerator_t1305 * G_B3_1 = {0};
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		MethodDictionary_t1299 * L_0 = ___methodDictionary;
		__this->____methodDictionary_0 = L_0;
		MethodDictionary_t1299 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		Object_t * L_2 = (L_1->____internalProperties_0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0035;
		}
	}
	{
		MethodDictionary_t1299 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->____internalProperties_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t871_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0036:
	{
		NullCheck(G_B3_1);
		G_B3_1->____hashtableEnum_1 = G_B3_0;
		__this->____posMethod_2 = (-1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" Object_t * DictionaryEnumerator_get_Current_m7916 (DictionaryEnumerator_t1305 * __this, const MethodInfo* method)
{
	DictionaryEntry_t937  V_0 = {0};
	{
		DictionaryEntry_t937  L_0 = (DictionaryEntry_t937 )VirtFuncInvoker0< DictionaryEntry_t937  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m6511((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* IDictionaryEnumerator_t936_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern "C" bool DictionaryEnumerator_MoveNext_m7917 (DictionaryEnumerator_t1305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(544);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1 = (__this->____posMethod_2);
		__this->____posMethod_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->____posMethod_2);
		MethodDictionary_t1299 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		StringU5BU5D_t484* L_4 = (L_3->____methodKeys_2);
		NullCheck(L_4);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		return 1;
	}

IL_0035:
	{
		__this->____posMethod_2 = ((int32_t)-2);
	}

IL_003d:
	{
		Object_t * L_5 = (__this->____hashtableEnum_1);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		goto IL_0071;
	}

IL_004f:
	{
		MethodDictionary_t1299 * L_6 = (__this->____methodDictionary_0);
		Object_t * L_7 = (__this->____hashtableEnum_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t936_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		bool L_9 = MethodDictionary_IsOverridenKey_m7926(L_6, ((String_t*)CastclassSealed(L_8, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		return 1;
	}

IL_0071:
	{
		Object_t * L_10 = (__this->____hashtableEnum_1);
		NullCheck(L_10);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		return 0;
	}
}
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t765_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionaryEnumerator_t936_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1884;
extern "C" DictionaryEntry_t937  DictionaryEnumerator_get_Entry_m7918 (DictionaryEnumerator_t1305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		IDictionaryEnumerator_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(544);
		_stringLiteral1884 = il2cpp_codegen_string_literal_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		MethodDictionary_t1299 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		StringU5BU5D_t484* L_2 = (L_1->____methodKeys_2);
		int32_t L_3 = (__this->____posMethod_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		MethodDictionary_t1299 * L_5 = (__this->____methodDictionary_0);
		MethodDictionary_t1299 * L_6 = (__this->____methodDictionary_0);
		NullCheck(L_6);
		StringU5BU5D_t484* L_7 = (L_6->____methodKeys_2);
		int32_t L_8 = (__this->____posMethod_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_5);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9, sizeof(String_t*))));
		DictionaryEntry_t937  L_11 = {0};
		DictionaryEntry__ctor_m4889(&L_11, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4, sizeof(String_t*))), L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0041:
	{
		int32_t L_12 = (__this->____posMethod_2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0058;
		}
	}
	{
		Object_t * L_13 = (__this->____hashtableEnum_1);
		if (L_13)
		{
			goto IL_0063;
		}
	}

IL_0058:
	{
		InvalidOperationException_t765 * L_14 = (InvalidOperationException_t765 *)il2cpp_codegen_object_new (InvalidOperationException_t765_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3958(L_14, _stringLiteral1884, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_0063:
	{
		Object_t * L_15 = (__this->____hashtableEnum_1);
		NullCheck(L_15);
		DictionaryEntry_t937  L_16 = (DictionaryEntry_t937 )InterfaceFuncInvoker0< DictionaryEntry_t937  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t936_il2cpp_TypeInfo_var, L_15);
		return L_16;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m7919 (DictionaryEnumerator_t1305 * __this, const MethodInfo* method)
{
	DictionaryEntry_t937  V_0 = {0};
	{
		DictionaryEntry_t937  L_0 = (DictionaryEntry_t937 )VirtFuncInvoker0< DictionaryEntry_t937  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Key_m6510((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m7920 (DictionaryEnumerator_t1305 * __this, const MethodInfo* method)
{
	DictionaryEntry_t937  V_0 = {0};
	{
		DictionaryEntry_t937  L_0 = (DictionaryEntry_t937 )VirtFuncInvoker0< DictionaryEntry_t937  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m6511((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void MethodDictionary__ctor_m7921 (MethodDictionary_t1299 * __this, Object_t * ___message, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___message;
		__this->____message_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"
extern TypeInfo* DictionaryEnumerator_t1305_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m7922 (MethodDictionary_t1299 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(921);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t1305 * L_0 = (DictionaryEnumerator_t1305 *)il2cpp_codegen_object_new (DictionaryEnumerator_t1305_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m7915(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void MethodDictionary_set_MethodKeys_m7923 (MethodDictionary_t1299 * __this, StringU5BU5D_t484* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t484* L_0 = ___value;
		__this->____methodKeys_2 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m7924 (MethodDictionary_t1299 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____ownProperties_3 = 1;
		Hashtable_t672 * L_0 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m7925 (MethodDictionary_t1299 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_1;
	}

IL_0017:
	{
		Object_t * L_2 = (__this->____internalProperties_0);
		return L_2;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_IsOverridenKey_m7926 (MethodDictionary_t1299 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t484* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->____ownProperties_3);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		StringU5BU5D_t484* L_1 = (__this->____methodKeys_2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0031;
	}

IL_001b:
	{
		StringU5BU5D_t484* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4, sizeof(String_t*)));
		String_t* L_5 = ___key;
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1759(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t484* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t871_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Item_m7927 (MethodDictionary_t1299 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IDictionary_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002d;
	}

IL_000e:
	{
		StringU5BU5D_t484* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1759(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*))), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, L_6);
		return L_7;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t484* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_12 = (__this->____internalProperties_0);
		Object_t * L_13 = ___key;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t871_il2cpp_TypeInfo_var, L_12, L_13);
		return L_14;
	}

IL_0053:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m7928 (MethodDictionary_t1299 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(11 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
extern TypeInfo* MethodDictionary_t1299_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t152_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodMessage_t1306_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodReturnMessage_t1616_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1798_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1867;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1870;
extern Il2CppCodeGenString* _stringLiteral1872;
extern Il2CppCodeGenString* _stringLiteral1871;
extern Il2CppCodeGenString* _stringLiteral1885;
extern Il2CppCodeGenString* _stringLiteral1886;
extern "C" Object_t * MethodDictionary_GetMethodProperty_m7929 (MethodDictionary_t1299 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t1299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		Dictionary_2_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		IMethodMessage_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(923);
		IMethodReturnMessage_t1616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		Dictionary_2__ctor_m1798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		_stringLiteral1867 = il2cpp_codegen_string_literal_from_index(1867);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1870 = il2cpp_codegen_string_literal_from_index(1870);
		_stringLiteral1872 = il2cpp_codegen_string_literal_from_index(1872);
		_stringLiteral1871 = il2cpp_codegen_string_literal_from_index(1871);
		_stringLiteral1885 = il2cpp_codegen_string_literal_from_index(1885);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t152 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0126;
		}
	}
	{
		Dictionary_2_t152 * L_2 = ((MethodDictionary_t1299_StaticFields*)MethodDictionary_t1299_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		if (L_2)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_t152 * L_3 = (Dictionary_2_t152 *)il2cpp_codegen_object_new (Dictionary_2_t152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1798(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m1798_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t152 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1867, 0);
		Dictionary_2_t152 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1868, 1);
		Dictionary_2_t152 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1869, 2);
		Dictionary_2_t152 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1870, 3);
		Dictionary_2_t152 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1872, 4);
		Dictionary_2_t152 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1871, 5);
		Dictionary_2_t152 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1885, 6);
		Dictionary_2_t152 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral1886, 7);
		Dictionary_2_t152 * L_12 = V_1;
		((MethodDictionary_t1299_StaticFields*)MethodDictionary_t1299_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4 = L_12;
	}

IL_007f:
	{
		Dictionary_2_t152 * L_13 = ((MethodDictionary_t1299_StaticFields*)MethodDictionary_t1299_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00bc;
		}
		if (L_16 == 1)
		{
			goto IL_00c8;
		}
		if (L_16 == 2)
		{
			goto IL_00d4;
		}
		if (L_16 == 3)
		{
			goto IL_00e0;
		}
		if (L_16 == 4)
		{
			goto IL_00ec;
		}
		if (L_16 == 5)
		{
			goto IL_00f8;
		}
		if (L_16 == 6)
		{
			goto IL_0104;
		}
		if (L_16 == 7)
		{
			goto IL_0115;
		}
	}
	{
		goto IL_0126;
	}

IL_00bc:
	{
		Object_t * L_17 = (__this->____message_1);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_17);
		return L_18;
	}

IL_00c8:
	{
		Object_t * L_19 = (__this->____message_1);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_19);
		return L_20;
	}

IL_00d4:
	{
		Object_t * L_21 = (__this->____message_1);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_21);
		return L_22;
	}

IL_00e0:
	{
		Object_t * L_23 = (__this->____message_1);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_23);
		return L_24;
	}

IL_00ec:
	{
		Object_t * L_25 = (__this->____message_1);
		NullCheck(L_25);
		LogicalCallContext_t1302 * L_26 = (LogicalCallContext_t1302 *)InterfaceFuncInvoker0< LogicalCallContext_t1302 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_25);
		return L_26;
	}

IL_00f8:
	{
		Object_t * L_27 = (__this->____message_1);
		NullCheck(L_27);
		ObjectU5BU5D_t280* L_28 = (ObjectU5BU5D_t280*)InterfaceFuncInvoker0< ObjectU5BU5D_t280* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodMessage::get_Args() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_27);
		return (Object_t *)L_28;
	}

IL_0104:
	{
		Object_t * L_29 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_29, IMethodReturnMessage_t1616_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t280* L_30 = (ObjectU5BU5D_t280*)InterfaceFuncInvoker0< ObjectU5BU5D_t280* >::Invoke(1 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_OutArgs() */, IMethodReturnMessage_t1616_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IMethodReturnMessage_t1616_il2cpp_TypeInfo_var)));
		return (Object_t *)L_30;
	}

IL_0115:
	{
		Object_t * L_31 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_31, IMethodReturnMessage_t1616_il2cpp_TypeInfo_var)));
		Object_t * L_32 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_ReturnValue() */, IMethodReturnMessage_t1616_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_31, IMethodReturnMessage_t1616_il2cpp_TypeInfo_var)));
		return L_32;
	}

IL_0126:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* MethodDictionary_t1299_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t152_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t339_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalMessage_t1640_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1798_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1872;
extern Il2CppCodeGenString* _stringLiteral1885;
extern Il2CppCodeGenString* _stringLiteral1886;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1870;
extern Il2CppCodeGenString* _stringLiteral1871;
extern Il2CppCodeGenString* _stringLiteral1867;
extern Il2CppCodeGenString* _stringLiteral1873;
extern "C" void MethodDictionary_SetMethodProperty_m7930 (MethodDictionary_t1299 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t1299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		Dictionary_2_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		ArgumentException_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		IInternalMessage_t1640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(925);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2__ctor_m1798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		_stringLiteral1872 = il2cpp_codegen_string_literal_from_index(1872);
		_stringLiteral1885 = il2cpp_codegen_string_literal_from_index(1885);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1870 = il2cpp_codegen_string_literal_from_index(1870);
		_stringLiteral1871 = il2cpp_codegen_string_literal_from_index(1871);
		_stringLiteral1867 = il2cpp_codegen_string_literal_from_index(1867);
		_stringLiteral1873 = il2cpp_codegen_string_literal_from_index(1873);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t152 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cb;
		}
	}
	{
		Dictionary_2_t152 * L_2 = ((MethodDictionary_t1299_StaticFields*)MethodDictionary_t1299_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		if (L_2)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_t152 * L_3 = (Dictionary_2_t152 *)il2cpp_codegen_object_new (Dictionary_2_t152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1798(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m1798_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t152 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1872, 0);
		Dictionary_2_t152 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1885, 0);
		Dictionary_2_t152 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1886, 0);
		Dictionary_2_t152 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1868, 1);
		Dictionary_2_t152 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1869, 1);
		Dictionary_2_t152 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1870, 1);
		Dictionary_2_t152 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1871, 1);
		Dictionary_2_t152 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral1867, 2);
		Dictionary_2_t152 * L_12 = V_1;
		((MethodDictionary_t1299_StaticFields*)MethodDictionary_t1299_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5 = L_12;
	}

IL_007f:
	{
		Dictionary_2_t152 * L_13 = ((MethodDictionary_t1299_StaticFields*)MethodDictionary_t1299_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00a8;
		}
		if (L_16 == 1)
		{
			goto IL_00a9;
		}
		if (L_16 == 2)
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_00cb;
	}

IL_00a8:
	{
		return;
	}

IL_00a9:
	{
		ArgumentException_t339 * L_17 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_17, _stringLiteral1873, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_00b4:
	{
		Object_t * L_18 = (__this->____message_1);
		Object_t * L_19 = ___value;
		NullCheck(((Object_t *)Castclass(L_18, IInternalMessage_t1640_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void System.Runtime.Remoting.Messaging.IInternalMessage::set_Uri(System.String) */, IInternalMessage_t1640_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IInternalMessage_t1640_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed(L_19, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00cb:
	{
		return;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t871_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t937_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Values_m7931 (MethodDictionary_t1299 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		IDictionary_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		DictionaryEntry_t937_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t607 * V_0 = {0};
	int32_t V_1 = 0;
	DictionaryEntry_t937  V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t607 * L_0 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000d:
	{
		ArrayList_t607 * L_1 = V_0;
		StringU5BU5D_t484* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4, sizeof(String_t*))));
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t484* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_00a6;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t871_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0050:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_12);
			V_2 = ((*(DictionaryEntry_t937 *)((DictionaryEntry_t937 *)UnBox (L_13, DictionaryEntry_t937_il2cpp_TypeInfo_var))));
			Object_t * L_14 = DictionaryEntry_get_Key_m6510((&V_2), /*hidden argument*/NULL);
			bool L_15 = MethodDictionary_IsOverridenKey_m7926(__this, ((String_t*)CastclassSealed(L_14, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0081;
			}
		}

IL_0073:
		{
			ArrayList_t607 * L_16 = V_0;
			Object_t * L_17 = DictionaryEntry_get_Value_m6511((&V_2), /*hidden argument*/NULL);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		}

IL_0081:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0050;
			}
		}

IL_008c:
		{
			IL2CPP_LEAVE(0xA6, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_009e;
			}
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(145)
		}

IL_009e:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(145)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0xA6, IL_00a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00a6:
	{
		ArrayList_t607 * L_23 = V_0;
		return L_23;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t871_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Add_m7932 (MethodDictionary_t1299 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IDictionary_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002e;
	}

IL_000e:
	{
		StringU5BU5D_t484* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1759(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*))), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = ___value;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(17 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object) */, __this, L_6, L_7);
		return;
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t484* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_12;
	}

IL_0053:
	{
		Object_t * L_13 = (__this->____internalProperties_0);
		Object_t * L_14 = ___key;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t871_il2cpp_TypeInfo_var, L_13, L_14, L_15);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t871_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_Contains_m7933 (MethodDictionary_t1299 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IDictionary_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		StringU5BU5D_t484* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1759(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*))), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t484* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		Object_t * L_11 = ___key;
		NullCheck(L_10);
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(3 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t871_il2cpp_TypeInfo_var, L_10, L_11);
		return L_12;
	}

IL_004d:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t339_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t871_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1873;
extern "C" void MethodDictionary_Remove_m7934 (MethodDictionary_t1299 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ArgumentException_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		IDictionary_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		_stringLiteral1873 = il2cpp_codegen_string_literal_from_index(1873);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		StringU5BU5D_t484* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1759(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*))), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t339 * L_6 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_6, _stringLiteral1873, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_002c:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t484* L_9 = (__this->____methodKeys_2);
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		Object_t * L_12 = ___key;
		NullCheck(L_11);
		InterfaceActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t871_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0055:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern TypeInfo* ICollection_t938_il2cpp_TypeInfo_var;
extern "C" int32_t MethodDictionary_get_Count_m7935 (MethodDictionary_t1299 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t938_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t938_il2cpp_TypeInfo_var, L_1);
		StringU5BU5D_t484* L_3 = (__this->____methodKeys_2);
		NullCheck(L_3);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
	}

IL_0020:
	{
		StringU5BU5D_t484* L_4 = (__this->____methodKeys_2);
		NullCheck(L_4);
		return (((int32_t)(((Array_t *)L_4)->max_length)));
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C" bool MethodDictionary_get_IsSynchronized_m7936 (MethodDictionary_t1299 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m7937 (MethodDictionary_t1299 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t938_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_CopyTo_m7938 (MethodDictionary_t1299 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t938_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(18 /* System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values() */, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t938_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t1305_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_GetEnumerator_m7939 (MethodDictionary_t1299 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(921);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t1305 * L_0 = (DictionaryEnumerator_t1305 *)il2cpp_codegen_object_new (DictionaryEnumerator_t1305_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m7915(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDicti.h"
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* IMethodReturnMessage_t1616_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t1307_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__ctor_m7940 (MethodReturnDictionary_t1307 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodReturnMessage_t1616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		MethodReturnDictionary_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(926);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m7921(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		Exception_t287 * L_2 = (Exception_t287 *)InterfaceFuncInvoker0< Exception_t287 * >::Invoke(0 /* System.Exception System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_Exception() */, IMethodReturnMessage_t1616_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t1307_il2cpp_TypeInfo_var);
		StringU5BU5D_t484* L_3 = ((MethodReturnDictionary_t1307_StaticFields*)MethodReturnDictionary_t1307_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6;
		MethodDictionary_set_MethodKeys_m7923(__this, L_3, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t1307_il2cpp_TypeInfo_var);
		StringU5BU5D_t484* L_4 = ((MethodReturnDictionary_t1307_StaticFields*)MethodReturnDictionary_t1307_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7;
		MethodDictionary_set_MethodKeys_m7923(__this, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t484_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t1307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1867;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1870;
extern Il2CppCodeGenString* _stringLiteral1885;
extern Il2CppCodeGenString* _stringLiteral1886;
extern Il2CppCodeGenString* _stringLiteral1872;
extern "C" void MethodReturnDictionary__cctor_m7941 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		MethodReturnDictionary_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(926);
		_stringLiteral1867 = il2cpp_codegen_string_literal_from_index(1867);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1870 = il2cpp_codegen_string_literal_from_index(1870);
		_stringLiteral1885 = il2cpp_codegen_string_literal_from_index(1885);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		_stringLiteral1872 = il2cpp_codegen_string_literal_from_index(1872);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t484* L_0 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 7));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral1867);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1867;
		StringU5BU5D_t484* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral1868);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1, sizeof(String_t*))) = (String_t*)_stringLiteral1868;
		StringU5BU5D_t484* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral1869);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2, sizeof(String_t*))) = (String_t*)_stringLiteral1869;
		StringU5BU5D_t484* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral1870);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3, sizeof(String_t*))) = (String_t*)_stringLiteral1870;
		StringU5BU5D_t484* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral1885);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4, sizeof(String_t*))) = (String_t*)_stringLiteral1885;
		StringU5BU5D_t484* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral1886);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5, sizeof(String_t*))) = (String_t*)_stringLiteral1886;
		StringU5BU5D_t484* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, _stringLiteral1872);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6, sizeof(String_t*))) = (String_t*)_stringLiteral1872;
		((MethodReturnDictionary_t1307_StaticFields*)MethodReturnDictionary_t1307_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6 = L_6;
		StringU5BU5D_t484* L_7 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, _stringLiteral1872);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1872;
		((MethodReturnDictionary_t1307_StaticFields*)MethodReturnDictionary_t1307_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7 = L_7;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t280* MonoMethodMessage_get_Args_m7942 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t280* L_0 = (__this->___args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1302 * MonoMethodMessage_get_LogicalCallContext_m7943 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	{
		LogicalCallContext_t1302 * L_0 = (__this->___ctx_3);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t556 * MonoMethodMessage_get_MethodBase_m7944 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_MethodName_m7945 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, L_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t532_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m7946 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t557* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t532* L_0 = (__this->___methodSignature_7);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t557* L_2 = (ParameterInfoU5BU5D_t557*)VirtFuncInvoker0< ParameterInfoU5BU5D_t557* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t557* L_3 = V_0;
		NullCheck(L_3);
		__this->___methodSignature_7 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_0040;
	}

IL_002c:
	{
		TypeU5BU5D_t532* L_4 = (__this->___methodSignature_7);
		int32_t L_5 = V_1;
		ParameterInfoU5BU5D_t557* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_6, L_8, sizeof(ParameterInfo_t558 *))));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_6, L_8, sizeof(ParameterInfo_t558 *))));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, L_5, sizeof(Type_t *))) = (Type_t *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_1;
		ParameterInfoU5BU5D_t557* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0049:
	{
		TypeU5BU5D_t532* L_13 = (__this->___methodSignature_7);
		return (Object_t *)L_13;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_TypeName_m7947 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoMethod::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m7948 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void MonoMethodMessage_set_Uri_m7949 (MonoMethodMessage_t1292 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_6 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t287 * MonoMethodMessage_get_Exception_m7950 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	{
		Exception_t287 * L_0 = (__this->___exc_5);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m7951 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t576* V_2 = {0};
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t280* L_0 = (__this->___args_1);
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
		V_0 = 0;
		ByteU5BU5D_t576* L_1 = (__this->___arg_types_2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0031;
	}

IL_001d:
	{
		ByteU5BU5D_t576* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4, sizeof(uint8_t)));
		uint8_t L_5 = V_1;
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_t576* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t280* MonoMethodMessage_get_OutArgs_m7952 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ObjectU5BU5D_t280* V_3 = {0};
	uint8_t V_4 = 0x0;
	ByteU5BU5D_t576* V_5 = {0};
	int32_t V_6 = 0;
	{
		ObjectU5BU5D_t280* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ObjectU5BU5D_t280*)NULL;
	}

IL_000d:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount() */, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		ByteU5BU5D_t576* L_4 = (__this->___arg_types_2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_0058;
	}

IL_002f:
	{
		ByteU5BU5D_t576* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7, sizeof(uint8_t)));
		uint8_t L_8 = V_4;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		ObjectU5BU5D_t280* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		ObjectU5BU5D_t280* L_12 = (__this->___args_1);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14, sizeof(Object_t *))));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14, sizeof(Object_t *)));
	}

IL_004e:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = V_6;
		V_6 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_17 = V_6;
		ByteU5BU5D_t576* L_18 = V_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t280* L_19 = V_3;
		return L_19;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m7953 (MonoMethodMessage_t1292 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___rval_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void RemotingSurrogate__ctor_m7954 (RemotingSurrogate_t1308 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t300_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogate_SetObjectData_m7955 (RemotingSurrogate_t1308 * __this, Object_t * ___obj, SerializationInfo_t534 * ___si, StreamingContext_t535  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t300 * L_0 = (NotSupportedException_t300 *)il2cpp_codegen_object_new (NotSupportedException_t300_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1526(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ObjRefSurrogate__ctor_m7956 (ObjRefSurrogate_t1309 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t300_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1887;
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m7957 (ObjRefSurrogate_t1309 * __this, Object_t * ___obj, SerializationInfo_t534 * ___si, StreamingContext_t535  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		_stringLiteral1887 = il2cpp_codegen_string_literal_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t300 * L_0 = (NotSupportedException_t300 *)il2cpp_codegen_object_new (NotSupportedException_t300_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3878(L_0, _stringLiteral1887, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void RemotingSurrogateSelector__ctor_m7958 (RemotingSurrogateSelector_t1310 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"
extern const Il2CppType* ObjRef_t1331_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var;
extern TypeInfo* ObjRefSurrogate_t1309_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogate_t1308_il2cpp_TypeInfo_var;
extern "C" void RemotingSurrogateSelector__cctor_m7959 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1331_0_0_0_var = il2cpp_codegen_type_from_index(927);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		ObjRefSurrogate_t1309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(929);
		RemotingSurrogate_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(930);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(ObjRef_t1331_0_0_0_var), /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1310_StaticFields*)RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0 = L_0;
		ObjRefSurrogate_t1309 * L_1 = (ObjRefSurrogate_t1309 *)il2cpp_codegen_object_new (ObjRefSurrogate_t1309_il2cpp_TypeInfo_var);
		ObjRefSurrogate__ctor_m7956(L_1, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1310_StaticFields*)RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1 = L_1;
		RemotingSurrogate_t1308 * L_2 = (RemotingSurrogate_t1308 *)il2cpp_codegen_object_new (RemotingSurrogate_t1308_il2cpp_TypeInfo_var);
		RemotingSurrogate__ctor_m7954(L_2, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1310_StaticFields*)RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2 = L_2;
		return;
	}
}
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern TypeInfo* RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t1311_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m7960 (RemotingSurrogateSelector_t1310 * __this, Type_t * ___type, StreamingContext_t535  ___context, Object_t ** ___ssout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		ISurrogateSelector_t1311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(931);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Object_t ** L_2 = ___ssout;
		*((Object_t **)(L_2)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var);
		RemotingSurrogate_t1308 * L_3 = ((RemotingSurrogateSelector_t1310_StaticFields*)RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2;
		return L_3;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((RemotingSurrogateSelector_t1310_StaticFields*)RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0;
		Type_t * L_5 = ___type;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		Object_t ** L_7 = ___ssout;
		*((Object_t **)(L_7)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var);
		ObjRefSurrogate_t1309 * L_8 = ((RemotingSurrogateSelector_t1310_StaticFields*)RemotingSurrogateSelector_t1310_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1;
		return L_8;
	}

IL_002d:
	{
		Object_t * L_9 = (__this->____next_3);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_10 = (__this->____next_3);
		Type_t * L_11 = ___type;
		StreamingContext_t535  L_12 = ___context;
		Object_t ** L_13 = ___ssout;
		NullCheck(L_10);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t535 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t1311_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		Object_t ** L_15 = ___ssout;
		*((Object_t **)(L_15)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h"
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessageMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
// System.Object
#include "mscorlib_System_Object.h"
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* IMethodMessage_t1306_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m7961 (ReturnMessage_t1312 * __this, Object_t * ___ret, ObjectU5BU5D_t280* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1302 * ___callCtx, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(923);
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___ret;
		__this->____returnValue_4 = L_0;
		ObjectU5BU5D_t280* L_1 = ___outArgs;
		__this->____args_1 = L_1;
		int32_t L_2 = ___outArgsCount;
		__this->____outArgsCount_2 = L_2;
		LogicalCallContext_t1302 * L_3 = ___callCtx;
		__this->____callCtx_3 = L_3;
		Object_t * L_4 = ___mcm;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		Object_t * L_5 = ___mcm;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_5);
		__this->____uri_5 = L_6;
		Object_t * L_7 = ___mcm;
		NullCheck(L_7);
		MethodBase_t556 * L_8 = (MethodBase_t556 *)InterfaceFuncInvoker0< MethodBase_t556 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_7);
		__this->____methodBase_7 = L_8;
	}

IL_0044:
	{
		ObjectU5BU5D_t280* L_9 = (__this->____args_1);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_10 = ___outArgsCount;
		__this->____args_1 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, L_10));
	}

IL_005b:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo* IMethodMessage_t1306_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t280_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m7962 (ReturnMessage_t1312 * __this, Exception_t287 * ___e, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(923);
		ObjectU5BU5D_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Exception_t287 * L_0 = ___e;
		__this->____exception_6 = L_0;
		Object_t * L_1 = ___mcm;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = ___mcm;
		NullCheck(L_2);
		MethodBase_t556 * L_3 = (MethodBase_t556 *)InterfaceFuncInvoker0< MethodBase_t556 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_2);
		__this->____methodBase_7 = L_3;
		Object_t * L_4 = ___mcm;
		NullCheck(L_4);
		LogicalCallContext_t1302 * L_5 = (LogicalCallContext_t1302 *)InterfaceFuncInvoker0< LogicalCallContext_t1302 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t1306_il2cpp_TypeInfo_var, L_4);
		__this->____callCtx_3 = L_5;
	}

IL_002b:
	{
		__this->____args_1 = ((ObjectU5BU5D_t280*)SZArrayNew(ObjectU5BU5D_t280_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m7963 (ReturnMessage_t1312 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t280* ReturnMessage_get_Args_m7964 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t280* L_0 = (__this->____args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"
extern TypeInfo* LogicalCallContext_t1302_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t1302 * ReturnMessage_get_LogicalCallContext_m7965 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t1302 * L_0 = (__this->____callCtx_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		LogicalCallContext_t1302 * L_1 = (LogicalCallContext_t1302 *)il2cpp_codegen_object_new (LogicalCallContext_t1302_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m7887(L_1, /*hidden argument*/NULL);
		__this->____callCtx_3 = L_1;
	}

IL_0016:
	{
		LogicalCallContext_t1302 * L_2 = (__this->____callCtx_3);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t556 * ReturnMessage_get_MethodBase_m7966 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	{
		MethodBase_t556 * L_0 = (__this->____methodBase_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m7967 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	{
		MethodBase_t556 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_1 = (__this->____methodName_8);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		MethodBase_t556 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____methodName_8 = L_3;
	}

IL_0027:
	{
		String_t* L_4 = (__this->____methodName_8);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t532_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_MethodSignature_m7968 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t557* V_0 = {0};
	int32_t V_1 = 0;
	{
		MethodBase_t556 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		TypeU5BU5D_t532* L_1 = (__this->____methodSignature_9);
		if (L_1)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t556 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t557* L_3 = (ParameterInfoU5BU5D_t557*)VirtFuncInvoker0< ParameterInfoU5BU5D_t557* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t557* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_9 = ((TypeU5BU5D_t532*)SZArrayNew(TypeU5BU5D_t532_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_004b;
	}

IL_0037:
	{
		TypeU5BU5D_t532* L_5 = (__this->____methodSignature_9);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t557* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_7, L_9, sizeof(ParameterInfo_t558 *))));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t558 **)(ParameterInfo_t558 **)SZArrayLdElema(L_7, L_9, sizeof(ParameterInfo_t558 *))));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6, sizeof(Type_t *))) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t557* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0037;
		}
	}

IL_0054:
	{
		TypeU5BU5D_t532* L_14 = (__this->____methodSignature_9);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"
extern TypeInfo* MethodReturnDictionary_t1307_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_Properties_m7969 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodReturnDictionary_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(926);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodReturnDictionary_t1307 * L_0 = (__this->____properties_11);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		MethodReturnDictionary_t1307 * L_1 = (MethodReturnDictionary_t1307 *)il2cpp_codegen_object_new (MethodReturnDictionary_t1307_il2cpp_TypeInfo_var);
		MethodReturnDictionary__ctor_m7940(L_1, __this, /*hidden argument*/NULL);
		__this->____properties_11 = L_1;
	}

IL_0017:
	{
		MethodReturnDictionary_t1307 * L_2 = (__this->____properties_11);
		return L_2;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m7970 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	{
		MethodBase_t556 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = (__this->____typeName_10);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		MethodBase_t556 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->____typeName_10 = L_4;
	}

IL_002c:
	{
		String_t* L_5 = (__this->____typeName_10);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m7971 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m7972 (ReturnMessage_t1312 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_5 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t287 * ReturnMessage_get_Exception_m7973 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	{
		Exception_t287 * L_0 = (__this->____exception_6);
		return L_0;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"
extern TypeInfo* ArgInfo_t1289_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t280* ReturnMessage_get_OutArgs_m7974 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgInfo_t1289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(932);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t280* L_0 = (__this->____outArgs_0);
		if (L_0)
		{
			goto IL_004a;
		}
	}
	{
		ObjectU5BU5D_t280* L_1 = (__this->____args_1);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		ArgInfo_t1289 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		MethodBase_t556 * L_3 = (MethodBase_t556 *)VirtFuncInvoker0< MethodBase_t556 * >::Invoke(7 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase() */, __this);
		ArgInfo_t1289 * L_4 = (ArgInfo_t1289 *)il2cpp_codegen_object_new (ArgInfo_t1289_il2cpp_TypeInfo_var);
		ArgInfo__ctor_m7844(L_4, L_3, 1, /*hidden argument*/NULL);
		__this->____inArgInfo_12 = L_4;
	}

IL_0033:
	{
		ArgInfo_t1289 * L_5 = (__this->____inArgInfo_12);
		ObjectU5BU5D_t280* L_6 = (__this->____args_1);
		NullCheck(L_5);
		ObjectU5BU5D_t280* L_7 = ArgInfo_GetInOutArgs_m7845(L_5, L_6, /*hidden argument*/NULL);
		__this->____outArgs_0 = L_7;
	}

IL_004a:
	{
		ObjectU5BU5D_t280* L_8 = (__this->____outArgs_0);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m7975 (ReturnMessage_t1312 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____returnValue_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ServerContextTerminatorSink::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ServerContextTerminatorSink__ctor_m7976 (ServerContextTerminatorSink_t1313 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ServerObjectTerminatorSink__ctor_m7977 (ServerObjectTerminatorSink_t1314 * __this, Object_t * ___nextSink, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___nextSink;
		__this->____nextSink_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.StackBuilderSink::.ctor(System.MarshalByRefObject,System.Boolean)
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
extern TypeInfo* RemotingServices_t1344_il2cpp_TypeInfo_var;
extern "C" void StackBuilderSink__ctor_m7978 (StackBuilderSink_t1315 * __this, MarshalByRefObject_t824 * ___obj, bool ___forceInternalExecute, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(869);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		MarshalByRefObject_t824 * L_0 = ___obj;
		__this->____target_0 = L_0;
		bool L_1 = ___forceInternalExecute;
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		MarshalByRefObject_t824 * L_2 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		bool L_3 = RemotingServices_IsTransparentProxy_m8115(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		MarshalByRefObject_t824 * L_4 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		RealProxy_t1316 * L_5 = RemotingServices_GetRealProxy_m8119(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->____rp_1 = L_5;
	}

IL_002a:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttribute.h"
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Metadata.SoapAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SoapAttribute__ctor_m7979 (SoapAttribute_t1317 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2878(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::get_UseAttribute()
extern "C" bool SoapAttribute_get_UseAttribute_m7980 (SoapAttribute_t1317 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapAttribute::get_XmlNamespace()
extern "C" String_t* SoapAttribute_get_XmlNamespace_m7981 (SoapAttribute_t1317 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___ProtXmlNamespace_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapAttribute::SetReflectionObject(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void SoapAttribute_SetReflectionObject_m7982 (SoapAttribute_t1317 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___reflectionObject;
		__this->___ReflectInfo_2 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttribute.h"
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttributeMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Void System.Runtime.Remoting.Metadata.SoapFieldAttribute::.ctor()
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
extern "C" void SoapFieldAttribute__ctor_m7983 (SoapFieldAttribute_t1318 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m7979(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapFieldAttribute::get_XmlElementName()
extern "C" String_t* SoapFieldAttribute_get_XmlElementName_m7984 (SoapFieldAttribute_t1318 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____elementName_3);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapFieldAttribute::IsInteropXmlElement()
extern "C" bool SoapFieldAttribute_IsInteropXmlElement_m7985 (SoapFieldAttribute_t1318 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isElement_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapFieldAttribute::SetReflectionObject(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern "C" void SoapFieldAttribute_SetReflectionObject_m7986 (SoapFieldAttribute_t1318 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(688);
		s_Il2CppMethodIntialized = true;
	}
	FieldInfo_t * V_0 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((FieldInfo_t *)CastclassClass(L_0, FieldInfo_t_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____elementName_3);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		FieldInfo_t * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____elementName_3 = L_3;
	}

IL_001e:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttribut.h"
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttributMethodDeclarations.h"
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Metadata.SoapMethodAttribute::.ctor()
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
extern "C" void SoapMethodAttribute__ctor_m7987 (SoapMethodAttribute_t1319 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m7979(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapMethodAttribute::get_UseAttribute()
extern "C" bool SoapMethodAttribute_get_UseAttribute_m7988 (SoapMethodAttribute_t1319 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::get_XmlNamespace()
extern "C" String_t* SoapMethodAttribute_get_XmlNamespace_m7989 (SoapMethodAttribute_t1319 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____namespace_8);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapMethodAttribute::SetReflectionObject(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"
extern TypeInfo* MethodBase_t556_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1350_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1888;
extern Il2CppCodeGenString* _stringLiteral1889;
extern Il2CppCodeGenString* _stringLiteral889;
extern "C" void SoapMethodAttribute_SetReflectionObject_m7990 (SoapMethodAttribute_t1319 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodBase_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(824);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		SoapServices_t1350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		_stringLiteral1888 = il2cpp_codegen_string_literal_from_index(1888);
		_stringLiteral1889 = il2cpp_codegen_string_literal_from_index(1889);
		_stringLiteral889 = il2cpp_codegen_string_literal_from_index(889);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t556 * V_0 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((MethodBase_t556 *)CastclassClass(L_0, MethodBase_t556_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____responseElement_3);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		MethodBase_t556 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1631(NULL /*static, unused*/, L_3, _stringLiteral1888, /*hidden argument*/NULL);
		__this->____responseElement_3 = L_4;
	}

IL_0028:
	{
		String_t* L_5 = (__this->____responseNamespace_4);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		MethodBase_t556 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1350_il2cpp_TypeInfo_var);
		String_t* L_7 = SoapServices_GetXmlNamespaceForMethodResponse_m8153(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->____responseNamespace_4 = L_7;
	}

IL_003f:
	{
		String_t* L_8 = (__this->____returnElement_5);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		__this->____returnElement_5 = _stringLiteral1889;
	}

IL_0055:
	{
		String_t* L_9 = (__this->____soapAction_6);
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		MethodBase_t556 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1350_il2cpp_TypeInfo_var);
		String_t* L_11 = SoapServices_GetXmlNamespaceForMethodCall_m8152(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		MethodBase_t556 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1746(NULL /*static, unused*/, L_11, _stringLiteral889, L_13, /*hidden argument*/NULL);
		__this->____soapAction_6 = L_14;
	}

IL_007c:
	{
		String_t* L_15 = (__this->____namespace_8);
		if (L_15)
		{
			goto IL_0093;
		}
	}
	{
		MethodBase_t556 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1350_il2cpp_TypeInfo_var);
		String_t* L_17 = SoapServices_GetXmlNamespaceForMethodCall_m8152(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		__this->____namespace_8 = L_17;
	}

IL_0093:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttri.h"
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttriMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Metadata.SoapParameterAttribute::.ctor()
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
extern "C" void SoapParameterAttribute__ctor_m7991 (SoapParameterAttribute_t1320 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m7979(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttribute.h"
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttributeMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Metadata.SoapTypeAttribute::.ctor()
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
extern "C" void SoapTypeAttribute__ctor_m7992 (SoapTypeAttribute_t1321 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m7979(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_UseAttribute()
extern "C" bool SoapTypeAttribute_get_UseAttribute_m7993 (SoapTypeAttribute_t1321 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlElementName()
extern "C" String_t* SoapTypeAttribute_get_XmlElementName_m7994 (SoapTypeAttribute_t1321 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlElementName_4);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlNamespace()
extern "C" String_t* SoapTypeAttribute_get_XmlNamespace_m7995 (SoapTypeAttribute_t1321 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlNamespace_5);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlTypeName()
extern "C" String_t* SoapTypeAttribute_get_XmlTypeName_m7996 (SoapTypeAttribute_t1321 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlTypeName_6);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlTypeNamespace()
extern "C" String_t* SoapTypeAttribute_get_XmlTypeNamespace_m7997 (SoapTypeAttribute_t1321 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlTypeNamespace_7);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_IsInteropXmlElement()
extern "C" bool SoapTypeAttribute_get_IsInteropXmlElement_m7998 (SoapTypeAttribute_t1321 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isElement_9);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_IsInteropXmlType()
extern "C" bool SoapTypeAttribute_get_IsInteropXmlType_m7999 (SoapTypeAttribute_t1321 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isType_8);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapTypeAttribute::SetReflectionObject(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1350_il2cpp_TypeInfo_var;
extern "C" void SoapTypeAttribute_SetReflectionObject_m8000 (SoapTypeAttribute_t1321 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		SoapServices_t1350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((Type_t *)CastclassClass(L_0, Type_t_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____xmlElementName_4);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____xmlElementName_4 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = (__this->____xmlTypeName_6);
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		__this->____xmlTypeName_6 = L_6;
	}

IL_0035:
	{
		String_t* L_7 = (__this->____xmlTypeNamespace_7);
		if (L_7)
		{
			goto IL_0088;
		}
	}
	{
		Type_t * L_8 = V_0;
		NullCheck(L_8);
		Assembly_t947 * L_9 = (Assembly_t947 *)VirtFuncInvoker0< Assembly_t947 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		Assembly_t947 * L_11 = (Assembly_t947 *)VirtFuncInvoker0< Assembly_t947 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_10);
		if ((!(((Object_t*)(Assembly_t947 *)L_9) == ((Object_t*)(Assembly_t947 *)L_11))))
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_12;
		goto IL_0076;
	}

IL_0065:
	{
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		Assembly_t947 * L_14 = (Assembly_t947 *)VirtFuncInvoker0< Assembly_t947 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_13);
		NullCheck(L_14);
		AssemblyName_t1192 * L_15 = (AssemblyName_t1192 *)VirtFuncInvoker0< AssemblyName_t1192 * >::Invoke(16 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_14);
		NullCheck(L_15);
		String_t* L_16 = AssemblyName_get_Name_m7434(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0076:
	{
		Type_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_17);
		String_t* L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1350_il2cpp_TypeInfo_var);
		String_t* L_20 = SoapServices_CodeXmlNamespaceForClrTypeNamespace_m8148(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		__this->____xmlTypeNamespace_7 = L_20;
	}

IL_0088:
	{
		String_t* L_21 = (__this->____xmlNamespace_5);
		if (L_21)
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_22 = (__this->____xmlTypeNamespace_7);
		__this->____xmlNamespace_5 = L_22;
	}

IL_009f:
	{
		return;
	}
}
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1325_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t824_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t824 * ProxyAttribute_CreateInstance_m8001 (ProxyAttribute_t1322 * __this, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		RemotingProxy_t1325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(934);
		MarshalByRefObject_t824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(696);
		s_Il2CppMethodIntialized = true;
	}
	RemotingProxy_t1325 * V_0 = {0};
	{
		Type_t * L_0 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ChannelServices_t1265_StaticFields*)ChannelServices_t1265_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		RemotingProxy_t1325 * L_2 = (RemotingProxy_t1325 *)il2cpp_codegen_object_new (RemotingProxy_t1325_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m8015(L_2, L_0, L_1, (ObjectU5BU5D_t280*)(ObjectU5BU5D_t280*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		RemotingProxy_t1325 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_3);
		return ((MarshalByRefObject_t824 *)CastclassClass(L_4, MarshalByRefObject_t824_il2cpp_TypeInfo_var));
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
extern TypeInfo* RemotingServices_t1344_il2cpp_TypeInfo_var;
extern "C" RealProxy_t1316 * ProxyAttribute_CreateProxy_m8002 (ProxyAttribute_t1322 * __this, ObjRef_t1331 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1271 * ___serverContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(869);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t1331 * L_0 = ___objRef;
		Type_t * L_1 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_GetProxyForRemoteObject_m8132(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		RealProxy_t1316 * L_3 = RemotingServices_GetRealProxy_m8119(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m8003 (ProxyAttribute_t1322 * __this, Object_t * ___msg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m8004 (ProxyAttribute_t1322 * __this, Context_t1271 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m8005 (RealProxy_t1316 * __this, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m8007(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m8006 (RealProxy_t1316 * __this, Type_t * ___classToProxy, ClientIdentity_t1332 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m8007(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		ClientIdentity_t1332 * L_2 = ___identity;
		__this->____objectIdentity_3 = L_2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t339_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t300_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1890;
extern Il2CppCodeGenString* _stringLiteral1891;
extern "C" void RealProxy__ctor_m8007 (RealProxy_t1316 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		NotSupportedException_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		_stringLiteral1890 = il2cpp_codegen_string_literal_from_index(1890);
		_stringLiteral1891 = il2cpp_codegen_string_literal_from_index(1891);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____targetDomainId_1 = (-1);
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___classToProxy;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_2 = ___classToProxy;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_t339 * L_4 = (ArgumentException_t339 *)il2cpp_codegen_object_new (ArgumentException_t339_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1939(L_4, _stringLiteral1890, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_002e:
	{
		Type_t * L_5 = ___classToProxy;
		__this->___class_to_proxy_0 = L_5;
		IntPtr_t L_6 = ___stub;
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Inequality_m2871(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		NotSupportedException_t300 * L_9 = (NotSupportedException_t300 *)il2cpp_codegen_object_new (NotSupportedException_t300_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3878(L_9, _stringLiteral1891, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0050:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m8008 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Type_t * (*RealProxy_InternalGetProxyType_m8008_ftn) (Object_t *);
	return  ((RealProxy_InternalGetProxyType_m8008_ftn)mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType) (___transparentProxy);
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* MarshalByRefObject_t824_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * RealProxy_GetProxiedType_m8009 (RealProxy_t1316 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t824_0_0_0_var = il2cpp_codegen_type_from_index(696);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_1 = (__this->___class_to_proxy_0);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t824_0_0_0_var), /*hidden argument*/NULL);
		return L_3;
	}

IL_0026:
	{
		Type_t * L_4 = (__this->___class_to_proxy_0);
		return L_4;
	}

IL_002d:
	{
		Object_t * L_5 = (__this->____objTP_4);
		Type_t * L_6 = RealProxy_InternalGetProxyType_m8008(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C" Identity_t1324 * RealProxy_get_ObjectIdentity_m8010 (RealProxy_t1316 * __this, const MethodInfo* method)
{
	{
		Identity_t1324 * L_0 = (__this->____objectIdentity_3);
		return L_0;
	}
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m8011 (RealProxy_t1316 * __this, String_t* ___className, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*RealProxy_InternalGetTransparentProxy_m8011_ftn) (RealProxy_t1316 *, String_t*);
	return  ((RealProxy_InternalGetTransparentProxy_m8011_ftn)mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy) (__this, ___className);
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern const Il2CppType* MarshalByRefObject_t824_0_0_0_var;
extern TypeInfo* IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * RealProxy_GetTransparentProxy_m8012 (RealProxy_t1316 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t824_0_0_0_var = il2cpp_codegen_type_from_index(696);
		IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = ((Object_t *)IsInst(__this, IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t824_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1759(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}

IL_003f:
	{
		Type_t * L_9 = (__this->___class_to_proxy_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_9);
		V_0 = L_10;
	}

IL_004b:
	{
		goto IL_005c;
	}

IL_0050:
	{
		Type_t * L_11 = (__this->___class_to_proxy_0);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_11);
		V_0 = L_12;
	}

IL_005c:
	{
		String_t* L_13 = V_0;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String) */, __this, L_13);
		__this->____objTP_4 = L_14;
	}

IL_0069:
	{
		Object_t * L_15 = (__this->____objTP_4);
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void RealProxy_SetTargetDomain_m8013 (RealProxy_t1316 * __this, int32_t ___domainId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___domainId;
		__this->____targetDomainId_1 = L_0;
		return;
	}
}
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentity.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"
extern "C" void RemotingProxy__ctor_m8014 (RemotingProxy_t1325 * __this, Type_t * ___type, ClientIdentity_t1332 * ___identity, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ClientIdentity_t1332 * L_1 = ___identity;
		RealProxy__ctor_m8006(__this, L_0, L_1, /*hidden argument*/NULL);
		ClientIdentity_t1332 * L_2 = ___identity;
		NullCheck(L_2);
		Object_t * L_3 = Identity_get_ChannelSink_m8032(L_2, /*hidden argument*/NULL);
		__this->____sink_7 = L_3;
		__this->____hasEnvoySink_8 = 0;
		ClientIdentity_t1332 * L_4 = ___identity;
		NullCheck(L_4);
		String_t* L_5 = ClientIdentity_get_TargetUri_m8043(L_4, /*hidden argument*/NULL);
		((RealProxy_t1316 *)__this)->____targetUri_2 = L_5;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"
extern "C" void RemotingProxy__ctor_m8015 (RemotingProxy_t1325 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t280* ___activationAttributes, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		RealProxy__ctor_m8005(__this, L_0, /*hidden argument*/NULL);
		__this->____hasEnvoySink_8 = 0;
		Type_t * L_1 = ___type;
		String_t* L_2 = ___activationUrl;
		ObjectU5BU5D_t280* L_3 = ___activationAttributes;
		ConstructionCall_t1296 * L_4 = ActivationServices_CreateConstructionCall_m7734(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->____ctorCall_9 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1325_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1892;
extern Il2CppCodeGenString* _stringLiteral1893;
extern "C" void RemotingProxy__cctor_m8016 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		RemotingProxy_t1325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(934);
		_stringLiteral1892 = il2cpp_codegen_string_literal_from_index(1892);
		_stringLiteral1893 = il2cpp_codegen_string_literal_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_0, _stringLiteral1892);
		((RemotingProxy_t1325_StaticFields*)RemotingProxy_t1325_il2cpp_TypeInfo_var->static_fields)->____cache_GetTypeMethod_5 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_2, _stringLiteral1893);
		((RemotingProxy_t1325_StaticFields*)RemotingProxy_t1325_il2cpp_TypeInfo_var->static_fields)->____cache_GetHashCodeMethod_6 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern TypeInfo* ClientIdentity_t1332_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingProxy_get_TypeName_m8017 (RemotingProxy_t1325 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientIdentity_t1332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		s_Il2CppMethodIntialized = true;
	}
	ObjRef_t1331 * V_0 = {0};
	{
		Identity_t1324 * L_0 = (((RealProxy_t1316 *)__this)->____objectIdentity_3);
		if (!((ClientIdentity_t1332 *)IsInstClass(L_0, ClientIdentity_t1332_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		Identity_t1324 * L_1 = (((RealProxy_t1316 *)__this)->____objectIdentity_3);
		NullCheck(L_1);
		ObjRef_t1331 * L_2 = (ObjRef_t1331 *)VirtFuncInvoker1< ObjRef_t1331 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_1, (Type_t *)NULL);
		V_0 = L_2;
		ObjRef_t1331 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_3);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		ObjRef_t1331 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_0034:
	{
		Type_t * L_8 = RealProxy_GetProxiedType_m8009(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_8);
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ClientActivatedIdentity_t1346_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1344_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy_Finalize_m8018 (RemotingProxy_t1325 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientActivatedIdentity_t1346_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(937);
		RemotingServices_t1344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(869);
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
			Identity_t1324 * L_0 = (((RealProxy_t1316 *)__this)->____objectIdentity_3);
			if (!L_0)
			{
				goto IL_0026;
			}
		}

IL_000b:
		{
			Identity_t1324 * L_1 = (((RealProxy_t1316 *)__this)->____objectIdentity_3);
			if (((ClientActivatedIdentity_t1346 *)IsInstClass(L_1, ClientActivatedIdentity_t1346_il2cpp_TypeInfo_var)))
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			Identity_t1324 * L_2 = (((RealProxy_t1316 *)__this)->____objectIdentity_3);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m8135(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		}

IL_0026:
		{
			IL2CPP_LEAVE(0x32, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Object_Finalize_m2854(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0032:
	{
		return;
	}
}
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t1326_il2cpp_TypeInfo_var;
extern "C" void TrackingServices__cctor_m8019 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		TrackingServices_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(938);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_0, /*hidden argument*/NULL);
		((TrackingServices_t1326_StaticFields*)TrackingServices_t1326_il2cpp_TypeInfo_var->static_fields)->____handlers_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* ITrackingHandler_t1642_0_0_0_var;
extern TypeInfo* TrackingServices_t1326_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t1641_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t1642_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyUnmarshaledObject_m8020 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1331 * ___or, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t1642_0_0_0_var = il2cpp_codegen_type_from_index(939);
		TrackingServices_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(938);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		ITrackingHandlerU5BU5D_t1641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(940);
		ITrackingHandler_t1642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(939);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t1641* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1326_il2cpp_TypeInfo_var);
		ArrayList_t607 * L_0 = ((TrackingServices_t1326_StaticFields*)TrackingServices_t1326_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1326_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_3 = ((TrackingServices_t1326_StaticFields*)TrackingServices_t1326_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
			if (L_4)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0044);
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1326_il2cpp_TypeInfo_var);
			ArrayList_t607 * L_5 = ((TrackingServices_t1326_StaticFields*)TrackingServices_t1326_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t1642_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(47 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t1641*)Castclass(L_7, ITrackingHandlerU5BU5D_t1641_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x4B, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_004b:
	{
		V_2 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		ITrackingHandlerU5BU5D_t1641* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t1331 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))));
		InterfaceActionInvoker2< Object_t *, ObjRef_t1331 * >::Invoke(0 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::UnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef) */, ITrackingHandler_t1642_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t1641* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0052;
		}
	}

IL_0069:
	{
		return;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ActivatedClientTypeEntry::.ctor(System.String,System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1894;
extern Il2CppCodeGenString* _stringLiteral212;
extern "C" void ActivatedClientTypeEntry__ctor_m8021 (ActivatedClientTypeEntry_t1327 * __this, String_t* ___typeName, String_t* ___assemblyName, String_t* ___appUrl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1894 = il2cpp_codegen_string_literal_from_index(1894);
		_stringLiteral212 = il2cpp_codegen_string_literal_from_index(212);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t947 * V_0 = {0};
	{
		TypeEntry__ctor_m8160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___assemblyName;
		TypeEntry_set_AssemblyName_m8162(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___typeName;
		TypeEntry_set_TypeName_m8164(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___appUrl;
		__this->___applicationUrl_2 = L_2;
		String_t* L_3 = ___assemblyName;
		Assembly_t947 * L_4 = Assembly_Load_m7418(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Assembly_t947 * L_5 = V_0;
		String_t* L_6 = ___typeName;
		NullCheck(L_5);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_5, L_6);
		__this->___obj_type_3 = L_7;
		Type_t * L_8 = (__this->___obj_type_3);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_9 = ___typeName;
		String_t* L_10 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2902(NULL /*static, unused*/, _stringLiteral1894, L_9, _stringLiteral212, L_10, /*hidden argument*/NULL);
		RemotingException_t1343 * L_12 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0051:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m8022 (ActivatedClientTypeEntry_t1327 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___applicationUrl_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C" IContextAttributeU5BU5D_t1618* ActivatedClientTypeEntry_get_ContextAttributes_m8023 (ActivatedClientTypeEntry_t1327 * __this, const MethodInfo* method)
{
	{
		return (IContextAttributeU5BU5D_t1618*)NULL;
	}
}
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m8024 (ActivatedClientTypeEntry_t1327 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedClientTypeEntry_ToString_m8025 (ActivatedClientTypeEntry_t1327 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_TypeName_m8163(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_AssemblyName_m8161(__this, /*hidden argument*/NULL);
		String_t* L_2 = ActivatedClientTypeEntry_get_ApplicationUrl_m8022(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1746(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntry.h"
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntryMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ActivatedServiceTypeEntry::.ctor(System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1894;
extern Il2CppCodeGenString* _stringLiteral212;
extern "C" void ActivatedServiceTypeEntry__ctor_m8026 (ActivatedServiceTypeEntry_t1329 * __this, String_t* ___typeName, String_t* ___assemblyName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1894 = il2cpp_codegen_string_literal_from_index(1894);
		_stringLiteral212 = il2cpp_codegen_string_literal_from_index(212);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t947 * V_0 = {0};
	{
		TypeEntry__ctor_m8160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___assemblyName;
		TypeEntry_set_AssemblyName_m8162(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___typeName;
		TypeEntry_set_TypeName_m8164(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___assemblyName;
		Assembly_t947 * L_3 = Assembly_Load_m7418(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Assembly_t947 * L_4 = V_0;
		String_t* L_5 = ___typeName;
		NullCheck(L_4);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		__this->___obj_type_2 = L_6;
		Type_t * L_7 = (__this->___obj_type_2);
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_8 = ___typeName;
		String_t* L_9 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2902(NULL /*static, unused*/, _stringLiteral1894, L_8, _stringLiteral212, L_9, /*hidden argument*/NULL);
		RemotingException_t1343 * L_11 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_004a:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedServiceTypeEntry_get_ObjectType_m8027 (ActivatedServiceTypeEntry_t1329 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_2);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedServiceTypeEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedServiceTypeEntry_ToString_m8028 (ActivatedServiceTypeEntry_t1329 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_AssemblyName_m8161(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_TypeName_m8163(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1631(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfo.h"
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.EnvoyInfo::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EnvoyInfo__ctor_m8029 (EnvoyInfo_t1330 * __this, Object_t * ___sinks, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___sinks;
		__this->___envoySinks_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m8030 (EnvoyInfo_t1330 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoySinks_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Identity__ctor_m8031 (Identity_t1324 * __this, String_t* ___objectUri, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___objectUri;
		__this->____objectUri_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C" Object_t * Identity_get_ChannelSink_m8032 (Identity_t1324 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____channelSink_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void Identity_set_ChannelSink_m8033 (Identity_t1324 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____channelSink_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C" String_t* Identity_get_ObjectUri_m8034 (Identity_t1324 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C" bool Identity_get_Disposed_m8035 (Identity_t1324 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____disposed_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Identity_set_Disposed_m8036 (Identity_t1324 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____disposed_6 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ClientDynamicProperties()
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0MethodDeclarations.h"
extern TypeInfo* DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var;
extern "C" DynamicPropertyCollection_t1272 * Identity_get_ClientDynamicProperties_m8037 (Identity_t1324 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(890);
		s_Il2CppMethodIntialized = true;
	}
	{
		DynamicPropertyCollection_t1272 * L_0 = (__this->____clientDynamicProperties_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		DynamicPropertyCollection_t1272 * L_1 = (DynamicPropertyCollection_t1272 *)il2cpp_codegen_object_new (DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var);
		DynamicPropertyCollection__ctor_m7807(L_1, /*hidden argument*/NULL);
		__this->____clientDynamicProperties_3 = L_1;
	}

IL_0016:
	{
		DynamicPropertyCollection_t1272 * L_2 = (__this->____clientDynamicProperties_3);
		return L_2;
	}
}
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ServerDynamicProperties()
extern TypeInfo* DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var;
extern "C" DynamicPropertyCollection_t1272 * Identity_get_ServerDynamicProperties_m8038 (Identity_t1324 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(890);
		s_Il2CppMethodIntialized = true;
	}
	{
		DynamicPropertyCollection_t1272 * L_0 = (__this->____serverDynamicProperties_4);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		DynamicPropertyCollection_t1272 * L_1 = (DynamicPropertyCollection_t1272 *)il2cpp_codegen_object_new (DynamicPropertyCollection_t1272_il2cpp_TypeInfo_var);
		DynamicPropertyCollection__ctor_m7807(L_1, /*hidden argument*/NULL);
		__this->____serverDynamicProperties_4 = L_1;
	}

IL_0016:
	{
		DynamicPropertyCollection_t1272 * L_2 = (__this->____serverDynamicProperties_4);
		return L_2;
	}
}
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
extern TypeInfo* IEnvoyInfo_t1337_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity__ctor_m8039 (ClientIdentity_t1332 * __this, String_t* ___objectUri, ObjRef_t1331 * ___objRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnvoyInfo_t1337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(941);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ClientIdentity_t1332 * G_B2_0 = {0};
	ClientIdentity_t1332 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	ClientIdentity_t1332 * G_B3_1 = {0};
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m8031(__this, L_0, /*hidden argument*/NULL);
		ObjRef_t1331 * L_1 = ___objRef;
		((Identity_t1324 *)__this)->____objRef_5 = L_1;
		ObjRef_t1331 * L_2 = (((Identity_t1324 *)__this)->____objRef_5);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0036;
		}
	}
	{
		ObjRef_t1331 * L_4 = (((Identity_t1324 *)__this)->____objRef_5);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.IEnvoyInfo::get_EnvoySinks() */, IEnvoyInfo_t1337_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Object_t * L_7 = V_0;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		NullCheck(G_B3_1);
		((Identity_t1324 *)G_B3_1)->____envoySink_2 = G_B3_0;
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern TypeInfo* MarshalByRefObject_t824_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t824 * ClientIdentity_get_ClientProxy_m8040 (ClientIdentity_t1332 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(696);
		s_Il2CppMethodIntialized = true;
	}
	{
		WeakReference_t1333 * L_0 = (__this->____proxyReference_7);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_0);
		return ((MarshalByRefObject_t824 *)CastclassClass(L_1, MarshalByRefObject_t824_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
extern TypeInfo* WeakReference_t1333_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity_set_ClientProxy_m8041 (ClientIdentity_t1332 * __this, MarshalByRefObject_t824 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t1333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(942);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject_t824 * L_0 = ___value;
		WeakReference_t1333 * L_1 = (WeakReference_t1333 *)il2cpp_codegen_object_new (WeakReference_t1333_il2cpp_TypeInfo_var);
		WeakReference__ctor_m9903(L_1, L_0, /*hidden argument*/NULL);
		__this->____proxyReference_7 = L_1;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" ObjRef_t1331 * ClientIdentity_CreateObjRef_m8042 (ClientIdentity_t1332 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	{
		ObjRef_t1331 * L_0 = (((Identity_t1324 *)__this)->____objRef_5);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m8043 (ClientIdentity_t1332 * __this, const MethodInfo* method)
{
	{
		ObjRef_t1331 * L_0 = (((Identity_t1324 *)__this)->____objRef_5);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		return L_1;
	}
}
// System.Runtime.Remoting.InternalRemotingServices
#include "mscorlib_System_Runtime_Remoting_InternalRemotingServices.h"
// System.Runtime.Remoting.InternalRemotingServices
#include "mscorlib_System_Runtime_Remoting_InternalRemotingServicesMethodDeclarations.h"
// System.Void System.Runtime.Remoting.InternalRemotingServices::.cctor()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern TypeInfo* InternalRemotingServices_t1334_il2cpp_TypeInfo_var;
extern "C" void InternalRemotingServices__cctor_m8044 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		InternalRemotingServices_t1334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(943);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t672 * L_0 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_0, /*hidden argument*/NULL);
		((InternalRemotingServices_t1334_StaticFields*)InternalRemotingServices_t1334_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapAttribute System.Runtime.Remoting.InternalRemotingServices::GetCachedSoapAttribute(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttributMethodDeclarations.h"
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttriMethodDeclarations.h"
extern const Il2CppType* SoapAttribute_t1317_0_0_0_var;
extern TypeInfo* InternalRemotingServices_t1334_il2cpp_TypeInfo_var;
extern TypeInfo* SoapAttribute_t1317_il2cpp_TypeInfo_var;
extern TypeInfo* ICustomAttributeProvider_t1620_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapTypeAttribute_t1321_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapFieldAttribute_t1318_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBase_t556_il2cpp_TypeInfo_var;
extern TypeInfo* SoapMethodAttribute_t1319_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t558_il2cpp_TypeInfo_var;
extern TypeInfo* SoapParameterAttribute_t1320_il2cpp_TypeInfo_var;
extern "C" SoapAttribute_t1317 * InternalRemotingServices_GetCachedSoapAttribute_m8045 (Object_t * __this /* static, unused */, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapAttribute_t1317_0_0_0_var = il2cpp_codegen_type_from_index(944);
		InternalRemotingServices_t1334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(943);
		SoapAttribute_t1317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		ICustomAttributeProvider_t1620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		SoapTypeAttribute_t1321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(946);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(688);
		SoapFieldAttribute_t1318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(947);
		MethodBase_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(824);
		SoapMethodAttribute_t1319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(948);
		ParameterInfo_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(811);
		SoapParameterAttribute_t1320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	SoapAttribute_t1317 * V_1 = {0};
	Object_t * V_2 = {0};
	ObjectU5BU5D_t280* V_3 = {0};
	SoapAttribute_t1317 * V_4 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1334_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((InternalRemotingServices_t1334_StaticFields*)InternalRemotingServices_t1334_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1334_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_3 = ((InternalRemotingServices_t1334_StaticFields*)InternalRemotingServices_t1334_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
			Object_t * L_4 = ___reflectionObject;
			NullCheck(L_3);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
			V_1 = ((SoapAttribute_t1317 *)IsInstClass(L_5, SoapAttribute_t1317_il2cpp_TypeInfo_var));
			SoapAttribute_t1317 * L_6 = V_1;
			if (!L_6)
			{
				goto IL_0030;
			}
		}

IL_0028:
		{
			SoapAttribute_t1317 * L_7 = V_1;
			V_4 = L_7;
			IL2CPP_LEAVE(0xDA, FINALLY_00d3);
		}

IL_0030:
		{
			Object_t * L_8 = ___reflectionObject;
			V_2 = ((Object_t *)Castclass(L_8, ICustomAttributeProvider_t1620_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_10 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(SoapAttribute_t1317_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_9);
			ObjectU5BU5D_t280* L_11 = (ObjectU5BU5D_t280*)InterfaceFuncInvoker2< ObjectU5BU5D_t280*, Type_t *, bool >::Invoke(0 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean) */, ICustomAttributeProvider_t1620_il2cpp_TypeInfo_var, L_9, L_10, 1);
			V_3 = L_11;
			ObjectU5BU5D_t280* L_12 = V_3;
			NullCheck(L_12);
			if ((((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))) <= ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_0052:
		{
			ObjectU5BU5D_t280* L_13 = V_3;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
			int32_t L_14 = 0;
			V_1 = ((SoapAttribute_t1317 *)CastclassClass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14, sizeof(Object_t *))), SoapAttribute_t1317_il2cpp_TypeInfo_var));
			goto IL_00b3;
		}

IL_0060:
		{
			Object_t * L_15 = ___reflectionObject;
			if (!((Type_t *)IsInstClass(L_15, Type_t_il2cpp_TypeInfo_var)))
			{
				goto IL_0076;
			}
		}

IL_006b:
		{
			SoapTypeAttribute_t1321 * L_16 = (SoapTypeAttribute_t1321 *)il2cpp_codegen_object_new (SoapTypeAttribute_t1321_il2cpp_TypeInfo_var);
			SoapTypeAttribute__ctor_m7992(L_16, /*hidden argument*/NULL);
			V_1 = L_16;
			goto IL_00b3;
		}

IL_0076:
		{
			Object_t * L_17 = ___reflectionObject;
			if (!((FieldInfo_t *)IsInstClass(L_17, FieldInfo_t_il2cpp_TypeInfo_var)))
			{
				goto IL_008c;
			}
		}

IL_0081:
		{
			SoapFieldAttribute_t1318 * L_18 = (SoapFieldAttribute_t1318 *)il2cpp_codegen_object_new (SoapFieldAttribute_t1318_il2cpp_TypeInfo_var);
			SoapFieldAttribute__ctor_m7983(L_18, /*hidden argument*/NULL);
			V_1 = L_18;
			goto IL_00b3;
		}

IL_008c:
		{
			Object_t * L_19 = ___reflectionObject;
			if (!((MethodBase_t556 *)IsInstClass(L_19, MethodBase_t556_il2cpp_TypeInfo_var)))
			{
				goto IL_00a2;
			}
		}

IL_0097:
		{
			SoapMethodAttribute_t1319 * L_20 = (SoapMethodAttribute_t1319 *)il2cpp_codegen_object_new (SoapMethodAttribute_t1319_il2cpp_TypeInfo_var);
			SoapMethodAttribute__ctor_m7987(L_20, /*hidden argument*/NULL);
			V_1 = L_20;
			goto IL_00b3;
		}

IL_00a2:
		{
			Object_t * L_21 = ___reflectionObject;
			if (!((ParameterInfo_t558 *)IsInstClass(L_21, ParameterInfo_t558_il2cpp_TypeInfo_var)))
			{
				goto IL_00b3;
			}
		}

IL_00ad:
		{
			SoapParameterAttribute_t1320 * L_22 = (SoapParameterAttribute_t1320 *)il2cpp_codegen_object_new (SoapParameterAttribute_t1320_il2cpp_TypeInfo_var);
			SoapParameterAttribute__ctor_m7991(L_22, /*hidden argument*/NULL);
			V_1 = L_22;
		}

IL_00b3:
		{
			SoapAttribute_t1317 * L_23 = V_1;
			Object_t * L_24 = ___reflectionObject;
			NullCheck(L_23);
			VirtActionInvoker1< Object_t * >::Invoke(6 /* System.Void System.Runtime.Remoting.Metadata.SoapAttribute::SetReflectionObject(System.Object) */, L_23, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1334_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_25 = ((InternalRemotingServices_t1334_StaticFields*)InternalRemotingServices_t1334_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
			Object_t * L_26 = ___reflectionObject;
			SoapAttribute_t1317 * L_27 = V_1;
			NullCheck(L_25);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_25, L_26, L_27);
			SoapAttribute_t1317 * L_28 = V_1;
			V_4 = L_28;
			IL2CPP_LEAVE(0xDA, FINALLY_00d3);
		}

IL_00ce:
		{
			; // IL_00ce: leave IL_00da
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_00d3;
	}

FINALLY_00d3:
	{ // begin finally (depth: 1)
		Object_t * L_29 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(211)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(211)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00da:
	{
		SoapAttribute_t1317 * L_30 = V_4;
		return L_30;
	}
}
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ObjRef::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"
extern "C" void ObjRef__ctor_m8046 (ObjRef_t1331 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		ObjRef_UpdateChannelInfo_m8059(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* ObjRef_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t152_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelInfo_t1335_il2cpp_TypeInfo_var;
extern TypeInfo* IEnvoyInfo_t1337_il2cpp_TypeInfo_var;
extern TypeInfo* IConvertible_t1625_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t282_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t544_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t300_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1798_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral603;
extern Il2CppCodeGenString* _stringLiteral1895;
extern Il2CppCodeGenString* _stringLiteral1896;
extern Il2CppCodeGenString* _stringLiteral1897;
extern Il2CppCodeGenString* _stringLiteral1898;
extern Il2CppCodeGenString* _stringLiteral1899;
extern "C" void ObjRef__ctor_m8047 (ObjRef_t1331 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(927);
		Dictionary_2_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		IChannelInfo_t1335_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(950);
		IEnvoyInfo_t1337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(941);
		IConvertible_t1625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(687);
		Int32_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		Convert_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		NotSupportedException_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Dictionary_2__ctor_m1798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		_stringLiteral603 = il2cpp_codegen_string_literal_from_index(603);
		_stringLiteral1895 = il2cpp_codegen_string_literal_from_index(1895);
		_stringLiteral1896 = il2cpp_codegen_string_literal_from_index(1896);
		_stringLiteral1897 = il2cpp_codegen_string_literal_from_index(1897);
		_stringLiteral1898 = il2cpp_codegen_string_literal_from_index(1898);
		_stringLiteral1899 = il2cpp_codegen_string_literal_from_index(1899);
		s_Il2CppMethodIntialized = true;
	}
	SerializationInfoEnumerator_t1388 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t152 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1388 * L_1 = SerializationInfo_GetEnumerator_m8289(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 1;
		goto IL_016d;
	}

IL_0014:
	{
		SerializationInfoEnumerator_t1388 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfoEnumerator_get_Name_m8298(L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_0167;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1331_il2cpp_TypeInfo_var);
		Dictionary_2_t152 * L_5 = ((ObjRef_t1331_StaticFields*)ObjRef_t1331_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		if (L_5)
		{
			goto IL_008a;
		}
	}
	{
		Dictionary_2_t152 * L_6 = (Dictionary_2_t152 *)il2cpp_codegen_object_new (Dictionary_2_t152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1798(L_6, 6, /*hidden argument*/Dictionary_2__ctor_m1798_MethodInfo_var);
		V_5 = L_6;
		Dictionary_2_t152 * L_7 = V_5;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral603, 0);
		Dictionary_2_t152 * L_8 = V_5;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1895, 1);
		Dictionary_2_t152 * L_9 = V_5;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1896, 2);
		Dictionary_2_t152 * L_10 = V_5;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1897, 3);
		Dictionary_2_t152 * L_11 = V_5;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral1898, 4);
		Dictionary_2_t152 * L_12 = V_5;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, _stringLiteral1899, 5);
		Dictionary_2_t152 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1331_il2cpp_TypeInfo_var);
		((ObjRef_t1331_StaticFields*)ObjRef_t1331_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8 = L_13;
	}

IL_008a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1331_il2cpp_TypeInfo_var);
		Dictionary_2_t152 * L_14 = ((ObjRef_t1331_StaticFields*)ObjRef_t1331_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_14, L_15, (&V_6));
		if (!L_16)
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_17 = V_6;
		if (L_17 == 0)
		{
			goto IL_00c1;
		}
		if (L_17 == 1)
		{
			goto IL_00d7;
		}
		if (L_17 == 2)
		{
			goto IL_00ed;
		}
		if (L_17 == 3)
		{
			goto IL_0103;
		}
		if (L_17 == 4)
		{
			goto IL_0119;
		}
		if (L_17 == 5)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0167;
	}

IL_00c1:
	{
		SerializationInfoEnumerator_t1388 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = SerializationInfoEnumerator_get_Value_m8299(L_18, /*hidden argument*/NULL);
		__this->___uri_1 = ((String_t*)CastclassSealed(L_19, String_t_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_00d7:
	{
		SerializationInfoEnumerator_t1388 * L_20 = V_0;
		NullCheck(L_20);
		Object_t * L_21 = SerializationInfoEnumerator_get_Value_m8299(L_20, /*hidden argument*/NULL);
		__this->___typeInfo_2 = ((Object_t *)Castclass(L_21, IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_00ed:
	{
		SerializationInfoEnumerator_t1388 * L_22 = V_0;
		NullCheck(L_22);
		Object_t * L_23 = SerializationInfoEnumerator_get_Value_m8299(L_22, /*hidden argument*/NULL);
		__this->___channel_info_0 = ((Object_t *)Castclass(L_23, IChannelInfo_t1335_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_0103:
	{
		SerializationInfoEnumerator_t1388 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = SerializationInfoEnumerator_get_Value_m8299(L_24, /*hidden argument*/NULL);
		__this->___envoyInfo_3 = ((Object_t *)Castclass(L_25, IEnvoyInfo_t1337_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_0119:
	{
		SerializationInfoEnumerator_t1388 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = SerializationInfoEnumerator_get_Value_m8299(L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		Object_t * L_28 = V_3;
		if (!((String_t*)IsInstSealed(L_28, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_013d;
		}
	}
	{
		Object_t * L_29 = V_3;
		NullCheck(((Object_t *)Castclass(L_29, IConvertible_t1625_il2cpp_TypeInfo_var)));
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t1625_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IConvertible_t1625_il2cpp_TypeInfo_var)), (Object_t *)NULL);
		V_2 = L_30;
		goto IL_0144;
	}

IL_013d:
	{
		Object_t * L_31 = V_3;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_31, Int32_t282_il2cpp_TypeInfo_var))));
	}

IL_0144:
	{
		int32_t L_32 = V_2;
		if (L_32)
		{
			goto IL_014c;
		}
	}
	{
		V_1 = 0;
	}

IL_014c:
	{
		goto IL_016d;
	}

IL_0151:
	{
		SerializationInfoEnumerator_t1388 * L_33 = V_0;
		NullCheck(L_33);
		Object_t * L_34 = SerializationInfoEnumerator_get_Value_m8299(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t544_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m9275(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		__this->___flags_4 = L_35;
		goto IL_016d;
	}

IL_0167:
	{
		NotSupportedException_t300 * L_36 = (NotSupportedException_t300 *)il2cpp_codegen_object_new (NotSupportedException_t300_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1526(L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_36);
	}

IL_016d:
	{
		SerializationInfoEnumerator_t1388 * L_37 = V_0;
		NullCheck(L_37);
		bool L_38 = SerializationInfoEnumerator_MoveNext_m8300(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0014;
		}
	}
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_40 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1331_il2cpp_TypeInfo_var);
		int32_t L_41 = ((ObjRef_t1331_StaticFields*)ObjRef_t1331_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		__this->___flags_4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0190:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern TypeInfo* ObjRef_t1331_il2cpp_TypeInfo_var;
extern "C" void ObjRef__cctor_m8048 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(927);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ObjRef_t1331_StaticFields*)ObjRef_t1331_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6 = 1;
		((ObjRef_t1331_StaticFields*)ObjRef_t1331_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7 = 2;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern TypeInfo* ObjRef_t1331_il2cpp_TypeInfo_var;
extern "C" bool ObjRef_get_IsReferenceToWellKnow_m8049 (ObjRef_t1331 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(927);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1331_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t1331_StaticFields*)ObjRef_t1331_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C" Object_t * ObjRef_get_ChannelInfo_m8050 (ObjRef_t1331 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___channel_info_0);
		return L_0;
	}
}
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C" Object_t * ObjRef_get_EnvoyInfo_m8051 (ObjRef_t1331 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoyInfo_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C" void ObjRef_set_EnvoyInfo_m8052 (ObjRef_t1331 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___envoyInfo_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C" Object_t * ObjRef_get_TypeInfo_m8053 (ObjRef_t1331 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___typeInfo_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C" void ObjRef_set_TypeInfo_m8054 (ObjRef_t1331 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___typeInfo_2 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C" String_t* ObjRef_get_URI_m8055 (ObjRef_t1331 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void ObjRef_set_URI_m8056 (ObjRef_t1331 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* IRemotingTypeInfo_t1336_0_0_0_var;
extern const Il2CppType* IEnvoyInfo_t1337_0_0_0_var;
extern const Il2CppType* IChannelInfo_t1335_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral603;
extern Il2CppCodeGenString* _stringLiteral1895;
extern Il2CppCodeGenString* _stringLiteral1897;
extern Il2CppCodeGenString* _stringLiteral1896;
extern Il2CppCodeGenString* _stringLiteral1899;
extern "C" void ObjRef_GetObjectData_m8057 (ObjRef_t1331 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t1336_0_0_0_var = il2cpp_codegen_type_from_index(935);
		IEnvoyInfo_t1337_0_0_0_var = il2cpp_codegen_type_from_index(941);
		IChannelInfo_t1335_0_0_0_var = il2cpp_codegen_type_from_index(950);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		_stringLiteral603 = il2cpp_codegen_string_literal_from_index(603);
		_stringLiteral1895 = il2cpp_codegen_string_literal_from_index(1895);
		_stringLiteral1897 = il2cpp_codegen_string_literal_from_index(1897);
		_stringLiteral1896 = il2cpp_codegen_string_literal_from_index(1896);
		_stringLiteral1899 = il2cpp_codegen_string_literal_from_index(1899);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t534 * L_0 = ___info;
		Type_t * L_1 = Object_GetType_m1452(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m8288(L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_2 = ___info;
		String_t* L_3 = (__this->___uri_1);
		NullCheck(L_2);
		SerializationInfo_AddValue_m3932(L_2, _stringLiteral603, L_3, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_4 = ___info;
		Object_t * L_5 = (__this->___typeInfo_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IRemotingTypeInfo_t1336_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m4896(L_4, _stringLiteral1895, L_5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_7 = ___info;
		Object_t * L_8 = (__this->___envoyInfo_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IEnvoyInfo_t1337_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m4896(L_7, _stringLiteral1897, L_8, L_9, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_10 = ___info;
		Object_t * L_11 = (__this->___channel_info_0);
		Type_t * L_12 = Type_GetTypeFromHandle_m1656(NULL /*static, unused*/, LoadTypeToken(IChannelInfo_t1335_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m4896(L_10, _stringLiteral1896, L_11, L_12, /*hidden argument*/NULL);
		SerializationInfo_t534 * L_13 = ___info;
		int32_t L_14 = (__this->___flags_4);
		NullCheck(L_13);
		SerializationInfo_AddValue_m4898(L_13, _stringLiteral1899, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
extern TypeInfo* ObjRef_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1344_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRef_GetRealObject_m8058 (ObjRef_t1331 * __this, StreamingContext_t535  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(927);
		RemotingServices_t1344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(869);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1331_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t1331_StaticFields*)ObjRef_t1331_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_Unmarshal_m8117(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0019:
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"
extern TypeInfo* ChannelInfo_t1264_il2cpp_TypeInfo_var;
extern "C" void ObjRef_UpdateChannelInfo_m8059 (ObjRef_t1331 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelInfo_t1264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(951);
		s_Il2CppMethodIntialized = true;
	}
	{
		ChannelInfo_t1264 * L_0 = (ChannelInfo_t1264 *)il2cpp_codegen_object_new (ChannelInfo_t1264_il2cpp_TypeInfo_var);
		ChannelInfo__ctor_m7745(L_0, /*hidden argument*/NULL);
		__this->___channel_info_0 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern TypeInfo* IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ObjRef_get_ServerType_m8060 (ObjRef_t1331 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____serverType_5);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		Object_t * L_1 = (__this->___typeInfo_2);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1336_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m5756, L_2, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		__this->____serverType_5 = L_3;
	}

IL_0021:
	{
		Type_t * L_4 = (__this->____serverType_5);
		return L_4;
	}
}
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfiguration.h"
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandler.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntry.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntry.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntry.h"
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParserMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandlerMethodDeclarations.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"
// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration__cctor_m8061 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___applicationID_0 = (String_t*)NULL;
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = (String_t*)NULL;
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = (String_t*)NULL;
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3 = 0;
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 0;
		Hashtable_t672 * L_0 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_0, /*hidden argument*/NULL);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6 = L_0;
		Hashtable_t672 * L_1 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_1, /*hidden argument*/NULL);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7 = L_1;
		Hashtable_t672 * L_2 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_2, /*hidden argument*/NULL);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_8 = L_2;
		Hashtable_t672 * L_3 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_3, /*hidden argument*/NULL);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_9 = L_3;
		Hashtable_t672 * L_4 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_4, /*hidden argument*/NULL);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10 = L_4;
		Hashtable_t672 * L_5 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_5, /*hidden argument*/NULL);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11 = L_5;
		Hashtable_t672 * L_6 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_6, /*hidden argument*/NULL);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12 = L_6;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m8062 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___applicationName_1;
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_set_ApplicationName_m8063 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ProcessId_m8064 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = AppDomain_GetProcessGuid_m9118(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		String_t* L_2 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParserMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandlerMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* SmallXmlParser_t1056_il2cpp_TypeInfo_var;
extern TypeInfo* StreamReader_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigHandler_t1339_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_LoadDefaultDelayedChannels_m8065 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		SmallXmlParser_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(755);
		StreamReader_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(787);
		ConfigHandler_t1339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(952);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t672 * V_0 = {0};
	SmallXmlParser_t1056 * V_1 = {0};
	TextReader_t1059 * V_2 = {0};
	ConfigHandler_t1339 * V_3 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t672 * L_1 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			bool L_2 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4;
			if (L_2)
			{
				goto IL_0020;
			}
		}

IL_0016:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			bool L_3 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3;
			if (!L_3)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}

IL_0025:
		{
			SmallXmlParser_t1056 * L_4 = (SmallXmlParser_t1056 *)il2cpp_codegen_object_new (SmallXmlParser_t1056_il2cpp_TypeInfo_var);
			SmallXmlParser__ctor_m6313(L_4, /*hidden argument*/NULL);
			V_1 = L_4;
			String_t* L_5 = Environment_GetMachineConfigPath_m9520(NULL /*static, unused*/, /*hidden argument*/NULL);
			StreamReader_t1136 * L_6 = (StreamReader_t1136 *)il2cpp_codegen_object_new (StreamReader_t1136_il2cpp_TypeInfo_var);
			StreamReader__ctor_m7045(L_6, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
		}

IL_0036:
		try
		{ // begin try (depth: 2)
			ConfigHandler_t1339 * L_7 = (ConfigHandler_t1339 *)il2cpp_codegen_object_new (ConfigHandler_t1339_il2cpp_TypeInfo_var);
			ConfigHandler__ctor_m8077(L_7, 1, /*hidden argument*/NULL);
			V_3 = L_7;
			SmallXmlParser_t1056 * L_8 = V_1;
			TextReader_t1059 * L_9 = V_2;
			ConfigHandler_t1339 * L_10 = V_3;
			NullCheck(L_8);
			SmallXmlParser_Parse_m6326(L_8, L_9, L_10, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x57, FINALLY_004a);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t287 *)e.ex;
			goto FINALLY_004a;
		}

FINALLY_004a:
		{ // begin finally (depth: 2)
			{
				TextReader_t1059 * L_11 = V_2;
				if (!L_11)
				{
					goto IL_0056;
				}
			}

IL_0050:
			{
				TextReader_t1059 * L_12 = V_2;
				NullCheck(L_12);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_12);
			}

IL_0056:
			{
				IL2CPP_END_FINALLY(74)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(74)
		{
			IL2CPP_JUMP_TBL(0x57, IL_0057)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 1;
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Hashtable_t672 * L_13 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0069:
	{
		return;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var;
extern "C" ActivatedClientTypeEntry_t1327 * RemotingConfiguration_IsRemotelyActivatedClientType_m8066 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t672 * V_0 = {0};
	ActivatedClientTypeEntry_t1327 * V_1 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t672 * L_1 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_2 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			Type_t * L_3 = ___svrType;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
			V_1 = ((ActivatedClientTypeEntry_t1327 *)IsInstClass(L_4, ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x2E, FINALLY_0027);
		}

IL_0022:
		{
			; // IL_0022: leave IL_002e
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		Hashtable_t672 * L_5 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(39)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_002e:
	{
		ActivatedClientTypeEntry_t1327 * L_6 = V_1;
		return L_6;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1900;
extern Il2CppCodeGenString* _stringLiteral1901;
extern "C" void RemotingConfiguration_RegisterActivatedClientType_m8067 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1327 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1900 = il2cpp_codegen_string_literal_from_index(1900);
		_stringLiteral1901 = il2cpp_codegen_string_literal_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t672 * V_0 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t672 * L_1 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_2 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			ActivatedClientTypeEntry_t1327 * L_3 = ___entry;
			NullCheck(L_3);
			Type_t * L_4 = ActivatedClientTypeEntry_get_ObjectType_m8024(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_6 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			ActivatedClientTypeEntry_t1327 * L_7 = ___entry;
			NullCheck(L_7);
			Type_t * L_8 = ActivatedClientTypeEntry_get_ObjectType_m8024(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_6, L_8);
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_0036:
		{
			ActivatedClientTypeEntry_t1327 * L_10 = ___entry;
			NullCheck(L_10);
			Type_t * L_11 = ActivatedClientTypeEntry_get_ObjectType_m8024(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1900, L_12, _stringLiteral1901, /*hidden argument*/NULL);
			RemotingException_t1343 * L_14 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
			RemotingException__ctor_m8110(L_14, L_13, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
		}

IL_0056:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_15 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			ActivatedClientTypeEntry_t1327 * L_16 = ___entry;
			NullCheck(L_16);
			Type_t * L_17 = ActivatedClientTypeEntry_get_ObjectType_m8024(L_16, /*hidden argument*/NULL);
			ActivatedClientTypeEntry_t1327 * L_18 = ___entry;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_17, L_18);
			ActivatedClientTypeEntry_t1327 * L_19 = ___entry;
			NullCheck(L_19);
			Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m8024(L_19, /*hidden argument*/NULL);
			ActivationServices_EnableProxyActivation_m7736(NULL /*static, unused*/, L_20, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7F, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		Hashtable_t672 * L_21 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_007f:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntry.h"
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntryMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterActivatedServiceType_m8068 (Object_t * __this /* static, unused */, ActivatedServiceTypeEntry_t1329 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t672 * V_0 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t672 * L_1 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_2 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_9;
		ActivatedServiceTypeEntry_t1329 * L_3 = ___entry;
		NullCheck(L_3);
		Type_t * L_4 = ActivatedServiceTypeEntry_get_ObjectType_m8027(L_3, /*hidden argument*/NULL);
		ActivatedServiceTypeEntry_t1329 * L_5 = ___entry;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_4, L_5);
		IL2CPP_LEAVE(0x29, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		Hashtable_t672 * L_6 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x29, IL_0029)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntry.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntryMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1900;
extern Il2CppCodeGenString* _stringLiteral1901;
extern "C" void RemotingConfiguration_RegisterWellKnownClientType_m8069 (Object_t * __this /* static, unused */, WellKnownClientTypeEntry_t1352 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1900 = il2cpp_codegen_string_literal_from_index(1900);
		_stringLiteral1901 = il2cpp_codegen_string_literal_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t672 * V_0 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t672 * L_1 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_2 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			WellKnownClientTypeEntry_t1352 * L_3 = ___entry;
			NullCheck(L_3);
			Type_t * L_4 = WellKnownClientTypeEntry_get_ObjectType_m8169(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_6 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			WellKnownClientTypeEntry_t1352 * L_7 = ___entry;
			NullCheck(L_7);
			Type_t * L_8 = WellKnownClientTypeEntry_get_ObjectType_m8169(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_6, L_8);
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_0036:
		{
			WellKnownClientTypeEntry_t1352 * L_10 = ___entry;
			NullCheck(L_10);
			Type_t * L_11 = WellKnownClientTypeEntry_get_ObjectType_m8169(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1900, L_12, _stringLiteral1901, /*hidden argument*/NULL);
			RemotingException_t1343 * L_14 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
			RemotingException__ctor_m8110(L_14, L_13, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
		}

IL_0056:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_15 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			WellKnownClientTypeEntry_t1352 * L_16 = ___entry;
			NullCheck(L_16);
			Type_t * L_17 = WellKnownClientTypeEntry_get_ObjectType_m8169(L_16, /*hidden argument*/NULL);
			WellKnownClientTypeEntry_t1352 * L_18 = ___entry;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_17, L_18);
			WellKnownClientTypeEntry_t1352 * L_19 = ___entry;
			NullCheck(L_19);
			Type_t * L_20 = WellKnownClientTypeEntry_get_ObjectType_m8169(L_19, /*hidden argument*/NULL);
			ActivationServices_EnableProxyActivation_m7736(NULL /*static, unused*/, L_20, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7F, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		Hashtable_t672 * L_21 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_007f:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntry.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1344_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterWellKnownServiceType_m8070 (Object_t * __this /* static, unused */, WellKnownServiceTypeEntry_t1354 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		RemotingServices_t1344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(869);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t672 * V_0 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t672 * L_1 = V_0;
		Monitor_Enter_m3964(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_2 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_8;
		WellKnownServiceTypeEntry_t1354 * L_3 = ___entry;
		NullCheck(L_3);
		String_t* L_4 = WellKnownServiceTypeEntry_get_ObjectUri_m8175(L_3, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1354 * L_5 = ___entry;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_4, L_5);
		WellKnownServiceTypeEntry_t1354 * L_6 = ___entry;
		NullCheck(L_6);
		Type_t * L_7 = WellKnownServiceTypeEntry_get_ObjectType_m8174(L_6, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1354 * L_8 = ___entry;
		NullCheck(L_8);
		String_t* L_9 = WellKnownServiceTypeEntry_get_ObjectUri_m8175(L_8, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1354 * L_10 = ___entry;
		NullCheck(L_10);
		int32_t L_11 = WellKnownServiceTypeEntry_get_Mode_m8173(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1344_il2cpp_TypeInfo_var);
		RemotingServices_CreateWellKnownServerIdentity_m8130(NULL /*static, unused*/, L_7, L_9, L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x41, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Hashtable_t672 * L_12 = V_0;
		Monitor_Exit_m3966(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0041:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterChannelTemplate_m8071 (Object_t * __this /* static, unused */, ChannelData_t1340 * ___channel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		ChannelData_t1340 * L_1 = ___channel;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ChannelData_t1340 * L_3 = ___channel;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderData.h"
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterClientProviderTemplate_m8072 (Object_t * __this /* static, unused */, ProviderData_t1341 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11;
		ProviderData_t1341 * L_1 = ___prov;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ProviderData_t1341 * L_3 = ___prov;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterServerProviderTemplate_m8073 (Object_t * __this /* static, unused */, ProviderData_t1341 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		Hashtable_t672 * L_0 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12;
		ProviderData_t1341 * L_1 = ___prov;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ProviderData_t1341 * L_3 = ___prov;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelData_t1340_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1341_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1265_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1844;
extern Il2CppCodeGenString* _stringLiteral1902;
extern Il2CppCodeGenString* _stringLiteral1841;
extern Il2CppCodeGenString* _stringLiteral1903;
extern "C" void RemotingConfiguration_RegisterChannels_m8074 (Object_t * __this /* static, unused */, ArrayList_t607 * ___channels, bool ___onlyDelayed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		ChannelData_t1340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(954);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		ProviderData_t1341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(883);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		ChannelServices_t1265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		_stringLiteral1844 = il2cpp_codegen_string_literal_from_index(1844);
		_stringLiteral1902 = il2cpp_codegen_string_literal_from_index(1902);
		_stringLiteral1841 = il2cpp_codegen_string_literal_from_index(1841);
		_stringLiteral1903 = il2cpp_codegen_string_literal_from_index(1903);
		s_Il2CppMethodIntialized = true;
	}
	ChannelData_t1340 * V_0 = {0};
	Object_t * V_1 = {0};
	ChannelData_t1340 * V_2 = {0};
	ProviderData_t1341 * V_3 = {0};
	Object_t * V_4 = {0};
	ProviderData_t1341 * V_5 = {0};
	ProviderData_t1341 * V_6 = {0};
	Object_t * V_7 = {0};
	ProviderData_t1341 * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t607 * L_0 = ___channels;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d4;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_2);
			V_0 = ((ChannelData_t1340 *)CastclassClass(L_3, ChannelData_t1340_il2cpp_TypeInfo_var));
			bool L_4 = ___onlyDelayed;
			if (!L_4)
			{
				goto IL_0038;
			}
		}

IL_001e:
		{
			ChannelData_t1340 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (L_5->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_7 = String_op_Inequality_m1779(NULL /*static, unused*/, L_6, _stringLiteral1844, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0038;
			}
		}

IL_0033:
		{
			goto IL_01d4;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			bool L_8 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4;
			if (!L_8)
			{
				goto IL_005c;
			}
		}

IL_0042:
		{
			ChannelData_t1340 * L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = (L_9->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_11 = String_op_Equality_m1759(NULL /*static, unused*/, L_10, _stringLiteral1844, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_005c;
			}
		}

IL_0057:
		{
			goto IL_01d4;
		}

IL_005c:
		{
			ChannelData_t1340 * L_12 = V_0;
			NullCheck(L_12);
			String_t* L_13 = (L_12->___Ref_0);
			if (!L_13)
			{
				goto IL_00a5;
			}
		}

IL_0067:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			Hashtable_t672 * L_14 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
			ChannelData_t1340 * L_15 = V_0;
			NullCheck(L_15);
			String_t* L_16 = (L_15->___Ref_0);
			NullCheck(L_14);
			Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, L_16);
			V_2 = ((ChannelData_t1340 *)CastclassClass(L_17, ChannelData_t1340_il2cpp_TypeInfo_var));
			ChannelData_t1340 * L_18 = V_2;
			if (L_18)
			{
				goto IL_009e;
			}
		}

IL_0083:
		{
			ChannelData_t1340 * L_19 = V_0;
			NullCheck(L_19);
			String_t* L_20 = (L_19->___Ref_0);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1902, L_20, _stringLiteral1841, /*hidden argument*/NULL);
			RemotingException_t1343 * L_22 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
			RemotingException__ctor_m8110(L_22, L_21, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_22);
		}

IL_009e:
		{
			ChannelData_t1340 * L_23 = V_0;
			ChannelData_t1340 * L_24 = V_2;
			NullCheck(L_23);
			ChannelData_CopyFrom_m8105(L_23, L_24, /*hidden argument*/NULL);
		}

IL_00a5:
		{
			ChannelData_t1340 * L_25 = V_0;
			NullCheck(L_25);
			ArrayList_t607 * L_26 = ChannelData_get_ServerProviders_m8102(L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			Object_t * L_27 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_26);
			V_4 = L_27;
		}

IL_00b2:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0110;
			}

IL_00b7:
			{
				Object_t * L_28 = V_4;
				NullCheck(L_28);
				Object_t * L_29 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_28);
				V_3 = ((ProviderData_t1341 *)CastclassClass(L_29, ProviderData_t1341_il2cpp_TypeInfo_var));
				ProviderData_t1341 * L_30 = V_3;
				NullCheck(L_30);
				String_t* L_31 = (L_30->___Ref_0);
				if (!L_31)
				{
					goto IL_0110;
				}
			}

IL_00cf:
			{
				IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
				Hashtable_t672 * L_32 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12;
				ProviderData_t1341 * L_33 = V_3;
				NullCheck(L_33);
				String_t* L_34 = (L_33->___Ref_0);
				NullCheck(L_32);
				Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_32, L_34);
				V_5 = ((ProviderData_t1341 *)CastclassClass(L_35, ProviderData_t1341_il2cpp_TypeInfo_var));
				ProviderData_t1341 * L_36 = V_5;
				if (L_36)
				{
					goto IL_0108;
				}
			}

IL_00ed:
			{
				ProviderData_t1341 * L_37 = V_3;
				NullCheck(L_37);
				String_t* L_38 = (L_37->___Ref_0);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_39 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1903, L_38, _stringLiteral1841, /*hidden argument*/NULL);
				RemotingException_t1343 * L_40 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
				RemotingException__ctor_m8110(L_40, L_39, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_40);
			}

IL_0108:
			{
				ProviderData_t1341 * L_41 = V_3;
				ProviderData_t1341 * L_42 = V_5;
				NullCheck(L_41);
				ProviderData_CopyFrom_m8107(L_41, L_42, /*hidden argument*/NULL);
			}

IL_0110:
			{
				Object_t * L_43 = V_4;
				NullCheck(L_43);
				bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00b7;
				}
			}

IL_011c:
			{
				IL2CPP_LEAVE(0x137, FINALLY_0121);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t287 *)e.ex;
			goto FINALLY_0121;
		}

FINALLY_0121:
		{ // begin finally (depth: 2)
			{
				Object_t * L_45 = V_4;
				V_9 = ((Object_t *)IsInst(L_45, IDisposable_t289_il2cpp_TypeInfo_var));
				Object_t * L_46 = V_9;
				if (L_46)
				{
					goto IL_012f;
				}
			}

IL_012e:
			{
				IL2CPP_END_FINALLY(289)
			}

IL_012f:
			{
				Object_t * L_47 = V_9;
				NullCheck(L_47);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_47);
				IL2CPP_END_FINALLY(289)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(289)
		{
			IL2CPP_JUMP_TBL(0x137, IL_0137)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
		}

IL_0137:
		{
			ChannelData_t1340 * L_48 = V_0;
			NullCheck(L_48);
			ArrayList_t607 * L_49 = ChannelData_get_ClientProviders_m8103(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			Object_t * L_50 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_49);
			V_7 = L_50;
		}

IL_0144:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01a7;
			}

IL_0149:
			{
				Object_t * L_51 = V_7;
				NullCheck(L_51);
				Object_t * L_52 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_51);
				V_6 = ((ProviderData_t1341 *)CastclassClass(L_52, ProviderData_t1341_il2cpp_TypeInfo_var));
				ProviderData_t1341 * L_53 = V_6;
				NullCheck(L_53);
				String_t* L_54 = (L_53->___Ref_0);
				if (!L_54)
				{
					goto IL_01a7;
				}
			}

IL_0163:
			{
				IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
				Hashtable_t672 * L_55 = ((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11;
				ProviderData_t1341 * L_56 = V_6;
				NullCheck(L_56);
				String_t* L_57 = (L_56->___Ref_0);
				NullCheck(L_55);
				Object_t * L_58 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_55, L_57);
				V_8 = ((ProviderData_t1341 *)CastclassClass(L_58, ProviderData_t1341_il2cpp_TypeInfo_var));
				ProviderData_t1341 * L_59 = V_8;
				if (L_59)
				{
					goto IL_019e;
				}
			}

IL_0182:
			{
				ProviderData_t1341 * L_60 = V_6;
				NullCheck(L_60);
				String_t* L_61 = (L_60->___Ref_0);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_62 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1903, L_61, _stringLiteral1841, /*hidden argument*/NULL);
				RemotingException_t1343 * L_63 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
				RemotingException__ctor_m8110(L_63, L_62, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_63);
			}

IL_019e:
			{
				ProviderData_t1341 * L_64 = V_6;
				ProviderData_t1341 * L_65 = V_8;
				NullCheck(L_64);
				ProviderData_CopyFrom_m8107(L_64, L_65, /*hidden argument*/NULL);
			}

IL_01a7:
			{
				Object_t * L_66 = V_7;
				NullCheck(L_66);
				bool L_67 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_66);
				if (L_67)
				{
					goto IL_0149;
				}
			}

IL_01b3:
			{
				IL2CPP_LEAVE(0x1CE, FINALLY_01b8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t287 *)e.ex;
			goto FINALLY_01b8;
		}

FINALLY_01b8:
		{ // begin finally (depth: 2)
			{
				Object_t * L_68 = V_7;
				V_10 = ((Object_t *)IsInst(L_68, IDisposable_t289_il2cpp_TypeInfo_var));
				Object_t * L_69 = V_10;
				if (L_69)
				{
					goto IL_01c6;
				}
			}

IL_01c5:
			{
				IL2CPP_END_FINALLY(440)
			}

IL_01c6:
			{
				Object_t * L_70 = V_10;
				NullCheck(L_70);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_70);
				IL2CPP_END_FINALLY(440)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(440)
		{
			IL2CPP_JUMP_TBL(0x1CE, IL_01ce)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
		}

IL_01ce:
		{
			ChannelData_t1340 * L_71 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1265_il2cpp_TypeInfo_var);
			ChannelServices_RegisterChannelConfig_m7752(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		}

IL_01d4:
		{
			Object_t * L_72 = V_1;
			NullCheck(L_72);
			bool L_73 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_72);
			if (L_73)
			{
				goto IL_000c;
			}
		}

IL_01df:
		{
			IL2CPP_LEAVE(0x1F9, FINALLY_01e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_01e4;
	}

FINALLY_01e4:
	{ // begin finally (depth: 1)
		{
			Object_t * L_74 = V_1;
			V_11 = ((Object_t *)IsInst(L_74, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_75 = V_11;
			if (L_75)
			{
				goto IL_01f1;
			}
		}

IL_01f0:
		{
			IL2CPP_END_FINALLY(484)
		}

IL_01f1:
		{
			Object_t * L_76 = V_11;
			NullCheck(L_76);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_76);
			IL2CPP_END_FINALLY(484)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(484)
	{
		IL2CPP_JUMP_TBL(0x1F9, IL_01f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_01f9:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* TypeEntry_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedServiceTypeEntry_t1329_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownClientTypeEntry_t1352_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownServiceTypeEntry_t1354_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterTypes_m8075 (Object_t * __this /* static, unused */, ArrayList_t607 * ___types, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		TypeEntry_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(955);
		ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		ActivatedServiceTypeEntry_t1329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(956);
		WellKnownClientTypeEntry_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(957);
		WellKnownServiceTypeEntry_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(958);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	TypeEntry_t1328 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t607 * L_0 = ___types;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_2);
			V_0 = ((TypeEntry_t1328 *)CastclassClass(L_3, TypeEntry_t1328_il2cpp_TypeInfo_var));
			TypeEntry_t1328 * L_4 = V_0;
			if (!((ActivatedClientTypeEntry_t1327 *)IsInstClass(L_4, ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var)))
			{
				goto IL_0033;
			}
		}

IL_0023:
		{
			TypeEntry_t1328 * L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterActivatedClientType_m8067(NULL /*static, unused*/, ((ActivatedClientTypeEntry_t1327 *)CastclassClass(L_5, ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_0033:
		{
			TypeEntry_t1328 * L_6 = V_0;
			if (!((ActivatedServiceTypeEntry_t1329 *)IsInstClass(L_6, ActivatedServiceTypeEntry_t1329_il2cpp_TypeInfo_var)))
			{
				goto IL_004e;
			}
		}

IL_003e:
		{
			TypeEntry_t1328 * L_7 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterActivatedServiceType_m8068(NULL /*static, unused*/, ((ActivatedServiceTypeEntry_t1329 *)CastclassClass(L_7, ActivatedServiceTypeEntry_t1329_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_004e:
		{
			TypeEntry_t1328 * L_8 = V_0;
			if (!((WellKnownClientTypeEntry_t1352 *)IsInstClass(L_8, WellKnownClientTypeEntry_t1352_il2cpp_TypeInfo_var)))
			{
				goto IL_0069;
			}
		}

IL_0059:
		{
			TypeEntry_t1328 * L_9 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterWellKnownClientType_m8069(NULL /*static, unused*/, ((WellKnownClientTypeEntry_t1352 *)CastclassClass(L_9, WellKnownClientTypeEntry_t1352_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_0069:
		{
			TypeEntry_t1328 * L_10 = V_0;
			if (!((WellKnownServiceTypeEntry_t1354 *)IsInstClass(L_10, WellKnownServiceTypeEntry_t1354_il2cpp_TypeInfo_var)))
			{
				goto IL_007f;
			}
		}

IL_0074:
		{
			TypeEntry_t1328 * L_11 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterWellKnownServiceType_m8070(NULL /*static, unused*/, ((WellKnownServiceTypeEntry_t1354 *)CastclassClass(L_11, WellKnownServiceTypeEntry_t1354_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_007f:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_000c;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_2 = ((Object_t *)IsInst(L_14, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_2;
			if (L_15)
			{
				goto IL_009a;
			}
		}

IL_0099:
		{
			IL2CPP_END_FINALLY(143)
		}

IL_009a:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(143)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1904;
extern Il2CppCodeGenString* _stringLiteral1905;
extern Il2CppCodeGenString* _stringLiteral1906;
extern Il2CppCodeGenString* _stringLiteral1907;
extern Il2CppCodeGenString* _stringLiteral1908;
extern "C" void RemotingConfiguration_SetCustomErrorsMode_m8076 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		_stringLiteral1904 = il2cpp_codegen_string_literal_from_index(1904);
		_stringLiteral1905 = il2cpp_codegen_string_literal_from_index(1905);
		_stringLiteral1906 = il2cpp_codegen_string_literal_from_index(1906);
		_stringLiteral1907 = il2cpp_codegen_string_literal_from_index(1907);
		_stringLiteral1908 = il2cpp_codegen_string_literal_from_index(1908);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___mode;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RemotingException_t1343 * L_1 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_1, _stringLiteral1904, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___mode;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m4960(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m1779(NULL /*static, unused*/, L_4, _stringLiteral1905, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m1779(NULL /*static, unused*/, L_6, _stringLiteral1906, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m1779(NULL /*static, unused*/, L_8, _stringLiteral1907, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_10 = ___mode;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m1631(NULL /*static, unused*/, _stringLiteral1908, L_10, /*hidden argument*/NULL);
		RemotingException_t1343 * L_12 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0059:
	{
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1338_StaticFields*)RemotingConfiguration_t1338_il2cpp_TypeInfo_var->static_fields)->____errorMode_5 = L_13;
		return;
	}
}
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfo.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterData.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfoMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterDataMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler__ctor_m8077 (ConfigHandler_t1339 * __this, bool ___onlyDelayedChannels, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_0, /*hidden argument*/NULL);
		__this->___typeEntries_0 = L_0;
		ArrayList_t607 * L_1 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_1, /*hidden argument*/NULL);
		__this->___channelInstances_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___currentXmlPath_6 = L_2;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		bool L_3 = ___onlyDelayedChannels;
		__this->___onlyDelayedChannels_7 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandlerMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1909;
extern Il2CppCodeGenString* _stringLiteral1910;
extern "C" void ConfigHandler_ValidatePath_m8078 (ConfigHandler_t1339 * __this, String_t* ___element, StringU5BU5D_t484* ___paths, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1909 = il2cpp_codegen_string_literal_from_index(1909);
		_stringLiteral1910 = il2cpp_codegen_string_literal_from_index(1910);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t484* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringU5BU5D_t484* L_0 = ___paths;
		V_1 = L_0;
		V_2 = 0;
		goto IL_001e;
	}

IL_0009:
	{
		StringU5BU5D_t484* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*)));
		String_t* L_4 = V_0;
		bool L_5 = ConfigHandler_CheckPath_m8079(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_7 = V_2;
		StringU5BU5D_t484* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_9 = ___element;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1909, L_9, _stringLiteral1910, /*hidden argument*/NULL);
		RemotingException_t1343 * L_11 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}
}
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern TypeInfo* CultureInfo_t551_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral882;
extern "C" bool ConfigHandler_CheckPath_m8079 (ConfigHandler_t1339 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral882 = il2cpp_codegen_string_literal_from_index(882);
		s_Il2CppMethodIntialized = true;
	}
	CompareInfo_t764 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t551_il2cpp_TypeInfo_var);
		CultureInfo_t551 * L_0 = CultureInfo_get_InvariantCulture_m3888(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CompareInfo_t764 * L_1 = (CompareInfo_t764 *)VirtFuncInvoker0< CompareInfo_t764 * >::Invoke(9 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_0);
		V_0 = L_1;
		CompareInfo_t764 * L_2 = V_0;
		String_t* L_3 = ___path;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker3< bool, String_t*, String_t*, int32_t >::Invoke(11 /* System.Boolean System.Globalization.CompareInfo::IsPrefix(System.String,System.String,System.Globalization.CompareOptions) */, L_2, L_3, _stringLiteral882, ((int32_t)1073741824));
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___path;
		String_t* L_6 = (__this->___currentXmlPath_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1759(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002e:
	{
		CompareInfo_t764 * L_8 = V_0;
		String_t* L_9 = (__this->___currentXmlPath_6);
		String_t* L_10 = ___path;
		NullCheck(L_8);
		bool L_11 = (bool)VirtFuncInvoker3< bool, String_t*, String_t*, int32_t >::Invoke(12 /* System.Boolean System.Globalization.CompareInfo::IsSuffix(System.String,System.String,System.Globalization.CompareOptions) */, L_8, L_9, L_10, ((int32_t)1073741824));
		return L_11;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
extern "C" void ConfigHandler_OnStartParsing_m8080 (ConfigHandler_t1339 * __this, SmallXmlParser_t1056 * ___parser, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C" void ConfigHandler_OnProcessingInstruction_m8081 (ConfigHandler_t1339 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C" void ConfigHandler_OnIgnorableWhitespace_m8082 (ConfigHandler_t1339 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t287_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1911;
extern Il2CppCodeGenString* _stringLiteral882;
extern Il2CppCodeGenString* _stringLiteral1912;
extern Il2CppCodeGenString* _stringLiteral87;
extern "C" void ConfigHandler_OnStartElement_m8083 (ConfigHandler_t1339 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Exception_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1911 = il2cpp_codegen_string_literal_from_index(1911);
		_stringLiteral882 = il2cpp_codegen_string_literal_from_index(882);
		_stringLiteral1912 = il2cpp_codegen_string_literal_from_index(1912);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t287 * V_0 = {0};
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
			String_t* L_0 = (__this->___currentXmlPath_6);
			NullCheck(L_0);
			bool L_1 = String_StartsWith_m2899(L_0, _stringLiteral1911, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001d;
			}
		}

IL_0015:
		{
			String_t* L_2 = ___name;
			Object_t * L_3 = ___attrs;
			ConfigHandler_ParseElement_m8084(__this, L_2, L_3, /*hidden argument*/NULL);
		}

IL_001d:
		{
			String_t* L_4 = (__this->___currentXmlPath_6);
			String_t* L_5 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m1746(NULL /*static, unused*/, L_4, _stringLiteral882, L_5, /*hidden argument*/NULL);
			__this->___currentXmlPath_6 = L_6;
			goto IL_005c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t287 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t287_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t287 *)__exception_local);
		String_t* L_7 = ___name;
		Exception_t287 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2902(NULL /*static, unused*/, _stringLiteral1912, L_7, _stringLiteral87, L_9, /*hidden argument*/NULL);
		Exception_t287 * L_11 = V_0;
		RemotingException_t1343 * L_12 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8112(L_12, L_10, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
		goto IL_005c;
	} // end catch (depth: 1)

IL_005c:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* ConfigHandler_t1339_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t152_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t484_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1606_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1798_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1913;
extern Il2CppCodeGenString* _stringLiteral1914;
extern Il2CppCodeGenString* _stringLiteral1915;
extern Il2CppCodeGenString* _stringLiteral1916;
extern Il2CppCodeGenString* _stringLiteral1917;
extern Il2CppCodeGenString* _stringLiteral1918;
extern Il2CppCodeGenString* _stringLiteral1919;
extern Il2CppCodeGenString* _stringLiteral1920;
extern Il2CppCodeGenString* _stringLiteral1921;
extern Il2CppCodeGenString* _stringLiteral1922;
extern Il2CppCodeGenString* _stringLiteral1923;
extern Il2CppCodeGenString* _stringLiteral1924;
extern Il2CppCodeGenString* _stringLiteral1925;
extern Il2CppCodeGenString* _stringLiteral1926;
extern Il2CppCodeGenString* _stringLiteral1927;
extern Il2CppCodeGenString* _stringLiteral1928;
extern Il2CppCodeGenString* _stringLiteral1929;
extern Il2CppCodeGenString* _stringLiteral1930;
extern Il2CppCodeGenString* _stringLiteral1931;
extern Il2CppCodeGenString* _stringLiteral1932;
extern Il2CppCodeGenString* _stringLiteral1933;
extern Il2CppCodeGenString* _stringLiteral1934;
extern Il2CppCodeGenString* _stringLiteral1935;
extern Il2CppCodeGenString* _stringLiteral1936;
extern Il2CppCodeGenString* _stringLiteral1937;
extern Il2CppCodeGenString* _stringLiteral1938;
extern Il2CppCodeGenString* _stringLiteral1939;
extern Il2CppCodeGenString* _stringLiteral1409;
extern Il2CppCodeGenString* _stringLiteral1940;
extern Il2CppCodeGenString* _stringLiteral1941;
extern "C" void ConfigHandler_ParseElement_m8084 (ConfigHandler_t1339 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigHandler_t1339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(952);
		Dictionary_2_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		StringU5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		IAttrList_t1606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		Dictionary_2__ctor_m1798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		_stringLiteral1913 = il2cpp_codegen_string_literal_from_index(1913);
		_stringLiteral1914 = il2cpp_codegen_string_literal_from_index(1914);
		_stringLiteral1915 = il2cpp_codegen_string_literal_from_index(1915);
		_stringLiteral1916 = il2cpp_codegen_string_literal_from_index(1916);
		_stringLiteral1917 = il2cpp_codegen_string_literal_from_index(1917);
		_stringLiteral1918 = il2cpp_codegen_string_literal_from_index(1918);
		_stringLiteral1919 = il2cpp_codegen_string_literal_from_index(1919);
		_stringLiteral1920 = il2cpp_codegen_string_literal_from_index(1920);
		_stringLiteral1921 = il2cpp_codegen_string_literal_from_index(1921);
		_stringLiteral1922 = il2cpp_codegen_string_literal_from_index(1922);
		_stringLiteral1923 = il2cpp_codegen_string_literal_from_index(1923);
		_stringLiteral1924 = il2cpp_codegen_string_literal_from_index(1924);
		_stringLiteral1925 = il2cpp_codegen_string_literal_from_index(1925);
		_stringLiteral1926 = il2cpp_codegen_string_literal_from_index(1926);
		_stringLiteral1927 = il2cpp_codegen_string_literal_from_index(1927);
		_stringLiteral1928 = il2cpp_codegen_string_literal_from_index(1928);
		_stringLiteral1929 = il2cpp_codegen_string_literal_from_index(1929);
		_stringLiteral1930 = il2cpp_codegen_string_literal_from_index(1930);
		_stringLiteral1931 = il2cpp_codegen_string_literal_from_index(1931);
		_stringLiteral1932 = il2cpp_codegen_string_literal_from_index(1932);
		_stringLiteral1933 = il2cpp_codegen_string_literal_from_index(1933);
		_stringLiteral1934 = il2cpp_codegen_string_literal_from_index(1934);
		_stringLiteral1935 = il2cpp_codegen_string_literal_from_index(1935);
		_stringLiteral1936 = il2cpp_codegen_string_literal_from_index(1936);
		_stringLiteral1937 = il2cpp_codegen_string_literal_from_index(1937);
		_stringLiteral1938 = il2cpp_codegen_string_literal_from_index(1938);
		_stringLiteral1939 = il2cpp_codegen_string_literal_from_index(1939);
		_stringLiteral1409 = il2cpp_codegen_string_literal_from_index(1409);
		_stringLiteral1940 = il2cpp_codegen_string_literal_from_index(1940);
		_stringLiteral1941 = il2cpp_codegen_string_literal_from_index(1941);
		s_Il2CppMethodIntialized = true;
	}
	ProviderData_t1341 * V_0 = {0};
	String_t* V_1 = {0};
	Dictionary_2_t152 * V_2 = {0};
	int32_t V_3 = 0;
	{
		Stack_t887 * L_0 = (__this->___currentProviderData_3);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___name;
		Object_t * L_2 = ___attrs;
		ConfigHandler_ReadCustomProviderData_m8086(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		String_t* L_3 = ___name;
		V_1 = L_3;
		String_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0512;
		}
	}
	{
		Dictionary_2_t152 * L_5 = ((ConfigHandler_t1339_StaticFields*)ConfigHandler_t1339_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8;
		if (L_5)
		{
			goto IL_0121;
		}
	}
	{
		Dictionary_2_t152 * L_6 = (Dictionary_2_t152 *)il2cpp_codegen_object_new (Dictionary_2_t152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1798(L_6, ((int32_t)19), /*hidden argument*/Dictionary_2__ctor_m1798_MethodInfo_var);
		V_2 = L_6;
		Dictionary_2_t152 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1913, 0);
		Dictionary_2_t152 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1914, 1);
		Dictionary_2_t152 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1915, 2);
		Dictionary_2_t152 * L_10 = V_2;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1916, 3);
		Dictionary_2_t152 * L_11 = V_2;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral1917, 4);
		Dictionary_2_t152 * L_12 = V_2;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, _stringLiteral1918, 5);
		Dictionary_2_t152 * L_13 = V_2;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_13, _stringLiteral1919, 6);
		Dictionary_2_t152 * L_14 = V_2;
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_14, _stringLiteral1920, 6);
		Dictionary_2_t152 * L_15 = V_2;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_15, _stringLiteral1921, 7);
		Dictionary_2_t152 * L_16 = V_2;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_16, _stringLiteral1922, 8);
		Dictionary_2_t152 * L_17 = V_2;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_17, _stringLiteral1923, ((int32_t)9));
		Dictionary_2_t152 * L_18 = V_2;
		NullCheck(L_18);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_18, _stringLiteral1924, ((int32_t)10));
		Dictionary_2_t152 * L_19 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_19, _stringLiteral1925, ((int32_t)11));
		Dictionary_2_t152 * L_20 = V_2;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_20, _stringLiteral1926, ((int32_t)12));
		Dictionary_2_t152 * L_21 = V_2;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_21, _stringLiteral1927, ((int32_t)13));
		Dictionary_2_t152 * L_22 = V_2;
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_22, _stringLiteral1928, ((int32_t)14));
		Dictionary_2_t152 * L_23 = V_2;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_23, _stringLiteral1929, ((int32_t)15));
		Dictionary_2_t152 * L_24 = V_2;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_24, _stringLiteral1930, ((int32_t)16));
		Dictionary_2_t152 * L_25 = V_2;
		NullCheck(L_25);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_25, _stringLiteral1931, ((int32_t)17));
		Dictionary_2_t152 * L_26 = V_2;
		((ConfigHandler_t1339_StaticFields*)ConfigHandler_t1339_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8 = L_26;
	}

IL_0121:
	{
		Dictionary_2_t152 * L_27 = ((ConfigHandler_t1339_StaticFields*)ConfigHandler_t1339_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8;
		String_t* L_28 = V_1;
		NullCheck(L_27);
		bool L_29 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_27, L_28, (&V_3));
		if (!L_29)
		{
			goto IL_0512;
		}
	}
	{
		int32_t L_30 = V_3;
		if (L_30 == 0)
		{
			goto IL_0186;
		}
		if (L_30 == 1)
		{
			goto IL_01bc;
		}
		if (L_30 == 2)
		{
			goto IL_01dd;
		}
		if (L_30 == 3)
		{
			goto IL_01ff;
		}
		if (L_30 == 4)
		{
			goto IL_0244;
		}
		if (L_30 == 5)
		{
			goto IL_0266;
		}
		if (L_30 == 6)
		{
			goto IL_0288;
		}
		if (L_30 == 7)
		{
			goto IL_0366;
		}
		if (L_30 == 8)
		{
			goto IL_0391;
		}
		if (L_30 == 9)
		{
			goto IL_03ab;
		}
		if (L_30 == 10)
		{
			goto IL_03f0;
		}
		if (L_30 == 11)
		{
			goto IL_0435;
		}
		if (L_30 == 12)
		{
			goto IL_044f;
		}
		if (L_30 == 13)
		{
			goto IL_0471;
		}
		if (L_30 == 14)
		{
			goto IL_0493;
		}
		if (L_30 == 15)
		{
			goto IL_04b4;
		}
		if (L_30 == 16)
		{
			goto IL_04ce;
		}
		if (L_30 == 17)
		{
			goto IL_04e8;
		}
	}
	{
		goto IL_0512;
	}

IL_0186:
	{
		String_t* L_31 = ___name;
		StringU5BU5D_t484* L_32 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 0);
		ArrayElementTypeCheck (L_32, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_32, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1932;
		ConfigHandler_ValidatePath_m8078(__this, L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = ___attrs;
		NullCheck(L_33);
		StringU5BU5D_t484* L_34 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		if ((((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_01b7;
		}
	}
	{
		Object_t * L_35 = ___attrs;
		NullCheck(L_35);
		StringU5BU5D_t484* L_36 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		int32_t L_37 = 0;
		__this->___appName_5 = (*(String_t**)(String_t**)SZArrayLdElema(L_36, L_37, sizeof(String_t*)));
	}

IL_01b7:
	{
		goto IL_0528;
	}

IL_01bc:
	{
		String_t* L_38 = ___name;
		StringU5BU5D_t484* L_39 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		ArrayElementTypeCheck (L_39, _stringLiteral1913);
		*((String_t**)(String_t**)SZArrayLdElema(L_39, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1913;
		ConfigHandler_ValidatePath_m8078(__this, L_38, L_39, /*hidden argument*/NULL);
		Object_t * L_40 = ___attrs;
		ConfigHandler_ReadLifetine_m8087(__this, L_40, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_01dd:
	{
		String_t* L_41 = ___name;
		StringU5BU5D_t484* L_42 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 2));
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		ArrayElementTypeCheck (L_42, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_42, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1932;
		StringU5BU5D_t484* L_43 = L_42;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 1);
		ArrayElementTypeCheck (L_43, _stringLiteral1913);
		*((String_t**)(String_t**)SZArrayLdElema(L_43, 1, sizeof(String_t*))) = (String_t*)_stringLiteral1913;
		ConfigHandler_ValidatePath_m8078(__this, L_41, L_43, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_01ff:
	{
		String_t* L_44 = ___name;
		StringU5BU5D_t484* L_45 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 0);
		ArrayElementTypeCheck (L_45, _stringLiteral1915);
		*((String_t**)(String_t**)SZArrayLdElema(L_45, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1915;
		ConfigHandler_ValidatePath_m8078(__this, L_44, L_45, /*hidden argument*/NULL);
		String_t* L_46 = (__this->___currentXmlPath_6);
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m2905(L_46, _stringLiteral1913, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0237;
		}
	}
	{
		Object_t * L_48 = ___attrs;
		ConfigHandler_ReadChannel_m8089(__this, L_48, 0, /*hidden argument*/NULL);
		goto IL_023f;
	}

IL_0237:
	{
		Object_t * L_49 = ___attrs;
		ConfigHandler_ReadChannel_m8089(__this, L_49, 1, /*hidden argument*/NULL);
	}

IL_023f:
	{
		goto IL_0528;
	}

IL_0244:
	{
		String_t* L_50 = ___name;
		StringU5BU5D_t484* L_51 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 2));
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 0);
		ArrayElementTypeCheck (L_51, _stringLiteral1930);
		*((String_t**)(String_t**)SZArrayLdElema(L_51, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1930;
		StringU5BU5D_t484* L_52 = L_51;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		ArrayElementTypeCheck (L_52, _stringLiteral1916);
		*((String_t**)(String_t**)SZArrayLdElema(L_52, 1, sizeof(String_t*))) = (String_t*)_stringLiteral1916;
		ConfigHandler_ValidatePath_m8078(__this, L_50, L_52, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0266:
	{
		String_t* L_53 = ___name;
		StringU5BU5D_t484* L_54 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 2));
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 0);
		ArrayElementTypeCheck (L_54, _stringLiteral1930);
		*((String_t**)(String_t**)SZArrayLdElema(L_54, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1930;
		StringU5BU5D_t484* L_55 = L_54;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 1);
		ArrayElementTypeCheck (L_55, _stringLiteral1916);
		*((String_t**)(String_t**)SZArrayLdElema(L_55, 1, sizeof(String_t*))) = (String_t*)_stringLiteral1916;
		ConfigHandler_ValidatePath_m8078(__this, L_53, L_55, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0288:
	{
		bool L_56 = ConfigHandler_CheckPath_m8079(__this, _stringLiteral1933, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_57 = ConfigHandler_CheckPath_m8079(__this, _stringLiteral1934, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_02c9;
		}
	}

IL_02a8:
	{
		String_t* L_58 = ___name;
		Object_t * L_59 = ___attrs;
		ProviderData_t1341 * L_60 = ConfigHandler_ReadProvider_m8090(__this, L_58, L_59, 0, /*hidden argument*/NULL);
		V_0 = L_60;
		ChannelData_t1340 * L_61 = (__this->___currentChannel_2);
		NullCheck(L_61);
		ArrayList_t607 * L_62 = ChannelData_get_ServerProviders_m8102(L_61, /*hidden argument*/NULL);
		ProviderData_t1341 * L_63 = V_0;
		NullCheck(L_62);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_62, L_63);
		goto IL_0361;
	}

IL_02c9:
	{
		bool L_64 = ConfigHandler_CheckPath_m8079(__this, _stringLiteral1935, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_02e9;
		}
	}
	{
		bool L_65 = ConfigHandler_CheckPath_m8079(__this, _stringLiteral1936, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_030a;
		}
	}

IL_02e9:
	{
		String_t* L_66 = ___name;
		Object_t * L_67 = ___attrs;
		ProviderData_t1341 * L_68 = ConfigHandler_ReadProvider_m8090(__this, L_66, L_67, 0, /*hidden argument*/NULL);
		V_0 = L_68;
		ChannelData_t1340 * L_69 = (__this->___currentChannel_2);
		NullCheck(L_69);
		ArrayList_t607 * L_70 = ChannelData_get_ClientProviders_m8103(L_69, /*hidden argument*/NULL);
		ProviderData_t1341 * L_71 = V_0;
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_70, L_71);
		goto IL_0361;
	}

IL_030a:
	{
		bool L_72 = ConfigHandler_CheckPath_m8079(__this, _stringLiteral1937, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_032f;
		}
	}
	{
		String_t* L_73 = ___name;
		Object_t * L_74 = ___attrs;
		ProviderData_t1341 * L_75 = ConfigHandler_ReadProvider_m8090(__this, L_73, L_74, 1, /*hidden argument*/NULL);
		V_0 = L_75;
		ProviderData_t1341 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterServerProviderTemplate_m8073(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		goto IL_0361;
	}

IL_032f:
	{
		bool L_77 = ConfigHandler_CheckPath_m8079(__this, _stringLiteral1938, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_0354;
		}
	}
	{
		String_t* L_78 = ___name;
		Object_t * L_79 = ___attrs;
		ProviderData_t1341 * L_80 = ConfigHandler_ReadProvider_m8090(__this, L_78, L_79, 1, /*hidden argument*/NULL);
		V_0 = L_80;
		ProviderData_t1341 * L_81 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterClientProviderTemplate_m8072(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		goto IL_0361;
	}

IL_0354:
	{
		String_t* L_82 = ___name;
		ConfigHandler_ValidatePath_m8078(__this, L_82, ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0361:
	{
		goto IL_0528;
	}

IL_0366:
	{
		String_t* L_83 = ___name;
		StringU5BU5D_t484* L_84 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 0);
		ArrayElementTypeCheck (L_84, _stringLiteral1913);
		*((String_t**)(String_t**)SZArrayLdElema(L_84, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1913;
		ConfigHandler_ValidatePath_m8078(__this, L_83, L_84, /*hidden argument*/NULL);
		Object_t * L_85 = ___attrs;
		NullCheck(L_85);
		String_t* L_86 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_85, _stringLiteral1939);
		__this->___currentClientUrl_4 = L_86;
		goto IL_0528;
	}

IL_0391:
	{
		String_t* L_87 = ___name;
		StringU5BU5D_t484* L_88 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, 0);
		ArrayElementTypeCheck (L_88, _stringLiteral1913);
		*((String_t**)(String_t**)SZArrayLdElema(L_88, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1913;
		ConfigHandler_ValidatePath_m8078(__this, L_87, L_88, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_03ab:
	{
		String_t* L_89 = ___name;
		StringU5BU5D_t484* L_90 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 2));
		NullCheck(L_90);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_90, 0);
		ArrayElementTypeCheck (L_90, _stringLiteral1921);
		*((String_t**)(String_t**)SZArrayLdElema(L_90, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1921;
		StringU5BU5D_t484* L_91 = L_90;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 1);
		ArrayElementTypeCheck (L_91, _stringLiteral1922);
		*((String_t**)(String_t**)SZArrayLdElema(L_91, 1, sizeof(String_t*))) = (String_t*)_stringLiteral1922;
		ConfigHandler_ValidatePath_m8078(__this, L_89, L_91, /*hidden argument*/NULL);
		bool L_92 = ConfigHandler_CheckPath_m8079(__this, _stringLiteral1921, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_03e4;
		}
	}
	{
		Object_t * L_93 = ___attrs;
		ConfigHandler_ReadClientWellKnown_m8093(__this, L_93, /*hidden argument*/NULL);
		goto IL_03eb;
	}

IL_03e4:
	{
		Object_t * L_94 = ___attrs;
		ConfigHandler_ReadServiceWellKnown_m8094(__this, L_94, /*hidden argument*/NULL);
	}

IL_03eb:
	{
		goto IL_0528;
	}

IL_03f0:
	{
		String_t* L_95 = ___name;
		StringU5BU5D_t484* L_96 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 2));
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, 0);
		ArrayElementTypeCheck (L_96, _stringLiteral1921);
		*((String_t**)(String_t**)SZArrayLdElema(L_96, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1921;
		StringU5BU5D_t484* L_97 = L_96;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 1);
		ArrayElementTypeCheck (L_97, _stringLiteral1922);
		*((String_t**)(String_t**)SZArrayLdElema(L_97, 1, sizeof(String_t*))) = (String_t*)_stringLiteral1922;
		ConfigHandler_ValidatePath_m8078(__this, L_95, L_97, /*hidden argument*/NULL);
		bool L_98 = ConfigHandler_CheckPath_m8079(__this, _stringLiteral1921, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_0429;
		}
	}
	{
		Object_t * L_99 = ___attrs;
		ConfigHandler_ReadClientActivated_m8091(__this, L_99, /*hidden argument*/NULL);
		goto IL_0430;
	}

IL_0429:
	{
		Object_t * L_100 = ___attrs;
		ConfigHandler_ReadServiceActivated_m8092(__this, L_100, /*hidden argument*/NULL);
	}

IL_0430:
	{
		goto IL_0528;
	}

IL_0435:
	{
		String_t* L_101 = ___name;
		StringU5BU5D_t484* L_102 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, 0);
		ArrayElementTypeCheck (L_102, _stringLiteral1913);
		*((String_t**)(String_t**)SZArrayLdElema(L_102, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1913;
		ConfigHandler_ValidatePath_m8078(__this, L_101, L_102, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_044f:
	{
		String_t* L_103 = ___name;
		StringU5BU5D_t484* L_104 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, 0);
		ArrayElementTypeCheck (L_104, _stringLiteral1925);
		*((String_t**)(String_t**)SZArrayLdElema(L_104, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1925;
		ConfigHandler_ValidatePath_m8078(__this, L_103, L_104, /*hidden argument*/NULL);
		Object_t * L_105 = ___attrs;
		ConfigHandler_ReadInteropXml_m8095(__this, L_105, 0, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0471:
	{
		String_t* L_106 = ___name;
		StringU5BU5D_t484* L_107 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, 0);
		ArrayElementTypeCheck (L_107, _stringLiteral1925);
		*((String_t**)(String_t**)SZArrayLdElema(L_107, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1925;
		ConfigHandler_ValidatePath_m8078(__this, L_106, L_107, /*hidden argument*/NULL);
		Object_t * L_108 = ___attrs;
		ConfigHandler_ReadInteropXml_m8095(__this, L_108, 0, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0493:
	{
		String_t* L_109 = ___name;
		StringU5BU5D_t484* L_110 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, 0);
		ArrayElementTypeCheck (L_110, _stringLiteral1925);
		*((String_t**)(String_t**)SZArrayLdElema(L_110, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1925;
		ConfigHandler_ValidatePath_m8078(__this, L_109, L_110, /*hidden argument*/NULL);
		Object_t * L_111 = ___attrs;
		ConfigHandler_ReadPreload_m8096(__this, L_111, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04b4:
	{
		String_t* L_112 = ___name;
		StringU5BU5D_t484* L_113 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, 0);
		ArrayElementTypeCheck (L_113, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_113, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1932;
		ConfigHandler_ValidatePath_m8078(__this, L_112, L_113, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04ce:
	{
		String_t* L_114 = ___name;
		StringU5BU5D_t484* L_115 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, 0);
		ArrayElementTypeCheck (L_115, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_115, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1932;
		ConfigHandler_ValidatePath_m8078(__this, L_114, L_115, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04e8:
	{
		String_t* L_116 = ___name;
		StringU5BU5D_t484* L_117 = ((StringU5BU5D_t484*)SZArrayNew(StringU5BU5D_t484_il2cpp_TypeInfo_var, 1));
		NullCheck(L_117);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_117, 0);
		ArrayElementTypeCheck (L_117, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_117, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1932;
		ConfigHandler_ValidatePath_m8078(__this, L_116, L_117, /*hidden argument*/NULL);
		Object_t * L_118 = ___attrs;
		NullCheck(L_118);
		String_t* L_119 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_118, _stringLiteral1409);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		RemotingConfiguration_SetCustomErrorsMode_m8076(NULL /*static, unused*/, L_119, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0512:
	{
		String_t* L_120 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_121 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1940, L_120, _stringLiteral1941, /*hidden argument*/NULL);
		RemotingException_t1343 * L_122 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_122, L_121, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_122);
	}

IL_0528:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C" void ConfigHandler_OnEndElement_m8085 (ConfigHandler_t1339 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Stack_t887 * L_0 = (__this->___currentProviderData_3);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Stack_t887 * L_1 = (__this->___currentProviderData_3);
		NullCheck(L_1);
		VirtFuncInvoker0< Object_t * >::Invoke(16 /* System.Object System.Collections.Stack::Pop() */, L_1);
		Stack_t887 * L_2 = (__this->___currentProviderData_3);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		__this->___currentProviderData_3 = (Stack_t887 *)NULL;
	}

IL_002e:
	{
		String_t* L_4 = (__this->___currentXmlPath_6);
		String_t* L_5 = (__this->___currentXmlPath_6);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1761(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___name;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1761(L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_9 = String_Substring_m1781(L_4, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)L_8))-(int32_t)1)), /*hidden argument*/NULL);
		__this->___currentXmlPath_6 = L_9;
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderDataMethodDeclarations.h"
extern TypeInfo* SinkProviderData_t1270_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1606_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t871_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t897_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler_ReadCustomProviderData_m8086 (ConfigHandler_t1339 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SinkProviderData_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(959);
		IAttrList_t1606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		IDictionary_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		IList_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		s_Il2CppMethodIntialized = true;
	}
	SinkProviderData_t1270 * V_0 = {0};
	SinkProviderData_t1270 * V_1 = {0};
	int32_t V_2 = 0;
	{
		Stack_t887 * L_0 = (__this->___currentProviderData_3);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Object System.Collections.Stack::Peek() */, L_0);
		V_0 = ((SinkProviderData_t1270 *)CastclassClass(L_1, SinkProviderData_t1270_il2cpp_TypeInfo_var));
		String_t* L_2 = ___name;
		SinkProviderData_t1270 * L_3 = (SinkProviderData_t1270 *)il2cpp_codegen_object_new (SinkProviderData_t1270_il2cpp_TypeInfo_var);
		SinkProviderData__ctor_m7770(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_003d;
	}

IL_001f:
	{
		SinkProviderData_t1270 * L_4 = V_1;
		NullCheck(L_4);
		Object_t * L_5 = SinkProviderData_get_Properties_m7772(L_4, /*hidden argument*/NULL);
		Object_t * L_6 = ___attrs;
		NullCheck(L_6);
		StringU5BU5D_t484* L_7 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Object_t * L_10 = ___attrs;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_10, L_11);
		NullCheck(L_5);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t871_il2cpp_TypeInfo_var, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9, sizeof(String_t*))), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_2;
		Object_t * L_15 = ___attrs;
		NullCheck(L_15);
		StringU5BU5D_t484* L_16 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		SinkProviderData_t1270 * L_17 = V_0;
		NullCheck(L_17);
		Object_t * L_18 = SinkProviderData_get_Children_m7771(L_17, /*hidden argument*/NULL);
		SinkProviderData_t1270 * L_19 = V_1;
		NullCheck(L_18);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t897_il2cpp_TypeInfo_var, L_18, L_19);
		Stack_t887 * L_20 = (__this->___currentProviderData_3);
		SinkProviderData_t1270 * L_21 = V_1;
		NullCheck(L_20);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_20, L_21);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"
extern TypeInfo* IAttrList_t1606_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigHandler_t1339_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t152_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t1287_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1798_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1942;
extern Il2CppCodeGenString* _stringLiteral1943;
extern Il2CppCodeGenString* _stringLiteral1944;
extern Il2CppCodeGenString* _stringLiteral1945;
extern Il2CppCodeGenString* _stringLiteral1946;
extern "C" void ConfigHandler_ReadLifetine_m8087 (ConfigHandler_t1339 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		ConfigHandler_t1339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(952);
		Dictionary_2_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		LifetimeServices_t1287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(914);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		Dictionary_2__ctor_m1798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		_stringLiteral1942 = il2cpp_codegen_string_literal_from_index(1942);
		_stringLiteral1943 = il2cpp_codegen_string_literal_from_index(1943);
		_stringLiteral1944 = il2cpp_codegen_string_literal_from_index(1944);
		_stringLiteral1945 = il2cpp_codegen_string_literal_from_index(1945);
		_stringLiteral1946 = il2cpp_codegen_string_literal_from_index(1946);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	Dictionary_2_t152 * V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0102;
	}

IL_0007:
	{
		Object_t * L_0 = ___attrs;
		NullCheck(L_0);
		StringU5BU5D_t484* L_1 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*)));
		String_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_00e6;
		}
	}
	{
		Dictionary_2_t152 * L_5 = ((ConfigHandler_t1339_StaticFields*)ConfigHandler_t1339_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9;
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t152 * L_6 = (Dictionary_2_t152 *)il2cpp_codegen_object_new (Dictionary_2_t152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1798(L_6, 4, /*hidden argument*/Dictionary_2__ctor_m1798_MethodInfo_var);
		V_2 = L_6;
		Dictionary_2_t152 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1942, 0);
		Dictionary_2_t152 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1943, 1);
		Dictionary_2_t152 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1944, 2);
		Dictionary_2_t152 * L_10 = V_2;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1945, 3);
		Dictionary_2_t152 * L_11 = V_2;
		((ConfigHandler_t1339_StaticFields*)ConfigHandler_t1339_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9 = L_11;
	}

IL_005d:
	{
		Dictionary_2_t152 * L_12 = ((ConfigHandler_t1339_StaticFields*)ConfigHandler_t1339_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_3));
		if (!L_14)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_15 = V_3;
		if (L_15 == 0)
		{
			goto IL_008a;
		}
		if (L_15 == 1)
		{
			goto IL_00a1;
		}
		if (L_15 == 2)
		{
			goto IL_00b8;
		}
		if (L_15 == 3)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_00e6;
	}

IL_008a:
	{
		Object_t * L_16 = ___attrs;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_16, L_17);
		TimeSpan_t846  L_19 = ConfigHandler_ParseTime_m8088(__this, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1287_il2cpp_TypeInfo_var);
		LifetimeServices_set_LeaseTime_m7841(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00a1:
	{
		Object_t * L_20 = ___attrs;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_20, L_21);
		TimeSpan_t846  L_23 = ConfigHandler_ParseTime_m8088(__this, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1287_il2cpp_TypeInfo_var);
		LifetimeServices_set_SponsorshipTimeout_m7843(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00b8:
	{
		Object_t * L_24 = ___attrs;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		String_t* L_26 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_24, L_25);
		TimeSpan_t846  L_27 = ConfigHandler_ParseTime_m8088(__this, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1287_il2cpp_TypeInfo_var);
		LifetimeServices_set_RenewOnCallTime_m7842(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00cf:
	{
		Object_t * L_28 = ___attrs;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		String_t* L_30 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_28, L_29);
		TimeSpan_t846  L_31 = ConfigHandler_ParseTime_m8088(__this, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1287_il2cpp_TypeInfo_var);
		LifetimeServices_set_LeaseManagerPollTime_m7840(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00e6:
	{
		Object_t * L_32 = ___attrs;
		NullCheck(L_32);
		StringU5BU5D_t484* L_33 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_32);
		int32_t L_34 = V_0;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m1631(NULL /*static, unused*/, _stringLiteral1946, (*(String_t**)(String_t**)SZArrayLdElema(L_33, L_35, sizeof(String_t*))), /*hidden argument*/NULL);
		RemotingException_t1343 * L_37 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_37);
	}

IL_00fe:
	{
		int32_t L_38 = V_0;
		V_0 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_39 = V_0;
		Object_t * L_40 = ___attrs;
		NullCheck(L_40);
		StringU5BU5D_t484* L_41 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_41)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t151_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t846_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t1599____U24U24fieldU2D31_21_FieldInfo_var;
extern Il2CppCodeGenString* _stringLiteral1947;
extern Il2CppCodeGenString* _stringLiteral1948;
extern Il2CppCodeGenString* _stringLiteral1949;
extern Il2CppCodeGenString* _stringLiteral1950;
extern Il2CppCodeGenString* _stringLiteral1951;
extern Il2CppCodeGenString* _stringLiteral1952;
extern Il2CppCodeGenString* _stringLiteral1953;
extern Il2CppCodeGenString* _stringLiteral1954;
extern "C" TimeSpan_t846  ConfigHandler_ParseTime_m8088 (ConfigHandler_t1339 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		CharU5BU5D_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		TimeSpan_t846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		U3CPrivateImplementationDetailsU3E_t1599____U24U24fieldU2D31_21_FieldInfo_var = il2cpp_codegen_field_info_from_index(654, 21);
		_stringLiteral1947 = il2cpp_codegen_string_literal_from_index(1947);
		_stringLiteral1948 = il2cpp_codegen_string_literal_from_index(1948);
		_stringLiteral1949 = il2cpp_codegen_string_literal_from_index(1949);
		_stringLiteral1950 = il2cpp_codegen_string_literal_from_index(1950);
		_stringLiteral1951 = il2cpp_codegen_string_literal_from_index(1951);
		_stringLiteral1952 = il2cpp_codegen_string_literal_from_index(1952);
		_stringLiteral1953 = il2cpp_codegen_string_literal_from_index(1953);
		_stringLiteral1954 = il2cpp_codegen_string_literal_from_index(1954);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	double V_2 = 0.0;
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m1759(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___s;
		if (L_3)
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		RemotingException_t1343 * L_4 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_4, _stringLiteral1947, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0021:
	{
		String_t* L_5 = ___s;
		CharU5BU5D_t151* L_6 = ((CharU5BU5D_t151*)SZArrayNew(CharU5BU5D_t151_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m3005(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t1599____U24U24fieldU2D31_21_FieldInfo_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_7 = String_IndexOfAny_m5299(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_004b;
		}
	}
	{
		V_1 = _stringLiteral1948;
		goto IL_005d;
	}

IL_004b:
	{
		String_t* L_9 = ___s;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m1808(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = ___s;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m1781(L_12, 0, L_13, /*hidden argument*/NULL);
		___s = L_14;
	}

IL_005d:
	try
	{ // begin try (depth: 1)
		String_t* L_15 = ___s;
		double L_16 = Double_Parse_m5396(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_0080;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t287 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0069;
		throw e;
	}

CATCH_0069:
	{ // begin catch(System.Object)
		String_t* L_17 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m1631(NULL /*static, unused*/, _stringLiteral1949, L_17, /*hidden argument*/NULL);
		RemotingException_t1343 * L_19 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_19, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_19);
		goto IL_0080;
	} // end catch (depth: 1)

IL_0080:
	{
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_op_Equality_m1759(NULL /*static, unused*/, L_20, _stringLiteral1950, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0097;
		}
	}
	{
		double L_22 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t846_il2cpp_TypeInfo_var);
		TimeSpan_t846  L_23 = TimeSpan_FromDays_m9832(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_0097:
	{
		String_t* L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m1759(NULL /*static, unused*/, L_24, _stringLiteral1951, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		double L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t846_il2cpp_TypeInfo_var);
		TimeSpan_t846  L_27 = TimeSpan_FromHours_m9833(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ae:
	{
		String_t* L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m1759(NULL /*static, unused*/, L_28, _stringLiteral1952, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		double L_30 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t846_il2cpp_TypeInfo_var);
		TimeSpan_t846  L_31 = TimeSpan_FromMinutes_m9834(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00c5:
	{
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_33 = String_op_Equality_m1759(NULL /*static, unused*/, L_32, _stringLiteral1948, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		double L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t846_il2cpp_TypeInfo_var);
		TimeSpan_t846  L_35 = TimeSpan_FromSeconds_m9835(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00dc:
	{
		String_t* L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m1759(NULL /*static, unused*/, L_36, _stringLiteral1953, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00f3;
		}
	}
	{
		double L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t846_il2cpp_TypeInfo_var);
		TimeSpan_t846  L_39 = TimeSpan_FromMilliseconds_m9836(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_00f3:
	{
		String_t* L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m1631(NULL /*static, unused*/, _stringLiteral1954, L_40, /*hidden argument*/NULL);
		RemotingException_t1343 * L_42 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_42, L_41, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_42);
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern TypeInfo* ChannelData_t1340_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1606_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1955;
extern Il2CppCodeGenString* _stringLiteral1956;
extern Il2CppCodeGenString* _stringLiteral1957;
extern Il2CppCodeGenString* _stringLiteral938;
extern Il2CppCodeGenString* _stringLiteral1958;
extern "C" void ConfigHandler_ReadChannel_m8089 (ConfigHandler_t1339 * __this, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelData_t1340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(954);
		IAttrList_t1606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		_stringLiteral1955 = il2cpp_codegen_string_literal_from_index(1955);
		_stringLiteral1956 = il2cpp_codegen_string_literal_from_index(1956);
		_stringLiteral1957 = il2cpp_codegen_string_literal_from_index(1957);
		_stringLiteral938 = il2cpp_codegen_string_literal_from_index(938);
		_stringLiteral1958 = il2cpp_codegen_string_literal_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	ChannelData_t1340 * V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	{
		ChannelData_t1340 * L_0 = (ChannelData_t1340 *)il2cpp_codegen_object_new (ChannelData_t1340_il2cpp_TypeInfo_var);
		ChannelData__ctor_m8101(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_00ac;
	}

IL_000d:
	{
		Object_t * L_1 = ___attrs;
		NullCheck(L_1);
		StringU5BU5D_t484* L_2 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4, sizeof(String_t*)));
		Object_t * L_5 = ___attrs;
		NullCheck(L_5);
		StringU5BU5D_t484* L_6 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8, sizeof(String_t*)));
		String_t* L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m1759(NULL /*static, unused*/, L_9, _stringLiteral1955, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		bool L_11 = ___isTemplate;
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		ChannelData_t1340 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		L_12->___Ref_0 = L_13;
		goto IL_00a8;
	}

IL_0041:
	{
		String_t* L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m1759(NULL /*static, unused*/, L_14, _stringLiteral1956, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		ChannelData_t1340 * L_16 = V_0;
		String_t* L_17 = V_3;
		NullCheck(L_16);
		L_16->___DelayLoadAsClientChannel_3 = L_17;
		goto IL_00a8;
	}

IL_005d:
	{
		String_t* L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1759(NULL /*static, unused*/, L_18, _stringLiteral1957, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007f;
		}
	}
	{
		bool L_20 = ___isTemplate;
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		ChannelData_t1340 * L_21 = V_0;
		String_t* L_22 = V_3;
		NullCheck(L_21);
		L_21->___Id_2 = L_22;
		goto IL_00a8;
	}

IL_007f:
	{
		String_t* L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m1759(NULL /*static, unused*/, L_23, _stringLiteral938, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_009b;
		}
	}
	{
		ChannelData_t1340 * L_25 = V_0;
		String_t* L_26 = V_3;
		NullCheck(L_25);
		L_25->___Type_1 = L_26;
		goto IL_00a8;
	}

IL_009b:
	{
		ChannelData_t1340 * L_27 = V_0;
		NullCheck(L_27);
		Hashtable_t672 * L_28 = ChannelData_get_CustomProperties_m8104(L_27, /*hidden argument*/NULL);
		String_t* L_29 = V_2;
		String_t* L_30 = V_3;
		NullCheck(L_28);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_28, L_29, L_30);
	}

IL_00a8:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_32 = V_1;
		Object_t * L_33 = ___attrs;
		NullCheck(L_33);
		StringU5BU5D_t484* L_34 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		bool L_35 = ___isTemplate;
		if (!L_35)
		{
			goto IL_00f7;
		}
	}
	{
		ChannelData_t1340 * L_36 = V_0;
		NullCheck(L_36);
		String_t* L_37 = (L_36->___Id_2);
		if (L_37)
		{
			goto IL_00d6;
		}
	}
	{
		RemotingException_t1343 * L_38 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_38, _stringLiteral1958, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_38);
	}

IL_00d6:
	{
		ChannelData_t1340 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = (L_39->___Type_1);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		RemotingException_t1343 * L_41 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_41, _stringLiteral1958, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_41);
	}

IL_00ec:
	{
		ChannelData_t1340 * L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterChannelTemplate_m8071(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		goto IL_0104;
	}

IL_00f7:
	{
		ArrayList_t607 * L_43 = (__this->___channelInstances_1);
		ChannelData_t1340 * L_44 = V_0;
		NullCheck(L_43);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
	}

IL_0104:
	{
		ChannelData_t1340 * L_45 = V_0;
		__this->___currentChannel_2 = L_45;
		return;
	}
}
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterDataMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1341_il2cpp_TypeInfo_var;
extern TypeInfo* FormatterData_t1342_il2cpp_TypeInfo_var;
extern TypeInfo* SinkProviderData_t1270_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_t887_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1606_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1919;
extern Il2CppCodeGenString* _stringLiteral1959;
extern Il2CppCodeGenString* _stringLiteral1957;
extern Il2CppCodeGenString* _stringLiteral938;
extern Il2CppCodeGenString* _stringLiteral1955;
extern Il2CppCodeGenString* _stringLiteral1958;
extern "C" ProviderData_t1341 * ConfigHandler_ReadProvider_m8090 (ConfigHandler_t1339 * __this, String_t* ___name, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ProviderData_t1341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(883);
		FormatterData_t1342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(960);
		SinkProviderData_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(959);
		Stack_t887_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(607);
		IAttrList_t1606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1919 = il2cpp_codegen_string_literal_from_index(1919);
		_stringLiteral1959 = il2cpp_codegen_string_literal_from_index(1959);
		_stringLiteral1957 = il2cpp_codegen_string_literal_from_index(1957);
		_stringLiteral938 = il2cpp_codegen_string_literal_from_index(938);
		_stringLiteral1955 = il2cpp_codegen_string_literal_from_index(1955);
		_stringLiteral1958 = il2cpp_codegen_string_literal_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	ProviderData_t1341 * V_0 = {0};
	SinkProviderData_t1270 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	ProviderData_t1341 * G_B3_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1759(NULL /*static, unused*/, L_0, _stringLiteral1919, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ProviderData_t1341 * L_2 = (ProviderData_t1341 *)il2cpp_codegen_object_new (ProviderData_t1341_il2cpp_TypeInfo_var);
		ProviderData__ctor_m8106(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_001a:
	{
		FormatterData_t1342 * L_3 = (FormatterData_t1342 *)il2cpp_codegen_object_new (FormatterData_t1342_il2cpp_TypeInfo_var);
		FormatterData__ctor_m8108(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((ProviderData_t1341 *)(L_3));
	}

IL_001f:
	{
		V_0 = G_B3_0;
		SinkProviderData_t1270 * L_4 = (SinkProviderData_t1270 *)il2cpp_codegen_object_new (SinkProviderData_t1270_il2cpp_TypeInfo_var);
		SinkProviderData__ctor_m7770(L_4, _stringLiteral1959, /*hidden argument*/NULL);
		V_1 = L_4;
		ProviderData_t1341 * L_5 = V_0;
		SinkProviderData_t1270 * L_6 = V_1;
		NullCheck(L_6);
		Object_t * L_7 = SinkProviderData_get_Children_m7771(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___CustomData_4 = L_7;
		Stack_t887 * L_8 = (Stack_t887 *)il2cpp_codegen_object_new (Stack_t887_il2cpp_TypeInfo_var);
		Stack__ctor_m4961(L_8, /*hidden argument*/NULL);
		__this->___currentProviderData_3 = L_8;
		Stack_t887 * L_9 = (__this->___currentProviderData_3);
		SinkProviderData_t1270 * L_10 = V_1;
		NullCheck(L_9);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_9, L_10);
		V_2 = 0;
		goto IL_00dd;
	}

IL_0055:
	{
		Object_t * L_11 = ___attrs;
		NullCheck(L_11);
		StringU5BU5D_t484* L_12 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_11);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14, sizeof(String_t*)));
		Object_t * L_15 = ___attrs;
		NullCheck(L_15);
		StringU5BU5D_t484* L_16 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_15);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_16, L_18, sizeof(String_t*)));
		String_t* L_19 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m1759(NULL /*static, unused*/, L_19, _stringLiteral1957, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		bool L_21 = ___isTemplate;
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		ProviderData_t1341 * L_22 = V_0;
		String_t* L_23 = V_4;
		NullCheck(L_22);
		L_22->___Id_2 = L_23;
		goto IL_00d9;
	}

IL_008b:
	{
		String_t* L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m1759(NULL /*static, unused*/, L_24, _stringLiteral938, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		ProviderData_t1341 * L_26 = V_0;
		String_t* L_27 = V_4;
		NullCheck(L_26);
		L_26->___Type_1 = L_27;
		goto IL_00d9;
	}

IL_00a8:
	{
		String_t* L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m1759(NULL /*static, unused*/, L_28, _stringLiteral1955, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00cb;
		}
	}
	{
		bool L_30 = ___isTemplate;
		if (L_30)
		{
			goto IL_00cb;
		}
	}
	{
		ProviderData_t1341 * L_31 = V_0;
		String_t* L_32 = V_4;
		NullCheck(L_31);
		L_31->___Ref_0 = L_32;
		goto IL_00d9;
	}

IL_00cb:
	{
		ProviderData_t1341 * L_33 = V_0;
		NullCheck(L_33);
		Hashtable_t672 * L_34 = (L_33->___CustomProperties_3);
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		NullCheck(L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_34, L_35, L_36);
	}

IL_00d9:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00dd:
	{
		int32_t L_38 = V_2;
		Object_t * L_39 = ___attrs;
		NullCheck(L_39);
		StringU5BU5D_t484* L_40 = (StringU5BU5D_t484*)InterfaceFuncInvoker0< StringU5BU5D_t484* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1606_il2cpp_TypeInfo_var, L_39);
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		ProviderData_t1341 * L_41 = V_0;
		NullCheck(L_41);
		String_t* L_42 = (L_41->___Id_2);
		if (L_42)
		{
			goto IL_0107;
		}
	}
	{
		bool L_43 = ___isTemplate;
		if (!L_43)
		{
			goto IL_0107;
		}
	}
	{
		RemotingException_t1343 * L_44 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_44, _stringLiteral1958, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_44);
	}

IL_0107:
	{
		ProviderData_t1341 * L_45 = V_0;
		return L_45;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral938;
extern Il2CppCodeGenString* _stringLiteral1960;
extern "C" void ConfigHandler_ReadClientActivated_m8091 (ConfigHandler_t1339 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		_stringLiteral938 = il2cpp_codegen_string_literal_from_index(938);
		_stringLiteral1960 = il2cpp_codegen_string_literal_from_index(1960);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m8097(__this, L_0, _stringLiteral938, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ConfigHandler_ExtractAssembly_m8098(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = (__this->___currentClientUrl_4);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_4 = (__this->___currentClientUrl_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m1759(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		RemotingException_t1343 * L_7 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_7, _stringLiteral1960, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0041:
	{
		ArrayList_t607 * L_8 = (__this->___typeEntries_0);
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = (__this->___currentClientUrl_4);
		ActivatedClientTypeEntry_t1327 * L_12 = (ActivatedClientTypeEntry_t1327 *)il2cpp_codegen_object_new (ActivatedClientTypeEntry_t1327_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry__ctor_m8021(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_12);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntryMethodDeclarations.h"
extern TypeInfo* ActivatedServiceTypeEntry_t1329_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral938;
extern "C" void ConfigHandler_ReadServiceActivated_m8092 (ConfigHandler_t1339 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivatedServiceTypeEntry_t1329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(956);
		_stringLiteral938 = il2cpp_codegen_string_literal_from_index(938);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m8097(__this, L_0, _stringLiteral938, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ConfigHandler_ExtractAssembly_m8098(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		ArrayList_t607 * L_3 = (__this->___typeEntries_0);
		String_t* L_4 = V_0;
		String_t* L_5 = V_1;
		ActivatedServiceTypeEntry_t1329 * L_6 = (ActivatedServiceTypeEntry_t1329 *)il2cpp_codegen_object_new (ActivatedServiceTypeEntry_t1329_il2cpp_TypeInfo_var);
		ActivatedServiceTypeEntry__ctor_m8026(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_6);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntryMethodDeclarations.h"
extern TypeInfo* WellKnownClientTypeEntry_t1352_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1939;
extern Il2CppCodeGenString* _stringLiteral938;
extern "C" void ConfigHandler_ReadClientWellKnown_m8093 (ConfigHandler_t1339 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WellKnownClientTypeEntry_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(957);
		_stringLiteral1939 = il2cpp_codegen_string_literal_from_index(1939);
		_stringLiteral938 = il2cpp_codegen_string_literal_from_index(938);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m8097(__this, L_0, _stringLiteral1939, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		String_t* L_3 = ConfigHandler_GetNotNull_m8097(__this, L_2, _stringLiteral938, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = ConfigHandler_ExtractAssembly_m8098(__this, (&V_1), /*hidden argument*/NULL);
		V_2 = L_4;
		ArrayList_t607 * L_5 = (__this->___typeEntries_0);
		String_t* L_6 = V_1;
		String_t* L_7 = V_2;
		String_t* L_8 = V_0;
		WellKnownClientTypeEntry_t1352 * L_9 = (WellKnownClientTypeEntry_t1352 *)il2cpp_codegen_object_new (WellKnownClientTypeEntry_t1352_il2cpp_TypeInfo_var);
		WellKnownClientTypeEntry__ctor_m8167(L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_9);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntryMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownServiceTypeEntry_t1354_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1961;
extern Il2CppCodeGenString* _stringLiteral1409;
extern Il2CppCodeGenString* _stringLiteral938;
extern Il2CppCodeGenString* _stringLiteral1962;
extern Il2CppCodeGenString* _stringLiteral1963;
extern Il2CppCodeGenString* _stringLiteral1964;
extern Il2CppCodeGenString* _stringLiteral1965;
extern "C" void ConfigHandler_ReadServiceWellKnown_m8094 (ConfigHandler_t1339 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		WellKnownServiceTypeEntry_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(958);
		_stringLiteral1961 = il2cpp_codegen_string_literal_from_index(1961);
		_stringLiteral1409 = il2cpp_codegen_string_literal_from_index(1409);
		_stringLiteral938 = il2cpp_codegen_string_literal_from_index(938);
		_stringLiteral1962 = il2cpp_codegen_string_literal_from_index(1962);
		_stringLiteral1963 = il2cpp_codegen_string_literal_from_index(1963);
		_stringLiteral1964 = il2cpp_codegen_string_literal_from_index(1964);
		_stringLiteral1965 = il2cpp_codegen_string_literal_from_index(1965);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	int32_t V_4 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m8097(__this, L_0, _stringLiteral1961, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		String_t* L_3 = ConfigHandler_GetNotNull_m8097(__this, L_2, _stringLiteral1409, /*hidden argument*/NULL);
		V_1 = L_3;
		Object_t * L_4 = ___attrs;
		String_t* L_5 = ConfigHandler_GetNotNull_m8097(__this, L_4, _stringLiteral938, /*hidden argument*/NULL);
		V_2 = L_5;
		String_t* L_6 = ConfigHandler_ExtractAssembly_m8098(__this, (&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		String_t* L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1759(NULL /*static, unused*/, L_7, _stringLiteral1962, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		V_4 = 2;
		goto IL_0076;
	}

IL_0048:
	{
		String_t* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m1759(NULL /*static, unused*/, L_9, _stringLiteral1963, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		V_4 = 1;
		goto IL_0076;
	}

IL_0060:
	{
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1746(NULL /*static, unused*/, _stringLiteral1964, L_11, _stringLiteral1965, /*hidden argument*/NULL);
		RemotingException_t1343 * L_13 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
	}

IL_0076:
	{
		ArrayList_t607 * L_14 = (__this->___typeEntries_0);
		String_t* L_15 = V_2;
		String_t* L_16 = V_3;
		String_t* L_17 = V_0;
		int32_t L_18 = V_4;
		WellKnownServiceTypeEntry_t1354 * L_19 = (WellKnownServiceTypeEntry_t1354 *)il2cpp_codegen_object_new (WellKnownServiceTypeEntry_t1354_il2cpp_TypeInfo_var);
		WellKnownServiceTypeEntry__ctor_m8172(L_19, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_14, L_19);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t151_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1350_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1966;
extern Il2CppCodeGenString* _stringLiteral1967;
extern "C" void ConfigHandler_ReadInteropXml_m8095 (ConfigHandler_t1339 * __this, Object_t * ___attrs, bool ___isElement, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		CharU5BU5D_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		SoapServices_t1350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		_stringLiteral1966 = il2cpp_codegen_string_literal_from_index(1966);
		_stringLiteral1967 = il2cpp_codegen_string_literal_from_index(1967);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	StringU5BU5D_t484* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* G_B3_0 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m8097(__this, L_0, _stringLiteral1966, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m5756, L_1, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		V_0 = L_2;
		Object_t * L_3 = ___attrs;
		String_t* L_4 = ConfigHandler_GetNotNull_m8097(__this, L_3, _stringLiteral1967, /*hidden argument*/NULL);
		CharU5BU5D_t151* L_5 = ((CharU5BU5D_t151*)SZArrayNew(CharU5BU5D_t151_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)44);
		NullCheck(L_4);
		StringU5BU5D_t484* L_6 = String_Split_m2904(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t484* L_7 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8, sizeof(String_t*))));
		String_t* L_9 = String_Trim_m2901((*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8, sizeof(String_t*))), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t484* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		StringU5BU5D_t484* L_11 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12, sizeof(String_t*))));
		String_t* L_13 = String_Trim_m2901((*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12, sizeof(String_t*))), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		goto IL_004f;
	}

IL_004e:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_004f:
	{
		V_3 = G_B3_0;
		bool L_14 = ___isElement;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_15 = V_2;
		String_t* L_16 = V_3;
		Type_t * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1350_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlElement_m8157(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_0063:
	{
		String_t* L_18 = V_2;
		String_t* L_19 = V_3;
		Type_t * L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1350_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlType_m8158(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
extern TypeInfo* IAttrList_t1606_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1350_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral938;
extern Il2CppCodeGenString* _stringLiteral1968;
extern Il2CppCodeGenString* _stringLiteral1969;
extern Il2CppCodeGenString* _stringLiteral1970;
extern "C" void ConfigHandler_ReadPreload_m8096 (ConfigHandler_t1339 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		SoapServices_t1350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		_stringLiteral938 = il2cpp_codegen_string_literal_from_index(938);
		_stringLiteral1968 = il2cpp_codegen_string_literal_from_index(1968);
		_stringLiteral1969 = il2cpp_codegen_string_literal_from_index(1969);
		_stringLiteral1970 = il2cpp_codegen_string_literal_from_index(1970);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_0, _stringLiteral938);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_2, _stringLiteral1968);
		V_1 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RemotingException_t1343 * L_6 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_6, _stringLiteral1969, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_002f:
	{
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m5756, L_8, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1350_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m8156(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0045:
	{
		String_t* L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_11 = V_1;
		Assembly_t947 * L_12 = Assembly_Load_m7418(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1350_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m8155(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_005b:
	{
		RemotingException_t1343 * L_13 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_13, _stringLiteral1970, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
	}

IL_0066:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern TypeInfo* IAttrList_t1606_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1971;
extern "C" String_t* ConfigHandler_GetNotNull_m8097 (ConfigHandler_t1339 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RemotingException_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		_stringLiteral1971 = il2cpp_codegen_string_literal_from_index(1971);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1606_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m1759(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}

IL_001e:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m1631(NULL /*static, unused*/, L_7, _stringLiteral1971, /*hidden argument*/NULL);
		RemotingException_t1343 * L_9 = (RemotingException_t1343 *)il2cpp_codegen_object_new (RemotingException_t1343_il2cpp_TypeInfo_var);
		RemotingException__ctor_m8110(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigHandler_ExtractAssembly_m8098 (ConfigHandler_t1339 * __this, String_t** ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	{
		String_t** L_0 = ___type;
		NullCheck((*((String_t**)L_0)));
		int32_t L_1 = String_IndexOf_m1837((*((String_t**)L_0)), ((int32_t)44), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}

IL_0017:
	{
		String_t** L_4 = ___type;
		int32_t L_5 = V_0;
		NullCheck((*((String_t**)L_4)));
		String_t* L_6 = String_Substring_m1808((*((String_t**)L_4)), ((int32_t)((int32_t)L_5+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = String_Trim_m2901(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t** L_8 = ___type;
		String_t** L_9 = ___type;
		int32_t L_10 = V_0;
		NullCheck((*((String_t**)L_9)));
		String_t* L_11 = String_Substring_m1781((*((String_t**)L_9)), 0, L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m2901(L_11, /*hidden argument*/NULL);
		*((Object_t **)(L_8)) = (Object_t *)L_12;
		String_t* L_13 = V_1;
		return L_13;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C" void ConfigHandler_OnChars_m8099 (ConfigHandler_t1339 * __this, String_t* ___ch, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern TypeInfo* RemotingConfiguration_t1338_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler_OnEndParsing_m8100 (ConfigHandler_t1339 * __this, SmallXmlParser_t1056 * ___parser, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(870);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (__this->___channelInstances_1);
		bool L_1 = (__this->___onlyDelayedChannels_7);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterChannels_m8074(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___appName_5);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = (__this->___appName_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		RemotingConfiguration_set_ApplicationName_m8063(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		bool L_4 = (__this->___onlyDelayedChannels_7);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		ArrayList_t607 * L_5 = (__this->___typeEntries_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1338_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterTypes_m8075(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ChannelData::.ctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern "C" void ChannelData__ctor_m8101 (ChannelData_t1340 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_0, /*hidden argument*/NULL);
		__this->____serverProviders_4 = L_0;
		ArrayList_t607 * L_1 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_1, /*hidden argument*/NULL);
		__this->____clientProviders_5 = L_1;
		Hashtable_t672 * L_2 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_2, /*hidden argument*/NULL);
		__this->____customProperties_6 = L_2;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern "C" ArrayList_t607 * ChannelData_get_ServerProviders_m8102 (ChannelData_t1340 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (__this->____serverProviders_4);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t607 * L_1 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_1, /*hidden argument*/NULL);
		__this->____serverProviders_4 = L_1;
	}

IL_0016:
	{
		ArrayList_t607 * L_2 = (__this->____serverProviders_4);
		return L_2;
	}
}
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern "C" ArrayList_t607 * ChannelData_get_ClientProviders_m8103 (ChannelData_t1340 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t607 * L_0 = (__this->____clientProviders_5);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t607 * L_1 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_1, /*hidden argument*/NULL);
		__this->____clientProviders_5 = L_1;
	}

IL_0016:
	{
		ArrayList_t607 * L_2 = (__this->____clientProviders_5);
		return L_2;
	}
}
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern "C" Hashtable_t672 * ChannelData_get_CustomProperties_m8104 (ChannelData_t1340 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t672 * L_0 = (__this->____customProperties_6);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_t672 * L_1 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_1, /*hidden argument*/NULL);
		__this->____customProperties_6 = L_1;
	}

IL_0016:
	{
		Hashtable_t672 * L_2 = (__this->____customProperties_6);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t937_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1341_il2cpp_TypeInfo_var;
extern "C" void ChannelData_CopyFrom_m8105 (ChannelData_t1340 * __this, ChannelData_t1340 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		DictionaryEntry_t937_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		ProviderData_t1341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(883);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t937  V_0 = {0};
	Object_t * V_1 = {0};
	ProviderData_t1341 * V_2 = {0};
	Object_t * V_3 = {0};
	ProviderData_t1341 * V_4 = {0};
	ProviderData_t1341 * V_5 = {0};
	Object_t * V_6 = {0};
	ProviderData_t1341 * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___Ref_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ChannelData_t1340 * L_1 = ___other;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Ref_0);
		__this->___Ref_0 = L_2;
	}

IL_0017:
	{
		String_t* L_3 = (__this->___Id_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ChannelData_t1340 * L_4 = ___other;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Id_2);
		__this->___Id_2 = L_5;
	}

IL_002e:
	{
		String_t* L_6 = (__this->___Type_1);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		ChannelData_t1340 * L_7 = ___other;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___Type_1);
		__this->___Type_1 = L_8;
	}

IL_0045:
	{
		String_t* L_9 = (__this->___DelayLoadAsClientChannel_3);
		if (L_9)
		{
			goto IL_005c;
		}
	}
	{
		ChannelData_t1340 * L_10 = ___other;
		NullCheck(L_10);
		String_t* L_11 = (L_10->___DelayLoadAsClientChannel_3);
		__this->___DelayLoadAsClientChannel_3 = L_11;
	}

IL_005c:
	{
		ChannelData_t1340 * L_12 = ___other;
		NullCheck(L_12);
		Hashtable_t672 * L_13 = (L_12->____customProperties_6);
		if (!L_13)
		{
			goto IL_00d9;
		}
	}
	{
		ChannelData_t1340 * L_14 = ___other;
		NullCheck(L_14);
		Hashtable_t672 * L_15 = (L_14->____customProperties_6);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_15);
		V_1 = L_16;
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b4;
		}

IL_0078:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t937 *)((DictionaryEntry_t937 *)UnBox (L_18, DictionaryEntry_t937_il2cpp_TypeInfo_var))));
			Hashtable_t672 * L_19 = ChannelData_get_CustomProperties_m8104(__this, /*hidden argument*/NULL);
			Object_t * L_20 = DictionaryEntry_get_Key_m6510((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_19, L_20);
			if (L_21)
			{
				goto IL_00b4;
			}
		}

IL_009b:
		{
			Hashtable_t672 * L_22 = ChannelData_get_CustomProperties_m8104(__this, /*hidden argument*/NULL);
			Object_t * L_23 = DictionaryEntry_get_Key_m6510((&V_0), /*hidden argument*/NULL);
			Object_t * L_24 = DictionaryEntry_get_Value_m6511((&V_0), /*hidden argument*/NULL);
			NullCheck(L_22);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_22, L_23, L_24);
		}

IL_00b4:
		{
			Object_t * L_25 = V_1;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0078;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xD9, FINALLY_00c4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_00c4;
	}

FINALLY_00c4:
	{ // begin finally (depth: 1)
		{
			Object_t * L_27 = V_1;
			V_8 = ((Object_t *)IsInst(L_27, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_28 = V_8;
			if (L_28)
			{
				goto IL_00d1;
			}
		}

IL_00d0:
		{
			IL2CPP_END_FINALLY(196)
		}

IL_00d1:
		{
			Object_t * L_29 = V_8;
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_29);
			IL2CPP_END_FINALLY(196)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(196)
	{
		IL2CPP_JUMP_TBL(0xD9, IL_00d9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00d9:
	{
		ArrayList_t607 * L_30 = (__this->____serverProviders_4);
		if (L_30)
		{
			goto IL_014e;
		}
	}
	{
		ChannelData_t1340 * L_31 = ___other;
		NullCheck(L_31);
		ArrayList_t607 * L_32 = (L_31->____serverProviders_4);
		if (!L_32)
		{
			goto IL_014e;
		}
	}
	{
		ChannelData_t1340 * L_33 = ___other;
		NullCheck(L_33);
		ArrayList_t607 * L_34 = (L_33->____serverProviders_4);
		NullCheck(L_34);
		Object_t * L_35 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_34);
		V_3 = L_35;
	}

IL_00fb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0129;
		}

IL_0100:
		{
			Object_t * L_36 = V_3;
			NullCheck(L_36);
			Object_t * L_37 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_36);
			V_2 = ((ProviderData_t1341 *)CastclassClass(L_37, ProviderData_t1341_il2cpp_TypeInfo_var));
			ProviderData_t1341 * L_38 = (ProviderData_t1341 *)il2cpp_codegen_object_new (ProviderData_t1341_il2cpp_TypeInfo_var);
			ProviderData__ctor_m8106(L_38, /*hidden argument*/NULL);
			V_4 = L_38;
			ProviderData_t1341 * L_39 = V_4;
			ProviderData_t1341 * L_40 = V_2;
			NullCheck(L_39);
			ProviderData_CopyFrom_m8107(L_39, L_40, /*hidden argument*/NULL);
			ArrayList_t607 * L_41 = ChannelData_get_ServerProviders_m8102(__this, /*hidden argument*/NULL);
			ProviderData_t1341 * L_42 = V_4;
			NullCheck(L_41);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_41, L_42);
		}

IL_0129:
		{
			Object_t * L_43 = V_3;
			NullCheck(L_43);
			bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_43);
			if (L_44)
			{
				goto IL_0100;
			}
		}

IL_0134:
		{
			IL2CPP_LEAVE(0x14E, FINALLY_0139);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0139;
	}

FINALLY_0139:
	{ // begin finally (depth: 1)
		{
			Object_t * L_45 = V_3;
			V_9 = ((Object_t *)IsInst(L_45, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_9;
			if (L_46)
			{
				goto IL_0146;
			}
		}

IL_0145:
		{
			IL2CPP_END_FINALLY(313)
		}

IL_0146:
		{
			Object_t * L_47 = V_9;
			NullCheck(L_47);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_47);
			IL2CPP_END_FINALLY(313)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(313)
	{
		IL2CPP_JUMP_TBL(0x14E, IL_014e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_014e:
	{
		ArrayList_t607 * L_48 = (__this->____clientProviders_5);
		if (L_48)
		{
			goto IL_01c9;
		}
	}
	{
		ChannelData_t1340 * L_49 = ___other;
		NullCheck(L_49);
		ArrayList_t607 * L_50 = (L_49->____clientProviders_5);
		if (!L_50)
		{
			goto IL_01c9;
		}
	}
	{
		ChannelData_t1340 * L_51 = ___other;
		NullCheck(L_51);
		ArrayList_t607 * L_52 = (L_51->____clientProviders_5);
		NullCheck(L_52);
		Object_t * L_53 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_52);
		V_6 = L_53;
	}

IL_0171:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01a2;
		}

IL_0176:
		{
			Object_t * L_54 = V_6;
			NullCheck(L_54);
			Object_t * L_55 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_54);
			V_5 = ((ProviderData_t1341 *)CastclassClass(L_55, ProviderData_t1341_il2cpp_TypeInfo_var));
			ProviderData_t1341 * L_56 = (ProviderData_t1341 *)il2cpp_codegen_object_new (ProviderData_t1341_il2cpp_TypeInfo_var);
			ProviderData__ctor_m8106(L_56, /*hidden argument*/NULL);
			V_7 = L_56;
			ProviderData_t1341 * L_57 = V_7;
			ProviderData_t1341 * L_58 = V_5;
			NullCheck(L_57);
			ProviderData_CopyFrom_m8107(L_57, L_58, /*hidden argument*/NULL);
			ArrayList_t607 * L_59 = ChannelData_get_ClientProviders_m8103(__this, /*hidden argument*/NULL);
			ProviderData_t1341 * L_60 = V_7;
			NullCheck(L_59);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_59, L_60);
		}

IL_01a2:
		{
			Object_t * L_61 = V_6;
			NullCheck(L_61);
			bool L_62 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_61);
			if (L_62)
			{
				goto IL_0176;
			}
		}

IL_01ae:
		{
			IL2CPP_LEAVE(0x1C9, FINALLY_01b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_01b3;
	}

FINALLY_01b3:
	{ // begin finally (depth: 1)
		{
			Object_t * L_63 = V_6;
			V_10 = ((Object_t *)IsInst(L_63, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_64 = V_10;
			if (L_64)
			{
				goto IL_01c1;
			}
		}

IL_01c0:
		{
			IL2CPP_END_FINALLY(435)
		}

IL_01c1:
		{
			Object_t * L_65 = V_10;
			NullCheck(L_65);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_65);
			IL2CPP_END_FINALLY(435)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(435)
	{
		IL2CPP_JUMP_TBL(0x1C9, IL_01c9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_01c9:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ProviderData::.ctor()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* Hashtable_t672_il2cpp_TypeInfo_var;
extern "C" void ProviderData__ctor_m8106 (ProviderData_t1341 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t672 * L_0 = (Hashtable_t672 *)il2cpp_codegen_object_new (Hashtable_t672_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3963(L_0, /*hidden argument*/NULL);
		__this->___CustomProperties_3 = L_0;
		Object__ctor_m1387(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ProviderData::CopyFrom(System.Runtime.Remoting.ProviderData)
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderData.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* IEnumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t937_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t289_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t607_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t754_il2cpp_TypeInfo_var;
extern TypeInfo* SinkProviderData_t1270_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t897_il2cpp_TypeInfo_var;
extern "C" void ProviderData_CopyFrom_m8107 (ProviderData_t1341 * __this, ProviderData_t1341 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		DictionaryEntry_t937_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		IDisposable_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		ArrayList_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		IEnumerable_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		SinkProviderData_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(959);
		IList_t897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t937  V_0 = {0};
	Object_t * V_1 = {0};
	SinkProviderData_t1270 * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t287 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t287 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___Ref_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ProviderData_t1341 * L_1 = ___other;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Ref_0);
		__this->___Ref_0 = L_2;
	}

IL_0017:
	{
		String_t* L_3 = (__this->___Id_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ProviderData_t1341 * L_4 = ___other;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Id_2);
		__this->___Id_2 = L_5;
	}

IL_002e:
	{
		String_t* L_6 = (__this->___Type_1);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		ProviderData_t1341 * L_7 = ___other;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___Type_1);
		__this->___Type_1 = L_8;
	}

IL_0045:
	{
		ProviderData_t1341 * L_9 = ___other;
		NullCheck(L_9);
		Hashtable_t672 * L_10 = (L_9->___CustomProperties_3);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_10);
		V_1 = L_11;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0092;
		}

IL_0056:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_12);
			V_0 = ((*(DictionaryEntry_t937 *)((DictionaryEntry_t937 *)UnBox (L_13, DictionaryEntry_t937_il2cpp_TypeInfo_var))));
			Hashtable_t672 * L_14 = (__this->___CustomProperties_3);
			Object_t * L_15 = DictionaryEntry_get_Key_m6510((&V_0), /*hidden argument*/NULL);
			NullCheck(L_14);
			bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_14, L_15);
			if (L_16)
			{
				goto IL_0092;
			}
		}

IL_0079:
		{
			Hashtable_t672 * L_17 = (__this->___CustomProperties_3);
			Object_t * L_18 = DictionaryEntry_get_Key_m6510((&V_0), /*hidden argument*/NULL);
			Object_t * L_19 = DictionaryEntry_get_Value_m6511((&V_0), /*hidden argument*/NULL);
			NullCheck(L_17);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_17, L_18, L_19);
		}

IL_0092:
		{
			Object_t * L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0056;
			}
		}

IL_009d:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_1;
			V_4 = ((Object_t *)IsInst(L_22, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_4;
			if (L_23)
			{
				goto IL_00af;
			}
		}

IL_00ae:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00af:
		{
			Object_t * L_24 = V_4;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_00b7:
	{
		ProviderData_t1341 * L_25 = ___other;
		NullCheck(L_25);
		Object_t * L_26 = (L_25->___CustomData_4);
		if (!L_26)
		{
			goto IL_0127;
		}
	}
	{
		Object_t * L_27 = (__this->___CustomData_4);
		if (L_27)
		{
			goto IL_00d8;
		}
	}
	{
		ArrayList_t607 * L_28 = (ArrayList_t607 *)il2cpp_codegen_object_new (ArrayList_t607_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3879(L_28, /*hidden argument*/NULL);
		__this->___CustomData_4 = L_28;
	}

IL_00d8:
	{
		ProviderData_t1341 * L_29 = ___other;
		NullCheck(L_29);
		Object_t * L_30 = (L_29->___CustomData_4);
		NullCheck(L_30);
		Object_t * L_31 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t754_il2cpp_TypeInfo_var, L_30);
		V_3 = L_31;
	}

IL_00e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0102;
		}

IL_00e9:
		{
			Object_t * L_32 = V_3;
			NullCheck(L_32);
			Object_t * L_33 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_32);
			V_2 = ((SinkProviderData_t1270 *)CastclassClass(L_33, SinkProviderData_t1270_il2cpp_TypeInfo_var));
			Object_t * L_34 = (__this->___CustomData_4);
			SinkProviderData_t1270 * L_35 = V_2;
			NullCheck(L_34);
			InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t897_il2cpp_TypeInfo_var, L_34, L_35);
		}

IL_0102:
		{
			Object_t * L_36 = V_3;
			NullCheck(L_36);
			bool L_37 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t261_il2cpp_TypeInfo_var, L_36);
			if (L_37)
			{
				goto IL_00e9;
			}
		}

IL_010d:
		{
			IL2CPP_LEAVE(0x127, FINALLY_0112);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t287 *)e.ex;
		goto FINALLY_0112;
	}

FINALLY_0112:
	{ // begin finally (depth: 1)
		{
			Object_t * L_38 = V_3;
			V_5 = ((Object_t *)IsInst(L_38, IDisposable_t289_il2cpp_TypeInfo_var));
			Object_t * L_39 = V_5;
			if (L_39)
			{
				goto IL_011f;
			}
		}

IL_011e:
		{
			IL2CPP_END_FINALLY(274)
		}

IL_011f:
		{
			Object_t * L_40 = V_5;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t289_il2cpp_TypeInfo_var, L_40);
			IL2CPP_END_FINALLY(274)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(274)
	{
		IL2CPP_JUMP_TBL(0x127, IL_0127)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t287 *)
	}

IL_0127:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.FormatterData::.ctor()
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"
extern "C" void FormatterData__ctor_m8108 (FormatterData_t1342 * __this, const MethodInfo* method)
{
	{
		ProviderData__ctor_m8106(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor()
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern "C" void RemotingException__ctor_m8109 (RemotingException_t1343 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m9805(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void RemotingException__ctor_m8110 (RemotingException_t1343 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m4949(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void RemotingException__ctor_m8111 (RemotingException_t1343 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t534 * L_0 = ___info;
		StreamingContext_t535  L_1 = ___context;
		SystemException__ctor_m9806(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String,System.Exception)
// System.Exception
#include "mscorlib_System_Exception.h"
extern "C" void RemotingException__ctor_m8112 (RemotingException_t1343 * __this, String_t* ___message, Exception_t287 * ___InnerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t287 * L_1 = ___InnerException;
		SystemException__ctor_m9807(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
