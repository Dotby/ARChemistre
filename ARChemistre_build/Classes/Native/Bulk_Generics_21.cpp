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
extern TypeInfo IEnumerator_1_t5419_il2cpp_TypeInfo;

// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"

// System.Array
#include "mscorlib_System_Array.h"

// T System.Collections.Generic.IEnumerator`1<UnityEngine.WebCamDevice>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.WebCamDevice>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_186.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3876_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.WebCamDevice>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_186MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo WebCamDevice_t914_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1471_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3876_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m7984_MethodInfo;
extern MethodInfo Array_get_Length_m7989_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.WebCamDevice>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.WebCamDevice>(System.Int32)
extern "C" WebCamDevice_t914  Array_InternalArray__get_Item_TisWebCamDevice_t914_m32901_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisWebCamDevice_t914_m32901(__this, p0, method) (( WebCamDevice_t914  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisWebCamDevice_t914_m32901_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25596_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisWebCamDevice_t914_m32901_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.WebCamDevice>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25592_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m25592_gshared (InternalEnumerator_1_t3876 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.WebCamDevice>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25593_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25593_gshared (InternalEnumerator_1_t3876 * __this, MethodInfo* method)
{
	{
		WebCamDevice_t914  L_0 = (( WebCamDevice_t914  (*) (InternalEnumerator_1_t3876 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		WebCamDevice_t914  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.WebCamDevice>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25594_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m25594_gshared (InternalEnumerator_1_t3876 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.WebCamDevice>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25595_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m25595_gshared (InternalEnumerator_1_t3876 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.WebCamDevice>::get_Current()
extern "C" WebCamDevice_t914  InternalEnumerator_1_get_Current_m25596_gshared (InternalEnumerator_1_t3876 * __this, MethodInfo* method)
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
		WebCamDevice_t914  L_8 = (( WebCamDevice_t914  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5420_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.WebCamDevice>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.WebCamDevice>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.WebCamDevice>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.WebCamDevice>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.WebCamDevice>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.WebCamDevice>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.WebCamDevice>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5421_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.WebCamDevice>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5422_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.WebCamDevice>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.WebCamDevice>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.WebCamDevice>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.WebCamDevice>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.WebCamDevice>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t804_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20MethodDeclarations.h"

// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi_0.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
#include "Qualcomm.Vuforia.UnityExtensions_ArrayTypes.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_53.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_54.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_128.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_129.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__26.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_26.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_56.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t147_il2cpp_TypeInfo;
extern TypeInfo ProfileData_t803_il2cpp_TypeInfo;
extern TypeInfo Void_t133_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1172_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2837_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
extern TypeInfo Link_t1907_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1908_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3897_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3901_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4505_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3895_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t4587_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1298_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3878_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3904_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3899_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3906_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2906_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t186_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2694_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t43_il2cpp_TypeInfo;
extern TypeInfo ProfileDataU5BU5D_t3877_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t521_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1291_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3893_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t5423_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_53MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_54MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_128MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_129MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__26MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_26MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_56MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType Dictionary_2_t804_0_0_0;
extern Il2CppType IEqualityComparer_1_t2837_0_0_0;
extern Il2CppType KeyCollection_t3897_0_0_0;
extern Il2CppType ValueCollection_t3901_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4505_0_0_0;
extern Il2CppType KeyValuePair_2_t3895_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t4587_0_0_0;
extern Il2CppType Transform_1_t3878_0_0_0;
extern Il2CppType Transform_1_t3904_0_0_0;
extern Il2CppType Enumerator_t3899_0_0_0;
extern Il2CppType ShimEnumerator_t3906_0_0_0;
extern Il2CppType EqualityComparer_1_t2906_0_0_0;
extern Il2CppType Int32U5BU5D_t186_0_0_0;
extern Il2CppType LinkU5BU5D_t2694_0_0_0;
extern Il2CppType StringU5BU5D_t43_0_0_0;
extern Il2CppType ProfileDataU5BU5D_t3877_0_0_0;
extern Il2CppType EqualityComparer_1_t3893_0_0_0;
extern Il2CppType IEqualityComparer_1_t5423_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType ProfileData_t803_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m5371_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m25637_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m25639_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m6951_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m34668_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m34669_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m10896_MethodInfo;
extern MethodInfo KeyCollection__ctor_m25792_MethodInfo;
extern MethodInfo ValueCollection__ctor_m25827_MethodInfo;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern MethodInfo Dictionary_2_Add_m25657_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m25668_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m25683_MethodInfo;
extern MethodInfo Transform_1__ctor_m25850_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m25647_MethodInfo;
extern MethodInfo Transform_1__ctor_m25854_MethodInfo;
extern MethodInfo Enumerator__ctor_m25811_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m25862_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m7993_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2726_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m25635_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m25781_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m11063_MethodInfo;
extern MethodInfo Array_Copy_m10283_MethodInfo;
extern MethodInfo Array_Clear_m9451_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m35310_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8002_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8014_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m8013_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m498_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m8003_MethodInfo;
extern MethodInfo Type_ToString_m10362_MethodInfo;
extern MethodInfo String_Concat_m540_MethodInfo;
extern MethodInfo ArgumentException__ctor_m7991_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10335_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m5370_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m35311_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m7985_MethodInfo;
struct Dictionary_2_t804;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1298_TisDictionaryEntry_t1298_m32959 (Dictionary_2_t804 * __this, DictionaryEntryU5BU5D_t4587* p0, int32_t p1, Transform_1_t3878 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t804;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Dictionary_2_t3880;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_130.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3895_m32962_gshared (Dictionary_2_t3880 * __this, Array_t * p0, int32_t p1, Transform_1_t3905 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3895_m32962(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, Transform_1_t3905 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3895_m32962_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3895_m32961(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t804 *, Array_t *, int32_t, Transform_1_t3904 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3895_m32962_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t804;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3895_TisKeyValuePair_2_t3895_m32964 (Dictionary_2_t804 * __this, KeyValuePair_2U5BU5D_t4505* p0, int32_t p1, Transform_1_t3904 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m5371_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m25675_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m25637_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m25677_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m25639_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m34668_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34669_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m25655_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m25792_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m25827_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m25641_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m25657_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m25668_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m25782_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m25784_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m25679_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m25653_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m25645_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m25683_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25850_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1298_TisDictionaryEntry_t1298_m32959_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m25647_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25854_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3895_m32961_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25811_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m25862_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m15171_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m25643_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m25635_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m25781_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3895_TisKeyValuePair_2_t3895_m32964_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m25777_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m35310_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m5370_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m35311_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t3880_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_51.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_52.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_124.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_125.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_25.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2860_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3884_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3888_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4507_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3881_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3879_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3891_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3886_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3892_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2887_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t164_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_51MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_52MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_124MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_125MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_25MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType Dictionary_2_t3880_0_0_0;
extern Il2CppType IEqualityComparer_1_t2860_0_0_0;
extern Il2CppType KeyCollection_t3884_0_0_0;
extern Il2CppType ValueCollection_t3888_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4507_0_0_0;
extern Il2CppType KeyValuePair_2_t3881_0_0_0;
extern Il2CppType Transform_1_t3879_0_0_0;
extern Il2CppType Transform_1_t3891_0_0_0;
extern Il2CppType Enumerator_t3886_0_0_0;
extern Il2CppType ShimEnumerator_t3892_0_0_0;
extern Il2CppType EqualityComparer_1_t2887_0_0_0;
extern Il2CppType ObjectU5BU5D_t164_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m25661_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m25638_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m25640_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m34672_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m31599_MethodInfo;
extern MethodInfo KeyCollection__ctor_m25701_MethodInfo;
extern MethodInfo ValueCollection__ctor_m25736_MethodInfo;
extern MethodInfo Dictionary_2_Add_m25658_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m25669_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m25684_MethodInfo;
extern MethodInfo Transform_1__ctor_m25759_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m25648_MethodInfo;
extern MethodInfo Transform_1__ctor_m25763_MethodInfo;
extern MethodInfo Enumerator__ctor_m25720_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m25767_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m25636_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m25685_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m25670_MethodInfo;
struct Dictionary_2_t3880;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1298_TisDictionaryEntry_t1298_m32938 (Dictionary_2_t3880 * __this, DictionaryEntryU5BU5D_t4587* p0, int32_t p1, Transform_1_t3879 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t3880;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3881_m32940_gshared (Dictionary_2_t3880 * __this, Array_t * p0, int32_t p1, Transform_1_t3891 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3881_m32940(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, Transform_1_t3891 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3881_m32940_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3880;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3881_TisKeyValuePair_2_t3881_m32941 (Dictionary_2_t3880 * __this, KeyValuePair_2U5BU5D_t4507* p0, int32_t p1, Transform_1_t3891 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m25661_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m25676_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m25638_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m25678_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m25640_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m34672_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m31599_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m25656_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m25701_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m25736_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m25642_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m25658_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m25669_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m25686_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m25688_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m25680_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m25654_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m25646_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m25684_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25759_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1298_TisDictionaryEntry_t1298_m32938_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m25648_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25763_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3881_m32940_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25720_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m25767_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m15042_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m25644_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m25636_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m25685_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3881_TisKeyValuePair_2_t3881_m32941_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m25670_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m25598_GenericMethod;
extern "C" void Dictionary_2__ctor_m25598_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		(( void (*) (Dictionary_2_t3880 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m25600_GenericMethod;
extern "C" void Dictionary_2__ctor_m25600_gshared (Dictionary_2_t3880 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t3880 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m25602_GenericMethod;
extern "C" void Dictionary_2__ctor_m25602_gshared (Dictionary_2_t3880 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t3880 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m25604_GenericMethod;
extern "C" void Dictionary_2__ctor_m25604_gshared (Dictionary_2_t3880 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		SerializationInfo_t1123 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m25606_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25606_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), __this, ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t3880 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ProfileData_t803  L_5 = (ProfileData_t803 )VirtFuncInvoker1< ProfileData_t803 , Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_4);
		ProfileData_t803  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m25608_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25608_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3880 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		ProfileData_t803  L_3 = (( ProfileData_t803  (*) (Dictionary_2_t3880 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, ProfileData_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m25610_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25610_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3880 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		ProfileData_t803  L_3 = (( ProfileData_t803  (*) (Dictionary_2_t3880 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, ProfileData_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m25612_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25612_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral579, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25614_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25614_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25616_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25616_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25618_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25618_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25620_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25620_gshared (Dictionary_2_t3880 * __this, KeyValuePair_2_t3881  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		ProfileData_t803  L_1 = (( ProfileData_t803  (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		VirtActionInvoker2< Object_t *, ProfileData_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25622_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25622_gshared (Dictionary_2_t3880 * __this, KeyValuePair_2_t3881  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3881  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3880 *, KeyValuePair_2_t3881 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25624_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25624_gshared (Dictionary_2_t3880 * __this, KeyValuePair_2U5BU5D_t4507* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4507* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3880 *, KeyValuePair_2U5BU5D_t4507*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25626_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25626_gshared (Dictionary_2_t3880 * __this, KeyValuePair_2_t3881  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3881  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3880 *, KeyValuePair_2_t3881 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m25628_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t4587_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25628_gshared (Dictionary_2_t3880 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m25628_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m25628_init)
	{
		DictionaryEntryU5BU5D_t4587_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t4587_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m25628_init = true;
	}
	KeyValuePair_2U5BU5D_t4507* V_0 = {0};
	DictionaryEntryU5BU5D_t4587* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t4587* G_B5_1 = {0};
	Dictionary_2_t3880 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t4587* G_B4_1 = {0};
	Dictionary_2_t3880 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t4507*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		KeyValuePair_2U5BU5D_t4507* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4507* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t3880 *, KeyValuePair_2U5BU5D_t4507*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		Array_t * L_6 = ___array;
		V_1 = ((DictionaryEntryU5BU5D_t4587*)IsInst(L_6, DictionaryEntryU5BU5D_t4587_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t4587* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t4587* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t3879 * L_10 = ((Dictionary_2_t3880_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3880 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3880 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17) };
		Transform_1_t3879 * L_12 = (Transform_1_t3879 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		(( void (*) (Transform_1_t3879 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		((Dictionary_2_t3880_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3880 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3879 * L_13 = ((Dictionary_2_t3880_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t3880 *, DictionaryEntryU5BU5D_t4587*, int32_t, Transform_1_t3879 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t3891 * L_17 = (Transform_1_t3891 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t3891 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		(( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, Transform_1_t3891 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25630_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25630_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886  L_0 = {0};
		(( void (*) (Enumerator_t3886 *, Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t3886  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25632_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25632_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886  L_0 = {0};
		(( void (*) (Enumerator_t3886 *, Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t3886  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25634_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25634_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t3892 * L_0 = (ShimEnumerator_t3892 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		(( void (*) (ShimEnumerator_t3892 *, Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25636_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Item(TKey)
extern "C" ProfileData_t803  Dictionary_2_get_Item_m25638_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1172 * L_2 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_2, (String_t*) &_stringLiteral579, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t186* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t186* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2694* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t164* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		ProfileDataU5BU5D_t3877* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(ProfileData_t803 *)(ProfileData_t803 *)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t2694* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t1908 * L_27 = (KeyNotFoundException_t1908 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t1908_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m10896(L_27, /*hidden argument*/&KeyNotFoundException__ctor_m10896_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25640_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1172 * L_2 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_2, (String_t*) &_stringLiteral579, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t186* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t186* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2694* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t164* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2694* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (__this->___count_10);
		int32_t L_29 = ((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		int32_t L_32 = V_0;
		Int32U5BU5D_t186* L_33 = (__this->___table_4);
		NullCheck(L_33);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (__this->___emptySlot_9);
		V_2 = L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (__this->___touchedSlots_8);
		int32_t L_37 = L_36;
		V_4 = L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2694* L_39 = (__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t2694* L_42 = (__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t186* L_44 = (__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t186* L_47 = (__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t2694* L_50 = (__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t164* L_53 = (__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2694* L_57 = (__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t2694* L_59 = (__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t2694* L_62 = (__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t186* L_64 = (__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t186* L_67 = (__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		ProfileDataU5BU5D_t3877* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		ProfileData_t803  L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((ProfileData_t803 *)(ProfileData_t803 *)SZArrayLdElema(L_70, L_71)) = (ProfileData_t803 )L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2887_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m25642_gshared (Dictionary_2_t3880 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m25642_init;
	if (!Dictionary_2_Init_m25642_init)
	{
		EqualityComparer_1_t2887_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2887_0_0_0);
		Dictionary_2_Init_m25642_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3880 * G_B4_0 = {0};
	Dictionary_2_t3880 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3880 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_1 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_1, (String_t*) &_stringLiteral938, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t3880 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3880 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3880 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2887_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2887 * L_5 = (( EqualityComparer_1_t2887 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3880 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = ((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = ((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		(( void (*) (Dictionary_2_t3880 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t186_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2694_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m25644_gshared (Dictionary_2_t3880 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m25644_init;
	if (!Dictionary_2_InitArrays_m25644_init)
	{
		Int32U5BU5D_t186_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t186_0_0_0);
		LinkU5BU5D_t2694_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2694_0_0_0);
		Dictionary_2_InitArrays_m25644_init = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t186*)SZArrayNew(Int32U5BU5D_t186_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2694*)SZArrayNew(LinkU5BU5D_t2694_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t164*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ProfileDataU5BU5D_t3877*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t186* L_4 = (__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t186* L_6 = (__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25646_gshared (Dictionary_2_t3880 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral571, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_3 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_3, (String_t*) &_stringLiteral573, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7989(L_5, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t521 * L_7 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_7, (String_t*) &_stringLiteral939, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck(L_8);
		int32_t L_9 = Array_get_Length_m7989(L_8, /*hidden argument*/&Array_get_Length_m7989_MethodInfo);
		int32_t L_10 = ___index;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), __this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t521 * L_12 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_12, (String_t*) &_stringLiteral940, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3881  Dictionary_2_make_pair_m25648_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		ProfileData_t803  L_1 = ___value;
		KeyValuePair_2_t3881  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3881 *, Object_t *, ProfileData_t803 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m25650_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_key_m25650_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m25652_GenericMethod;
extern "C" ProfileData_t803  Dictionary_2_pick_value_m25652_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	{
		ProfileData_t803  L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25654_gshared (Dictionary_2_t3880 * __this, KeyValuePair_2U5BU5D_t4507* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4507* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		KeyValuePair_2U5BU5D_t4507* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t3891 * L_5 = (Transform_1_t3891 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t3891 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		(( void (*) (Dictionary_2_t3880 *, KeyValuePair_2U5BU5D_t4507*, int32_t, Transform_1_t3891 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Resize()
extern TypeInfo* Int32U5BU5D_t186_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2694_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m25656_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m25656_init;
	if (!Dictionary_2_Resize_m25656_init)
	{
		Int32U5BU5D_t186_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t186_0_0_0);
		LinkU5BU5D_t2694_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2694_0_0_0);
		Dictionary_2_Resize_m25656_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t186* V_1 = {0};
	LinkU5BU5D_t2694* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t164* V_7 = {0};
	ProfileDataU5BU5D_t3877* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t186* L_0 = (__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1291_il2cpp_TypeInfo));
		int32_t L_1 = Hashtable_ToPrime_m11063(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/&Hashtable_ToPrime_m11063_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((Int32U5BU5D_t186*)SZArrayNew(Int32U5BU5D_t186_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = ((LinkU5BU5D_t2694*)SZArrayNew(LinkU5BU5D_t2694_il2cpp_TypeInfo_var, L_3));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t186* L_4 = (__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t2694* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t164* L_10 = (__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck(L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = ((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = L_14;
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2694* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t186* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t186* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2694* L_26 = (__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t186* L_32 = (__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t186* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2694* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = ((ObjectU5BU5D_t164*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_35));
		int32_t L_36 = V_0;
		V_8 = ((ProfileDataU5BU5D_t3877*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_36));
		ObjectU5BU5D_t164* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t164* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m10283(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m10283_MethodInfo);
		ProfileDataU5BU5D_t3877* L_40 = (__this->___valueSlots_7);
		ProfileDataU5BU5D_t3877* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m10283(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m10283_MethodInfo);
		ObjectU5BU5D_t164* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ProfileDataU5BU5D_t3877* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25658_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1172 * L_2 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_2, (String_t*) &_stringLiteral579, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t186* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t186* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2694* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		ObjectU5BU5D_t164* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_15, (*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t521 * L_21 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_21, (String_t*) &_stringLiteral1550, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t2694* L_22 = (__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (__this->___count_10);
		int32_t L_27 = ((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		int32_t L_30 = V_0;
		Int32U5BU5D_t186* L_31 = (__this->___table_4);
		NullCheck(L_31);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (__this->___emptySlot_9);
		V_2 = L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (__this->___touchedSlots_8);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2694* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t2694* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t2694* L_43 = (__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t186* L_45 = (__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t186* L_48 = (__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t164* L_51 = (__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		ProfileDataU5BU5D_t3877* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		ProfileData_t803  L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((ProfileData_t803 *)(ProfileData_t803 *)SZArrayLdElema(L_54, L_55)) = (ProfileData_t803 )L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m25660_GenericMethod;
extern "C" void Dictionary_2_Clear_m25660_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t186* L_0 = (__this->___table_4);
		Int32U5BU5D_t186* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m9451(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m9451_MethodInfo);
		ObjectU5BU5D_t164* L_2 = (__this->___keySlots_6);
		ObjectU5BU5D_t164* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m9451(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m9451_MethodInfo);
		ProfileDataU5BU5D_t3877* L_4 = (__this->___valueSlots_7);
		ProfileDataU5BU5D_t3877* L_5 = (__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m9451(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&Array_Clear_m9451_MethodInfo);
		LinkU5BU5D_t2694* L_6 = (__this->___linkSlots_5);
		LinkU5BU5D_t2694* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m9451(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/&Array_Clear_m9451_MethodInfo);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25661_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1172 * L_2 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_2, (String_t*) &_stringLiteral579, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t186* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t186* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2694* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t164* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2694* L_20 = (__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m25663_GenericMethod;
extern TypeInfo* EqualityComparer_1_t3893_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m25663_gshared (Dictionary_2_t3880 * __this, ProfileData_t803  ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m25663_init;
	if (!Dictionary_2_ContainsValue_m25663_init)
	{
		EqualityComparer_1_t3893_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3893_0_0_0);
		Dictionary_2_ContainsValue_m25663_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3893_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3893 * L_0 = (( EqualityComparer_1_t3893 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t186* L_1 = (__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		ProfileDataU5BU5D_t3877* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		ProfileData_t803  L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, ProfileData_t803 , ProfileData_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_4, (*(ProfileData_t803 *)(ProfileData_t803 *)SZArrayLdElema(L_5, L_7)), L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t2694* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t186* L_16 = (__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m25665_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m25665_gshared (Dictionary_2_t3880 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t4507* V_0 = {0};
	{
		SerializationInfo_t1123 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral588, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1123 * L_2 = ___info;
		int32_t L_3 = (__this->___generation_14);
		NullCheck(L_2);
		SerializationInfo_AddValue_m8002(L_2, (String_t*) &_stringLiteral590, L_3, /*hidden argument*/&SerializationInfo_AddValue_m8002_MethodInfo);
		SerializationInfo_t1123 * L_4 = ___info;
		Object_t* L_5 = (__this->___hcp_12);
		NullCheck(L_4);
		SerializationInfo_AddValue_m8014(L_4, (String_t*) &_stringLiteral592, L_5, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		V_0 = (KeyValuePair_2U5BU5D_t4507*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t4507*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), L_7));
		KeyValuePair_2U5BU5D_t4507* L_8 = V_0;
		(( void (*) (Dictionary_2_t3880 *, KeyValuePair_2U5BU5D_t4507*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_004f:
	{
		SerializationInfo_t1123 * L_9 = ___info;
		Int32U5BU5D_t186* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m8002(L_9, (String_t*) &_stringLiteral1551, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m8002_MethodInfo);
		SerializationInfo_t1123 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t4507* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m8014(L_11, (String_t*) &_stringLiteral1552, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m25667_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m25667_gshared (Dictionary_2_t3880 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t4507* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t1123 * L_0 = (__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t1123 * L_1 = (__this->___serialization_info_13);
		NullCheck(L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m8013(L_1, (String_t*) &_stringLiteral590, /*hidden argument*/&SerializationInfo_GetInt32_m8013_MethodInfo);
		__this->___generation_14 = L_2;
		SerializationInfo_t1123 * L_3 = (__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m8003(L_3, (String_t*) &_stringLiteral592, L_4, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)));
		SerializationInfo_t1123 * L_6 = (__this->___serialization_info_13);
		NullCheck(L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m8013(L_6, (String_t*) &_stringLiteral1551, /*hidden argument*/&SerializationInfo_GetInt32_m8013_MethodInfo);
		V_0 = L_7;
		SerializationInfo_t1123 * L_8 = (__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m8003(L_8, (String_t*) &_stringLiteral1552, L_9, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		V_1 = ((KeyValuePair_2U5BU5D_t4507*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (Dictionary_2_t3880 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t4507* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t4507* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(((KeyValuePair_2_t3881 *)(KeyValuePair_2_t3881 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		KeyValuePair_2U5BU5D_t4507* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ProfileData_t803  L_19 = (( ProfileData_t803  (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(((KeyValuePair_2_t3881 *)(KeyValuePair_2_t3881 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		VirtActionInvoker2< Object_t *, ProfileData_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t4507* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t1123 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25669_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	ProfileData_t803  V_5 = {0};
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1172 * L_2 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_2, (String_t*) &_stringLiteral579, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t186* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t186* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		LinkU5BU5D_t2694* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t164* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2694* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t186* L_30 = (__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t2694* L_32 = (__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2694* L_35 = (__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t2694* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t2694* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (__this->___emptySlot_9);
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t2694* L_44 = (__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t164* L_46 = (__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		ProfileDataU5BU5D_t3877* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&ProfileData_t803_il2cpp_TypeInfo), (&V_5));
		ProfileData_t803  L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((ProfileData_t803 *)(ProfileData_t803 *)SZArrayLdElema(L_49, L_50)) = (ProfileData_t803 )L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25670_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, ProfileData_t803 * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProfileData_t803  V_2 = {0};
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1172 * L_2 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_2, (String_t*) &_stringLiteral579, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t186* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t186* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2694* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t164* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		ProfileData_t803 * L_20 = ___value;
		ProfileDataU5BU5D_t3877* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(ProfileData_t803 *)(ProfileData_t803 *)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2694* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		ProfileData_t803 * L_28 = ___value;
		Initobj (InitializedTypeInfo(&ProfileData_t803_il2cpp_TypeInfo), (&V_2));
		ProfileData_t803  L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Keys()
extern Il2CppGenericMethod Dictionary_2_get_Keys_m25672_GenericMethod;
extern "C" KeyCollection_t3884 * Dictionary_2_get_Keys_m25672_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		KeyCollection_t3884 * L_0 = (KeyCollection_t3884 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		(( void (*) (KeyCollection_t3884 *, Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Values()
extern Il2CppGenericMethod Dictionary_2_get_Values_m25674_GenericMethod;
extern "C" ValueCollection_t3888 * Dictionary_2_get_Values_m25674_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3888 * L_0 = (ValueCollection_t3888 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48));
		(( void (*) (ValueCollection_t3888 *, Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m25676_gshared (Dictionary_2_t3880 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral579, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m10362_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m540(NULL /*static, unused*/, (String_t*) &_stringLiteral1553, L_4, /*hidden argument*/&String_Concat_m540_MethodInfo);
		ArgumentException_t521 * L_6 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m7991(L_6, L_5, (String_t*) &_stringLiteral579, /*hidden argument*/&ArgumentException__ctor_m7991_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTValue(System.Object)
extern "C" ProfileData_t803  Dictionary_2_ToTValue_m25678_gshared (Dictionary_2_t3880 * __this, Object_t * ___value, MethodInfo* method)
{
	ProfileData_t803  V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m10335_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&ProfileData_t803_il2cpp_TypeInfo), (&V_0));
		ProfileData_t803  L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m10362_MethodInfo, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Concat_m540(NULL /*static, unused*/, (String_t*) &_stringLiteral1553, L_6, /*hidden argument*/&String_Concat_m540_MethodInfo);
		ArgumentException_t521 * L_8 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m7991(L_8, L_7, (String_t*) &_stringLiteral781, /*hidden argument*/&ArgumentException__ctor_m7991_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(ProfileData_t803 *)((ProfileData_t803 *)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t3893_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25680_gshared (Dictionary_2_t3880 * __this, KeyValuePair_2_t3881  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m25680_init;
	if (!Dictionary_2_ContainsKeyValuePair_m25680_init)
	{
		EqualityComparer_1_t3893_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3893_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m25680_init = true;
	}
	ProfileData_t803  V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, ProfileData_t803 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52), __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3893_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3893 * L_2 = (( EqualityComparer_1_t3893 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		ProfileData_t803  L_3 = (( ProfileData_t803  (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ProfileData_t803  L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, ProfileData_t803 , ProfileData_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m25682_GenericMethod;
extern "C" Enumerator_t3886  Dictionary_2_GetEnumerator_m25682_gshared (Dictionary_2_t3880 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886  L_0 = {0};
		(( void (*) (Enumerator_t3886 *, Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1298  Dictionary_2_U3CCopyToU3Em__0_m25684_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		ProfileData_t803  L_2 = ___value;
		ProfileData_t803  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		DictionaryEntry_t1298  L_5 = {0};
		DictionaryEntry__ctor_m7985(&L_5, ((Object_t *)L_1), L_4, /*hidden argument*/&DictionaryEntry__ctor_m7985_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5424_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5425_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4508_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_ToString_m715_MethodInfo;
extern MethodInfo String_Concat_m8022_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m25687_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m25689_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m25685_gshared (KeyValuePair_2_t3881 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3881 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ProfileData_t803  L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3881 *, ProfileData_t803 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m25686_gshared (KeyValuePair_2_t3881 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m25687_gshared (KeyValuePair_2_t3881 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C" ProfileData_t803  KeyValuePair_2_get_Value_m25688_gshared (KeyValuePair_2_t3881 * __this, MethodInfo* method)
{
	{
		ProfileData_t803  L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m25689_gshared (KeyValuePair_2_t3881 * __this, ProfileData_t803  ___value, MethodInfo* method)
{
	{
		ProfileData_t803  L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m25690_GenericMethod;
extern TypeInfo* StringU5BU5D_t43_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m25690_gshared (KeyValuePair_2_t3881 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m25690_init;
	if (!KeyValuePair_2_ToString_m25690_init)
	{
		StringU5BU5D_t43_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t43_0_0_0);
		KeyValuePair_2_ToString_m25690_init = true;
	}
	Object_t * V_0 = {0};
	ProfileData_t803  V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t43* G_B2_1 = {0};
	StringU5BU5D_t43* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t43* G_B1_1 = {0};
	StringU5BU5D_t43* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t43* G_B3_2 = {0};
	StringU5BU5D_t43* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t43* G_B5_1 = {0};
	StringU5BU5D_t43* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t43* G_B4_1 = {0};
	StringU5BU5D_t43* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t43* G_B6_2 = {0};
	StringU5BU5D_t43* G_B6_3 = {0};
	{
		StringU5BU5D_t43* L_0 = ((StringU5BU5D_t43*)SZArrayNew(StringU5BU5D_t43_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral550);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral550;
		StringU5BU5D_t43* L_1 = L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_4;
		NullCheck((*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t43* L_7 = G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral559);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral559;
		StringU5BU5D_t43* L_8 = L_7;
		ProfileData_t803  L_9 = (( ProfileData_t803  (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		ProfileData_t803  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		ProfileData_t803  L_12 = (( ProfileData_t803  (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_12;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t43* L_15 = G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral551);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral551;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m8022(NULL /*static, unused*/, L_15, /*hidden argument*/&String_Concat_m8022_MethodInfo);
		return L_16;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_187.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3882_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_187MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3882_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>(System.Int32)
extern "C" KeyValuePair_2_t3881  Array_InternalArray__get_Item_TisKeyValuePair_2_t3881_m32912_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3881_m32912(__this, p0, method) (( KeyValuePair_2_t3881  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3881_m32912_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25695_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3881_m32912_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25691_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m25691_gshared (InternalEnumerator_1_t3882 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25692_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25692_gshared (InternalEnumerator_1_t3882 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3881  L_0 = (( KeyValuePair_2_t3881  (*) (InternalEnumerator_1_t3882 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3881  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25693_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m25693_gshared (InternalEnumerator_1_t3882 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25694_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m25694_gshared (InternalEnumerator_1_t3882 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::get_Current()
extern "C" KeyValuePair_2_t3881  InternalEnumerator_1_get_Current_m25695_gshared (InternalEnumerator_1_t3882 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3881  L_8 = (( KeyValuePair_2_t3881  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5426_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t5427_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4509_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Vuforia.WebCamProfile/ProfileData>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_188.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3883_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_188MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3883_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.WebCamProfile/ProfileData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.WebCamProfile/ProfileData>(System.Int32)
extern "C" ProfileData_t803  Array_InternalArray__get_Item_TisProfileData_t803_m32923_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisProfileData_t803_m32923(__this, p0, method) (( ProfileData_t803  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisProfileData_t803_m32923_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25700_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisProfileData_t803_m32923_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.WebCamProfile/ProfileData>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25696_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m25696_gshared (InternalEnumerator_1_t3883 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25697_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25697_gshared (InternalEnumerator_1_t3883 * __this, MethodInfo* method)
{
	{
		ProfileData_t803  L_0 = (( ProfileData_t803  (*) (InternalEnumerator_1_t3883 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ProfileData_t803  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Vuforia.WebCamProfile/ProfileData>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25698_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m25698_gshared (InternalEnumerator_1_t3883 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.WebCamProfile/ProfileData>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25699_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m25699_gshared (InternalEnumerator_1_t3883 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<Vuforia.WebCamProfile/ProfileData>::get_Current()
extern "C" ProfileData_t803  InternalEnumerator_1_get_Current_m25700_gshared (InternalEnumerator_1_t3883 * __this, MethodInfo* method)
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
		ProfileData_t803  L_8 = (( ProfileData_t803  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5428_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.WebCamProfile/ProfileData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.WebCamProfile/ProfileData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.WebCamProfile/ProfileData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.WebCamProfile/ProfileData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.WebCamProfile/ProfileData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.WebCamProfile/ProfileData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.WebCamProfile/ProfileData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5429_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5430_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.WebCamProfile/ProfileData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.WebCamProfile/ProfileData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.WebCamProfile/ProfileData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.WebCamProfile/ProfileData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.WebCamProfile/ProfileData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_52.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_122.h"
extern TypeInfo ICollection_t1268_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t146_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3885_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3887_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_122MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_52MethodDeclarations.h"
extern Il2CppType Enumerator_t3885_0_0_0;
extern Il2CppType Transform_1_t3887_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m14009_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m7099_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m25712_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m25650_MethodInfo;
extern MethodInfo Transform_1__ctor_m25732_MethodInfo;
extern MethodInfo Enumerator__ctor_m25715_MethodInfo;
struct Dictionary_2_t3880;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m32934_gshared (Dictionary_2_t3880 * __this, Array_t * p0, int32_t p1, Transform_1_t3887 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m32934(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, Transform_1_t3887 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m32934_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3880;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m32933 (Dictionary_2_t3880 * __this, ObjectU5BU5D_t164* p0, int32_t p1, Transform_1_t3887 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m25713_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m25712_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25732_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m32934_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m32933_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25715_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m25701_gshared (KeyCollection_t3884 * __this, Dictionary_2_t3880 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Dictionary_2_t3880 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1555, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3880 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m25702_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m25702_gshared (KeyCollection_t3884 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m25703_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m25703_gshared (KeyCollection_t3884 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m25704_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m25704_gshared (KeyCollection_t3884 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m25705_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m25705_gshared (KeyCollection_t3884 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m25706_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m25706_gshared (KeyCollection_t3884 * __this, MethodInfo* method)
{
	{
		Enumerator_t3885  L_0 = (( Enumerator_t3885  (*) (KeyCollection_t3884 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3885  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m25707_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m25707_gshared (KeyCollection_t3884 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ObjectU5BU5D_t164* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ObjectU5BU5D_t164*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t164* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t164* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ObjectU5BU5D_t164*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3880 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3880 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3887 * L_11 = (Transform_1_t3887 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3887 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, Transform_1_t3887 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m25708_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m25708_gshared (KeyCollection_t3884 * __this, MethodInfo* method)
{
	{
		Enumerator_t3885  L_0 = (( Enumerator_t3885  (*) (KeyCollection_t3884 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3885  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m25709_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m25709_gshared (KeyCollection_t3884 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m25710_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m25710_gshared (KeyCollection_t3884 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m25711_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m25711_gshared (KeyCollection_t3884 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14009_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m25712_gshared (KeyCollection_t3884 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t164* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3880 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t164* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3887 * L_7 = (Transform_1_t3887 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3887 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3880 *, ObjectU5BU5D_t164*, int32_t, Transform_1_t3887 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
extern "C" Enumerator_t3885  KeyCollection_GetEnumerator_m25713_gshared (KeyCollection_t3884 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		Enumerator_t3885  L_1 = {0};
		(( void (*) (Enumerator_t3885 *, Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m25714_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m25714_gshared (KeyCollection_t3884 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m25727_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m25731_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m25725_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25715_gshared (Enumerator_t3885 * __this, Dictionary_2_t3880 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3886  L_1 = (( Enumerator_t3886  (*) (Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m25716_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25716_gshared (Enumerator_t3885 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m25717_GenericMethod;
extern "C" void Enumerator_Dispose_m25717_gshared (Enumerator_t3885 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m25718_GenericMethod;
extern "C" bool Enumerator_MoveNext_m25718_gshared (Enumerator_t3885 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m25719_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m25719_gshared (Enumerator_t3885 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3881 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo ObjectDisposedException_t1780_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo ObjectDisposedException__ctor_m9468_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m25730_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m25728_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m25729_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25720_gshared (Enumerator_t3886 * __this, Dictionary_2_t3880 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3880 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m25721_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25721_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3881  L_0 = (__this->___current_3);
		KeyValuePair_2_t3881  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25722_GenericMethod;
extern "C" DictionaryEntry_t1298  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25722_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3881 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t3881 * L_3 = &(__this->___current_3);
		ProfileData_t803  L_4 = (( ProfileData_t803  (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		ProfileData_t803  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t1298  L_7 = {0};
		DictionaryEntry__ctor_m7985(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m7985_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25723_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25723_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25724_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25724_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		ProfileData_t803  L_0 = (( ProfileData_t803  (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		ProfileData_t803  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25725_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___next_1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = L_3;
		Dictionary_2_t3880 * L_4 = (__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2694* L_5 = (L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (((Link_t1907 *)(Link_t1907 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t3880 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t164* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3880 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ProfileDataU5BU5D_t3877* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3881  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3881 *, Object_t *, ProfileData_t803 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(ProfileData_t803 *)(ProfileData_t803 *)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t3880 * L_18 = (__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m25726_GenericMethod;
extern "C" KeyValuePair_2_t3881  Enumerator_get_Current_m25726_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3881  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m25727_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3881 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_CurrentValue()
extern "C" ProfileData_t803  Enumerator_get_CurrentValue_m25728_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3881 * L_0 = &(__this->___current_3);
		ProfileData_t803  L_1 = (( ProfileData_t803  (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::VerifyState()
extern "C" void Enumerator_VerifyState_m25729_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m9468(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m9468_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t3880 * L_2 = (__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___generation_14);
		int32_t L_4 = (__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1471 * L_5 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_5, (String_t*) &_stringLiteral1554, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25730_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1471 * L_1 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_1, (String_t*) &_stringLiteral941, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::Dispose()
extern "C" void Enumerator_Dispose_m25731_gshared (Enumerator_t3886 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3880 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25732_gshared (Transform_1_t3887 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25733_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m25733_gshared (Transform_1_t3887 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25733((Transform_1_t3887 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25734_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25734_gshared (Transform_1_t3887 * __this, Object_t * ___key, ProfileData_t803  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&ProfileData_t803_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25735_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m25735_gshared (Transform_1_t3887 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_53.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_123.h"
extern TypeInfo Enumerator_t3889_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3890_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_123MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_53MethodDeclarations.h"
extern Il2CppType Enumerator_t3889_0_0_0;
extern Il2CppType Transform_1_t3890_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m25747_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m25652_MethodInfo;
extern MethodInfo Transform_1__ctor_m25755_MethodInfo;
extern MethodInfo Enumerator__ctor_m25750_MethodInfo;
struct Dictionary_2_t3880;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<Vuforia.WebCamProfile/ProfileData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<Vuforia.WebCamProfile/ProfileData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisProfileData_t803_m32936_gshared (Dictionary_2_t3880 * __this, Array_t * p0, int32_t p1, Transform_1_t3890 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisProfileData_t803_m32936(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, Transform_1_t3890 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisProfileData_t803_m32936_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3880;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisProfileData_t803_TisProfileData_t803_m32937 (Dictionary_2_t3880 * __this, ProfileDataU5BU5D_t3877* p0, int32_t p1, Transform_1_t3890 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m25748_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m25747_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25755_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisProfileData_t803_m32936_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisProfileData_t803_TisProfileData_t803_m32937_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25750_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m25736_gshared (ValueCollection_t3888 * __this, Dictionary_2_t3880 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Dictionary_2_t3880 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1555, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3880 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25737_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25737_gshared (ValueCollection_t3888 * __this, ProfileData_t803  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25738_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25738_gshared (ValueCollection_t3888 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25739_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25739_gshared (ValueCollection_t3888 * __this, ProfileData_t803  ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		ProfileData_t803  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3880 *, ProfileData_t803 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25740_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25740_gshared (ValueCollection_t3888 * __this, ProfileData_t803  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25741_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25741_gshared (ValueCollection_t3888 * __this, MethodInfo* method)
{
	{
		Enumerator_t3889  L_0 = (( Enumerator_t3889  (*) (ValueCollection_t3888 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3889  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m25742_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m25742_gshared (ValueCollection_t3888 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ProfileDataU5BU5D_t3877* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ProfileDataU5BU5D_t3877*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ProfileDataU5BU5D_t3877* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ProfileDataU5BU5D_t3877* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ProfileDataU5BU5D_t3877*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3880 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3880 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3890 * L_11 = (Transform_1_t3890 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3890 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, Transform_1_t3890 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25743_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25743_gshared (ValueCollection_t3888 * __this, MethodInfo* method)
{
	{
		Enumerator_t3889  L_0 = (( Enumerator_t3889  (*) (ValueCollection_t3888 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3889  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25744_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25744_gshared (ValueCollection_t3888 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m25745_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m25745_gshared (ValueCollection_t3888 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m25746_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m25746_gshared (ValueCollection_t3888 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14009_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m25747_gshared (ValueCollection_t3888 * __this, ProfileDataU5BU5D_t3877* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		ProfileDataU5BU5D_t3877* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3880 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3880 * L_3 = (__this->___dictionary_0);
		ProfileDataU5BU5D_t3877* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3890 * L_7 = (Transform_1_t3890 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3890 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3880 *, ProfileDataU5BU5D_t3877*, int32_t, Transform_1_t3890 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
extern "C" Enumerator_t3889  ValueCollection_GetEnumerator_m25748_gshared (ValueCollection_t3888 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		Enumerator_t3889  L_1 = {0};
		(( void (*) (Enumerator_t3889 *, Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m25749_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m25749_gshared (ValueCollection_t3888 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25750_gshared (Enumerator_t3889 * __this, Dictionary_2_t3880 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3880 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3886  L_1 = (( Enumerator_t3886  (*) (Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m25751_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25751_gshared (Enumerator_t3889 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		ProfileData_t803  L_1 = (( ProfileData_t803  (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		ProfileData_t803  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m25752_GenericMethod;
extern "C" void Enumerator_Dispose_m25752_gshared (Enumerator_t3889 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m25753_GenericMethod;
extern "C" bool Enumerator_MoveNext_m25753_gshared (Enumerator_t3889 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m25754_GenericMethod;
extern "C" ProfileData_t803  Enumerator_get_Current_m25754_gshared (Enumerator_t3889 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3881 * L_1 = &(L_0->___current_3);
		ProfileData_t803  L_2 = (( ProfileData_t803  (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25755_gshared (Transform_1_t3890 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25756_GenericMethod;
extern "C" ProfileData_t803  Transform_1_Invoke_m25756_gshared (Transform_1_t3890 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25756((Transform_1_t3890 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ProfileData_t803  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ProfileData_t803  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ProfileData_t803  (*FunctionPointerType) (Object_t * __this, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25757_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25757_gshared (Transform_1_t3890 * __this, Object_t * ___key, ProfileData_t803  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&ProfileData_t803_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25758_GenericMethod;
extern "C" ProfileData_t803  Transform_1_EndInvoke_m25758_gshared (Transform_1_t3890 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(ProfileData_t803 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25759_gshared (Transform_1_t3879 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25760_GenericMethod;
extern "C" DictionaryEntry_t1298  Transform_1_Invoke_m25760_gshared (Transform_1_t3879 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25760((Transform_1_t3879 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1298  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1298  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1298  (*FunctionPointerType) (Object_t * __this, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25761_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25761_gshared (Transform_1_t3879 * __this, Object_t * ___key, ProfileData_t803  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&ProfileData_t803_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25762_GenericMethod;
extern "C" DictionaryEntry_t1298  Transform_1_EndInvoke_m25762_gshared (Transform_1_t3879 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1298 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25763_gshared (Transform_1_t3891 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25764_GenericMethod;
extern "C" KeyValuePair_2_t3881  Transform_1_Invoke_m25764_gshared (Transform_1_t3891 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25764((Transform_1_t3891 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3881  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3881  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3881  (*FunctionPointerType) (Object_t * __this, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25765_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25765_gshared (Transform_1_t3891 * __this, Object_t * ___key, ProfileData_t803  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&ProfileData_t803_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25766_GenericMethod;
extern "C" KeyValuePair_2_t3881  Transform_1_EndInvoke_m25766_gshared (Transform_1_t3891 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3881 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IDictionaryEnumerator_t1295_il2cpp_TypeInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m14012_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m25769_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m25769_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25767_gshared (ShimEnumerator_t3892 * __this, Dictionary_2_t3880 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Dictionary_2_t3880 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3886  L_1 = (( Enumerator_t3886  (*) (Dictionary_2_t3880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m25768_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m25768_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Entry()
extern "C" DictionaryEntry_t1298  ShimEnumerator_get_Entry_m25769_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method)
{
	{
		Enumerator_t3886  L_0 = (__this->___host_enumerator_0);
		Enumerator_t3886  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1298  L_3 = (DictionaryEntry_t1298 )InterfaceFuncInvoker0< DictionaryEntry_t1298  >::Invoke(&IDictionaryEnumerator_get_Entry_m14012_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m25770_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m25770_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3881  V_0 = {0};
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3881  L_1 = (( KeyValuePair_2_t3881  (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m25771_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m25771_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3881  V_0 = {0};
	{
		Enumerator_t3886 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3881  L_1 = (( KeyValuePair_2_t3881  (*) (Enumerator_t3886 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		ProfileData_t803  L_2 = (( ProfileData_t803  (*) (KeyValuePair_2_t3881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		ProfileData_t803  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m25772_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m25772_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t1298  L_0 = (DictionaryEntry_t1298 )VirtFuncInvoker0< DictionaryEntry_t1298  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t1298  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t1298_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<Vuforia.WebCamProfile/ProfileData>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<Vuforia.WebCamProfile/ProfileData>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_56.h"
extern TypeInfo TypeU5BU5D_t913_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3894_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_56MethodDeclarations.h"
extern Il2CppType IEquatable_1_t5431_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2714_0_0_0;
extern Il2CppType TypeU5BU5D_t913_0_0_0;
extern Il2CppType DefaultComparer_t3894_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m6867_MethodInfo;
extern MethodInfo Type_MakeGenericType_m6961_MethodInfo;
extern MethodInfo Activator_CreateInstance_m6868_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m25778_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m35312_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m25778_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m35312_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.WebCamProfile/ProfileData>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m25773_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m25773_gshared (EqualityComparer_1_t3893 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.WebCamProfile/ProfileData>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m25774_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m25774_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3894 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3894 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3894 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t3893_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.WebCamProfile/ProfileData>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m25775_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m25775_gshared (EqualityComparer_1_t3893 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, ProfileData_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(ProfileData_t803 *)((ProfileData_t803 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.WebCamProfile/ProfileData>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m25776_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m25776_gshared (EqualityComparer_1_t3893 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, ProfileData_t803 , ProfileData_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(ProfileData_t803 *)((ProfileData_t803 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(ProfileData_t803 *)((ProfileData_t803 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.WebCamProfile/ProfileData>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.WebCamProfile/ProfileData>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<Vuforia.WebCamProfile/ProfileData>::get_Default()
extern "C" EqualityComparer_1_t3893 * EqualityComparer_1_get_Default_m25777_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3893 * L_0 = ((EqualityComparer_1_t3893_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5431_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<Vuforia.WebCamProfile/ProfileData>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m714_MethodInfo;
extern MethodInfo Object_Equals_m713_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.WebCamProfile/ProfileData>::.ctor()
extern "C" void DefaultComparer__ctor_m25778_gshared (DefaultComparer_t3894 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3893 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.WebCamProfile/ProfileData>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m25779_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m25779_gshared (DefaultComparer_t3894 * __this, ProfileData_t803  ___obj, MethodInfo* method)
{
	{
		ProfileData_t803  L_0 = ___obj;
		ProfileData_t803  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m714_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.WebCamProfile/ProfileData>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m25780_GenericMethod;
extern "C" bool DefaultComparer_Equals_m25780_gshared (DefaultComparer_t3894 * __this, ProfileData_t803  ___x, ProfileData_t803  ___y, MethodInfo* method)
{
	{
		ProfileData_t803  L_0 = ___x;
		ProfileData_t803  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		ProfileData_t803  L_3 = ___y;
		ProfileData_t803  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		ProfileData_t803  L_6 = ___y;
		ProfileData_t803  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m713_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5432_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5433_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4506_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m25783_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m25785_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_189.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3896_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_189MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3896_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>(System.Int32)
extern "C" KeyValuePair_2_t3895  Array_InternalArray__get_Item_TisKeyValuePair_2_t3895_m32943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3895_m32943(__this, p0, method) (( KeyValuePair_2_t3895  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3895_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25791_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3895_m32943_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25787_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m25787_gshared (InternalEnumerator_1_t3896 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25788_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25788_gshared (InternalEnumerator_1_t3896 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3895  L_0 = (( KeyValuePair_2_t3895  (*) (InternalEnumerator_1_t3896 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3895  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25789_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m25789_gshared (InternalEnumerator_1_t3896 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25790_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m25790_gshared (InternalEnumerator_1_t3896 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::get_Current()
extern "C" KeyValuePair_2_t3895  InternalEnumerator_1_get_Current_m25791_gshared (InternalEnumerator_1_t3896 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3895  L_8 = (( KeyValuePair_2_t3895  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5434_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t5435_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_54.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_126.h"
extern TypeInfo Enumerator_t3898_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3900_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_126MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_54MethodDeclarations.h"
extern Il2CppType Enumerator_t3898_0_0_0;
extern Il2CppType Transform_1_t3900_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m25803_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m25649_MethodInfo;
extern MethodInfo Transform_1__ctor_m25823_MethodInfo;
extern MethodInfo Enumerator__ctor_m25806_MethodInfo;
struct Dictionary_2_t804;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m32954(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t804 *, Array_t *, int32_t, Transform_1_t3900 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m32934_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t804;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m32955 (Dictionary_2_t804 * __this, StringU5BU5D_t43* p0, int32_t p1, Transform_1_t3900 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m25804_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m25803_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m25649_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25823_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m32954_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m32955_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25806_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m25818_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m25681_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m25822_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m25816_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m25821_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m25819_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m25820_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_55.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_127.h"
extern TypeInfo Enumerator_t3902_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3903_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_127MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_55MethodDeclarations.h"
extern Il2CppType Enumerator_t3902_0_0_0;
extern Il2CppType Transform_1_t3903_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m25838_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m25651_MethodInfo;
extern MethodInfo Transform_1__ctor_m25846_MethodInfo;
extern MethodInfo Enumerator__ctor_m25841_MethodInfo;
struct Dictionary_2_t804;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<Vuforia.WebCamProfile/ProfileData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_ICollectionCopyTo<Vuforia.WebCamProfile/ProfileData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisProfileData_t803_m32957(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t804 *, Array_t *, int32_t, Transform_1_t3903 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisProfileData_t803_m32936_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t804;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::Do_CopyTo<Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisProfileData_t803_TisProfileData_t803_m32958 (Dictionary_2_t804 * __this, ProfileDataU5BU5D_t3877* p0, int32_t p1, Transform_1_t3903 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m25662_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m25839_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m25838_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m25651_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25846_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisProfileData_t803_m32957_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisProfileData_t803_TisProfileData_t803_m32958_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25841_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Vuforia.WebCamProfile/ProfileData>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3905_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_130MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m25855_GenericMethod;
extern "C" void Transform_1__ctor_m25855_gshared (Transform_1_t3905 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25857_GenericMethod;
extern "C" KeyValuePair_2_t3895  Transform_1_Invoke_m25857_gshared (Transform_1_t3905 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25857((Transform_1_t3905 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3895  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3895  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3895  (*FunctionPointerType) (Object_t * __this, ProfileData_t803  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25859_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25859_gshared (Transform_1_t3905 * __this, Object_t * ___key, ProfileData_t803  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&ProfileData_t803_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25861_GenericMethod;
extern "C" KeyValuePair_2_t3895  Transform_1_EndInvoke_m25861_gshared (Transform_1_t3905 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3895 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m25864_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m25817_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m25864_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,Vuforia.WebCamProfile/ProfileData>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,Vuforia.WebCamProfile/ProfileData>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,Vuforia.WebCamProfile/ProfileData>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,Vuforia.WebCamProfile/ProfileData>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,Vuforia.WebCamProfile/ProfileData>::get_Current()
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t806_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21MethodDeclarations.h"

// Vuforia.VirtualButtonAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButtonAbstra.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_55.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_133.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_134.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__27.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_27.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_53.h"
extern TypeInfo VirtualButtonAbstractBehaviour_t82_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3077_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3910_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t918_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4510_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3908_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3907_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3916_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3912_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3918_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3091_il2cpp_TypeInfo;
extern TypeInfo VirtualButtonAbstractBehaviourU5BU5D_t786_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3833_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t5402_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_55MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_133MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_134MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__27MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_27MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_53MethodDeclarations.h"
extern Il2CppType Dictionary_2_t806_0_0_0;
extern Il2CppType IEqualityComparer_1_t3077_0_0_0;
extern Il2CppType KeyCollection_t3910_0_0_0;
extern Il2CppType ValueCollection_t918_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4510_0_0_0;
extern Il2CppType KeyValuePair_2_t3908_0_0_0;
extern Il2CppType Transform_1_t3907_0_0_0;
extern Il2CppType Transform_1_t3916_0_0_0;
extern Il2CppType Enumerator_t3912_0_0_0;
extern Il2CppType ShimEnumerator_t3918_0_0_0;
extern Il2CppType EqualityComparer_1_t3091_0_0_0;
extern Il2CppType VirtualButtonAbstractBehaviourU5BU5D_t786_0_0_0;
extern Il2CppType EqualityComparer_1_t3833_0_0_0;
extern Il2CppType IEqualityComparer_1_t5402_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType VirtualButtonAbstractBehaviour_t82_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m5382_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m25887_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m25888_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m34808_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m34809_MethodInfo;
extern MethodInfo KeyCollection__ctor_m25918_MethodInfo;
extern MethodInfo ValueCollection__ctor_m25953_MethodInfo;
extern MethodInfo Dictionary_2_Add_m5384_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m5378_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m25906_MethodInfo;
extern MethodInfo Transform_1__ctor_m25976_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m25892_MethodInfo;
extern MethodInfo Transform_1__ctor_m25980_MethodInfo;
extern MethodInfo Enumerator__ctor_m25937_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m25988_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m25886_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m25907_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m35313_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m5388_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m32788_MethodInfo;
struct Dictionary_2_t806;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1298_TisDictionaryEntry_t1298_m32982 (Dictionary_2_t806 * __this, DictionaryEntryU5BU5D_t4587* p0, int32_t p1, Transform_1_t3907 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t806;
struct Dictionary_2_t1106;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_135.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3908_m32985_gshared (Dictionary_2_t1106 * __this, Array_t * p0, int32_t p1, Transform_1_t3917 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3908_m32985(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1106 *, Array_t *, int32_t, Transform_1_t3917 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3908_m32985_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3908_m32984(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t806 *, Array_t *, int32_t, Transform_1_t3916 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3908_m32985_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t806;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3908_TisKeyValuePair_2_t3908_m32987 (Dictionary_2_t806 * __this, KeyValuePair_2U5BU5D_t4510* p0, int32_t p1, Transform_1_t3916 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m5382_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m25902_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m25887_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m25903_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m25888_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m34808_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34809_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m25896_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m25918_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m25953_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m25889_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m5384_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m5378_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m25908_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m25910_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m25904_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m25895_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m25891_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m25906_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25976_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1298_TisDictionaryEntry_t1298_m32982_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m25892_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25980_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3908_m32984_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25937_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m25988_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m17123_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m25890_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m25886_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m25907_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3908_TisKeyValuePair_2_t3908_m32987_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m25144_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m35313_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m5388_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m32788_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5436_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5437_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4511_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m25909_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m25911_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_190.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3909_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_190MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3909_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>(System.Int32)
extern "C" KeyValuePair_2_t3908  Array_InternalArray__get_Item_TisKeyValuePair_2_t3908_m32966_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3908_m32966(__this, p0, method) (( KeyValuePair_2_t3908  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3908_m32966_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25917_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3908_m32966_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25913_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m25913_gshared (InternalEnumerator_1_t3909 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25914_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25914_gshared (InternalEnumerator_1_t3909 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3908  L_0 = (( KeyValuePair_2_t3908  (*) (InternalEnumerator_1_t3909 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3908  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25915_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m25915_gshared (InternalEnumerator_1_t3909 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25916_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m25916_gshared (InternalEnumerator_1_t3909 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::get_Current()
extern "C" KeyValuePair_2_t3908  InternalEnumerator_1_get_Current_m25917_gshared (InternalEnumerator_1_t3909 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3908  L_8 = (( KeyValuePair_2_t3908  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5438_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t5439_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_56.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_131.h"
extern TypeInfo Enumerator_t3911_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3913_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_131MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_56MethodDeclarations.h"
extern Il2CppType Enumerator_t3911_0_0_0;
extern Il2CppType Transform_1_t3913_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m25929_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m25893_MethodInfo;
extern MethodInfo Transform_1__ctor_m25949_MethodInfo;
extern MethodInfo Enumerator__ctor_m25932_MethodInfo;
struct Dictionary_2_t806;
struct Dictionary_2_t1106;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m30729_gshared (Dictionary_2_t1106 * __this, Array_t * p0, int32_t p1, Transform_1_t3085 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m30729(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1106 *, Array_t *, int32_t, Transform_1_t3085 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m30729_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m32977(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t806 *, Array_t *, int32_t, Transform_1_t3913 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m30729_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t806;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t141_TisInt32_t141_m32978 (Dictionary_2_t806 * __this, Int32U5BU5D_t186* p0, int32_t p1, Transform_1_t3913 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m25930_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m25929_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m25893_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25949_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t141_m32977_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t141_TisInt32_t141_m32978_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25932_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m25944_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m25905_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m25948_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m25942_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m25947_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m25945_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m25946_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Int32>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_56.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_132.h"
extern TypeInfo Enumerator_t3914_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3915_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_132MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_56MethodDeclarations.h"
extern Il2CppType Enumerator_t3914_0_0_0;
extern Il2CppType Transform_1_t3915_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m25964_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m25894_MethodInfo;
extern MethodInfo Transform_1__ctor_m25972_MethodInfo;
extern MethodInfo Enumerator__ctor_m25967_MethodInfo;
struct Dictionary_2_t806;
struct Dictionary_2_t1106;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m30732_gshared (Dictionary_2_t1106 * __this, Array_t * p0, int32_t p1, Transform_1_t3088 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m30732(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1106 *, Array_t *, int32_t, Transform_1_t3088 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m30732_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_ICollectionCopyTo<Vuforia.VirtualButtonAbstractBehaviour>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_ICollectionCopyTo<Vuforia.VirtualButtonAbstractBehaviour>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisVirtualButtonAbstractBehaviour_t82_m32980(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t806 *, Array_t *, int32_t, Transform_1_t3915 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m30732_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t806;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_CopyTo<Vuforia.VirtualButtonAbstractBehaviour,Vuforia.VirtualButtonAbstractBehaviour>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Do_CopyTo<Vuforia.VirtualButtonAbstractBehaviour,Vuforia.VirtualButtonAbstractBehaviour>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisVirtualButtonAbstractBehaviour_t82_TisVirtualButtonAbstractBehaviour_t82_m32981 (Dictionary_2_t806 * __this, VirtualButtonAbstractBehaviourU5BU5D_t786* p0, int32_t p1, Transform_1_t3915 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m25898_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m25965_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m25964_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m25894_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25972_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisVirtualButtonAbstractBehaviour_t82_m32980_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisVirtualButtonAbstractBehaviour_t82_TisVirtualButtonAbstractBehaviour_t82_m32981_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25967_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,Vuforia.VirtualButtonAbstractBehaviour>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,Vuforia.VirtualButtonAbstractBehaviour>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,Vuforia.VirtualButtonAbstractBehaviour>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3917_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_135MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m25981_GenericMethod;
extern "C" void Transform_1__ctor_m25981_gshared (Transform_1_t3917 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25983_GenericMethod;
extern "C" KeyValuePair_2_t3908  Transform_1_Invoke_m25983_gshared (Transform_1_t3917 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25983((Transform_1_t3917 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3908  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t3908  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25985_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25985_gshared (Transform_1_t3917 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25987_GenericMethod;
extern "C" KeyValuePair_2_t3908  Transform_1_EndInvoke_m25987_gshared (Transform_1_t3917 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3908 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m25990_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m25943_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m25990_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5440_il2cpp_TypeInfo;

// Vuforia.VideoBackgroundAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VideoBackgroundAbst.h"


// T System.Collections.Generic.IEnumerator`1<Vuforia.VideoBackgroundAbstractBehaviour>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.VideoBackgroundAbstractBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_191.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3919_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.VideoBackgroundAbstractBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_191MethodDeclarations.h"

extern TypeInfo VideoBackgroundAbstractBehaviour_t110_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3919_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m29753_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m29753(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.VideoBackgroundAbstractBehaviour>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.VideoBackgroundAbstractBehaviour>(System.Int32)
#define Array_InternalArray__get_Item_TisVideoBackgroundAbstractBehaviour_t110_m32989(__this, p0, method) (( VideoBackgroundAbstractBehaviour_t110 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25998_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisVideoBackgroundAbstractBehaviour_t110_m32989_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.VideoBackgroundAbstractBehaviour>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.VideoBackgroundAbstractBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.VideoBackgroundAbstractBehaviour>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.VideoBackgroundAbstractBehaviour>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.VideoBackgroundAbstractBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5441_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.VideoBackgroundAbstractBehaviour>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.VideoBackgroundAbstractBehaviour>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.VideoBackgroundAbstractBehaviour>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.VideoBackgroundAbstractBehaviour>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.VideoBackgroundAbstractBehaviour>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.VideoBackgroundAbstractBehaviour>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.VideoBackgroundAbstractBehaviour>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5442_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.VideoBackgroundAbstractBehaviour>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5443_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.VideoBackgroundAbstractBehaviour>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.VideoBackgroundAbstractBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.VideoBackgroundAbstractBehaviour>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.VideoBackgroundAbstractBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.VideoBackgroundAbstractBehaviour>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_43.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t812_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_43MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_44.h"
// System.Predicate`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Predicate_1_gen_46.h"
// System.Collections.Generic.Comparer`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_44.h"
// System.Comparison`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Comparison_1_gen_46.h"
extern TypeInfo ITrackerEventHandler_t816_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t837_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2302_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4514_il2cpp_TypeInfo;
extern TypeInfo ITrackerEventHandlerU5BU5D_t3920_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t920_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4512_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4513_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t26_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t153_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3923_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3927_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3928_il2cpp_TypeInfo;
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_44MethodDeclarations.h"
// System.Predicate`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Predicate_1_gen_46MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_44MethodDeclarations.h"
extern Il2CppType List_1_t812_0_0_0;
extern Il2CppType ICollection_1_t4514_0_0_0;
extern Il2CppType ITrackerEventHandlerU5BU5D_t3920_0_0_0;
extern Il2CppType Enumerator_t920_0_0_0;
extern Il2CppType IEnumerable_1_t4512_0_0_0;
extern Il2CppType IEnumerator_1_t4513_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3923_0_0_0;
extern Il2CppType Predicate_1_t3927_0_0_0;
extern Il2CppType Comparer_1_t3928_0_0_0;
extern MethodInfo List_1_get_Item_m26043_MethodInfo;
extern MethodInfo List_1_set_Item_m26044_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8173_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m35314_MethodInfo;
extern MethodInfo List_1_Add_m5399_MethodInfo;
extern MethodInfo List_1_Contains_m26023_MethodInfo;
extern MethodInfo List_1_IndexOf_m26028_MethodInfo;
extern MethodInfo List_1_Insert_m26031_MethodInfo;
extern MethodInfo List_1_Remove_m5401_MethodInfo;
extern MethodInfo Math_Max_m9460_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m35315_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m35316_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m35317_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m692_MethodInfo;
extern MethodInfo IDisposable_Dispose_m486_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m26054_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m26129_MethodInfo;
extern MethodInfo Enumerator__ctor_m26050_MethodInfo;
extern MethodInfo List_1_RemoveAt_m26034_MethodInfo;
extern MethodInfo Array_Reverse_m9493_MethodInfo;
extern MethodInfo Array_Copy_m10282_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m30068_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m30068(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<Vuforia.ITrackerEventHandler>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<Vuforia.ITrackerEventHandler>(!!0[]&,System.Int32)
#define Array_Resize_TisITrackerEventHandler_t816_m33011(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ITrackerEventHandlerU5BU5D_t3920**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_57.h"
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14010_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14010(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<Vuforia.ITrackerEventHandler>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<Vuforia.ITrackerEventHandler>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisITrackerEventHandler_t816_m33013(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ITrackerEventHandlerU5BU5D_t3920*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m30071_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m30071(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<Vuforia.ITrackerEventHandler>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<Vuforia.ITrackerEventHandler>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisITrackerEventHandler_t816_m33015(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ITrackerEventHandlerU5BU5D_t3920*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_0.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m30178_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, int32_t p1, Comparison_1_t249 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m30178(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, int32_t, Comparison_1_t249 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<Vuforia.ITrackerEventHandler>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<Vuforia.ITrackerEventHandler>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisITrackerEventHandler_t816_m33023(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ITrackerEventHandlerU5BU5D_t3920*, int32_t, Comparison_1_t3930 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m26043_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m26044_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisITrackerEventHandler_t816_m33011_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m26030_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m26032_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m26019_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m35314_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m26018_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m5447_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m5399_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m26023_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m26028_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m26031_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m5401_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m26017_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m26040_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m26041_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m35315_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m35316_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m35317_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m26054_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisITrackerEventHandler_t816_m33013_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m26026_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m26027_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m26129_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m26050_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m26029_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m26034_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m26135_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisITrackerEventHandler_t816_m33015_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisITrackerEventHandler_t816_m33023_GenericMethod;


// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.ctor()
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Add(T)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Clear()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Contains(T)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Reverse()
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Sort()
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::ToArray()
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::get_Capacity()
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::get_Count()
// T System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.ITrackerEventHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ITrackerEventHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ITrackerEventHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ITrackerEventHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ITrackerEventHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ITrackerEventHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ITrackerEventHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.ITrackerEventHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<Vuforia.ITrackerEventHandler>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_192.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3921_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_192MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3921_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.ITrackerEventHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.ITrackerEventHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisITrackerEventHandler_t816_m33000(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26049_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisITrackerEventHandler_t816_m33000_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.ITrackerEventHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.ITrackerEventHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.ITrackerEventHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.ITrackerEventHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.ITrackerEventHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3922_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.ITrackerEventHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.ITrackerEventHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.ITrackerEventHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.ITrackerEventHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.ITrackerEventHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo InvalidOperationException__ctor_m7992_MethodInfo;
extern MethodInfo Object_GetType_m568_MethodInfo;
extern MethodInfo Type_get_FullName_m6981_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m26053_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t587_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_44MethodDeclarations.h"
extern Il2CppType IList_1_t3922_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m26083_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m449_MethodInfo;
extern MethodInfo IList_1_get_Item_m35318_MethodInfo;
extern MethodInfo ICollection_CopyTo_m7980_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m8128_MethodInfo;
extern MethodInfo ICollection_1_Contains_m35319_MethodInfo;
extern MethodInfo IList_1_IndexOf_m35320_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m26083_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m35318_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m26115_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m35319_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m35320_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3924_il2cpp_TypeInfo;

extern TypeInfo IList_t1430_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t3924_0_0_0;
extern Il2CppType ITrackerEventHandler_t816_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m35321_MethodInfo;
extern MethodInfo Collection_1_SetItem_m26114_MethodInfo;
extern MethodInfo List_1__ctor_m5437_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m26107_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m26105_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m26110_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m26101_MethodInfo;
extern MethodInfo ICollection_1_Clear_m35322_MethodInfo;
extern MethodInfo IList_1_Insert_m35323_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m35324_MethodInfo;
extern MethodInfo IList_1_set_Item_m35325_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14288_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14289_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m35321_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m26118_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m26119_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m26116_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m26114_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m5437_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m26107_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m26117_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m26105_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m26110_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m26101_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m35322_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m35323_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m35324_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m35325_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::get_Count()
// T System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ITrackerEventHandler>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3925_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_57MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_57.h"
extern TypeInfo DefaultComparer_t3926_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_57MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3925_0_0_0;
extern Il2CppType IEquatable_1_t5444_0_0_0;
extern Il2CppType DefaultComparer_t3926_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26125_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m35326_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m33012_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m26125_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m35326_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m33012_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.ITrackerEventHandler>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.ITrackerEventHandler>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.ITrackerEventHandler>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.ITrackerEventHandler>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.ITrackerEventHandler>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.ITrackerEventHandler>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<Vuforia.ITrackerEventHandler>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5445_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<Vuforia.ITrackerEventHandler>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<Vuforia.ITrackerEventHandler>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5444_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<Vuforia.ITrackerEventHandler>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m26120_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ITrackerEventHandler>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ITrackerEventHandler>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ITrackerEventHandler>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<Vuforia.ITrackerEventHandler>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<Vuforia.ITrackerEventHandler>::Invoke(T)
// System.IAsyncResult System.Predicate`1<Vuforia.ITrackerEventHandler>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<Vuforia.ITrackerEventHandler>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_44.h"
extern TypeInfo DefaultComparer_t3929_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_44MethodDeclarations.h"
extern Il2CppType IComparable_1_t4759_0_0_0;
extern Il2CppType GenericComparer_1_t2627_0_0_0;
extern Il2CppType DefaultComparer_t3929_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26136_MethodInfo;
extern MethodInfo Comparer_1_Compare_m35327_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13180_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m26136_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m35327_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<Vuforia.ITrackerEventHandler>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<Vuforia.ITrackerEventHandler>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.ITrackerEventHandler>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.ITrackerEventHandler>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<Vuforia.ITrackerEventHandler>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4758_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<Vuforia.ITrackerEventHandler>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4759_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<Vuforia.ITrackerEventHandler>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t206_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m33021_MethodInfo;
extern MethodInfo IComparable_CompareTo_m13982_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m26132_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m33021_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.ITrackerEventHandler>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.ITrackerEventHandler>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3930_il2cpp_TypeInfo;
// System.Comparison`1<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Comparison_1_gen_46MethodDeclarations.h"



// System.Void System.Comparison`1<Vuforia.ITrackerEventHandler>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<Vuforia.ITrackerEventHandler>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<Vuforia.ITrackerEventHandler>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<Vuforia.ITrackerEventHandler>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t813_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_44MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_45.h"
// System.Predicate`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Predicate_1_gen_47.h"
// System.Collections.Generic.Comparer`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_45.h"
// System.Comparison`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Comparison_1_gen_47.h"
extern TypeInfo IVideoBackgroundEventHandler_t214_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4517_il2cpp_TypeInfo;
extern TypeInfo IVideoBackgroundEventHandlerU5BU5D_t3931_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t919_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4515_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4516_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3934_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3938_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3939_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_45MethodDeclarations.h"
// System.Predicate`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Predicate_1_gen_47MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_45MethodDeclarations.h"
extern Il2CppType List_1_t813_0_0_0;
extern Il2CppType ICollection_1_t4517_0_0_0;
extern Il2CppType IVideoBackgroundEventHandlerU5BU5D_t3931_0_0_0;
extern Il2CppType Enumerator_t919_0_0_0;
extern Il2CppType IEnumerable_1_t4515_0_0_0;
extern Il2CppType IEnumerator_1_t4516_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3934_0_0_0;
extern Il2CppType Predicate_1_t3938_0_0_0;
extern Il2CppType Comparer_1_t3939_0_0_0;
extern MethodInfo List_1_get_Item_m26186_MethodInfo;
extern MethodInfo List_1_set_Item_m26187_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m35328_MethodInfo;
extern MethodInfo List_1_Add_m5402_MethodInfo;
extern MethodInfo List_1_Contains_m26166_MethodInfo;
extern MethodInfo List_1_IndexOf_m26171_MethodInfo;
extern MethodInfo List_1_Insert_m26174_MethodInfo;
extern MethodInfo List_1_Remove_m5403_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m35329_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m35330_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m35331_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m26197_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m26272_MethodInfo;
extern MethodInfo Enumerator__ctor_m26193_MethodInfo;
extern MethodInfo List_1_RemoveAt_m26177_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<Vuforia.IVideoBackgroundEventHandler>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<Vuforia.IVideoBackgroundEventHandler>(!!0[]&,System.Int32)
#define Array_Resize_TisIVideoBackgroundEventHandler_t214_m33037(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, IVideoBackgroundEventHandlerU5BU5D_t3931**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_58.h"
// Declaration System.Int32 System.Array::IndexOf<Vuforia.IVideoBackgroundEventHandler>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<Vuforia.IVideoBackgroundEventHandler>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisIVideoBackgroundEventHandler_t214_m33039(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, IVideoBackgroundEventHandlerU5BU5D_t3931*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<Vuforia.IVideoBackgroundEventHandler>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<Vuforia.IVideoBackgroundEventHandler>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisIVideoBackgroundEventHandler_t214_m33041(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, IVideoBackgroundEventHandlerU5BU5D_t3931*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<Vuforia.IVideoBackgroundEventHandler>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<Vuforia.IVideoBackgroundEventHandler>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisIVideoBackgroundEventHandler_t214_m33049(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, IVideoBackgroundEventHandlerU5BU5D_t3931*, int32_t, Comparison_1_t3941 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m26186_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m26187_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisIVideoBackgroundEventHandler_t214_m33037_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m26173_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m26175_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m26162_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m35328_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m26161_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m5444_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m5402_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m26166_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m26171_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m26174_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m5403_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m26160_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m26183_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m26184_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m35329_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m35330_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m35331_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m26197_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisIVideoBackgroundEventHandler_t214_m33039_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m26169_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m26170_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m26272_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m26193_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m26172_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m26177_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m26278_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisIVideoBackgroundEventHandler_t214_m33041_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisIVideoBackgroundEventHandler_t214_m33049_GenericMethod;


// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::.ctor()
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Add(T)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Clear()
// System.Boolean System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Contains(T)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Reverse()
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Sort()
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::ToArray()
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::get_Capacity()
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::get_Count()
// T System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.IVideoBackgroundEventHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.IVideoBackgroundEventHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.IVideoBackgroundEventHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.IVideoBackgroundEventHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.IVideoBackgroundEventHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.IVideoBackgroundEventHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.IVideoBackgroundEventHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.IVideoBackgroundEventHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<Vuforia.IVideoBackgroundEventHandler>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_193.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3932_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.IVideoBackgroundEventHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_193MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3932_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.IVideoBackgroundEventHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.IVideoBackgroundEventHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIVideoBackgroundEventHandler_t214_m33026(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26192_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIVideoBackgroundEventHandler_t214_m33026_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.IVideoBackgroundEventHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.IVideoBackgroundEventHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.IVideoBackgroundEventHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.IVideoBackgroundEventHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.IVideoBackgroundEventHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3933_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.IVideoBackgroundEventHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.IVideoBackgroundEventHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.IVideoBackgroundEventHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.IVideoBackgroundEventHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.IVideoBackgroundEventHandler>::set_Item(System.Int32,T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
