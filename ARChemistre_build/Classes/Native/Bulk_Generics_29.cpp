#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo IList_1_t5728_il2cpp_TypeInfo;

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5729_il2cpp_TypeInfo;

// System.Int64
#include "mscorlib_System_Int64.h"


// T System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current()
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_266.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4256_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_266MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Int64_t1166_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1471_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t4256_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m7984_MethodInfo;
extern MethodInfo Array_get_Length_m7989_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C" int64_t Array_InternalArray__get_Item_TisInt64_t1166_m34083_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt64_t1166_m34083(__this, p0, method) (( int64_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt64_t1166_m34083_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29266_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisInt64_t1166_m34083_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m29262_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m29262_gshared (InternalEnumerator_1_t4256 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29263_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29263_gshared (InternalEnumerator_1_t4256 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (InternalEnumerator_1_t4256 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m29264_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m29264_gshared (InternalEnumerator_1_t4256 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m29265_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m29265_gshared (InternalEnumerator_1_t4256 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7989(L_1, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern "C" int64_t InternalEnumerator_1_get_Current_m29266_gshared (InternalEnumerator_1_t4256 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1471 * L_1 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_1, (String_t*) &_stringLiteral1423, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1471 * L_3 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_3, (String_t*) &_stringLiteral1424, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7989(L_5, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int64_t L_8 = (( int64_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5730_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Int64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5731_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5732_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Int64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5733_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5734_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5735_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_267.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4257_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_267MethodDeclarations.h"

