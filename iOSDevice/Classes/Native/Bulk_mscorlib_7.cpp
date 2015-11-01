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

// System.EventHandler
#include "mscorlib_System_EventHandler.h"
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void EventHandler__ctor_m9951 (EventHandler_t1502 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
extern "C" void EventHandler_Invoke_m9952 (EventHandler_t1502 * __this, Object_t * ___sender, EventArgs_t625 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandler_Invoke_m9952((EventHandler_t1502 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, EventArgs_t625 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, EventArgs_t625 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, EventArgs_t625 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_EventHandler_t1502(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t625 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * EventHandler_BeginInvoke_m9953 (EventHandler_t1502 * __this, Object_t * ___sender, EventArgs_t625 * ___e, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_EndInvoke_m9954 (EventHandler_t1502 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ResolveEventHandler__ctor_m9955 (ResolveEventHandler_t1501 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"
extern "C" Assembly_t947 * ResolveEventHandler_Invoke_m9956 (ResolveEventHandler_t1501 * __this, Object_t * ___sender, ResolveEventArgs_t1558 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResolveEventHandler_Invoke_m9956((ResolveEventHandler_t1501 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Assembly_t947 * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ResolveEventArgs_t1558 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Assembly_t947 * (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ResolveEventArgs_t1558 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Assembly_t947 * (*FunctionPointerType) (Object_t * __this, ResolveEventArgs_t1558 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Assembly_t947 * pinvoke_delegate_wrapper_ResolveEventHandler_t1501(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1558 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m9957 (ResolveEventHandler_t1501 * __this, Object_t * ___sender, ResolveEventArgs_t1558 * ___args, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t947 * ResolveEventHandler_EndInvoke_m9958 (ResolveEventHandler_t1501 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Assembly_t947 *)__result;
}
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnhandledExceptionEventHandler__ctor_m2856 (UnhandledExceptionEventHandler_t538 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
extern "C" void UnhandledExceptionEventHandler_Invoke_m9959 (UnhandledExceptionEventHandler_t538 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t521 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m9959((UnhandledExceptionEventHandler_t538 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t521 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t521 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, UnhandledExceptionEventArgs_t521 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t538(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t521 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m9960 (UnhandledExceptionEventHandler_t538 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t521 * ___e, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m9961 (UnhandledExceptionEventHandler_t538 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245.h"
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
extern "C" void U24ArrayTypeU2456_t1578_marshal(const U24ArrayTypeU2456_t1578& unmarshaled, U24ArrayTypeU2456_t1578_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2456_t1578_marshal_back(const U24ArrayTypeU2456_t1578_marshaled& marshaled, U24ArrayTypeU2456_t1578& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
extern "C" void U24ArrayTypeU2456_t1578_marshal_cleanup(U24ArrayTypeU2456_t1578_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242.h"
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
extern "C" void U24ArrayTypeU2424_t1579_marshal(const U24ArrayTypeU2424_t1579& unmarshaled, U24ArrayTypeU2424_t1579_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2424_t1579_marshal_back(const U24ArrayTypeU2424_t1579_marshaled& marshaled, U24ArrayTypeU2424_t1579& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
extern "C" void U24ArrayTypeU2424_t1579_marshal_cleanup(U24ArrayTypeU2424_t1579_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241.h"
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void U24ArrayTypeU2416_t1580_marshal(const U24ArrayTypeU2416_t1580& unmarshaled, U24ArrayTypeU2416_t1580_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2416_t1580_marshal_back(const U24ArrayTypeU2416_t1580_marshaled& marshaled, U24ArrayTypeU2416_t1580& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void U24ArrayTypeU2416_t1580_marshal_cleanup(U24ArrayTypeU2416_t1580_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0.h"
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
extern "C" void U24ArrayTypeU24120_t1581_marshal(const U24ArrayTypeU24120_t1581& unmarshaled, U24ArrayTypeU24120_t1581_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24120_t1581_marshal_back(const U24ArrayTypeU24120_t1581_marshaled& marshaled, U24ArrayTypeU24120_t1581& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
extern "C" void U24ArrayTypeU24120_t1581_marshal_cleanup(U24ArrayTypeU24120_t1581_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243.h"
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
extern "C" void U24ArrayTypeU243132_t1582_marshal(const U24ArrayTypeU243132_t1582& unmarshaled, U24ArrayTypeU243132_t1582_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU243132_t1582_marshal_back(const U24ArrayTypeU243132_t1582_marshaled& marshaled, U24ArrayTypeU243132_t1582& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
extern "C" void U24ArrayTypeU243132_t1582_marshal_cleanup(U24ArrayTypeU243132_t1582_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void U24ArrayTypeU2420_t1583_marshal(const U24ArrayTypeU2420_t1583& unmarshaled, U24ArrayTypeU2420_t1583_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2420_t1583_marshal_back(const U24ArrayTypeU2420_t1583_marshaled& marshaled, U24ArrayTypeU2420_t1583& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void U24ArrayTypeU2420_t1583_marshal_cleanup(U24ArrayTypeU2420_t1583_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0.h"
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
extern "C" void U24ArrayTypeU2432_t1584_marshal(const U24ArrayTypeU2432_t1584& unmarshaled, U24ArrayTypeU2432_t1584_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2432_t1584_marshal_back(const U24ArrayTypeU2432_t1584_marshaled& marshaled, U24ArrayTypeU2432_t1584& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
extern "C" void U24ArrayTypeU2432_t1584_marshal_cleanup(U24ArrayTypeU2432_t1584_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244.h"
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
extern "C" void U24ArrayTypeU2448_t1585_marshal(const U24ArrayTypeU2448_t1585& unmarshaled, U24ArrayTypeU2448_t1585_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2448_t1585_marshal_back(const U24ArrayTypeU2448_t1585_marshaled& marshaled, U24ArrayTypeU2448_t1585& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
extern "C" void U24ArrayTypeU2448_t1585_marshal_cleanup(U24ArrayTypeU2448_t1585_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246.h"
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
extern "C" void U24ArrayTypeU2464_t1586_marshal(const U24ArrayTypeU2464_t1586& unmarshaled, U24ArrayTypeU2464_t1586_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2464_t1586_marshal_back(const U24ArrayTypeU2464_t1586_marshaled& marshaled, U24ArrayTypeU2464_t1586& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
extern "C" void U24ArrayTypeU2464_t1586_marshal_cleanup(U24ArrayTypeU2464_t1586_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1.h"
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1587_marshal(const U24ArrayTypeU2412_t1587& unmarshaled, U24ArrayTypeU2412_t1587_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2412_t1587_marshal_back(const U24ArrayTypeU2412_t1587_marshaled& marshaled, U24ArrayTypeU2412_t1587& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1587_marshal_cleanup(U24ArrayTypeU2412_t1587_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2.h"
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
extern "C" void U24ArrayTypeU24136_t1588_marshal(const U24ArrayTypeU24136_t1588& unmarshaled, U24ArrayTypeU24136_t1588_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24136_t1588_marshal_back(const U24ArrayTypeU24136_t1588_marshaled& marshaled, U24ArrayTypeU24136_t1588& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
extern "C" void U24ArrayTypeU24136_t1588_marshal_cleanup(U24ArrayTypeU24136_t1588_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248.h"
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void U24ArrayTypeU248_t1589_marshal(const U24ArrayTypeU248_t1589& unmarshaled, U24ArrayTypeU248_t1589_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU248_t1589_marshal_back(const U24ArrayTypeU248_t1589_marshaled& marshaled, U24ArrayTypeU248_t1589& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void U24ArrayTypeU248_t1589_marshal_cleanup(U24ArrayTypeU248_t1589_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
extern "C" void U24ArrayTypeU2472_t1590_marshal(const U24ArrayTypeU2472_t1590& unmarshaled, U24ArrayTypeU2472_t1590_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2472_t1590_marshal_back(const U24ArrayTypeU2472_t1590_marshaled& marshaled, U24ArrayTypeU2472_t1590& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
extern "C" void U24ArrayTypeU2472_t1590_marshal_cleanup(U24ArrayTypeU2472_t1590_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3.h"
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
extern "C" void U24ArrayTypeU24124_t1591_marshal(const U24ArrayTypeU24124_t1591& unmarshaled, U24ArrayTypeU24124_t1591_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24124_t1591_marshal_back(const U24ArrayTypeU24124_t1591_marshaled& marshaled, U24ArrayTypeU24124_t1591& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
extern "C" void U24ArrayTypeU24124_t1591_marshal_cleanup(U24ArrayTypeU24124_t1591_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249.h"
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
extern "C" void U24ArrayTypeU2496_t1592_marshal(const U24ArrayTypeU2496_t1592& unmarshaled, U24ArrayTypeU2496_t1592_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2496_t1592_marshal_back(const U24ArrayTypeU2496_t1592_marshaled& marshaled, U24ArrayTypeU2496_t1592& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
extern "C" void U24ArrayTypeU2496_t1592_marshal_cleanup(U24ArrayTypeU2496_t1592_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1.h"
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
extern "C" void U24ArrayTypeU242048_t1593_marshal(const U24ArrayTypeU242048_t1593& unmarshaled, U24ArrayTypeU242048_t1593_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU242048_t1593_marshal_back(const U24ArrayTypeU242048_t1593_marshaled& marshaled, U24ArrayTypeU242048_t1593& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
extern "C" void U24ArrayTypeU242048_t1593_marshal_cleanup(U24ArrayTypeU242048_t1593_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2.h"
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void U24ArrayTypeU24256_t1594_marshal(const U24ArrayTypeU24256_t1594& unmarshaled, U24ArrayTypeU24256_t1594_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24256_t1594_marshal_back(const U24ArrayTypeU24256_t1594_marshaled& marshaled, U24ArrayTypeU24256_t1594& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void U24ArrayTypeU24256_t1594_marshal_cleanup(U24ArrayTypeU24256_t1594_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4.h"
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
extern "C" void U24ArrayTypeU241024_t1595_marshal(const U24ArrayTypeU241024_t1595& unmarshaled, U24ArrayTypeU241024_t1595_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU241024_t1595_marshal_back(const U24ArrayTypeU241024_t1595_marshaled& marshaled, U24ArrayTypeU241024_t1595& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
extern "C" void U24ArrayTypeU241024_t1595_marshal_cleanup(U24ArrayTypeU241024_t1595_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0.h"
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
extern "C" void U24ArrayTypeU24640_t1596_marshal(const U24ArrayTypeU24640_t1596& unmarshaled, U24ArrayTypeU24640_t1596_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24640_t1596_marshal_back(const U24ArrayTypeU24640_t1596_marshaled& marshaled, U24ArrayTypeU24640_t1596& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
extern "C" void U24ArrayTypeU24640_t1596_marshal_cleanup(U24ArrayTypeU24640_t1596_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5.h"
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1597_marshal(const U24ArrayTypeU24128_t1597& unmarshaled, U24ArrayTypeU24128_t1597_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24128_t1597_marshal_back(const U24ArrayTypeU24128_t1597_marshaled& marshaled, U24ArrayTypeU24128_t1597& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1597_marshal_cleanup(U24ArrayTypeU24128_t1597_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0.h"
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
extern "C" void U24ArrayTypeU2452_t1598_marshal(const U24ArrayTypeU2452_t1598& unmarshaled, U24ArrayTypeU2452_t1598_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2452_t1598_marshal_back(const U24ArrayTypeU2452_t1598_marshaled& marshaled, U24ArrayTypeU2452_t1598& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
extern "C" void U24ArrayTypeU2452_t1598_marshal_cleanup(U24ArrayTypeU2452_t1598_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
#ifdef __clang__
#pragma clang diagnostic pop
#endif
