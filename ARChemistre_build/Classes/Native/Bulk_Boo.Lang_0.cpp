#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "Boo_Lang_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t1545_il2cpp_TypeInfo;
// <Module>
#include "Boo_Lang_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_Builtins.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Builtins_t1546_il2cpp_TypeInfo;
// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_BuiltinsMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo StringBuilder_t480_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t587_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t26_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t153_il2cpp_TypeInfo;
extern TypeInfo Boolean_t147_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t133_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern MethodInfo StringBuilder__ctor_m2206_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m8128_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m692_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m6898_MethodInfo;
extern MethodInfo StringBuilder_Append_m8010_MethodInfo;
extern MethodInfo StringBuilder_Append_m6931_MethodInfo;
extern MethodInfo IDisposable_Dispose_m486_MethodInfo;
extern MethodInfo StringBuilder_ToString_m2209_MethodInfo;


// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern MethodInfo Builtins_join_m8375_MethodInfo;
extern "C" String_t* Builtins_join_m8375 (Object_t * __this /* static, unused */, Object_t * ___enumerable, String_t* ___separator, MethodInfo* method)
{
	StringBuilder_t480 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t480 * L_0 = (StringBuilder_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t480_il2cpp_TypeInfo));
		StringBuilder__ctor_m2206(L_0, /*hidden argument*/&StringBuilder__ctor_m2206_MethodInfo);
		V_0 = L_0;
		Object_t * L_1 = ___enumerable;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m8128_MethodInfo, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		V_2 = ((Object_t *)IsInst(L_3, InitializedTypeInfo(&IDisposable_t153_il2cpp_TypeInfo)));
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m692_MethodInfo, L_4);
			if (!L_5)
			{
				goto IL_0051;
			}
		}

IL_001f:
		{
			StringBuilder_t480 * L_6 = V_0;
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m6898_MethodInfo, L_7);
			NullCheck(L_6);
			StringBuilder_Append_m8010(L_6, L_8, /*hidden argument*/&StringBuilder_Append_m8010_MethodInfo);
			goto IL_0046;
		}

IL_0031:
		{
			StringBuilder_t480 * L_9 = V_0;
			String_t* L_10 = ___separator;
			NullCheck(L_9);
			StringBuilder_Append_m6931(L_9, L_10, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
			StringBuilder_t480 * L_11 = V_0;
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m6898_MethodInfo, L_12);
			NullCheck(L_11);
			StringBuilder_Append_m8010(L_11, L_13, /*hidden argument*/&StringBuilder_Append_m8010_MethodInfo);
		}

IL_0046:
		{
			Object_t * L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m692_MethodInfo, L_14);
			if (L_15)
			{
				goto IL_0031;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_2;
			if (!L_16)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			Object_t * L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m486_MethodInfo, L_17);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0063:
	{
		StringBuilder_t480 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2209_MethodInfo, L_18);
		return L_19;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispatcherFactory_t1548_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCacheMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispatcher.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern MethodInfo DispatcherFactory__ctor_m8376_MethodInfo;
extern "C" void DispatcherFactory__ctor_m8376 (DispatcherFactory_t1548 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern MethodInfo DispatcherFactory_Invoke_m8377_MethodInfo;
extern "C" Dispatcher_t1547 * DispatcherFactory_Invoke_m8377 (DispatcherFactory_t1548 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DispatcherFactory_Invoke_m8377((DispatcherFactory_t1548 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Dispatcher_t1547 * (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Dispatcher_t1547 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern TypeInfo Dispatcher_t1547_il2cpp_TypeInfo;
extern "C" Dispatcher_t1547 * pinvoke_delegate_wrapper_DispatcherFactory_t1548(Il2CppObject* delegate)
{
	typedef methodPointerType (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	methodPointerType _return_value = _il2cpp_pinvoke_func();
	Dispatcher_t1547 * __return_value_unmarshaled = { 0 };
	__return_value_unmarshaled = il2cpp_codegen_marshal_function_ptr_to_delegate<Dispatcher_t1547>(_return_value, &Dispatcher_t1547_il2cpp_TypeInfo);

	return __return_value_unmarshaled;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DispatcherFactory_BeginInvoke_m8378_MethodInfo;
extern "C" Object_t * DispatcherFactory_BeginInvoke_m8378 (DispatcherFactory_t1548 * __this, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern MethodInfo DispatcherFactory_EndInvoke_m8379_MethodInfo;
extern "C" Dispatcher_t1547 * DispatcherFactory_EndInvoke_m8379 (DispatcherFactory_t1548 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Dispatcher_t1547 *)__result;
}
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispatcherCache_t1550_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0MethodDeclarations.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_27.h"
extern TypeInfo DispatcherKey_t1551_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t1549_il2cpp_TypeInfo;
extern TypeInfo Dispatcher_t1547_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKeyMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_27MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern Il2CppType Dictionary_2_t1549_0_0_0;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m8422_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m8423_MethodInfo;
extern MethodInfo Monitor_Enter_m4664_MethodInfo;
extern MethodInfo Dictionary_2_Add_m8424_MethodInfo;
extern MethodInfo Monitor_Exit_m4665_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m8422_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m8423_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m8424_GenericMethod;


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern MethodInfo DispatcherCache__ctor_m8380_MethodInfo;
extern "C" void DispatcherCache__ctor_m8380 (DispatcherCache_t1550 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern MethodInfo DispatcherCache__cctor_m8381_MethodInfo;
extern TypeInfo* Dictionary_2_t1549_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m8422_MethodInfo_var;
extern "C" void DispatcherCache__cctor_m8381 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool DispatcherCache__cctor_m8381_init;
	if (!DispatcherCache__cctor_m8381_init)
	{
		Dictionary_2_t1549_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t1549_0_0_0);
		Dictionary_2__ctor_m8422_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m8422_GenericMethod);
		DispatcherCache__cctor_m8381_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherKey_t1551_il2cpp_TypeInfo));
		Object_t* L_0 = ((DispatcherKey_t1551_StaticFields*)InitializedTypeInfo(&DispatcherKey_t1551_il2cpp_TypeInfo)->static_fields)->___EqualityComparer_0;
		Dictionary_2_t1549 * L_1 = (Dictionary_2_t1549 *)il2cpp_codegen_object_new (Dictionary_2_t1549_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8422(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m8422_MethodInfo_var);
		((DispatcherCache_t1550_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo)->static_fields)->____cache_0 = L_1;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern MethodInfo DispatcherCache_Get_m8382_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m8423_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m8424_MethodInfo_var;
extern "C" Dispatcher_t1547 * DispatcherCache_Get_m8382 (DispatcherCache_t1550 * __this, DispatcherKey_t1551 * ___key, DispatcherFactory_t1548 * ___factory, MethodInfo* method)
{
	static bool DispatcherCache_Get_m8382_init;
	if (!DispatcherCache_Get_m8382_init)
	{
		Dictionary_2_TryGetValue_m8423_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m8423_GenericMethod);
		Dictionary_2_Add_m8424_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m8424_GenericMethod);
		DispatcherCache_Get_m8382_init = true;
	}
	Dispatcher_t1547 * V_0 = {0};
	Dictionary_2_t1549 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo));
		Dictionary_2_t1549 * L_0 = ((DispatcherCache_t1550_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo)->static_fields)->____cache_0;
		DispatcherKey_t1551 * L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t1551 *, Dispatcher_t1547 ** >::Invoke(Dictionary_2_TryGetValue_m8423_MethodInfo_var, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo));
		Dictionary_2_t1549 * L_3 = ((DispatcherCache_t1550_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo)->static_fields)->____cache_0;
		V_1 = L_3;
		Dictionary_2_t1549 * L_4 = V_1;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_4, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo));
			Dictionary_2_t1549 * L_5 = ((DispatcherCache_t1550_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo)->static_fields)->____cache_0;
			DispatcherKey_t1551 * L_6 = ___key;
			NullCheck(L_5);
			bool L_7 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t1551 *, Dispatcher_t1547 ** >::Invoke(Dictionary_2_TryGetValue_m8423_MethodInfo_var, L_5, L_6, (&V_0));
			if (L_7)
			{
				goto IL_0043;
			}
		}

