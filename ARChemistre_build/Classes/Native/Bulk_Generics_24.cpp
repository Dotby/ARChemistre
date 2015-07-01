#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_139.h"
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
extern TypeInfo Transform_1_t4028_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_139MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCache.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_140.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t4029_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_140MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m27128_GenericMethod;
extern "C" void Transform_1__ctor_m27128_gshared (Transform_1_t4029 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m27130_GenericMethod;
extern "C" KeyValuePair_2_t4018  Transform_1_Invoke_m27130_gshared (Transform_1_t4029 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m27130((Transform_1_t4029 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t4018  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t4018  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m27132_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m27132_gshared (Transform_1_t4029 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m27134_GenericMethod;
extern "C" KeyValuePair_2_t4018  Transform_1_EndInvoke_m27134_gshared (Transform_1_t4029 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t4018 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_28.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t4030_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_28MethodDeclarations.h"

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__28.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Enumerator_t4023_il2cpp_TypeInfo;
extern TypeInfo IDictionaryEnumerator_t1295_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1298_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t4018_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
extern TypeInfo LayoutCache_t1006_il2cpp_TypeInfo;
extern TypeInfo Boolean_t147_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__28MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22MethodDeclarations.h"
extern Il2CppType Enumerator_t4023_0_0_0;
extern Il2CppType ShimEnumerator_t4030_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m14012_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m27137_MethodInfo;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m27090_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m27050_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m27052_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m27137_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m27047_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m27089_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5512_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_64.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4031_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_64MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_64.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t913_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4032_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_64MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4031_0_0_0;
extern Il2CppType IEquatable_1_t5520_0_0_0;
extern Il2CppType LayoutCache_t1006_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2714_0_0_0;
extern Il2CppType TypeU5BU5D_t913_0_0_0;
extern Il2CppType DefaultComparer_t4032_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m498_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m6867_MethodInfo;
extern MethodInfo Type_MakeGenericType_m6961_MethodInfo;
extern MethodInfo Activator_CreateInstance_m6868_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m27146_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m35404_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m35403_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m27146_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m35404_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m35403_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5520_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.GUILayoutUtility/LayoutCache>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern MethodInfo Object_GetHashCode_m714_MethodInfo;
extern MethodInfo Object_Equals_m713_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m27141_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutUtility/LayoutCache>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutUtility/LayoutCache>::Equals(T,T)
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t1155_il2cpp_TypeInfo;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntry.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_49.h"
// System.String
#include "mscorlib_System_String.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo InvalidOperationException_t1471_il2cpp_TypeInfo;
extern TypeInfo GUILayoutEntry_t1009_il2cpp_TypeInfo;
extern TypeInfo List_1_t1010_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1780_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern Il2CppType Enumerator_t1155_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m7992_MethodInfo;
extern MethodInfo Object_GetType_m568_MethodInfo;
extern MethodInfo Type_get_FullName_m6981_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m9468_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m7984_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m27152_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4535_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>::get_Current()
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_49MethodDeclarations.h"

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_50.h"
// System.Predicate`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Predicate_1_gen_52.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_50.h"
// System.Comparison`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Comparison_1_gen_52.h"
extern TypeInfo Void_t133_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t521_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t837_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2302_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4536_il2cpp_TypeInfo;
extern TypeInfo GUILayoutEntryU5BU5D_t4033_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4534_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t26_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t153_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4036_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1172_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4040_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4041_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_50MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Predicate_1_gen_52MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_50MethodDeclarations.h"
extern Il2CppType List_1_t1010_0_0_0;
extern Il2CppType ICollection_1_t4536_0_0_0;
extern Il2CppType GUILayoutEntryU5BU5D_t4033_0_0_0;
extern Il2CppType IEnumerable_1_t4534_0_0_0;
extern Il2CppType IEnumerator_1_t4535_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4036_0_0_0;
extern Il2CppType Predicate_1_t4040_0_0_0;
extern Il2CppType Comparer_1_t4041_0_0_0;
extern MethodInfo List_1_get_Item_m6874_MethodInfo;
extern MethodInfo List_1_set_Item_m27197_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2726_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8173_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m7993_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m35405_MethodInfo;
extern MethodInfo Array_Copy_m10283_MethodInfo;
extern MethodInfo List_1_Add_m6875_MethodInfo;
extern MethodInfo List_1_Contains_m27177_MethodInfo;
extern MethodInfo List_1_IndexOf_m27182_MethodInfo;
extern MethodInfo List_1_Insert_m27185_MethodInfo;
extern MethodInfo List_1_Remove_m27187_MethodInfo;
extern MethodInfo Math_Max_m9460_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m35406_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m35407_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m35408_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m692_MethodInfo;
extern MethodInfo IDisposable_Dispose_m486_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m27203_MethodInfo;
extern MethodInfo Array_Clear_m9451_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m6951_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m27278_MethodInfo;
extern MethodInfo Enumerator__ctor_m27149_MethodInfo;
extern MethodInfo List_1_RemoveAt_m27189_MethodInfo;
extern MethodInfo Array_Reverse_m9493_MethodInfo;
extern MethodInfo Array_Copy_m10282_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m30068_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m30068(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.GUILayoutEntry>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.GUILayoutEntry>(!!0[]&,System.Int32)
#define Array_Resize_TisGUILayoutEntry_t1009_m33358(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, GUILayoutEntryU5BU5D_t4033**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_65.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14010_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14010(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.GUILayoutEntry>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.GUILayoutEntry>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisGUILayoutEntry_t1009_m33360(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, GUILayoutEntryU5BU5D_t4033*, GUILayoutEntry_t1009 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m30071_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m30071(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.GUILayoutEntry>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.GUILayoutEntry>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisGUILayoutEntry_t1009_m33362(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, GUILayoutEntryU5BU5D_t4033*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_0.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m30178_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, int32_t p1, Comparison_1_t249 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m30178(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, int32_t, Comparison_1_t249 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.GUILayoutEntry>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.GUILayoutEntry>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisGUILayoutEntry_t1009_m33370(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, GUILayoutEntryU5BU5D_t4033*, int32_t, Comparison_1_t4043 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m6874_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m27197_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisGUILayoutEntry_t1009_m33358_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m27184_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m27186_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m27173_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m35405_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m27172_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m6869_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m6875_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m27177_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m27182_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m27185_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m27187_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m27171_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m27195_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m27196_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m35406_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m35407_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m35408_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m27203_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisGUILayoutEntry_t1009_m33360_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m27180_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m27181_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m27278_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m27149_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m27183_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m27189_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m27284_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisGUILayoutEntry_t1009_m33362_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisGUILayoutEntry_t1009_m33370_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
// System.Array/InternalEnumerator`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_214.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4034_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_214MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4034_0_0_0;
extern MethodInfo Array_get_Length_m7989_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m29753_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m29753(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.GUILayoutEntry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.GUILayoutEntry>(System.Int32)
#define Array_InternalArray__get_Item_TisGUILayoutEntry_t1009_m33347(__this, p0, method) (( GUILayoutEntry_t1009 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m27202_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGUILayoutEntry_t1009_m33347_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.GUILayoutEntry>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.GUILayoutEntry>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.GUILayoutEntry>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.GUILayoutEntry>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4035_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t146_il2cpp_TypeInfo;
extern TypeInfo ICollection_t1268_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t587_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_50MethodDeclarations.h"
extern Il2CppType IList_1_t4035_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m27232_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m449_MethodInfo;
extern MethodInfo IList_1_get_Item_m35409_MethodInfo;
extern MethodInfo ICollection_CopyTo_m7980_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m8128_MethodInfo;
extern MethodInfo ICollection_1_Contains_m35410_MethodInfo;
extern MethodInfo IList_1_IndexOf_m35411_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m27232_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m35409_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m27264_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m35410_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m35411_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_50.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4037_il2cpp_TypeInfo;

extern TypeInfo IList_t1430_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t4037_0_0_0;
extern Il2CppType GUILayoutEntry_t1009_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m35412_MethodInfo;
extern MethodInfo Collection_1_SetItem_m27263_MethodInfo;
extern MethodInfo List_1__ctor_m6872_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m14009_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m27256_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m27254_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m27259_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m27250_MethodInfo;
extern MethodInfo ICollection_1_Clear_m35413_MethodInfo;
extern MethodInfo IList_1_Insert_m35414_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m35415_MethodInfo;
extern MethodInfo IList_1_set_Item_m35416_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10335_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14288_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14289_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m35412_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m27267_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m27268_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m27265_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m27263_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m6872_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m27256_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m27266_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m27254_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m27259_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m27250_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m35413_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m35414_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m35415_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m35416_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4038_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_65MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_65.h"
extern TypeInfo DefaultComparer_t4039_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_65MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4038_0_0_0;
extern Il2CppType IEquatable_1_t5521_0_0_0;
extern Il2CppType DefaultComparer_t4039_0_0_0;
extern MethodInfo DefaultComparer__ctor_m27274_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m35417_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m33359_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m27274_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m35417_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m33359_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5522_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.GUILayoutEntry>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.GUILayoutEntry>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5521_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.GUILayoutEntry>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m27269_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.GUILayoutEntry>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.GUILayoutEntry>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.GUILayoutEntry>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.GUILayoutEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_50.h"
extern TypeInfo DefaultComparer_t4042_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_50MethodDeclarations.h"
extern Il2CppType IComparable_1_t4771_0_0_0;
extern Il2CppType GenericComparer_1_t2627_0_0_0;
extern Il2CppType DefaultComparer_t4042_0_0_0;
extern MethodInfo DefaultComparer__ctor_m27285_MethodInfo;
extern MethodInfo Comparer_1_Compare_m35418_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13180_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m27285_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m35418_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.GUILayoutEntry>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.GUILayoutEntry>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.GUILayoutEntry>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.GUILayoutEntry>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4770_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.GUILayoutEntry>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4771_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.GUILayoutEntry>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t206_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m33368_MethodInfo;
extern MethodInfo IComparable_CompareTo_m13982_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m27281_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m33368_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4043_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Comparison_1_gen_52MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.GUILayoutEntry>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.GUILayoutEntry>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.GUILayoutEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.GUILayoutEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t1025_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_26MethodDeclarations.h"

// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_59.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_59.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_143.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_144.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_29.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11.h"
extern TypeInfo IEqualityComparer_1_t2837_il2cpp_TypeInfo;
extern TypeInfo Link_t1907_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1908_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t4047_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t4051_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4537_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t4045_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t4587_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4044_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4054_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4049_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t4056_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2906_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t186_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2694_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t43_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1291_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3091_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3077_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_59MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_59MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_143MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_144MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_29MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType Dictionary_2_t1025_0_0_0;
extern Il2CppType IEqualityComparer_1_t2837_0_0_0;
extern Il2CppType KeyCollection_t4047_0_0_0;
extern Il2CppType ValueCollection_t4051_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4537_0_0_0;
extern Il2CppType KeyValuePair_2_t4045_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t4587_0_0_0;
extern Il2CppType Transform_1_t4044_0_0_0;
extern Il2CppType Transform_1_t4054_0_0_0;
extern Il2CppType Enumerator_t4049_0_0_0;
extern Il2CppType ShimEnumerator_t4056_0_0_0;
extern Il2CppType EqualityComparer_1_t2906_0_0_0;
extern Il2CppType Int32U5BU5D_t186_0_0_0;
extern Il2CppType LinkU5BU5D_t2694_0_0_0;
extern Il2CppType StringU5BU5D_t43_0_0_0;
extern Il2CppType EqualityComparer_1_t3091_0_0_0;
extern Il2CppType IEqualityComparer_1_t3077_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m27321_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m27310_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m27311_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m34668_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m34669_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m10896_MethodInfo;
extern MethodInfo KeyCollection__ctor_m27344_MethodInfo;
extern MethodInfo ValueCollection__ctor_m27379_MethodInfo;
extern MethodInfo Dictionary_2_Add_m8049_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m27325_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m27332_MethodInfo;
extern MethodInfo Transform_1__ctor_m27402_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m27315_MethodInfo;
extern MethodInfo Transform_1__ctor_m27406_MethodInfo;
extern MethodInfo Enumerator__ctor_m27363_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m27414_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m27309_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m27333_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m11063_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m34809_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8002_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8014_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m8013_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m8003_MethodInfo;
extern MethodInfo Type_ToString_m10362_MethodInfo;
extern MethodInfo String_Concat_m540_MethodInfo;
extern MethodInfo ArgumentException__ctor_m7991_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m8050_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m31752_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m7985_MethodInfo;
struct Dictionary_2_t1025;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1298_TisDictionaryEntry_t1298_m33389 (Dictionary_2_t1025 * __this, DictionaryEntryU5BU5D_t4587* p0, int32_t p1, Transform_1_t4044 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t1025;
struct Dictionary_2_t3123;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_145.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4045_m33392_gshared (Dictionary_2_t3123 * __this, Array_t * p0, int32_t p1, Transform_1_t4055 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4045_m33392(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3123 *, Array_t *, int32_t, Transform_1_t4055 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4045_m33392_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4045_m33391(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1025 *, Array_t *, int32_t, Transform_1_t4054 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4045_m33392_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t1025;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4045_TisKeyValuePair_2_t4045_m33394 (Dictionary_2_t1025 * __this, KeyValuePair_2U5BU5D_t4537* p0, int32_t p1, Transform_1_t4054 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m27321_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m27328_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m27310_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m27329_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m27311_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m34668_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34669_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m27319_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m27344_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m27379_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m27312_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m8049_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m27325_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m27334_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m27336_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m27330_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m27318_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m27314_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m27332_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m27402_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1298_TisDictionaryEntry_t1298_m33389_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m27315_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m27406_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4045_m33391_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m27363_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m27414_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m15171_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m27313_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m27309_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m27333_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4045_TisKeyValuePair_2_t4045_m33394_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m17123_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34809_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m8050_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m31752_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5523_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5524_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4538_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_ToString_m715_MethodInfo;
extern MethodInfo String_Concat_m8022_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m27335_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m27337_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_215.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4046_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_215MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4046_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t4045  Array_InternalArray__get_Item_TisKeyValuePair_2_t4045_m33373_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t4045_m33373(__this, p0, method) (( KeyValuePair_2_t4045  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t4045_m33373_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m27343_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t4045_m33373_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m27339_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m27339_gshared (InternalEnumerator_1_t4046 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27340_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27340_gshared (InternalEnumerator_1_t4046 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t4045  L_0 = (( KeyValuePair_2_t4045  (*) (InternalEnumerator_1_t4046 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4045  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m27341_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m27341_gshared (InternalEnumerator_1_t4046 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m27342_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m27342_gshared (InternalEnumerator_1_t4046 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t4045  InternalEnumerator_1_get_Current_m27343_gshared (InternalEnumerator_1_t4046 * __this, MethodInfo* method)
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
		KeyValuePair_2_t4045  L_8 = (( KeyValuePair_2_t4045  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5525_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t5526_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_60.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_141.h"
extern TypeInfo Enumerator_t4048_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4050_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_141MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_60MethodDeclarations.h"
extern Il2CppType Enumerator_t4048_0_0_0;
extern Il2CppType Transform_1_t4050_0_0_0;
extern MethodInfo NotSupportedException__ctor_m7099_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m27355_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m27316_MethodInfo;
extern MethodInfo Transform_1__ctor_m27375_MethodInfo;
extern MethodInfo Enumerator__ctor_m27358_MethodInfo;
struct Dictionary_2_t1025;
struct Dictionary_2_t3123;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m30879_gshared (Dictionary_2_t3123 * __this, Array_t * p0, int32_t p1, Transform_1_t3131 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m30879(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3123 *, Array_t *, int32_t, Transform_1_t3131 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m30879_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m33384(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1025 *, Array_t *, int32_t, Transform_1_t4050 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m30879_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t1025;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m33385 (Dictionary_2_t1025 * __this, StringU5BU5D_t43* p0, int32_t p1, Transform_1_t4050 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m27356_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m27355_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m27316_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m27375_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m33384_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m33385_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m27358_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m27370_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m27331_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m27374_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m27368_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m27373_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m27371_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m27372_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_60.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_142.h"
extern TypeInfo Enumerator_t4052_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4053_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_142MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_60MethodDeclarations.h"
extern Il2CppType Enumerator_t4052_0_0_0;
extern Il2CppType Transform_1_t4053_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m27390_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m27317_MethodInfo;
extern MethodInfo Transform_1__ctor_m27398_MethodInfo;
extern MethodInfo Enumerator__ctor_m27393_MethodInfo;
struct Dictionary_2_t1025;
struct Dictionary_2_t3123;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m30881_gshared (Dictionary_2_t3123 * __this, Array_t * p0, int32_t p1, Transform_1_t3134 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m30881(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3123 *, Array_t *, int32_t, Transform_1_t3134 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m30881_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m33387(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1025 *, Array_t *, int32_t, Transform_1_t4053 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m30881_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t1025;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t141_TisInt32_t141_m33388 (Dictionary_2_t1025 * __this, Int32U5BU5D_t186* p0, int32_t p1, Transform_1_t4053 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m27322_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m27391_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m27390_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m27317_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m27398_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m33387_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t141_TisInt32_t141_m33388_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m27393_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t4055_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_145MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m27407_GenericMethod;
extern "C" void Transform_1__ctor_m27407_gshared (Transform_1_t4055 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m27409_GenericMethod;
extern "C" KeyValuePair_2_t4045  Transform_1_Invoke_m27409_gshared (Transform_1_t4055 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m27409((Transform_1_t4055 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t4045  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t4045  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t4045  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m27411_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m27411_gshared (Transform_1_t4055 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m27413_GenericMethod;
extern "C" KeyValuePair_2_t4045  Transform_1_EndInvoke_m27413_gshared (Transform_1_t4055 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t4045 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m27416_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m27369_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m27416_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5527_il2cpp_TypeInfo;

// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Display>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Display>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_216.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4057_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Display>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_216MethodDeclarations.h"

extern TypeInfo Display_t1047_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4057_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Display>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Display>(System.Int32)
#define Array_InternalArray__get_Item_TisDisplay_t1047_m33396(__this, p0, method) (( Display_t1047 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m27424_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDisplay_t1047_m33396_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Display>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Display>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Display>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Display>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Display>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5528_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Display>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5529_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Display>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5530_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Display>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Display>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5531_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IntPtr>::get_Current()
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_217.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4058_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_217MethodDeclarations.h"

extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4058_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
extern "C" IntPtr_t Array_InternalArray__get_Item_TisIntPtr_t_m33407_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisIntPtr_t_m33407(__this, p0, method) (( IntPtr_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisIntPtr_t_m33407_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m27429_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIntPtr_t_m33407_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m27425_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m27425_gshared (InternalEnumerator_1_t4058 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27426_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27426_gshared (InternalEnumerator_1_t4058 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (( IntPtr_t (*) (InternalEnumerator_1_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		IntPtr_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m27427_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m27427_gshared (InternalEnumerator_1_t4058 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IntPtr>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m27428_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m27428_gshared (InternalEnumerator_1_t4058 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.IntPtr>::get_Current()
extern "C" IntPtr_t InternalEnumerator_1_get_Current_m27429_gshared (InternalEnumerator_1_t4058 * __this, MethodInfo* method)
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
		IntPtr_t L_8 = (( IntPtr_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5532_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IntPtr>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5533_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IntPtr>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5534_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IntPtr>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IntPtr>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5535_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5536_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ISerializable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5537_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ISerializable>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_218.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4059_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_218MethodDeclarations.h"

extern TypeInfo ISerializable_t252_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4059_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ISerializable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ISerializable>(System.Int32)
#define Array_InternalArray__get_Item_TisISerializable_t252_m33418(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m27434_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisISerializable_t252_m33418_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5538_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4540_il2cpp_TypeInfo;

// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.ParticleSystem>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_219.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4060_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_219MethodDeclarations.h"

extern TypeInfo ParticleSystem_t9_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4060_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.ParticleSystem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.ParticleSystem>(System.Int32)
#define Array_InternalArray__get_Item_TisParticleSystem_t9_m33429(__this, p0, method) (( ParticleSystem_t9 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m27439_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisParticleSystem_t9_m33429_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.ParticleSystem>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ParticleSystem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ParticleSystem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ParticleSystem>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.ParticleSystem>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4541_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4539_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ParticleSystem>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4062_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_50.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t1057_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_50MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_51.h"
// System.Predicate`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Predicate_1_gen_53.h"
// System.Collections.Generic.Comparer`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_51.h"
// System.Comparison`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Comparison_1_gen_53.h"
extern TypeInfo ParticleSystemU5BU5D_t1056_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4061_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4063_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4067_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4068_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_51MethodDeclarations.h"
// System.Predicate`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Predicate_1_gen_53MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_51MethodDeclarations.h"
extern Il2CppType List_1_t1057_0_0_0;
extern Il2CppType ICollection_1_t4541_0_0_0;
extern Il2CppType ParticleSystemU5BU5D_t1056_0_0_0;
extern Il2CppType Enumerator_t4061_0_0_0;
extern Il2CppType IEnumerable_1_t4539_0_0_0;
extern Il2CppType IEnumerator_1_t4540_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4063_0_0_0;
extern Il2CppType Predicate_1_t4067_0_0_0;
extern Il2CppType Comparer_1_t4068_0_0_0;
extern MethodInfo List_1_get_Item_m27485_MethodInfo;
extern MethodInfo List_1_set_Item_m27486_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m35419_MethodInfo;
extern MethodInfo List_1_Add_m6900_MethodInfo;
extern MethodInfo List_1_Contains_m27464_MethodInfo;
extern MethodInfo List_1_IndexOf_m27470_MethodInfo;
extern MethodInfo List_1_Insert_m27473_MethodInfo;
extern MethodInfo List_1_Remove_m27475_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m35420_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m35421_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m35422_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m27493_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m27568_MethodInfo;
extern MethodInfo Enumerator__ctor_m27487_MethodInfo;
extern MethodInfo List_1_RemoveAt_m27477_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.ParticleSystem>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.ParticleSystem>(!!0[]&,System.Int32)
#define Array_Resize_TisParticleSystem_t9_m33440(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ParticleSystemU5BU5D_t1056**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_66.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.ParticleSystem>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.ParticleSystem>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisParticleSystem_t9_m33442(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ParticleSystemU5BU5D_t1056*, ParticleSystem_t9 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.ParticleSystem>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.ParticleSystem>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisParticleSystem_t9_m33444(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ParticleSystemU5BU5D_t1056*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.ParticleSystem>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.ParticleSystem>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisParticleSystem_t9_m33452(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ParticleSystemU5BU5D_t1056*, int32_t, Comparison_1_t4070 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m27485_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m27486_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisParticleSystem_t9_m33440_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m27472_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m27474_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m27460_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m35419_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m27459_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m27469_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m6900_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m27464_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m27470_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m27473_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m27475_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m27458_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m27482_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m27483_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m35420_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m35421_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m35422_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m27493_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisParticleSystem_t9_m33442_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m27467_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m27468_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m27568_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m27487_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m27471_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m27477_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m27574_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisParticleSystem_t9_m33444_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisParticleSystem_t9_m33452_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m27490_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_51MethodDeclarations.h"
extern Il2CppType IList_1_t4062_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m27522_MethodInfo;
extern MethodInfo IList_1_get_Item_m35423_MethodInfo;
extern MethodInfo ICollection_1_Contains_m35424_MethodInfo;
extern MethodInfo IList_1_IndexOf_m35425_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m27522_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m35423_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m27554_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m35424_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m35425_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_51.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4064_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t4064_0_0_0;
extern Il2CppType ParticleSystem_t9_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m35426_MethodInfo;
extern MethodInfo Collection_1_SetItem_m27553_MethodInfo;
extern MethodInfo List_1__ctor_m6899_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m27546_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m27544_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m27549_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m27540_MethodInfo;
extern MethodInfo ICollection_1_Clear_m35427_MethodInfo;
extern MethodInfo IList_1_Insert_m35428_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m35429_MethodInfo;
extern MethodInfo IList_1_set_Item_m35430_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m35426_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m27557_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m27558_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m27555_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m27553_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m6899_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m27546_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m27556_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m27544_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m27549_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m27540_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m35427_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m35428_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m35429_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m35430_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.ParticleSystem>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4065_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_66MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_66.h"
extern TypeInfo DefaultComparer_t4066_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_66MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4065_0_0_0;
extern Il2CppType IEquatable_1_t5539_0_0_0;
extern Il2CppType DefaultComparer_t4066_0_0_0;
extern MethodInfo DefaultComparer__ctor_m27564_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m35431_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m33441_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m27564_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m35431_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m33441_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.ParticleSystem>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.ParticleSystem>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.ParticleSystem>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ParticleSystem>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.ParticleSystem>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.ParticleSystem>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.ParticleSystem>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5540_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.ParticleSystem>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.ParticleSystem>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5539_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.ParticleSystem>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m27559_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.ParticleSystem>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.ParticleSystem>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.ParticleSystem>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.ParticleSystem>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.ParticleSystem>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.ParticleSystem>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.ParticleSystem>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_51.h"
extern TypeInfo DefaultComparer_t4069_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_51MethodDeclarations.h"
extern Il2CppType IComparable_1_t4773_0_0_0;
extern Il2CppType DefaultComparer_t4069_0_0_0;
extern MethodInfo DefaultComparer__ctor_m27575_MethodInfo;
extern MethodInfo Comparer_1_Compare_m35432_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m27575_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m35432_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.ParticleSystem>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.ParticleSystem>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.ParticleSystem>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.ParticleSystem>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.ParticleSystem>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4772_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.ParticleSystem>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4773_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.ParticleSystem>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m33450_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m27571_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m33450_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.ParticleSystem>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.ParticleSystem>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4070_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Comparison_1_gen_53MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.ParticleSystem>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.ParticleSystem>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.ParticleSystem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.ParticleSystem>::EndInvoke(System.IAsyncResult)
// UnityEngine.CastHelper`1<UnityEngine.ParticleSystem>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t4071_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.ParticleSystem>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_26MethodDeclarations.h"



// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_51.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t1060_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_51MethodDeclarations.h"

// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_52.h"
// System.Predicate`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Predicate_1_gen_54.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_52.h"
// System.Comparison`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Comparison_1_gen_54.h"
extern TypeInfo Rigidbody2D_t1061_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4544_il2cpp_TypeInfo;
extern TypeInfo Rigidbody2DU5BU5D_t4072_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4074_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4542_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4543_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4076_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4080_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4081_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_52MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Predicate_1_gen_54MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_52MethodDeclarations.h"
extern Il2CppType List_1_t1060_0_0_0;
extern Il2CppType ICollection_1_t4544_0_0_0;
extern Il2CppType Rigidbody2DU5BU5D_t4072_0_0_0;
extern Il2CppType Enumerator_t4074_0_0_0;
extern Il2CppType IEnumerable_1_t4542_0_0_0;
extern Il2CppType IEnumerator_1_t4543_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4076_0_0_0;
extern Il2CppType Predicate_1_t4080_0_0_0;
extern Il2CppType Comparer_1_t4081_0_0_0;
extern MethodInfo List_1_get_Item_m27628_MethodInfo;
extern MethodInfo List_1_set_Item_m27629_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m35433_MethodInfo;
extern MethodInfo List_1_Add_m27599_MethodInfo;
extern MethodInfo List_1_Contains_m27606_MethodInfo;
extern MethodInfo List_1_IndexOf_m27612_MethodInfo;
extern MethodInfo List_1_Insert_m27615_MethodInfo;
extern MethodInfo List_1_Remove_m27617_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m35434_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m35435_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m35436_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m27641_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m27716_MethodInfo;
extern MethodInfo Enumerator__ctor_m27635_MethodInfo;
extern MethodInfo List_1_RemoveAt_m27619_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Rigidbody2D>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Rigidbody2D>(!!0[]&,System.Int32)
#define Array_Resize_TisRigidbody2D_t1061_m33466(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, Rigidbody2DU5BU5D_t4072**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_67.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Rigidbody2D>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Rigidbody2D>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisRigidbody2D_t1061_m33468(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Rigidbody2DU5BU5D_t4072*, Rigidbody2D_t1061 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Rigidbody2D>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Rigidbody2D>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisRigidbody2D_t1061_m33470(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, Rigidbody2DU5BU5D_t4072*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Rigidbody2D>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Rigidbody2D>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisRigidbody2D_t1061_m33478(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, Rigidbody2DU5BU5D_t4072*, int32_t, Comparison_1_t4083 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m27628_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m27629_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisRigidbody2D_t1061_m33466_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m27614_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m27616_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m27602_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m35433_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m27601_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m27611_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m27599_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m27606_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m27612_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m27615_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m27617_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m27600_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m27625_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m27626_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m35434_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m35435_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m35436_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m27641_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisRigidbody2D_t1061_m33468_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m27609_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m27610_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m27716_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m27635_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m27613_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m27619_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m27722_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRigidbody2D_t1061_m33470_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRigidbody2D_t1061_m33478_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Rigidbody2D>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Rigidbody2D>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_220.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4073_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_220MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4073_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Rigidbody2D>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Rigidbody2D>(System.Int32)
#define Array_InternalArray__get_Item_TisRigidbody2D_t1061_m33455(__this, p0, method) (( Rigidbody2D_t1061 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m27634_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRigidbody2D_t1061_m33455_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4075_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m27638_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_52MethodDeclarations.h"
extern Il2CppType IList_1_t4075_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m27670_MethodInfo;
extern MethodInfo IList_1_get_Item_m35437_MethodInfo;
extern MethodInfo ICollection_1_Contains_m35438_MethodInfo;
extern MethodInfo IList_1_IndexOf_m35439_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m27670_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m35437_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m27702_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m35438_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m35439_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_52.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4077_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t4077_0_0_0;
extern Il2CppType Rigidbody2D_t1061_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m35440_MethodInfo;
extern MethodInfo Collection_1_SetItem_m27701_MethodInfo;
extern MethodInfo List_1__ctor_m6903_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m27694_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m27692_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m27697_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m27688_MethodInfo;
extern MethodInfo ICollection_1_Clear_m35441_MethodInfo;
extern MethodInfo IList_1_Insert_m35442_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m35443_MethodInfo;
extern MethodInfo IList_1_set_Item_m35444_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m35440_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m27705_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m27706_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m27703_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m27701_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m6903_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m27694_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m27704_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m27692_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m27697_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m27688_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m35441_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m35442_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m35443_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m35444_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4078_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_67MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_67.h"
extern TypeInfo DefaultComparer_t4079_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_67MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4078_0_0_0;
extern Il2CppType IEquatable_1_t5541_0_0_0;
extern Il2CppType DefaultComparer_t4079_0_0_0;
extern MethodInfo DefaultComparer__ctor_m27712_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m35445_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m33467_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m27712_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m35445_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m33467_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5542_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rigidbody2D>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rigidbody2D>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5541_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Rigidbody2D>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m27707_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Rigidbody2D>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Rigidbody2D>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Rigidbody2D>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Rigidbody2D>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_52.h"
extern TypeInfo DefaultComparer_t4082_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_52MethodDeclarations.h"
extern Il2CppType IComparable_1_t4775_0_0_0;
extern Il2CppType DefaultComparer_t4082_0_0_0;
extern MethodInfo DefaultComparer__ctor_m27723_MethodInfo;
extern MethodInfo Comparer_1_Compare_m35446_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m27723_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m35446_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4774_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Rigidbody2D>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4775_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Rigidbody2D>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m33476_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m27719_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m33476_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4083_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Comparison_1_gen_54MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Rigidbody2D>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Rigidbody2D>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Rigidbody2D>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Rigidbody2D>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5543_il2cpp_TypeInfo;

// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>::get_Current()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