extern TypeInfo IComparable_1_t2392_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4257_0_0_0;
extern Il2CppType IComparable_1_t2392_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m29753_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m29753(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2392_m34094(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29271_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2392_m34094_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5736_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5737_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5738_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5739_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_268.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4258_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_268MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2393_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4258_0_0_0;
extern Il2CppType IEquatable_1_t2393_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2393_m34105(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29276_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2393_m34105_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5740_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::set_Item(System.Int32,T)
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Converter_2_t4259_il2cpp_TypeInfo;
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Converter_2__ctor_m29277_GenericMethod;
extern "C" void Converter_2__ctor_m29277_gshared (Converter_2_t4259 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern Il2CppGenericMethod Converter_2_Invoke_m29278_GenericMethod;
extern "C" Object_t * Converter_2_Invoke_m29278_gshared (Converter_2_t4259 * __this, Object_t * ___input, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Converter_2_Invoke_m29278((Converter_2_t4259 *)__this->___prev_9,___input, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Converter_2_BeginInvoke_m29279_GenericMethod;
extern "C" Object_t * Converter_2_BeginInvoke_m29279_gshared (Converter_2_t4259 * __this, Object_t * ___input, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Converter_2_EndInvoke_m29280_GenericMethod;
extern "C" Object_t * Converter_2_EndInvoke_m29280_gshared (Converter_2_t4259 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArrayReadOnlyList_1_t4260_il2cpp_TypeInfo;
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t208_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Void_t133_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t4261_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t146_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern Il2CppType ArrayReadOnlyList_1_t4260_0_0_0;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t4261_0_0_0;
extern MethodInfo ArgumentOutOfRangeException__ctor_m7993_MethodInfo;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_GetEnumerator_m29291_MethodInfo;
extern MethodInfo Array_CopyTo_m8174_MethodInfo;
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m29297_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m7099_MethodInfo;
struct Array_t;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisObject_t_m14031_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, Object_t * p1, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14031(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, MethodInfo*))Array_IndexOf_TisObject_t_m14031_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod ArrayReadOnlyList_1_ReadOnlyError_m29296_GenericMethod;
extern Il2CppGenericMethod ArrayReadOnlyList_1_GetEnumerator_m29291_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisObject_t_m14031_GenericMethod;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0__ctor_m29297_GenericMethod;


// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
extern Il2CppGenericMethod ArrayReadOnlyList_1__ctor_m29281_GenericMethod;
extern "C" void ArrayReadOnlyList_1__ctor_m29281_gshared (ArrayReadOnlyList_1_t4260 * __this, ObjectU5BU5D_t164* ___array, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		ObjectU5BU5D_t164* L_0 = ___array;
		__this->___array_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m29282_GenericMethod;
extern "C" Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m29282_gshared (ArrayReadOnlyList_1_t4260 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this);
		return L_0;
	}
}
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Item_m29283_GenericMethod;
extern "C" Object_t * ArrayReadOnlyList_1_get_Item_m29283_gshared (ArrayReadOnlyList_1_t4260 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		ObjectU5BU5D_t164* L_1 = (__this->___array_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) >= ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_2 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_2, (String_t*) &_stringLiteral573, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		ObjectU5BU5D_t164* L_3 = (__this->___array_0);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_set_Item_m29284_GenericMethod;
extern "C" void ArrayReadOnlyList_1_set_Item_m29284_gshared (ArrayReadOnlyList_1_t4260 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = (( Exception_t154 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Count_m29285_GenericMethod;
extern "C" int32_t ArrayReadOnlyList_1_get_Count_m29285_gshared (ArrayReadOnlyList_1_t4260 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->___array_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_IsReadOnly_m29286_GenericMethod;
extern "C" bool ArrayReadOnlyList_1_get_IsReadOnly_m29286_gshared (ArrayReadOnlyList_1_t4260 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_Add_m29287_GenericMethod;
extern "C" void ArrayReadOnlyList_1_Add_m29287_gshared (ArrayReadOnlyList_1_t4260 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = (( Exception_t154 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern Il2CppGenericMethod ArrayReadOnlyList_1_Clear_m29288_GenericMethod;
extern "C" void ArrayReadOnlyList_1_Clear_m29288_gshared (ArrayReadOnlyList_1_t4260 * __this, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = (( Exception_t154 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_Contains_m29289_GenericMethod;
extern "C" bool ArrayReadOnlyList_1_Contains_m29289_gshared (ArrayReadOnlyList_1_t4260 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return ((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ArrayReadOnlyList_1_CopyTo_m29290_GenericMethod;
extern "C" void ArrayReadOnlyList_1_CopyTo_m29290_gshared (ArrayReadOnlyList_1_t4260 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->___array_0);
		ObjectU5BU5D_t164* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m8174_MethodInfo, L_0, (Array_t *)(Array_t *)L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
extern "C" Object_t* ArrayReadOnlyList_1_GetEnumerator_m29291_gshared (ArrayReadOnlyList_1_t4260 * __this, MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t4261 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t4261 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t4261 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t4261 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t4261 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t4261 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_IndexOf_m29292_GenericMethod;
extern "C" int32_t ArrayReadOnlyList_1_IndexOf_m29292_gshared (ArrayReadOnlyList_1_t4260 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_Insert_m29293_GenericMethod;
extern "C" void ArrayReadOnlyList_1_Insert_m29293_gshared (ArrayReadOnlyList_1_t4260 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = (( Exception_t154 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_Remove_m29294_GenericMethod;
extern "C" bool ArrayReadOnlyList_1_Remove_m29294_gshared (ArrayReadOnlyList_1_t4260 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = (( Exception_t154 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern Il2CppGenericMethod ArrayReadOnlyList_1_RemoveAt_m29295_GenericMethod;
extern "C" void ArrayReadOnlyList_1_RemoveAt_m29295_gshared (ArrayReadOnlyList_1_t4260 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = (( Exception_t154 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
extern "C" Exception_t154 * ArrayReadOnlyList_1_ReadOnlyError_m29296_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1427, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;


// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m29297_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4261 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m29298_GenericMethod;
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m29298_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4261 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m29299_GenericMethod;
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m29299_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4261 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m29300_GenericMethod;
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m29300_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4261 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001e;
		}
		if (L_1 == 1)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0076;
	}

IL_001e:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		ArrayReadOnlyList_1_t4260 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		ObjectU5BU5D_t164* L_3 = (L_2->___array_0);
		int32_t L_4 = (__this->___U3CiU3E__0_0);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		__this->___$current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
		__this->___$PC_1 = 1;
		goto IL_0078;
	}

IL_004c:
	{
		int32_t L_6 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_7 = (__this->___U3CiU3E__0_0);
		ArrayReadOnlyList_1_t4260 * L_8 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_8);
		ObjectU5BU5D_t164* L_9 = (L_8->___array_0);
		NullCheck(L_9);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___$PC_1 = (-1);
	}

IL_0076:
	{
		return 0;
	}

IL_0078:
	{
		return 1;
	}
	// Dead block : IL_007a: ldloc.1
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_Dispose_m29301_GenericMethod;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m29301_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4261 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5741_il2cpp_TypeInfo;

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_269.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4262_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_269MethodDeclarations.h"

extern TypeInfo ConstructorInfo_t1177_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4262_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ConstructorInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ConstructorInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisConstructorInfo_t1177_m34143(__this, p0, method) (( ConstructorInfo_t1177 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29306_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisConstructorInfo_t1177_m34143_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5742_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5743_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5744_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5745_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5746_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5747_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_270.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4263_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_270MethodDeclarations.h"

extern TypeInfo _ConstructorInfo_t2769_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4263_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ConstructorInfo_t2769_m34154(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29311_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_ConstructorInfo_t2769_m34154_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5748_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5749_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_271.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4264_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_271MethodDeclarations.h"

extern TypeInfo TableRange_t1837_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4264_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C" TableRange_t1837  Array_InternalArray__get_Item_TisTableRange_t1837_m34165_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisTableRange_t1837_m34165(__this, p0, method) (( TableRange_t1837  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisTableRange_t1837_m34165_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29316_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTableRange_t1837_m34165_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m29312_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m29312_gshared (InternalEnumerator_1_t4264 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29313_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29313_gshared (InternalEnumerator_1_t4264 * __this, MethodInfo* method)
{
	{
		TableRange_t1837  L_0 = (( TableRange_t1837  (*) (InternalEnumerator_1_t4264 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TableRange_t1837  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m29314_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m29314_gshared (InternalEnumerator_1_t4264 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m29315_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m29315_gshared (InternalEnumerator_1_t4264 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7989(L_1, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
extern "C" TableRange_t1837  InternalEnumerator_1_get_Current_m29316_gshared (InternalEnumerator_1_t4264 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1471 * L_1 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_1, (String_t*) &_stringLiteral1423, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1471 * L_3 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_3, (String_t*) &_stringLiteral1424, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7989(L_5, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		TableRange_t1837  L_8 = (( TableRange_t1837  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5750_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5751_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5752_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5753_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.TailoringInfo
#include "mscorlib_Mono_Globalization_Unicode_TailoringInfo.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_272.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4265_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_272MethodDeclarations.h"

extern TypeInfo TailoringInfo_t1840_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4265_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisTailoringInfo_t1840_m34176(__this, p0, method) (( TailoringInfo_t1840 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29321_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTailoringInfo_t1840_m34176_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5754_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5755_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5756_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5757_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Contraction
#include "mscorlib_Mono_Globalization_Unicode_Contraction.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_273.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4266_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_273MethodDeclarations.h"

extern TypeInfo Contraction_t1841_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4266_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
#define Array_InternalArray__get_Item_TisContraction_t1841_m34187(__this, p0, method) (( Contraction_t1841 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29326_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisContraction_t1841_m34187_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5758_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5759_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5760_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5761_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Level2Map
#include "mscorlib_Mono_Globalization_Unicode_Level2Map.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_274.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4267_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_274MethodDeclarations.h"

extern TypeInfo Level2Map_t1843_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4267_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
#define Array_InternalArray__get_Item_TisLevel2Map_t1843_m34198(__this, p0, method) (( Level2Map_t1843 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29331_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisLevel2Map_t1843_m34198_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5762_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5763_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5764_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5765_il2cpp_TypeInfo;

// Mono.Math.BigInteger
#include "mscorlib_Mono_Math_BigInteger.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_275.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4268_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_275MethodDeclarations.h"

extern TypeInfo BigInteger_t1860_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4268_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t1860_m34209(__this, p0, method) (( BigInteger_t1860 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29336_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBigInteger_t1860_m34209_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5766_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5767_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5768_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CollectionDebuggerView_1_t4269_il2cpp_TypeInfo;
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1MethodDeclarations.h"



// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CollectionDebuggerView_2_t4270_il2cpp_TypeInfo;
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2MethodDeclarations.h"



// System.Collections.Generic.GenericComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t4271_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3MethodDeclarations.h"

extern TypeInfo IComparable_1_t4670_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
extern Il2CppType IComparable_1_t4670_0_0_0;
extern MethodInfo IComparable_1_CompareTo_m30176_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m15373_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m30176_GenericMethod;


// System.Void System.Collections.Generic.GenericComparer`1<System.Object>::.ctor()
extern Il2CppGenericMethod GenericComparer_1__ctor_m29337_GenericMethod;
extern "C" void GenericComparer_1__ctor_m29337_gshared (GenericComparer_1_t4271 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Object>::Compare(T,T)
extern Il2CppGenericMethod GenericComparer_1_Compare_m29338_GenericMethod;
extern "C" int32_t GenericComparer_1_Compare_m29338_gshared (GenericComparer_1_t4271 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		if (((Object_t *)L_3))
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Object_t * L_4 = ___y;
		Object_t * L_5 = L_4;
		if (((Object_t *)L_5))
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Object_t * L_6 = ___y;
		NullCheck((*(&___x)));
		int32_t L_7 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (*(&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5769_il2cpp_TypeInfo;

// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_276.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4272_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_276MethodDeclarations.h"

extern TypeInfo Slot_t1917_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4272_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C" Slot_t1917  Array_InternalArray__get_Item_TisSlot_t1917_m34220_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t1917_m34220(__this, p0, method) (( Slot_t1917  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisSlot_t1917_m34220_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29343_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSlot_t1917_m34220_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m29339_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m29339_gshared (InternalEnumerator_1_t4272 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29340_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29340_gshared (InternalEnumerator_1_t4272 * __this, MethodInfo* method)
{
	{
		Slot_t1917  L_0 = (( Slot_t1917  (*) (InternalEnumerator_1_t4272 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Slot_t1917  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m29341_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m29341_gshared (InternalEnumerator_1_t4272 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m29342_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m29342_gshared (InternalEnumerator_1_t4272 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7989(L_1, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
extern "C" Slot_t1917  InternalEnumerator_1_get_Current_m29343_gshared (InternalEnumerator_1_t4272 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1471 * L_1 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_1, (String_t*) &_stringLiteral1423, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1471 * L_3 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_3, (String_t*) &_stringLiteral1424, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7989(L_5, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		Slot_t1917  L_8 = (( Slot_t1917  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5770_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5771_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5772_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5773_il2cpp_TypeInfo;

// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_277.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4273_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_277MethodDeclarations.h"

extern TypeInfo Slot_t1924_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4273_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern "C" Slot_t1924  Array_InternalArray__get_Item_TisSlot_t1924_m34231_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t1924_m34231(__this, p0, method) (( Slot_t1924  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisSlot_t1924_m34231_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29348_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSlot_t1924_m34231_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m29344_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m29344_gshared (InternalEnumerator_1_t4273 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29345_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29345_gshared (InternalEnumerator_1_t4273 * __this, MethodInfo* method)
{
	{
		Slot_t1924  L_0 = (( Slot_t1924  (*) (InternalEnumerator_1_t4273 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Slot_t1924  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m29346_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m29346_gshared (InternalEnumerator_1_t4273 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m29347_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m29347_gshared (InternalEnumerator_1_t4273 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7989(L_1, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
extern "C" Slot_t1924  InternalEnumerator_1_get_Current_m29348_gshared (InternalEnumerator_1_t4273 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1471 * L_1 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_1, (String_t*) &_stringLiteral1423, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1471 * L_3 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_3, (String_t*) &_stringLiteral1424, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7989(L_5, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		Slot_t1924  L_8 = (( Slot_t1924  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5774_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5775_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5776_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5777_il2cpp_TypeInfo;

// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
// System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_278.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4274_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_278MethodDeclarations.h"

extern TypeInfo StackFrame_t1168_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4274_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
#define Array_InternalArray__get_Item_TisStackFrame_t1168_m34242(__this, p0, method) (( StackFrame_t1168 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29353_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisStackFrame_t1168_m34242_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5778_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5779_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.StackFrame>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5780_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5781_il2cpp_TypeInfo;

// System.Globalization.Calendar
#include "mscorlib_System_Globalization_Calendar.h"


// T System.Collections.Generic.IEnumerator`1<System.Globalization.Calendar>::get_Current()
// System.Array/InternalEnumerator`1<System.Globalization.Calendar>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_279.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4275_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Globalization.Calendar>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_279MethodDeclarations.h"

extern TypeInfo Calendar_t1936_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4275_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
#define Array_InternalArray__get_Item_TisCalendar_t1936_m34253(__this, p0, method) (( Calendar_t1936 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29358_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisCalendar_t1936_m34253_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Globalization.Calendar>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.Calendar>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Globalization.Calendar>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5782_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5783_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.Calendar>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5784_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Globalization.Calendar>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.Calendar>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.Calendar>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Globalization.Calendar>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Globalization.Calendar>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5785_il2cpp_TypeInfo;

// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ModuleBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_280.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4276_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_280MethodDeclarations.h"

extern TypeInfo ModuleBuilder_t1998_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4276_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisModuleBuilder_t1998_m34264(__this, p0, method) (( ModuleBuilder_t1998 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29363_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisModuleBuilder_t1998_m34264_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5786_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5787_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ModuleBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5788_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5789_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5790_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ModuleBuilder>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5791_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_281.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4277_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_281MethodDeclarations.h"

extern TypeInfo _ModuleBuilder_t2776_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4277_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ModuleBuilder_t2776_m34275(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29368_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_ModuleBuilder_t2776_m34275_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5792_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5793_il2cpp_TypeInfo;

// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Module>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Module>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Module>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Module>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Module>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Module>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Module>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5794_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Module>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5795_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.Module>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_282.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4278_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_282MethodDeclarations.h"

extern TypeInfo Module_t1815_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4278_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Module>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Module>(System.Int32)
#define Array_InternalArray__get_Item_TisModule_t1815_m34286(__this, p0, method) (( Module_t1815 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29373_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisModule_t1815_m34286_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Module>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Module>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Module>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Module>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Module>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5796_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Module>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Module>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Module>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Module>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Module>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5797_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5798_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Module>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5799_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Module>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_283.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4279_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_283MethodDeclarations.h"

extern TypeInfo _Module_t2777_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4279_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Module>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Module>(System.Int32)
#define Array_InternalArray__get_Item_Tis_Module_t2777_m34297(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29378_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_Module_t2777_m34297_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5800_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5801_il2cpp_TypeInfo;

// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ParameterBuilder>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_284.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4280_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_284MethodDeclarations.h"

extern TypeInfo ParameterBuilder_t1999_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4280_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisParameterBuilder_t1999_m34308(__this, p0, method) (( ParameterBuilder_t1999 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m29383_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisParameterBuilder_t1999_m34308_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5802_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Remove(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