IL_0030:
		{
			DispatcherFactory_t1548 * L_8 = ___factory;
			NullCheck(L_8);
			Dispatcher_t1547 * L_9 = (Dispatcher_t1547 *)VirtFuncInvoker0< Dispatcher_t1547 * >::Invoke(&DispatcherFactory_Invoke_m8377_MethodInfo, L_8);
			V_0 = L_9;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo));
			Dictionary_2_t1549 * L_10 = ((DispatcherCache_t1550_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo)->static_fields)->____cache_0;
			DispatcherKey_t1551 * L_11 = ___key;
			Dispatcher_t1547 * L_12 = V_0;
			NullCheck(L_10);
			VirtActionInvoker2< DispatcherKey_t1551 *, Dispatcher_t1547 * >::Invoke(Dictionary_2_Add_m8424_MethodInfo_var, L_10, L_11, L_12);
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Dictionary_2_t1549 * L_13 = V_1;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_13, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_004f:
	{
		Dispatcher_t1547 * L_14 = V_0;
		return L_14;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo _EqualityComparer_t1552_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo Type_GetHashCode_m8425_MethodInfo;
extern MethodInfo String_GetHashCode_m6857_MethodInfo;
extern MethodInfo String_op_Inequality_m2540_MethodInfo;


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
extern MethodInfo _EqualityComparer__ctor_m8383_MethodInfo;
extern "C" void _EqualityComparer__ctor_m8383 (_EqualityComparer_t1552 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern MethodInfo _EqualityComparer_GetHashCode_m8384_MethodInfo;
extern "C" int32_t _EqualityComparer_GetHashCode_m8384 (_EqualityComparer_t1552 * __this, DispatcherKey_t1551 * ___key, MethodInfo* method)
{
	{
		DispatcherKey_t1551 * L_0 = ___key;
		NullCheck(L_0);
		Type_t * L_1 = (L_0->____type_1);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Type_GetHashCode_m8425_MethodInfo, L_1);
		DispatcherKey_t1551 * L_3 = ___key;
		NullCheck(L_3);
		String_t* L_4 = (L_3->____name_2);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m6857_MethodInfo, L_4);
		DispatcherKey_t1551 * L_6 = ___key;
		NullCheck(L_6);
		TypeU5BU5D_t913* L_7 = (L_6->____arguments_3);
		NullCheck(L_7);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_2^(int32_t)L_5))^(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
	}
}
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern MethodInfo _EqualityComparer_Equals_m8385_MethodInfo;
extern "C" bool _EqualityComparer_Equals_m8385 (_EqualityComparer_t1552 * __this, DispatcherKey_t1551 * ___x, DispatcherKey_t1551 * ___y, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		DispatcherKey_t1551 * L_0 = ___x;
		NullCheck(L_0);
		Type_t * L_1 = (L_0->____type_1);
		DispatcherKey_t1551 * L_2 = ___y;
		NullCheck(L_2);
		Type_t * L_3 = (L_2->____type_1);
		if ((((Object_t*)(Type_t *)L_1) == ((Object_t*)(Type_t *)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		DispatcherKey_t1551 * L_4 = ___x;
		NullCheck(L_4);
		TypeU5BU5D_t913* L_5 = (L_4->____arguments_3);
		NullCheck(L_5);
		DispatcherKey_t1551 * L_6 = ___y;
		NullCheck(L_6);
		TypeU5BU5D_t913* L_7 = (L_6->____arguments_3);
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		DispatcherKey_t1551 * L_8 = ___x;
		NullCheck(L_8);
		String_t* L_9 = (L_8->____name_2);
		DispatcherKey_t1551 * L_10 = ___y;
		NullCheck(L_10);
		String_t* L_11 = (L_10->____name_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_12 = String_op_Inequality_m2540(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&String_op_Inequality_m2540_MethodInfo);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0049:
	{
		DispatcherKey_t1551 * L_13 = ___x;
		NullCheck(L_13);
		TypeU5BU5D_t913* L_14 = (L_13->____arguments_3);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		DispatcherKey_t1551 * L_17 = ___y;
		NullCheck(L_17);
		TypeU5BU5D_t913* L_18 = (L_17->____arguments_3);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_14, L_16))) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_18, L_20)))))
		{
			goto IL_0060;
		}
	}
	{
		return 0;
	}

IL_0060:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0064:
	{
		int32_t L_22 = V_0;
		DispatcherKey_t1551 * L_23 = ___x;
		NullCheck(L_23);
		TypeU5BU5D_t913* L_24 = (L_23->____arguments_3);
		NullCheck(L_24);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
extern MethodInfo DispatcherKey__ctor_m8386_MethodInfo;
extern "C" void DispatcherKey__ctor_m8386 (DispatcherKey_t1551 * __this, Type_t * ___type, String_t* ___name, TypeU5BU5D_t913* ___arguments, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Type_t * L_0 = ___type;
		__this->____type_1 = L_0;
		String_t* L_1 = ___name;
		__this->____name_2 = L_1;
		TypeU5BU5D_t913* L_2 = ___arguments;
		__this->____arguments_3 = L_2;
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.cctor()
extern MethodInfo DispatcherKey__cctor_m8387_MethodInfo;
extern "C" void DispatcherKey__cctor_m8387 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		_EqualityComparer_t1552 * L_0 = (_EqualityComparer_t1552 *)il2cpp_codegen_object_new (InitializedTypeInfo(&_EqualityComparer_t1552_il2cpp_TypeInfo));
		_EqualityComparer__ctor_m8383(L_0, /*hidden argument*/&_EqualityComparer__ctor_m8383_MethodInfo);
		((DispatcherKey_t1551_StaticFields*)InitializedTypeInfo(&DispatcherKey_t1551_il2cpp_TypeInfo)->static_fields)->___EqualityComparer_0 = L_0;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NumericPromotions_t1554_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotioMethodDeclarations.h"



// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistry.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExtensionRegistry_t1556_il2cpp_TypeInfo;
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistryMethodDeclarations.h"

// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_gen.h"
extern TypeInfo List_1_t1555_il2cpp_TypeInfo;
// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_genMethodDeclarations.h"
extern Il2CppType List_1_t1555_0_0_0;
extern MethodInfo List_1__ctor_m8426_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m8426_GenericMethod;


// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
extern MethodInfo ExtensionRegistry__ctor_m8388_MethodInfo;
extern TypeInfo* List_1_t1555_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m8426_MethodInfo_var;
extern "C" void ExtensionRegistry__ctor_m8388 (ExtensionRegistry_t1556 * __this, MethodInfo* method)
{
	static bool ExtensionRegistry__ctor_m8388_init;
	if (!ExtensionRegistry__ctor_m8388_init)
	{
		List_1_t1555_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1555_0_0_0);
		List_1__ctor_m8426_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m8426_GenericMethod);
		ExtensionRegistry__ctor_m8388_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1555_il2cpp_TypeInfo_var);
		List_1_t1555 * L_0 = (List_1_t1555 *)il2cpp_codegen_object_new (List_1_t1555_il2cpp_TypeInfo_var);
		List_1__ctor_m8426(L_0, /*hidden argument*/List_1__ctor_m8426_MethodInfo_var);
		__this->____extensions_0 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m419(L_1, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		__this->____classLock_1 = L_1;
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
extern MethodInfo ExtensionRegistry_get_Extensions_m8389_MethodInfo;
extern "C" Object_t* ExtensionRegistry_get_Extensions_m8389 (ExtensionRegistry_t1556 * __this, MethodInfo* method)
{
	{
		List_1_t1555 * L_0 = (__this->____extensions_0);
		return L_0;
	}
}
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMet.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1559_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMetMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
extern TypeInfo IEnumerator_1_t1560_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t248_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t1557_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t1558_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo MemberTypes_t1564_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
extern Il2CppType IEnumerable_1_t1557_0_0_0;
extern Il2CppType IEnumerator_1_t1558_0_0_0;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m8394_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m8427_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m8390_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m8428_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m8429_MethodInfo;
extern MethodInfo MemberInfo_get_MemberType_m8430_MethodInfo;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m8428_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m8429_GenericMethod;


// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::.ctor()
extern "C" void U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m8390 (U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m8391_MethodInfo;
extern "C" MethodInfo_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m8391 (U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * __this, MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m8392_MethodInfo;
extern "C" Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m8392 (U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * __this, MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Collections.IEnumerator Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m8393_MethodInfo;
extern "C" Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m8393 (U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m8394_MethodInfo, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
extern "C" Object_t* U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m8394 (U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * __this, MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___$PC_2);
		int32_t L_1 = Interlocked_CompareExchange_m8427(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/&Interlocked_CompareExchange_m8427_MethodInfo);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * L_2 = (U3CGetExtensionMethodsU3Ec__IteratorC_t1559 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetExtensionMethodsU3Ec__IteratorC_t1559_il2cpp_TypeInfo));
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m8390(L_2, /*hidden argument*/&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m8390_MethodInfo);
		return L_2;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::MoveNext()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m8395_MethodInfo;
extern MethodInfo* IEnumerable_1_GetEnumerator_m8428_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m8429_MethodInfo_var;
extern "C" bool U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m8395 (U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * __this, MethodInfo* method)
{
	static bool U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m8395_init;
	if (!U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m8395_init)
	{
		IEnumerable_1_GetEnumerator_m8428_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m8428_GenericMethod);
		IEnumerator_1_get_Current_m8429_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m8429_GenericMethod);
		U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m8395_init = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_2);
		V_0 = L_0;
		__this->___$PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c2;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		ExtensionRegistry_t1556 * L_2 = ((RuntimeServices_t248_StaticFields*)InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo)->static_fields)->____extensions_3;
		NullCheck(L_2);
		Object_t* L_3 = ExtensionRegistry_get_Extensions_m8389(L_2, /*hidden argument*/&ExtensionRegistry_get_Extensions_m8389_MethodInfo);
		NullCheck(L_3);
		Object_t* L_4 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m8428_MethodInfo_var, L_3);
		__this->___U3C$s_49U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_008d;
			}
		}

IL_0047:
		{
			goto IL_008d;
		}

IL_004c:
		{
			Object_t* L_6 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_6);
			MemberInfo_t * L_7 = (MemberInfo_t *)InterfaceFuncInvoker0< MemberInfo_t * >::Invoke(IEnumerator_1_get_Current_m8429_MethodInfo_var, L_6);
			__this->___U3CmemberU3E__1_1 = L_7;
			MemberInfo_t * L_8 = (__this->___U3CmemberU3E__1_1);
			NullCheck(L_8);
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MemberInfo_get_MemberType_m8430_MethodInfo, L_8);
			if ((!(((uint32_t)L_9) == ((uint32_t)8))))
			{
				goto IL_008d;
			}
		}

IL_006e:
		{
			MemberInfo_t * L_10 = (__this->___U3CmemberU3E__1_1);
			__this->___$current_3 = ((MethodInfo_t *)Castclass(L_10, InitializedTypeInfo(&MethodInfo_t_il2cpp_TypeInfo)));
			__this->___$PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xC4, FINALLY_00a2);
		}

IL_008d:
		{
			Object_t* L_11 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m692_MethodInfo, L_11);
			if (L_12)
			{
				goto IL_004c;
			}
		}

IL_009d:
		{
			IL2CPP_LEAVE(0xBB, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a6;
			}
		}

IL_00a5:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00a6:
		{
			Object_t* L_14 = (__this->___U3C$s_49U3E__0_0);
			if (L_14)
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
			Object_t* L_15 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m486_MethodInfo, L_15);
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00bb:
	{
		__this->___$PC_2 = (-1);
	}

IL_00c2:
	{
		return 0;
	}

IL_00c4:
	{
		return 1;
	}
	// Dead block : IL_00c6: ldloc.2
}
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Dispose()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m8396_MethodInfo;
extern "C" void U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m8396 (U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_2);
		V_0 = L_0;
		__this->___$PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (__this->___U3C$s_49U3E__0_0);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m486_MethodInfo, L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_003b:
	{
		return;
	}
}
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__Ano.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t1561_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__AnoMethodDeclarations.h"

extern MethodInfo RuntimeServices_CreateCoerceDispatcher_m8403_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::.ctor()
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D__ctor_m8397_MethodInfo;
extern "C" void U3CCoerceU3Ec__AnonStorey1D__ctor_m8397 (U3CCoerceU3Ec__AnonStorey1D_t1561 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::<>m__15()
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m8398_MethodInfo;
extern "C" Dispatcher_t1547 * U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m8398 (U3CCoerceU3Ec__AnonStorey1D_t1561 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___value_0);
		Type_t * L_1 = (__this->___toType_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		Dispatcher_t1547 * L_2 = RuntimeServices_CreateCoerceDispatcher_m8403(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&RuntimeServices_CreateCoerceDispatcher_m8403_MethodInfo);
		return L_2;
	}
}
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitCon.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1562_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitConMethodDeclarations.h"

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
extern TypeInfo ObjectU5BU5D_t164_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t1169_il2cpp_TypeInfo;
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t164_0_0_0;
extern MethodInfo MethodBase_Invoke_m8431_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::.ctor()
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m8399_MethodInfo;
extern "C" void U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m8399 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1562 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::<>m__16(System.Object,System.Object[])
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m8400_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" Object_t * U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m8400 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1562 * __this, Object_t * ___target, ObjectU5BU5D_t164* ___args, MethodInfo* method)
{
	static bool U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m8400_init;
	if (!U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m8400_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m8400_init = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___method_0);
		ObjectU5BU5D_t164* L_1 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 1));
		Object_t * L_2 = ___target;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t164* >::Invoke(&MethodBase_Invoke_m8431_MethodInfo, L_0, NULL, L_1);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
extern TypeInfo TypeU5BU5D_t913_il2cpp_TypeInfo;
extern TypeInfo ICoercible_t1565_il2cpp_TypeInfo;
extern TypeInfo TypeCode_t1566_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t521_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t205_il2cpp_TypeInfo;
extern TypeInfo Decimal_t1567_il2cpp_TypeInfo;
extern TypeInfo IFormatProvider_t1568_il2cpp_TypeInfo;
extern TypeInfo Double_t939_il2cpp_TypeInfo;
extern TypeInfo Single_t139_il2cpp_TypeInfo;
extern TypeInfo UInt64_t1223_il2cpp_TypeInfo;
extern TypeInfo Int64_t1166_il2cpp_TypeInfo;
extern TypeInfo UInt32_t1167_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t168_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t169_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t1563_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t1171_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern Il2CppType RuntimeServices_t248_0_0_0;
extern Il2CppType TypeU5BU5D_t913_0_0_0;
extern Il2CppType Dispatcher_t1547_0_0_0;
extern Il2CppType NumericPromotions_t1554_0_0_0;
extern Il2CppType IEnumerable_1_t1563_0_0_0;
extern Il2CppType IEnumerator_1_t1560_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m498_MethodInfo;
extern MethodInfo Object_GetType_m568_MethodInfo;
extern MethodInfo RuntimeServices_GetDispatcher_m8402_MethodInfo;
extern MethodInfo Dispatcher_Invoke_m8419_MethodInfo;
extern MethodInfo Type_IsInstanceOfType_m8432_MethodInfo;
extern MethodInfo RuntimeServices_IdentityDispatcher_m8408_MethodInfo;
extern MethodInfo Dispatcher__ctor_m8418_MethodInfo;
extern MethodInfo RuntimeServices_CoercibleDispatcher_m8407_MethodInfo;
extern MethodInfo RuntimeServices_IsPromotableNumeric_m8405_MethodInfo;
extern MethodInfo RuntimeServices_EmitPromotionDispatcher_m8404_MethodInfo;
extern MethodInfo RuntimeServices_FindImplicitConversionOperator_m8415_MethodInfo;
extern MethodInfo RuntimeServices_EmitImplicitConversionDispatcher_m8406_MethodInfo;
extern MethodInfo Type_GetTypeCode_m8433_MethodInfo;
extern MethodInfo String_Concat_m621_MethodInfo;
extern MethodInfo Type_GetMethod_m8434_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m8435_MethodInfo;
extern MethodInfo RuntimeServices_IsPromotableNumeric_m8414_MethodInfo;
extern MethodInfo ICoercible_Coerce_m8436_MethodInfo;
extern MethodInfo String_Concat_m540_MethodInfo;
extern MethodInfo String_Concat_m495_MethodInfo;
extern MethodInfo Object_Equals_m713_MethodInfo;
extern MethodInfo RuntimeServices_IsNumeric_m8409_MethodInfo;
extern MethodInfo RuntimeServices_EqualityOperator_m8413_MethodInfo;
extern MethodInfo RuntimeServices_ArrayEqualityImpl_m8411_MethodInfo;
extern MethodInfo Array_get_Rank_m7995_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2726_MethodInfo;
extern MethodInfo Array_get_Length_m7989_MethodInfo;
extern MethodInfo Array_GetValue_m8437_MethodInfo;
extern MethodInfo RuntimeServices_EqualityOperator_m8410_MethodInfo;
extern MethodInfo RuntimeServices_GetConvertTypeCode_m8412_MethodInfo;
extern MethodInfo IConvertible_ToDecimal_m8438_MethodInfo;
extern MethodInfo Decimal_op_Equality_m8439_MethodInfo;
extern MethodInfo IConvertible_ToDouble_m8440_MethodInfo;
extern MethodInfo IConvertible_ToSingle_m8441_MethodInfo;
extern MethodInfo IConvertible_ToUInt64_m8442_MethodInfo;
extern MethodInfo IConvertible_ToInt64_m8443_MethodInfo;
extern MethodInfo IConvertible_ToUInt32_m8444_MethodInfo;
extern MethodInfo IConvertible_ToInt32_m8445_MethodInfo;
extern MethodInfo Type_GetMethods_m569_MethodInfo;
extern MethodInfo RuntimeServices_FindImplicitConversionMethod_m8417_MethodInfo;
extern MethodInfo RuntimeServices_GetExtensionMethods_m8416_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m8446_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m8447_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m6929_MethodInfo;
extern MethodInfo MethodInfo_get_ReturnType_m8448_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m6940_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m6941_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m6867_MethodInfo;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m8446_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m8447_GenericMethod;


// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern MethodInfo RuntimeServices__cctor_m8401_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" void RuntimeServices__cctor_m8401 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool RuntimeServices__cctor_m8401_init;
	if (!RuntimeServices__cctor_m8401_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		RuntimeServices__cctor_m8401_init = true;
	}
	{
		((RuntimeServices_t248_StaticFields*)InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo)->static_fields)->___NoArguments_0 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 0));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&RuntimeServices_t248_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		((RuntimeServices_t248_StaticFields*)InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo)->static_fields)->___RuntimeServicesType_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo));
		DispatcherCache_t1550 * L_1 = (DispatcherCache_t1550 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherCache_t1550_il2cpp_TypeInfo));
		DispatcherCache__ctor_m8380(L_1, /*hidden argument*/&DispatcherCache__ctor_m8380_MethodInfo);
		((RuntimeServices_t248_StaticFields*)InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo)->static_fields)->____cache_2 = L_1;
		ExtensionRegistry_t1556 * L_2 = (ExtensionRegistry_t1556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtensionRegistry_t1556_il2cpp_TypeInfo));
		ExtensionRegistry__ctor_m8388(L_2, /*hidden argument*/&ExtensionRegistry__ctor_m8388_MethodInfo);
		((RuntimeServices_t248_StaticFields*)InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo)->static_fields)->____extensions_3 = L_2;
		bool L_3 = 1;
		Object_t * L_4 = Box(InitializedTypeInfo(&Boolean_t147_il2cpp_TypeInfo), &L_3);
		((RuntimeServices_t248_StaticFields*)InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo)->static_fields)->___True_4 = L_4;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" Dispatcher_t1547 * RuntimeServices_GetDispatcher_m8402 (Object_t * __this /* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t913* ___cacheKeyTypes, DispatcherFactory_t1548 * ___factory, MethodInfo* method)
{
	Type_t * V_0 = {0};
	DispatcherKey_t1551 * V_1 = {0};
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ___target;
		Type_t * L_1 = ((Type_t *)IsInst(L_0, InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		Object_t * L_2 = ___target;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m568(L_2, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		G_B2_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B2_0;
		Type_t * L_4 = V_0;
		String_t* L_5 = ___cacheKeyName;
		TypeU5BU5D_t913* L_6 = ___cacheKeyTypes;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherKey_t1551_il2cpp_TypeInfo));
		DispatcherKey_t1551 * L_7 = (DispatcherKey_t1551 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherKey_t1551_il2cpp_TypeInfo));
		DispatcherKey__ctor_m8386(L_7, L_4, L_5, L_6, /*hidden argument*/&DispatcherKey__ctor_m8386_MethodInfo);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		DispatcherCache_t1550 * L_8 = ((RuntimeServices_t248_StaticFields*)InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo)->static_fields)->____cache_2;
		DispatcherKey_t1551 * L_9 = V_1;
		DispatcherFactory_t1548 * L_10 = ___factory;
		NullCheck(L_8);
		Dispatcher_t1547 * L_11 = DispatcherCache_Get_m8382(L_8, L_9, L_10, /*hidden argument*/&DispatcherCache_Get_m8382_MethodInfo);
		return L_11;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern MethodInfo RuntimeServices_Coerce_m1006_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern "C" Object_t * RuntimeServices_Coerce_m1006 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method)
{
	static bool RuntimeServices_Coerce_m1006_init;
	if (!RuntimeServices_Coerce_m1006_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		RuntimeServices_Coerce_m1006_init = true;
	}
	ObjectU5BU5D_t164* V_0 = {0};
	Dispatcher_t1547 * V_1 = {0};
	U3CCoerceU3Ec__AnonStorey1D_t1561 * V_2 = {0};
	{
		U3CCoerceU3Ec__AnonStorey1D_t1561 * L_0 = (U3CCoerceU3Ec__AnonStorey1D_t1561 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CCoerceU3Ec__AnonStorey1D_t1561_il2cpp_TypeInfo));
		U3CCoerceU3Ec__AnonStorey1D__ctor_m8397(L_0, /*hidden argument*/&U3CCoerceU3Ec__AnonStorey1D__ctor_m8397_MethodInfo);
		V_2 = L_0;
		U3CCoerceU3Ec__AnonStorey1D_t1561 * L_1 = V_2;
		Object_t * L_2 = ___value;
		NullCheck(L_1);
		L_1->___value_0 = L_2;
		U3CCoerceU3Ec__AnonStorey1D_t1561 * L_3 = V_2;
		Type_t * L_4 = ___toType;
		NullCheck(L_3);
		L_3->___toType_1 = L_4;
		U3CCoerceU3Ec__AnonStorey1D_t1561 * L_5 = V_2;
		NullCheck(L_5);
		Object_t * L_6 = (L_5->___value_0);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return NULL;
	}

IL_0021:
	{
		ObjectU5BU5D_t164* L_7 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 1));
		U3CCoerceU3Ec__AnonStorey1D_t1561 * L_8 = V_2;
		NullCheck(L_8);
		Type_t * L_9 = (L_8->___toType_1);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_9;
		V_0 = L_7;
		U3CCoerceU3Ec__AnonStorey1D_t1561 * L_10 = V_2;
		NullCheck(L_10);
		Object_t * L_11 = (L_10->___value_0);
		TypeU5BU5D_t913* L_12 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 1));
		U3CCoerceU3Ec__AnonStorey1D_t1561 * L_13 = V_2;
		NullCheck(L_13);
		Type_t * L_14 = (L_13->___toType_1);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, L_14);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_12, 0)) = (Type_t *)L_14;
		U3CCoerceU3Ec__AnonStorey1D_t1561 * L_15 = V_2;
		IntPtr_t L_16 = { &U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m8398_MethodInfo };
		DispatcherFactory_t1548 * L_17 = (DispatcherFactory_t1548 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherFactory_t1548_il2cpp_TypeInfo));
		DispatcherFactory__ctor_m8376(L_17, L_15, L_16, /*hidden argument*/&DispatcherFactory__ctor_m8376_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		Dispatcher_t1547 * L_18 = RuntimeServices_GetDispatcher_m8402(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral933, L_12, L_17, /*hidden argument*/&RuntimeServices_GetDispatcher_m8402_MethodInfo);
		V_1 = L_18;
		Dispatcher_t1547 * L_19 = V_1;
		U3CCoerceU3Ec__AnonStorey1D_t1561 * L_20 = V_2;
		NullCheck(L_20);
		Object_t * L_21 = (L_20->___value_0);
		ObjectU5BU5D_t164* L_22 = V_0;
		NullCheck(L_19);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t164* >::Invoke(&Dispatcher_Invoke_m8419_MethodInfo, L_19, L_21, L_22);
		return L_23;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern "C" Dispatcher_t1547 * RuntimeServices_CreateCoerceDispatcher_m8403 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method)
{
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	{
		Type_t * L_0 = ___toType;
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Type_IsInstanceOfType_m8432_MethodInfo, L_0, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_3 = { &RuntimeServices_IdentityDispatcher_m8408_MethodInfo };
		Dispatcher_t1547 * L_4 = (Dispatcher_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t1547_il2cpp_TypeInfo));
		Dispatcher__ctor_m8418(L_4, NULL, L_3, /*hidden argument*/&Dispatcher__ctor_m8418_MethodInfo);
		return L_4;
	}

IL_0019:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, InitializedTypeInfo(&ICoercible_t1565_il2cpp_TypeInfo))))
		{
			goto IL_0031;
		}
	}
	{
		IntPtr_t L_6 = { &RuntimeServices_CoercibleDispatcher_m8407_MethodInfo };
		Dispatcher_t1547 * L_7 = (Dispatcher_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t1547_il2cpp_TypeInfo));
		Dispatcher__ctor_m8418(L_7, NULL, L_6, /*hidden argument*/&Dispatcher__ctor_m8418_MethodInfo);
		return L_7;
	}

IL_0031:
	{
		Object_t * L_8 = ___value;
		NullCheck(L_8);
		Type_t * L_9 = Object_GetType_m568(L_8, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		V_0 = L_9;
		Type_t * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		bool L_11 = RuntimeServices_IsPromotableNumeric_m8405(NULL /*static, unused*/, L_10, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m8405_MethodInfo);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_12 = ___toType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		bool L_13 = RuntimeServices_IsPromotableNumeric_m8405(NULL /*static, unused*/, L_12, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m8405_MethodInfo);
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_14 = V_0;
		Type_t * L_15 = ___toType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		Dispatcher_t1547 * L_16 = RuntimeServices_EmitPromotionDispatcher_m8404(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&RuntimeServices_EmitPromotionDispatcher_m8404_MethodInfo);
		return L_16;
	}

IL_0056:
	{
		Type_t * L_17 = V_0;
		Type_t * L_18 = ___toType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		MethodInfo_t * L_19 = RuntimeServices_FindImplicitConversionOperator_m8415(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&RuntimeServices_FindImplicitConversionOperator_m8415_MethodInfo);
		V_1 = L_19;
		MethodInfo_t * L_20 = V_1;
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		IntPtr_t L_21 = { &RuntimeServices_IdentityDispatcher_m8408_MethodInfo };
		Dispatcher_t1547 * L_22 = (Dispatcher_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t1547_il2cpp_TypeInfo));
		Dispatcher__ctor_m8418(L_22, NULL, L_21, /*hidden argument*/&Dispatcher__ctor_m8418_MethodInfo);
		return L_22;
	}

IL_0071:
	{
		MethodInfo_t * L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		Dispatcher_t1547 * L_24 = RuntimeServices_EmitImplicitConversionDispatcher_m8406(NULL /*static, unused*/, L_23, /*hidden argument*/&RuntimeServices_EmitImplicitConversionDispatcher_m8406_MethodInfo);
		return L_24;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" Dispatcher_t1547 * RuntimeServices_EmitPromotionDispatcher_m8404 (Object_t * __this /* static, unused */, Type_t * ___fromType, Type_t * ___toType, MethodInfo* method)
{
	static bool RuntimeServices_EmitPromotionDispatcher_m8404_init;
	if (!RuntimeServices_EmitPromotionDispatcher_m8404_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		RuntimeServices_EmitPromotionDispatcher_m8404_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Dispatcher_t1547_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		Type_t * L_1 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&NumericPromotions_t1554_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		ObjectU5BU5D_t164* L_2 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 4));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral934);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)(String_t*) &_stringLiteral934;
		ObjectU5BU5D_t164* L_3 = L_2;
		Type_t * L_4 = ___fromType;
		int32_t L_5 = Type_GetTypeCode_m8433(NULL /*static, unused*/, L_4, /*hidden argument*/&Type_GetTypeCode_m8433_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&TypeCode_t1566_il2cpp_TypeInfo), &L_6);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t164* L_8 = L_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral935);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)(String_t*) &_stringLiteral935;
		ObjectU5BU5D_t164* L_9 = L_8;
		Type_t * L_10 = ___toType;
		int32_t L_11 = Type_GetTypeCode_m8433(NULL /*static, unused*/, L_10, /*hidden argument*/&Type_GetTypeCode_m8433_MethodInfo);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&TypeCode_t1566_il2cpp_TypeInfo), &L_12);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_13;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = String_Concat_m621(NULL /*static, unused*/, L_9, /*hidden argument*/&String_Concat_m621_MethodInfo);
		NullCheck(L_1);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(&Type_GetMethod_m8434_MethodInfo, L_1, L_14);
		Delegate_t148 * L_16 = Delegate_CreateDelegate_m8435(NULL /*static, unused*/, L_0, L_15, /*hidden argument*/&Delegate_CreateDelegate_m8435_MethodInfo);
		return ((Dispatcher_t1547 *)Castclass(L_16, InitializedTypeInfo(&Dispatcher_t1547_il2cpp_TypeInfo)));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern "C" bool RuntimeServices_IsPromotableNumeric_m8405 (Object_t * __this /* static, unused */, Type_t * ___fromType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___fromType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_1 = Type_GetTypeCode_m8433(NULL /*static, unused*/, L_0, /*hidden argument*/&Type_GetTypeCode_m8433_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		bool L_2 = RuntimeServices_IsPromotableNumeric_m8414(NULL /*static, unused*/, L_1, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m8414_MethodInfo);
		return L_2;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern "C" Dispatcher_t1547 * RuntimeServices_EmitImplicitConversionDispatcher_m8406 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, MethodInfo* method)
{
	U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1562 * V_0 = {0};
	{
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1562 * L_0 = (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1562 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1562_il2cpp_TypeInfo));
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m8399(L_0, /*hidden argument*/&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m8399_MethodInfo);
		V_0 = L_0;
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1562 * L_1 = V_0;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_1);
		L_1->___method_0 = L_2;
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1562 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m8400_MethodInfo };
		Dispatcher_t1547 * L_5 = (Dispatcher_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t1547_il2cpp_TypeInfo));
		Dispatcher__ctor_m8418(L_5, L_3, L_4, /*hidden argument*/&Dispatcher__ctor_m8418_MethodInfo);
		return L_5;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_CoercibleDispatcher_m8407 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t164* ___args, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		ObjectU5BU5D_t164* L_1 = ___args;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICoercible_t1565_il2cpp_TypeInfo))));
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(&ICoercible_Coerce_m8436_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICoercible_t1565_il2cpp_TypeInfo))), ((Type_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2)), InitializedTypeInfo(&Type_t_il2cpp_TypeInfo))));
		return L_3;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_IdentityDispatcher_m8408 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t164* ___args, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		return L_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern "C" bool RuntimeServices_IsNumeric_m8409 (Object_t * __this /* static, unused */, int32_t ___code, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___code;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 0)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 2)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 3)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 4)
		{
			goto IL_0041;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 5)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 6)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 7)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 9)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 10)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0051;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return 1;
	}

IL_003f:
	{
		return 1;
	}

IL_0041:
	{
		return 1;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 0;
	}
}
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern MethodInfo RuntimeServices_op_Addition_m993_MethodInfo;
extern "C" String_t* RuntimeServices_op_Addition_m993 (Object_t * __this /* static, unused */, String_t* ___lhs, String_t* ___rhs, MethodInfo* method)
{
	{
		String_t* L_0 = ___lhs;
		String_t* L_1 = ___rhs;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_Concat_m540_MethodInfo);
		return L_2;
	}
}
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.Object)
extern MethodInfo RuntimeServices_op_Addition_m992_MethodInfo;
extern "C" String_t* RuntimeServices_op_Addition_m992 (Object_t * __this /* static, unused */, String_t* ___lhs, Object_t * ___rhs, MethodInfo* method)
{
	{
		String_t* L_0 = ___lhs;
		Object_t * L_1 = ___rhs;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m495(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_Concat_m495_MethodInfo);
		return L_2;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern "C" bool RuntimeServices_EqualityOperator_m8410 (Object_t * __this /* static, unused */, Object_t * ___lhs, Object_t * ___rhs, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	Array_t * V_2 = {0};
	Array_t * V_3 = {0};
	int32_t G_B15_0 = 0;
	{
		Object_t * L_0 = ___lhs;
		Object_t * L_1 = ___rhs;
		if ((!(((Object_t*)(Object_t *)L_0) == ((Object_t*)(Object_t *)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return 1;
	}

IL_0009:
	{
		Object_t * L_2 = ___lhs;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___rhs;
		Object_t * L_4 = ___lhs;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m713_MethodInfo, L_3, L_4);
		return L_5;
	}

IL_0017:
	{
		Object_t * L_6 = ___rhs;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		Object_t * L_7 = ___lhs;
		Object_t * L_8 = ___rhs;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m713_MethodInfo, L_7, L_8);
		return L_9;
	}

IL_0025:
	{
		Object_t * L_10 = ___lhs;
		NullCheck(L_10);
		Type_t * L_11 = Object_GetType_m568(L_10, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_12 = Type_GetTypeCode_m8433(NULL /*static, unused*/, L_11, /*hidden argument*/&Type_GetTypeCode_m8433_MethodInfo);
		V_0 = L_12;
		Object_t * L_13 = ___rhs;
		NullCheck(L_13);
		Type_t * L_14 = Object_GetType_m568(L_13, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		int32_t L_15 = Type_GetTypeCode_m8433(NULL /*static, unused*/, L_14, /*hidden argument*/&Type_GetTypeCode_m8433_MethodInfo);
		V_1 = L_15;
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		bool L_17 = RuntimeServices_IsNumeric_m8409(NULL /*static, unused*/, L_16, /*hidden argument*/&RuntimeServices_IsNumeric_m8409_MethodInfo);
		if (!L_17)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		bool L_19 = RuntimeServices_IsNumeric_m8409(NULL /*static, unused*/, L_18, /*hidden argument*/&RuntimeServices_IsNumeric_m8409_MethodInfo);
		if (!L_19)
		{
			goto IL_005d;
		}
	}
	{
		Object_t * L_20 = ___lhs;
		int32_t L_21 = V_0;
		Object_t * L_22 = ___rhs;
		int32_t L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		bool L_24 = RuntimeServices_EqualityOperator_m8413(NULL /*static, unused*/, L_20, L_21, L_22, L_23, /*hidden argument*/&RuntimeServices_EqualityOperator_m8413_MethodInfo);
		return L_24;
	}

IL_005d:
	{
		Object_t * L_25 = ___lhs;
		V_2 = ((Array_t *)IsInst(L_25, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo)));
		Array_t * L_26 = V_2;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		Object_t * L_27 = ___rhs;
		V_3 = ((Array_t *)IsInst(L_27, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo)));
		Array_t * L_28 = V_3;
		if (!L_28)
		{
			goto IL_007f;
		}
	}
	{
		Array_t * L_29 = V_2;
		Array_t * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		bool L_31 = RuntimeServices_ArrayEqualityImpl_m8411(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/&RuntimeServices_ArrayEqualityImpl_m8411_MethodInfo);
		return L_31;
	}

IL_007f:
	{
		Object_t * L_32 = ___lhs;
		Object_t * L_33 = ___rhs;
		NullCheck(L_32);
		bool L_34 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m713_MethodInfo, L_32, L_33);
		if (L_34)
		{
			goto IL_0094;
		}
	}
	{
		Object_t * L_35 = ___rhs;
		Object_t * L_36 = ___lhs;
		NullCheck(L_35);
		bool L_37 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m713_MethodInfo, L_35, L_36);
		G_B15_0 = ((int32_t)(L_37));
		goto IL_0095;
	}

IL_0094:
	{
		G_B15_0 = 1;
	}

IL_0095:
	{
		return G_B15_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern "C" bool RuntimeServices_ArrayEqualityImpl_m8411 (Object_t * __this /* static, unused */, Array_t * ___lhs, Array_t * ___rhs, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Array_t * L_0 = ___lhs;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Rank_m7995(L_0, /*hidden argument*/&Array_get_Rank_m7995_MethodInfo);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		Array_t * L_2 = ___rhs;
		NullCheck(L_2);
		int32_t L_3 = Array_get_Rank_m7995(L_2, /*hidden argument*/&Array_get_Rank_m7995_MethodInfo);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t521 * L_4 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_4, (String_t*) &_stringLiteral936, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		Array_t * L_5 = ___lhs;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7989(L_5, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		Array_t * L_7 = ___rhs;
		NullCheck(L_7);
		int32_t L_8 = Array_get_Length_m7989(L_7, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		return 0;
	}

IL_0036:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003d:
	{
		Array_t * L_9 = ___lhs;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Object_t * L_11 = Array_GetValue_m8437(L_9, L_10, /*hidden argument*/&Array_GetValue_m8437_MethodInfo);
		Array_t * L_12 = ___rhs;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Object_t * L_14 = Array_GetValue_m8437(L_12, L_13, /*hidden argument*/&Array_GetValue_m8437_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		bool L_15 = RuntimeServices_EqualityOperator_m8410(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/&RuntimeServices_EqualityOperator_m8410_MethodInfo);
		if (L_15)
		{
			goto IL_0057;
		}
	}
	{
		return 0;
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		Array_t * L_18 = ___lhs;
		NullCheck(L_18);
		int32_t L_19 = Array_get_Length_m7989(L_18, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		return 1;
	}
}
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C" int32_t RuntimeServices_GetConvertTypeCode_m8412 (Object_t * __this /* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, MethodInfo* method)
{
	{
		int32_t L_0 = ___lhsTypeCode;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___rhsTypeCode;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0013;
		}
	}

IL_0010:
	{
		return (int32_t)(((int32_t)15));
	}

IL_0013:
	{
		int32_t L_2 = ___lhsTypeCode;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)14))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___rhsTypeCode;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0026;
		}
	}

IL_0023:
	{
		return (int32_t)(((int32_t)14));
	}

IL_0026:
	{
		int32_t L_4 = ___lhsTypeCode;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_5 = ___rhsTypeCode;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0039;
		}
	}

IL_0036:
	{
		return (int32_t)(((int32_t)13));
	}

IL_0039:
	{
		int32_t L_6 = ___lhsTypeCode;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = ___rhsTypeCode;
		if ((((int32_t)L_7) == ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = ___rhsTypeCode;
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_9 = ___rhsTypeCode;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)9))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_10 = ___rhsTypeCode;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0062;
		}
	}

IL_005f:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0062:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0065:
	{
		int32_t L_11 = ___rhsTypeCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_12 = ___lhsTypeCode;
		if ((((int32_t)L_12) == ((int32_t)5)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_13 = ___lhsTypeCode;
		if ((((int32_t)L_13) == ((int32_t)7)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_14 = ___lhsTypeCode;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)9))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_15 = ___lhsTypeCode;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_008e;
		}
	}

IL_008b:
	{
		return (int32_t)(((int32_t)11));
	}

IL_008e:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0091:
	{
		int32_t L_16 = ___lhsTypeCode;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)11))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_17 = ___rhsTypeCode;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00a4;
		}
	}

IL_00a1:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00a4:
	{
		int32_t L_18 = ___lhsTypeCode;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_19 = ___rhsTypeCode;
		if ((((int32_t)L_19) == ((int32_t)5)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_20 = ___rhsTypeCode;
		if ((((int32_t)L_20) == ((int32_t)7)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_21 = ___rhsTypeCode;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00c5;
		}
	}

IL_00c2:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00c5:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00c8:
	{
		int32_t L_22 = ___rhsTypeCode;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_23 = ___lhsTypeCode;
		if ((((int32_t)L_23) == ((int32_t)5)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_24 = ___lhsTypeCode;
		if ((((int32_t)L_24) == ((int32_t)7)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_25 = ___lhsTypeCode;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00e9;
		}
	}

IL_00e6:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00e9:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00ec:
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern "C" bool RuntimeServices_EqualityOperator_m8413 (Object_t * __this /* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = {0};
	{
		Object_t * L_0 = ___lhs;
		V_0 = ((Object_t *)Castclass(L_0, InitializedTypeInfo(&IConvertible_t205_il2cpp_TypeInfo)));
		Object_t * L_1 = ___rhs;
		V_1 = ((Object_t *)Castclass(L_1, InitializedTypeInfo(&IConvertible_t205_il2cpp_TypeInfo)));
		int32_t L_2 = ___lhsTypeCode;
		int32_t L_3 = ___rhsTypeCode;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		int32_t L_4 = RuntimeServices_GetConvertTypeCode_m8412(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&RuntimeServices_GetConvertTypeCode_m8412_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 0)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 1)
		{
			goto IL_0083;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 2)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 3)
		{
			goto IL_0061;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 4)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 5)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a5;
	}

IL_003c:
	{
		Object_t * L_6 = V_0;
		NullCheck(L_6);
		Decimal_t1567  L_7 = (Decimal_t1567 )InterfaceFuncInvoker1< Decimal_t1567 , Object_t * >::Invoke(&IConvertible_ToDecimal_m8438_MethodInfo, L_6, (Object_t *)NULL);
		Object_t * L_8 = V_1;
		NullCheck(L_8);
		Decimal_t1567  L_9 = (Decimal_t1567 )InterfaceFuncInvoker1< Decimal_t1567 , Object_t * >::Invoke(&IConvertible_ToDecimal_m8438_MethodInfo, L_8, (Object_t *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Decimal_t1567_il2cpp_TypeInfo));
		bool L_10 = Decimal_op_Equality_m8439(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/&Decimal_op_Equality_m8439_MethodInfo);
		return L_10;
	}

IL_0050:
	{
		Object_t * L_11 = V_0;
		NullCheck(L_11);
		double L_12 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(&IConvertible_ToDouble_m8440_MethodInfo, L_11, (Object_t *)NULL);
		Object_t * L_13 = V_1;
		NullCheck(L_13);
		double L_14 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(&IConvertible_ToDouble_m8440_MethodInfo, L_13, (Object_t *)NULL);
		return ((((double)L_12) == ((double)L_14))? 1 : 0);
	}

IL_0061:
	{
		Object_t * L_15 = V_0;
		NullCheck(L_15);
		float L_16 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(&IConvertible_ToSingle_m8441_MethodInfo, L_15, (Object_t *)NULL);
		Object_t * L_17 = V_1;
		NullCheck(L_17);
		float L_18 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(&IConvertible_ToSingle_m8441_MethodInfo, L_17, (Object_t *)NULL);
		return ((((float)L_16) == ((float)L_18))? 1 : 0);
	}

IL_0072:
	{
		Object_t * L_19 = V_0;
		NullCheck(L_19);
		uint64_t L_20 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(&IConvertible_ToUInt64_m8442_MethodInfo, L_19, (Object_t *)NULL);
		Object_t * L_21 = V_1;
		NullCheck(L_21);
		uint64_t L_22 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(&IConvertible_ToUInt64_m8442_MethodInfo, L_21, (Object_t *)NULL);
		return ((((int64_t)L_20) == ((int64_t)L_22))? 1 : 0);
	}

IL_0083:
	{
		Object_t * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(&IConvertible_ToInt64_m8443_MethodInfo, L_23, (Object_t *)NULL);
		Object_t * L_25 = V_1;
		NullCheck(L_25);
		int64_t L_26 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(&IConvertible_ToInt64_m8443_MethodInfo, L_25, (Object_t *)NULL);
		return ((((int64_t)L_24) == ((int64_t)L_26))? 1 : 0);
	}

IL_0094:
	{
		Object_t * L_27 = V_0;
		NullCheck(L_27);
		uint32_t L_28 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(&IConvertible_ToUInt32_m8444_MethodInfo, L_27, (Object_t *)NULL);
		Object_t * L_29 = V_1;
		NullCheck(L_29);
		uint32_t L_30 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(&IConvertible_ToUInt32_m8444_MethodInfo, L_29, (Object_t *)NULL);
		return ((((int32_t)L_28) == ((int32_t)L_30))? 1 : 0);
	}

IL_00a5:
	{
		Object_t * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IConvertible_ToInt32_m8445_MethodInfo, L_31, (Object_t *)NULL);
		Object_t * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IConvertible_ToInt32_m8445_MethodInfo, L_33, (Object_t *)NULL);
		return ((((int32_t)L_32) == ((int32_t)L_34))? 1 : 0);
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C" bool RuntimeServices_IsPromotableNumeric_m8414 (Object_t * __this /* static, unused */, int32_t ___code, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___code;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 0)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 1)
		{
			goto IL_005b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 3)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 4)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 5)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 6)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 7)
		{
			goto IL_004f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 9)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 10)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 11)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 12)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_005d;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 1;
	}

IL_0055:
	{
		return 1;
	}

IL_0057:
	{
		return 1;
	}

IL_0059:
	{
		return 1;
	}

IL_005b:
	{
		return 1;
	}

IL_005d:
	{
		return 0;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern "C" MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m8415 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	int32_t V_0 = {0};
	MethodInfo_t * G_B3_0 = {0};
	MethodInfo_t * G_B1_0 = {0};
	MethodInfo_t * G_B2_0 = {0};
	{
		Type_t * L_0 = ___from;
		NullCheck(L_0);
		MethodInfoU5BU5D_t168* L_1 = (MethodInfoU5BU5D_t168*)VirtFuncInvoker1< MethodInfoU5BU5D_t168*, int32_t >::Invoke(&Type_GetMethods_m569_MethodInfo, L_0, ((int32_t)88));
		Type_t * L_2 = ___from;
		Type_t * L_3 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		MethodInfo_t * L_4 = RuntimeServices_FindImplicitConversionMethod_m8417(NULL /*static, unused*/, (Object_t*)(Object_t*)L_1, L_2, L_3, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m8417_MethodInfo);
		MethodInfo_t * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		Type_t * L_6 = ___to;
		NullCheck(L_6);
		MethodInfoU5BU5D_t168* L_7 = (MethodInfoU5BU5D_t168*)VirtFuncInvoker1< MethodInfoU5BU5D_t168*, int32_t >::Invoke(&Type_GetMethods_m569_MethodInfo, L_6, ((int32_t)88));
		Type_t * L_8 = ___from;
		Type_t * L_9 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		MethodInfo_t * L_10 = RuntimeServices_FindImplicitConversionMethod_m8417(NULL /*static, unused*/, (Object_t*)(Object_t*)L_7, L_8, L_9, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m8417_MethodInfo);
		MethodInfo_t * L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t248_il2cpp_TypeInfo));
		Object_t* L_12 = RuntimeServices_GetExtensionMethods_m8416(NULL /*static, unused*/, /*hidden argument*/&RuntimeServices_GetExtensionMethods_m8416_MethodInfo);
		Type_t * L_13 = ___from;
		Type_t * L_14 = ___to;
		MethodInfo_t * L_15 = RuntimeServices_FindImplicitConversionMethod_m8417(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m8417_MethodInfo);
		G_B3_0 = L_15;
	}

IL_0038:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern "C" Object_t* RuntimeServices_GetExtensionMethods_m8416 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * V_0 = {0};
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * L_0 = (U3CGetExtensionMethodsU3Ec__IteratorC_t1559 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetExtensionMethodsU3Ec__IteratorC_t1559_il2cpp_TypeInfo));
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m8390(L_0, /*hidden argument*/&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m8390_MethodInfo);
		V_0 = L_0;
		U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * L_1 = V_0;
		U3CGetExtensionMethodsU3Ec__IteratorC_t1559 * L_2 = L_1;
		NullCheck(L_2);
		L_2->___$PC_2 = ((int32_t)-2);
		return L_2;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern MethodInfo* IEnumerable_1_GetEnumerator_m8446_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m8447_MethodInfo_var;
extern "C" MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_m8417 (Object_t * __this /* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	static bool RuntimeServices_FindImplicitConversionMethod_m8417_init;
	if (!RuntimeServices_FindImplicitConversionMethod_m8417_init)
	{
		IEnumerable_1_GetEnumerator_m8446_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m8446_GenericMethod);
		IEnumerator_1_get_Current_m8447_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m8447_GenericMethod);
		RuntimeServices_FindImplicitConversionMethod_m8417_init = true;
	}
	MethodInfo_t * V_0 = {0};
	Object_t* V_1 = {0};
	ParameterInfoU5BU5D_t1170* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___candidates;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m8446_MethodInfo_var, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			MethodInfo_t * L_3 = (MethodInfo_t *)InterfaceFuncInvoker0< MethodInfo_t * >::Invoke(IEnumerator_1_get_Current_m8447_MethodInfo_var, L_2);
			V_0 = L_3;
			MethodInfo_t * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_4);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_6 = String_op_Inequality_m2540(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral937, /*hidden argument*/&String_op_Inequality_m2540_MethodInfo);
			if (!L_6)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			goto IL_0072;
		}

IL_002d:
		{
			MethodInfo_t * L_7 = V_0;
			NullCheck(L_7);
			Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8448_MethodInfo, L_7);
			Type_t * L_9 = ___to;
			if ((((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9)))
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			goto IL_0072;
		}

IL_003e:
		{
			MethodInfo_t * L_10 = V_0;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t1170* L_11 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_10);
			V_2 = L_11;
			ParameterInfoU5BU5D_t1170* L_12 = V_2;
			NullCheck(L_12);
			if ((((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))) == ((int32_t)1)))
			{
				goto IL_0053;
			}
		}

IL_004e:
		{
			goto IL_0072;
		}

IL_0053:
		{
			ParameterInfoU5BU5D_t1170* L_13 = V_2;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
			int32_t L_14 = 0;
			NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_13, L_14)));
			Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_13, L_14)));
			Type_t * L_16 = ___from;
			NullCheck(L_15);
			bool L_17 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m6867_MethodInfo, L_15, L_16);
			if (L_17)
			{
				goto IL_006b;
			}
		}

IL_0066:
		{
			goto IL_0072;
		}

IL_006b:
		{
			MethodInfo_t * L_18 = V_0;
			V_3 = L_18;
			IL2CPP_LEAVE(0x8F, FINALLY_0082);
		}

IL_0072:
		{
			Object_t* L_19 = V_1;
			NullCheck(L_19);
			bool L_20 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m692_MethodInfo, L_19);
			if (L_20)
			{
				goto IL_000c;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			Object_t* L_21 = V_1;
			if (L_21)
			{
				goto IL_0086;
			}
		}

IL_0085:
		{
			IL2CPP_END_FINALLY(130)
		}

IL_0086:
		{
			Object_t* L_22 = V_1;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m486_MethodInfo, L_22);
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_008d:
	{
		return (MethodInfo_t *)NULL;
	}

IL_008f:
	{
		MethodInfo_t * L_23 = V_3;
		return L_23;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C" void Dispatcher__ctor_m8418 (Dispatcher_t1547 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C" Object_t * Dispatcher_Invoke_m8419 (Dispatcher_t1547 * __this, Object_t * ___target, ObjectU5BU5D_t164* ___args, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Dispatcher_Invoke_m8419((Dispatcher_t1547 *)__this->___prev_9,___target, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___target, ObjectU5BU5D_t164* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___target, ObjectU5BU5D_t164* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t164* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_Dispatcher_t1547(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t164* ___args)
{
	// Marshaling of parameter '___target' to native representation
	Object_t * ____target_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern MethodInfo Dispatcher_BeginInvoke_m8420_MethodInfo;
extern "C" Object_t * Dispatcher_BeginInvoke_m8420 (Dispatcher_t1547 * __this, Object_t * ___target, ObjectU5BU5D_t164* ___args, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___target;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern MethodInfo Dispatcher_EndInvoke_m8421_MethodInfo;
extern "C" Object_t * Dispatcher_EndInvoke_m8421 (Dispatcher_t1547 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
