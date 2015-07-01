#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5.h"
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
extern TypeInfo Enumerator_t2879_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_28.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2880_il2cpp_TypeInfo;
extern TypeInfo Void_t133_il2cpp_TypeInfo;
extern TypeInfo Boolean_t147_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_28MethodDeclarations.h"
extern Il2CppType Enumerator_t2880_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m14991_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m14890_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m14886_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m14995_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m14989_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Enumerator__ctor_m14979_GenericMethod;
extern "C" void Enumerator__ctor_m14979_gshared (Enumerator_t2879 * __this, Dictionary_2_t2862 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2862 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2880  L_1 = (( Enumerator_t2880  (*) (Dictionary_2_t2862 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m14980_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14980_gshared (Enumerator_t2879 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m14981_GenericMethod;
extern "C" void Enumerator_Dispose_m14981_gshared (Enumerator_t2879 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m14982_GenericMethod;
extern "C" bool Enumerator_MoveNext_m14982_gshared (Enumerator_t2879 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m14983_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m14983_gshared (Enumerator_t2879 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2863 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2863 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Int32
#include "mscorlib_System_Int32.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo KeyValuePair_2_t2863_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1298_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t2862_il2cpp_TypeInfo;
extern TypeInfo Link_t1907_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1780_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1471_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType KeyValuePair_2_t2863_0_0_0;
extern MethodInfo DictionaryEntry__ctor_m7985_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m14889_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m9468_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m7984_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m14994_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m14892_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m14992_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m14993_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m14889_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Enumerator__ctor_m14984_GenericMethod;
extern "C" void Enumerator__ctor_m14984_gshared (Enumerator_t2880 * __this, Dictionary_2_t2862 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t2862 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2862 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m14985_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14985_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2863  L_0 = (__this->___current_3);
		KeyValuePair_2_t2863  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14986_GenericMethod;
extern "C" DictionaryEntry_t1298  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14986_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2863 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2863 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t2863 * L_3 = &(__this->___current_3);
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2863 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_5 = L_4;
		DictionaryEntry_t1298  L_6 = {0};
		DictionaryEntry__ctor_m7985(&L_6, ((Object_t *)L_2), ((Object_t *)L_5), /*hidden argument*/&DictionaryEntry__ctor_m7985_MethodInfo);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14987_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14987_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14988_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14988_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14989_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t2862 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t2862 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t164* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2862 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t164* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2863  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2863 *, Object_t *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t2862 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m14990_GenericMethod;
extern "C" KeyValuePair_2_t2863  Enumerator_get_Current_m14990_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2863  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14991_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2863 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2863 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14992_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2863 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2863 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14993_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2862 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t2862 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14994_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14995_gshared (Enumerator_t2880 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2862 *)NULL;
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2881_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m14996_GenericMethod;
extern "C" void Transform_1__ctor_m14996_gshared (Transform_1_t2881 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m14997_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m14997_gshared (Transform_1_t2881 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14997((Transform_1_t2881 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m14998_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m14998_gshared (Transform_1_t2881 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m14999_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m14999_gshared (Transform_1_t2881 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t2882_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26MethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_27.h"
extern TypeInfo ICollection_t1268_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1172_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t146_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2883_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t164_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_27MethodDeclarations.h"
extern Il2CppType Dictionary_2_t2862_0_0_0;
extern Il2CppType Enumerator_t2883_0_0_0;
extern Il2CppType ObjectU5BU5D_t164_0_0_0;
extern Il2CppType ValueCollection_t2882_0_0_0;
extern Il2CppType Transform_1_t2881_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m14009_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m14841_MethodInfo;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m6951_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m7099_MethodInfo;
extern MethodInfo ValueCollection_CopyTo_m15011_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m14856_MethodInfo;
extern MethodInfo Transform_1__ctor_m14996_MethodInfo;
extern MethodInfo Enumerator__ctor_m15014_MethodInfo;
struct Dictionary_2_t2862;
// System.Type
#include "mscorlib_System_Type.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m29940_gshared (Dictionary_2_t2862 * __this, Array_t * p0, int32_t p1, Transform_1_t2881 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m29940(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2862 *, Array_t *, int32_t, Transform_1_t2881 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m29940_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2862;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m29939 (Dictionary_2_t2862 * __this, ObjectU5BU5D_t164* p0, int32_t p1, Transform_1_t2881 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m14841_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m14868_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m15012_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m15011_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m14850_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m14856_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m29940_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m29939_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15014_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ValueCollection__ctor_m15000_GenericMethod;
extern "C" void ValueCollection__ctor_m15000_gshared (ValueCollection_t2882 * __this, Dictionary_2_t2862 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Dictionary_2_t2862 * L_0 = ___dictionary;
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
		Dictionary_2_t2862 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15001_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15001_gshared (ValueCollection_t2882 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15002_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15002_gshared (ValueCollection_t2882 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15003_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15003_gshared (ValueCollection_t2882 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2862 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2862 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15004_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15004_gshared (ValueCollection_t2882 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15005_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15005_gshared (ValueCollection_t2882 * __this, MethodInfo* method)
{
	{
		Enumerator_t2883  L_0 = (( Enumerator_t2883  (*) (ValueCollection_t2882 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2883  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m15006_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m15006_gshared (ValueCollection_t2882 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t2862 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2862 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2862 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2881 * L_11 = (Transform_1_t2881 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2881 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2862 *, Array_t *, int32_t, Transform_1_t2881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15007_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15007_gshared (ValueCollection_t2882 * __this, MethodInfo* method)
{
	{
		Enumerator_t2883  L_0 = (( Enumerator_t2883  (*) (ValueCollection_t2882 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2883  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15008_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15008_gshared (ValueCollection_t2882 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15009_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15009_gshared (ValueCollection_t2882 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m15010_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m15010_gshared (ValueCollection_t2882 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2862 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14009_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m15011_gshared (ValueCollection_t2882 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2862 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t164* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2862 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2862 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t164* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2881 * L_7 = (Transform_1_t2881 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2881 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2862 *, ObjectU5BU5D_t164*, int32_t, Transform_1_t2881 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2883  ValueCollection_GetEnumerator_m15012_gshared (ValueCollection_t2882 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2862 * L_0 = (__this->___dictionary_0);
		Enumerator_t2883  L_1 = {0};
		(( void (*) (Enumerator_t2883 *, Dictionary_2_t2862 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m15013_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m15013_gshared (ValueCollection_t2882 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2862 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15014_gshared (Enumerator_t2883 * __this, Dictionary_2_t2862 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2862 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2880  L_1 = (( Enumerator_t2880  (*) (Dictionary_2_t2862 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m15015_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15015_gshared (Enumerator_t2883 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m15016_GenericMethod;
extern "C" void Enumerator_Dispose_m15016_gshared (Enumerator_t2883 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m15017_GenericMethod;
extern "C" bool Enumerator_MoveNext_m15017_gshared (Enumerator_t2883 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m15018_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m15018_gshared (Enumerator_t2883 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2863 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2863 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2861_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m15019_GenericMethod;
extern "C" void Transform_1__ctor_m15019_gshared (Transform_1_t2861 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m15020_GenericMethod;
extern "C" DictionaryEntry_t1298  Transform_1_Invoke_m15020_gshared (Transform_1_t2861 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m15020((Transform_1_t2861 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1298  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1298  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1298  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m15021_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m15021_gshared (Transform_1_t2861 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m15022_GenericMethod;
extern "C" DictionaryEntry_t1298  Transform_1_EndInvoke_m15022_gshared (Transform_1_t2861 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1298 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4844_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2884_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16MethodDeclarations.h"

// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2884_0_0_0;
extern MethodInfo Array_get_Length_m7989_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
extern "C" DictionaryEntry_t1298  Array_InternalArray__get_Item_TisDictionaryEntry_t1298_m29942_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDictionaryEntry_t1298_m29942(__this, p0, method) (( DictionaryEntry_t1298  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDictionaryEntry_t1298_m29942_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15027_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDictionaryEntry_t1298_m29942_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15023_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15023_gshared (InternalEnumerator_1_t2884 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15024_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15024_gshared (InternalEnumerator_1_t2884 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t1298  L_0 = (( DictionaryEntry_t1298  (*) (InternalEnumerator_1_t2884 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DictionaryEntry_t1298  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15025_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15025_gshared (InternalEnumerator_1_t2884 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15026_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15026_gshared (InternalEnumerator_1_t2884 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t1298  InternalEnumerator_1_get_Current_m15027_gshared (InternalEnumerator_1_t2884 * __this, MethodInfo* method)
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
		DictionaryEntry_t1298  L_8 = (( DictionaryEntry_t1298  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4845_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4846_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4847_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2885_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m15028_GenericMethod;
extern "C" void Transform_1__ctor_m15028_gshared (Transform_1_t2885 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m15029_GenericMethod;
extern "C" KeyValuePair_2_t2863  Transform_1_Invoke_m15029_gshared (Transform_1_t2885 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m15029((Transform_1_t2885 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2863  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2863  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2863  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m15030_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m15030_gshared (Transform_1_t2885 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m15031_GenericMethod;
extern "C" KeyValuePair_2_t2863  Transform_1_EndInvoke_m15031_gshared (Transform_1_t2885 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2863 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t2886_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumeraMethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t1295_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t2886_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m14012_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m15034_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m15034_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ShimEnumerator__ctor_m15032_GenericMethod;
extern "C" void ShimEnumerator__ctor_m15032_gshared (ShimEnumerator_t2886 * __this, Dictionary_2_t2862 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Dictionary_2_t2862 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2880  L_1 = (( Enumerator_t2880  (*) (Dictionary_2_t2862 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m15033_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m15033_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1298  ShimEnumerator_get_Entry_m15034_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method)
{
	{
		Enumerator_t2880  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2880  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1298  L_3 = (DictionaryEntry_t1298 )InterfaceFuncInvoker0< DictionaryEntry_t1298  >::Invoke(&IDictionaryEnumerator_get_Entry_m14012_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m15035_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m15035_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2863  V_0 = {0};
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2863  L_1 = (( KeyValuePair_2_t2863  (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2863 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m15036_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m15036_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2863  V_0 = {0};
	{
		Enumerator_t2880 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2863  L_1 = (( KeyValuePair_2_t2863  (*) (Enumerator_t2880 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2863 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m15037_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m15037_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t1298  L_0 = (DictionaryEntry_t1298 )VirtFuncInvoker0< DictionaryEntry_t1298  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t1298  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t1298_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2887_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t913_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2894_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_DefauMethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2887_0_0_0;
extern Il2CppType IEquatable_1_t4820_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2714_0_0_0;
extern Il2CppType TypeU5BU5D_t913_0_0_0;
extern Il2CppType DefaultComparer_t2894_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m498_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m6867_MethodInfo;
extern MethodInfo Type_MakeGenericType_m6961_MethodInfo;
extern MethodInfo Activator_CreateInstance_m6868_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m15073_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m34673_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m30069_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15073_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m34673_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m30069_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m15038_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m15038_gshared (EqualityComparer_1_t2887 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m15039_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m15039_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2894 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2894 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2894 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2887_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m15040_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m15040_gshared (EqualityComparer_1_t2887 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m15041_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m15041_gshared (EqualityComparer_1_t2887 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Object>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m15042_GenericMethod;
extern "C" EqualityComparer_1_t2887 * EqualityComparer_1_get_Default_m15042_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2887 * L_0 = ((EqualityComparer_1_t2887_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4428_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current()
// System.Array/InternalEnumerator`1<System.Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2888_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2888_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m29753_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m29753(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Type>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Type>(System.Int32)
#define Array_InternalArray__get_Item_TisType_t_m29956(__this, p0, method) (( Type_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15047_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisType_t_m29956_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Type>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Type>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Type>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Type>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Type>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4429_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Type>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Type>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Type>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Type>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Type>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Type>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Type>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4427_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3402_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Type>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Type>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Type>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Type>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Type>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4848_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4849_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.IReflect>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4850_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.IReflect>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.IReflect>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2889_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.IReflect>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18MethodDeclarations.h"

extern TypeInfo IReflect_t2601_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2889_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.IReflect>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.IReflect>(System.Int32)
#define Array_InternalArray__get_Item_TisIReflect_t2601_m29967(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15052_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIReflect_t2601_m29967_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.IReflect>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.IReflect>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.IReflect>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.IReflect>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.IReflect>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4851_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.IReflect>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.IReflect>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.IReflect>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.IReflect>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.IReflect>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4852_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4853_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Type>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4854_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Type>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2890_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19MethodDeclarations.h"

extern TypeInfo _Type_t2602_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2890_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Type>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Type>(System.Int32)
#define Array_InternalArray__get_Item_Tis_Type_t2602_m29978(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15057_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_Type_t2602_m29978_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4855_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4856_il2cpp_TypeInfo;

// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t1557_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t1558_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2891_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20MethodDeclarations.h"

extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2891_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMemberInfo_t_m29989(__this, p0, method) (( MemberInfo_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15062_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMemberInfo_t_m29989_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4857_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4858_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4859_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ICustomAttributeProvider>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4860_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.ICustomAttributeProvider>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2892_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21MethodDeclarations.h"

extern TypeInfo ICustomAttributeProvider_t2312_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2892_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ICustomAttributeProvider>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ICustomAttributeProvider>(System.Int32)
#define Array_InternalArray__get_Item_TisICustomAttributeProvider_t2312_m30000(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15067_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICustomAttributeProvider_t2312_m30000_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4861_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4862_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4863_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MemberInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4864_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MemberInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2893_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22MethodDeclarations.h"

extern TypeInfo _MemberInfo_t2603_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2893_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MemberInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MemberInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MemberInfo_t2603_m30011(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15072_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_MemberInfo_t2603_m30011_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4865_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m714_MethodInfo;
extern MethodInfo Object_Equals_m713_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m15073_gshared (DefaultComparer_t2894 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2887 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m15074_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m15074_gshared (DefaultComparer_t2894 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((*(&___obj)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m714_MethodInfo, (*(&___obj)));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m15075_GenericMethod;
extern "C" bool DefaultComparer_Equals_m15075_gshared (DefaultComparer_t2894 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		return ((((Object_t*)(Object_t *)((Object_t *)L_3)) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Object_t * L_4 = ___y;
		Object_t * L_5 = L_4;
		NullCheck((*(&___x)));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m713_MethodInfo, (*(&___x)), ((Object_t *)L_5));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4866_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4867_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4339_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t2895_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4MethodDeclarations.h"

// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
extern TypeInfo StringU5BU5D_t43_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo GUIStyle_t15_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t43_0_0_0;
extern MethodInfo Object_ToString_m715_MethodInfo;
extern MethodInfo String_Concat_m8022_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m15078_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m15080_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m15077_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m15079_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2896_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2896_0_0_0;
extern Il2CppType KeyValuePair_2_t2895_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>(System.Int32)
extern "C" KeyValuePair_2_t2895  Array_InternalArray__get_Item_TisKeyValuePair_2_t2895_m30023_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2895_m30023(__this, p0, method) (( KeyValuePair_2_t2895  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2895_m30023_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15086_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2895_m30023_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15082_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15082_gshared (InternalEnumerator_1_t2896 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15083_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15083_gshared (InternalEnumerator_1_t2896 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2895  L_0 = (( KeyValuePair_2_t2895  (*) (InternalEnumerator_1_t2896 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2895  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15084_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15084_gshared (InternalEnumerator_1_t2896 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15085_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15085_gshared (InternalEnumerator_1_t2896 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::get_Current()
extern "C" KeyValuePair_2_t2895  InternalEnumerator_1_get_Current_m15086_gshared (InternalEnumerator_1_t2896 * __this, MethodInfo* method)
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
		KeyValuePair_2_t2895  L_8 = (( KeyValuePair_2_t2895  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4868_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t4869_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t2837_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.String>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.String>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4343_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.GUIStyle>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.GUIStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2897_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.GUIStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_24MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2897_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.GUIStyle>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.GUIStyle>(System.Int32)
#define Array_InternalArray__get_Item_TisGUIStyle_t15_m30034(__this, p0, method) (( GUIStyle_t15 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15091_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGUIStyle_t15_m30034_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.GUIStyle>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.GUIStyle>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.GUIStyle>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.GUIStyle>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.GUIStyle>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4870_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4871_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GUIStyle>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4872_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.GUIStyle>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GUIStyle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GUIStyle>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.GUIStyle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GUIStyle>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t2898_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_23.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2.h"
extern TypeInfo Dictionary_2_t17_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2899_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2901_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_23MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7MethodDeclarations.h"
extern Il2CppType Dictionary_2_t17_0_0_0;
extern Il2CppType Enumerator_t2899_0_0_0;
extern Il2CppType KeyCollection_t2898_0_0_0;
extern Il2CppType Transform_1_t2901_0_0_0;
extern MethodInfo Dictionary_2_get_Count_m14840_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m14865_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m15103_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m14853_MethodInfo;
extern MethodInfo Transform_1__ctor_m15123_MethodInfo;
extern MethodInfo Enumerator__ctor_m15106_MethodInfo;
struct Dictionary_2_t17;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m30045(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t17 *, Array_t *, int32_t, Transform_1_t2901 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m29940_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t17;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m30046 (Dictionary_2_t17 * __this, StringU5BU5D_t43* p0, int32_t p1, Transform_1_t2901 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m14840_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m14865_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m15104_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m15103_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m14849_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m14853_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m15123_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m30045_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m30046_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15106_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
extern TypeInfo Enumerator_t2900_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4MethodDeclarations.h"
extern Il2CppType Enumerator_t2900_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m15118_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m14885_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m15122_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m15116_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UnityEngine.GUIStyle>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UnityEngine.GUIStyle>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UnityEngine.GUIStyle>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo KeyValuePair_2__ctor_m15076_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m15121_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m15119_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m15120_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m15076_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t1158_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3.h"
extern TypeInfo Enumerator_t1157_il2cpp_TypeInfo;
extern TypeInfo GUIStyleU5BU5D_t46_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2902_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25MethodDeclarations.h"
extern Il2CppType Enumerator_t1157_0_0_0;
extern Il2CppType GUIStyleU5BU5D_t46_0_0_0;
extern Il2CppType ValueCollection_t1158_0_0_0;
extern Il2CppType Transform_1_t2902_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m15138_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m14855_MethodInfo;
extern MethodInfo Transform_1__ctor_m15145_MethodInfo;
extern MethodInfo Enumerator__ctor_m15140_MethodInfo;
struct Dictionary_2_t17;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Do_ICollectionCopyTo<UnityEngine.GUIStyle>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Do_ICollectionCopyTo<UnityEngine.GUIStyle>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisGUIStyle_t15_m30048(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t17 *, Array_t *, int32_t, Transform_1_t2902 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m29940_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t17;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Do_CopyTo<UnityEngine.GUIStyle,UnityEngine.GUIStyle>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Do_CopyTo<UnityEngine.GUIStyle,UnityEngine.GUIStyle>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisGUIStyle_t15_TisGUIStyle_t15_m30049 (Dictionary_2_t17 * __this, GUIStyleU5BU5D_t46* p0, int32_t p1, Transform_1_t2902 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m14867_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m6882_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m15138_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m14855_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m15145_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisGUIStyle_t15_m30048_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisGUIStyle_t15_TisGUIStyle_t15_m30049_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15140_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2859_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2903_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2904_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m15154_GenericMethod;
extern "C" void Transform_1__ctor_m15154_gshared (Transform_1_t2904 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m15156_GenericMethod;
extern "C" KeyValuePair_2_t2895  Transform_1_Invoke_m15156_gshared (Transform_1_t2904 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m15156((Transform_1_t2904 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2895  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2895  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2895  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m15158_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m15158_gshared (Transform_1_t2904 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m15160_GenericMethod;
extern "C" KeyValuePair_2_t2895  Transform_1_EndInvoke_m15160_gshared (Transform_1_t2904 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2895 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t2905_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0MethodDeclarations.h"

extern Il2CppType ShimEnumerator_t2905_0_0_0;
extern MethodInfo ShimEnumerator_get_Entry_m15163_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m15117_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m15163_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,UnityEngine.GUIStyle>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,UnityEngine.GUIStyle>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,UnityEngine.GUIStyle>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,UnityEngine.GUIStyle>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,UnityEngine.GUIStyle>::get_Current()
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2906_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0.h"
extern TypeInfo DefaultComparer_t2909_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2906_0_0_0;
extern Il2CppType IEquatable_1_t2423_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType DefaultComparer_t2909_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15178_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m34674_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m31666_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15178_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m34674_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m31666_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.String>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<System.String>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.String>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.String>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.String>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.String>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.String>::get_Default()
// System.Collections.Generic.GenericEqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2907_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2423_il2cpp_TypeInfo;
extern MethodInfo IEquatable_1_Equals_m34675_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m15167_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m34675_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.String>::.ctor()
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.String>::GetHashCode(T)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.String>::Equals(T,T)
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2908_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4MethodDeclarations.h"

extern TypeInfo IEquatable_1_t4820_il2cpp_TypeInfo;
extern MethodInfo IEquatable_1_Equals_m34676_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m34676_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m15173_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m15173_gshared (GenericEqualityComparer_1_t2908 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2887 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m15175_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m15175_gshared (GenericEqualityComparer_1_t2908 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((*(&___obj)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m714_MethodInfo, (*(&___obj)));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m15177_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m15177_gshared (GenericEqualityComparer_1_t2908 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		return ((((Object_t*)(Object_t *)((Object_t *)L_3)) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Object_t * L_4 = ___y;
		NullCheck((*(&___x)));
		bool L_5 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (*(&___x)), L_4);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4794_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.GUIStyle>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.GUIStyle>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2910_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1.h"
extern TypeInfo DefaultComparer_t2911_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2910_0_0_0;
extern Il2CppType IEquatable_1_t4873_0_0_0;
extern Il2CppType GUIStyle_t15_0_0_0;
extern Il2CppType DefaultComparer_t2911_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15186_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m34677_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m34671_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15186_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m34677_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m34671_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4873_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.GUIStyle>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m15181_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUIStyle>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUIStyle>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUIStyle>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4874_il2cpp_TypeInfo;

// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutOption>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.GUILayoutOption>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2912_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.GUILayoutOption>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25MethodDeclarations.h"

extern TypeInfo GUILayoutOption_t143_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2912_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.GUILayoutOption>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.GUILayoutOption>(System.Int32)
#define Array_InternalArray__get_Item_TisGUILayoutOption_t143_m30057(__this, p0, method) (( GUILayoutOption_t143 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15193_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGUILayoutOption_t143_m30057_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.GUILayoutOption>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.GUILayoutOption>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.GUILayoutOption>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.GUILayoutOption>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.GUILayoutOption>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4875_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutOption>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutOption>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutOption>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutOption>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutOption>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutOption>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutOption>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4876_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutOption>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4877_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.GUILayoutOption>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GUILayoutOption>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GUILayoutOption>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.GUILayoutOption>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GUILayoutOption>::set_Item(System.Int32,T)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t36_il2cpp_TypeInfo;
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"



// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t2913_il2cpp_TypeInfo;
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_10MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Action_1__ctor_m15194_GenericMethod;
extern "C" void Action_1__ctor_m15194_gshared (Action_1_t2913 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern Il2CppGenericMethod Action_1_Invoke_m15195_GenericMethod;
extern "C" void Action_1_Invoke_m15195_gshared (Action_1_t2913 * __this, uint8_t ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m15195((Action_1_t2913 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, uint8_t ___obj, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, uint8_t ___obj, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Action_1_BeginInvoke_m15197_GenericMethod;
extern "C" Object_t * Action_1_BeginInvoke_m15197_gshared (Action_1_t2913 * __this, uint8_t ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Byte_t523_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Action_1_EndInvoke_m15199_GenericMethod;
extern "C" void Action_1_EndInvoke_m15199_gshared (Action_1_t2913 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Collections.Generic.List`1<ISampleAppUIElement>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t40_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<ISampleAppUIElement>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"

// ISampleAppUIElement
#include "AssemblyU2DCSharp_ISampleAppUIElement.h"
#include "Assembly-CSharp_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<ISampleAppUIElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<ISampleAppUIElement>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0.h"
// System.Predicate`1<ISampleAppUIElement>
#include "mscorlib_System_Predicate_1_gen_5.h"
// System.Collections.Generic.Comparer`1<ISampleAppUIElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
// System.Comparison`1<ISampleAppUIElement>
#include "mscorlib_System_Comparison_1_gen_5.h"
extern TypeInfo ISampleAppUIElement_t27_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t521_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t837_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2302_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4346_il2cpp_TypeInfo;
extern TypeInfo ISampleAppUIElementU5BU5D_t2914_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t152_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4344_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4345_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t26_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t153_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2933_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2937_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2938_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<ISampleAppUIElement>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
// System.Predicate`1<ISampleAppUIElement>
#include "mscorlib_System_Predicate_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<ISampleAppUIElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
// System.Collections.Generic.Comparer`1<ISampleAppUIElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"
extern Il2CppType List_1_t40_0_0_0;
extern Il2CppType ICollection_1_t4346_0_0_0;
extern Il2CppType ISampleAppUIElementU5BU5D_t2914_0_0_0;
extern Il2CppType Enumerator_t152_0_0_0;
extern Il2CppType IEnumerable_1_t4344_0_0_0;
extern Il2CppType IEnumerator_1_t4345_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2933_0_0_0;
extern Il2CppType Predicate_1_t2937_0_0_0;
extern Il2CppType Comparer_1_t2938_0_0_0;
extern MethodInfo List_1_get_Item_m15293_MethodInfo;
extern MethodInfo List_1_set_Item_m15295_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2726_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8173_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m7993_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m34678_MethodInfo;
extern MethodInfo Array_Copy_m10283_MethodInfo;
extern MethodInfo List_1_Add_m481_MethodInfo;
extern MethodInfo List_1_Contains_m15250_MethodInfo;
extern MethodInfo List_1_IndexOf_m15261_MethodInfo;
extern MethodInfo List_1_Insert_m15267_MethodInfo;
extern MethodInfo List_1_Remove_m15271_MethodInfo;
extern MethodInfo Math_Max_m9460_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m34679_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m34680_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m34681_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m692_MethodInfo;
extern MethodInfo IDisposable_Dispose_m486_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15437_MethodInfo;
extern MethodInfo Array_Clear_m9451_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15512_MethodInfo;
extern MethodInfo Enumerator__ctor_m15433_MethodInfo;
extern MethodInfo List_1_RemoveAt_m15275_MethodInfo;
extern MethodInfo Array_Reverse_m9493_MethodInfo;
extern MethodInfo Array_Copy_m10282_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m30068_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m30068(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<ISampleAppUIElement>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<ISampleAppUIElement>(!!0[]&,System.Int32)
#define Array_Resize_TisISampleAppUIElement_t27_m30192(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ISampleAppUIElementU5BU5D_t2914**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<ISampleAppUIElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14010_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14010(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<ISampleAppUIElement>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<ISampleAppUIElement>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisISampleAppUIElement_t27_m30194(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ISampleAppUIElementU5BU5D_t2914*, ISampleAppUIElement_t27 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m30071_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m30071(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<ISampleAppUIElement>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<ISampleAppUIElement>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisISampleAppUIElement_t27_m30196(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ISampleAppUIElementU5BU5D_t2914*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_0.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m30178_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, int32_t p1, Comparison_1_t249 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m30178(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, int32_t, Comparison_1_t249 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<ISampleAppUIElement>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<ISampleAppUIElement>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisISampleAppUIElement_t27_m30204(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ISampleAppUIElementU5BU5D_t2914*, int32_t, Comparison_1_t2940 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m15293_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m15295_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisISampleAppUIElement_t27_m30192_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15265_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15269_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15242_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m34678_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15240_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m487_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m481_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m15250_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m15261_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m15267_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m15271_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15238_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15287_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15289_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m34679_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34680_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34681_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15437_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisISampleAppUIElement_t27_m30194_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15256_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15258_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15512_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15433_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15263_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m15275_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15518_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisISampleAppUIElement_t27_m30196_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisISampleAppUIElement_t27_m30204_GenericMethod;


// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::.ctor()
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::Add(T)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ISampleAppUIElement>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::Clear()
// System.Boolean System.Collections.Generic.List`1<ISampleAppUIElement>::Contains(T)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<ISampleAppUIElement>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<ISampleAppUIElement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ISampleAppUIElement>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<ISampleAppUIElement>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<ISampleAppUIElement>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<ISampleAppUIElement>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::Reverse()
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::Sort()
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<ISampleAppUIElement>::ToArray()
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<ISampleAppUIElement>::get_Capacity()
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<ISampleAppUIElement>::get_Count()
// T System.Collections.Generic.List`1<ISampleAppUIElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<ISampleAppUIElement>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t174_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
extern TypeInfo ICollection_1_t4347_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2915_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3346_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t208_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2917_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2919_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2920_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
extern Il2CppType List_1_t174_0_0_0;
extern Il2CppType ICollection_1_t4347_0_0_0;
extern Il2CppType Enumerator_t2915_0_0_0;
extern Il2CppType IEnumerable_1_t3346_0_0_0;
extern Il2CppType IEnumerator_1_t208_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2917_0_0_0;
extern Il2CppType Predicate_1_t2919_0_0_0;
extern Il2CppType Comparer_1_t2920_0_0_0;
extern MethodInfo List_1_get_Item_m15294_MethodInfo;
extern MethodInfo List_1_set_Item_m15296_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m32046_MethodInfo;
extern MethodInfo List_1_Add_m15237_MethodInfo;
extern MethodInfo List_1_Contains_m15251_MethodInfo;
extern MethodInfo List_1_IndexOf_m15262_MethodInfo;
extern MethodInfo List_1_Insert_m15268_MethodInfo;
extern MethodInfo List_1_Remove_m15272_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m32349_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m31597_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m31598_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15303_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15370_MethodInfo;
extern MethodInfo Enumerator__ctor_m15297_MethodInfo;
extern MethodInfo List_1_RemoveAt_m15276_MethodInfo;
extern Il2CppGenericMethod List_1_get_Item_m15294_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m15296_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisObject_t_m30068_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15266_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15270_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15243_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m32046_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15241_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m15260_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m15237_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m15251_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m15262_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m15268_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m15272_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15239_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15288_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15290_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m32349_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m31597_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m31598_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15303_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisObject_t_m14010_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15257_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15259_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15370_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15297_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15264_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m15276_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15376_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisObject_t_m30071_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisObject_t_m30178_GenericMethod;


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m15200_GenericMethod;
extern "C" void List_1__ctor_m15200_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t164* L_0 = ((List_1_t174_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1__ctor_m15202_GenericMethod;
extern "C" void List_1__ctor_m15202_gshared (List_1_t174 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t174 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t164* L_3 = ((List_1_t174_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t174 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_5);
		__this->____items_1 = ((ObjectU5BU5D_t164*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_6));
		Object_t* L_7 = V_0;
		(( void (*) (List_1_t174 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m15204_GenericMethod;
extern "C" void List_1__ctor_m15204_gshared (List_1_t174 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_1 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_1, (String_t*) &_stringLiteral938, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((ObjectU5BU5D_t164*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m15206_GenericMethod;
extern "C" void List_1__cctor_m15206_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t174_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((ObjectU5BU5D_t164*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		Enumerator_t2915  L_0 = (( Enumerator_t2915  (*) (List_1_t174 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t2915  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m15210_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15210_gshared (List_1_t174 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10283(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10283_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m15212_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		Enumerator_t2915  L_0 = (( Enumerator_t2915  (*) (List_1_t174 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t2915  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m15214_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m15214_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
			int32_t L_1 = (__this->____size_2);
			V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t837_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2302_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t521 * L_2 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_2, (String_t*) &_stringLiteral1558, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m15216_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m15216_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method)
{
	bool V_0 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t837_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2302_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m15218_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15218_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t837_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2302_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m15220_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m15220_gshared (List_1_t174 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t174 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), __this, L_1, ((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t837_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2302_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t521 * L_3 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_3, (String_t*) &_stringLiteral1558, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m15222_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m15222_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t837_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2302_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m15226_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m15228_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m15230_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m15232_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m15234_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15234_gshared (List_1_t174 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_0);
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m15236_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m15236_gshared (List_1_t174 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t837_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2302_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t521 * L_2 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_2, (String_t*) &_stringLiteral781, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m15237_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		ObjectU5BU5D_t164* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t174 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_0017:
	{
		ObjectU5BU5D_t164* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		Object_t * L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, L_5)) = (Object_t *)L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15239_gshared (List_1_t174 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		ObjectU5BU5D_t164* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t174 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		int32_t L_5 = Math_Max_m9460(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m9460_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m9460(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m9460_MethodInfo);
		(( void (*) (List_1_t174 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15241_gshared (List_1_t174 * __this, Object_t* ___collection, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		(( void (*) (List_1_t174 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		Object_t* L_4 = ___collection;
		ObjectU5BU5D_t164* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< ObjectU5BU5D_t164*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15243_gshared (List_1_t174 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_2);
			V_0 = L_3;
			Object_t * L_4 = V_0;
			VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m692_MethodInfo, L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m486_MethodInfo, L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m15245_GenericMethod;
extern "C" void List_1_AddRange_m15245_gshared (List_1_t174 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t174 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		(( void (*) (List_1_t174 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t174 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m15247_GenericMethod;
extern "C" ReadOnlyCollection_1_t2917 * List_1_AsReadOnly_m15247_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2917 * L_0 = (ReadOnlyCollection_1_t2917 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t2917 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern Il2CppGenericMethod List_1_Clear_m15249_GenericMethod;
extern "C" void List_1_Clear_m15249_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->____items_1);
		ObjectU5BU5D_t164* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m9451(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m9451_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m15251_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->____items_1);
		Object_t * L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m15253_GenericMethod;
extern "C" void List_1_CopyTo_m15253_gshared (List_1_t174 * __this, ObjectU5BU5D_t164* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->____items_1);
		ObjectU5BU5D_t164* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10283(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10283_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m15255_GenericMethod;
extern TypeInfo* List_1_t174_il2cpp_TypeInfo_var;
extern "C" Object_t * List_1_Find_m15255_gshared (List_1_t174 * __this, Predicate_1_t2919 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m15255_init;
	if (!List_1_Find_m15255_init)
	{
		List_1_t174_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t174_0_0_0);
		List_1_Find_m15255_init = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	Object_t * G_B3_0 = {0};
	{
		Predicate_1_t2919 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t174_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2919 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t2919 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t174 *, int32_t, int32_t, Predicate_1_t2919 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		ObjectU5BU5D_t164* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_1));
		Object_t * L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15257_gshared (Object_t * __this /* static, unused */, Predicate_1_t2919 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t2919 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1420, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15259_gshared (List_1_t174 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2919 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t2919 * L_3 = ___match;
		ObjectU5BU5D_t164* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2915  List_1_GetEnumerator_m15260_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		Enumerator_t2915  L_0 = {0};
		(( void (*) (Enumerator_t2915 *, List_1_t174 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15262_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->____items_1);
		Object_t * L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15264_gshared (List_1_t174 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = ((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t164* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		ObjectU5BU5D_t164* L_7 = (__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m10283(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8+(int32_t)L_9)), ((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/&Array_Copy_m10283_MethodInfo);
	}

IL_0031:
	{
		int32_t L_12 = (__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		ObjectU5BU5D_t164* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m9451(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m9451_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15266_gshared (List_1_t174 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1472 * L_3 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_3, (String_t*) &_stringLiteral573, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15268_gshared (List_1_t174 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t174 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = (__this->____size_2);
		ObjectU5BU5D_t164* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t174 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t174 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		ObjectU5BU5D_t164* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		Object_t * L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15270_gshared (List_1_t174 * __this, Object_t* ___collection, MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1559, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m15272_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32), __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_RemoveAll_m15274_GenericMethod;
extern TypeInfo* List_1_t174_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m15274_gshared (List_1_t174 * __this, Predicate_1_t2919 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m15274_init;
	if (!List_1_RemoveAll_m15274_init)
	{
		List_1_t174_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t174_0_0_0);
		List_1_RemoveAll_m15274_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2919 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t174_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2919 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t2919 * L_1 = ___match;
		ObjectU5BU5D_t164* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t2919 * L_13 = ___match;
		ObjectU5BU5D_t164* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		ObjectU5BU5D_t164* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		ObjectU5BU5D_t164* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, L_20)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		ObjectU5BU5D_t164* L_29 = (__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m9451(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, L_30, ((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/&Array_Clear_m9451_MethodInfo);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15276_gshared (List_1_t174 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1472 * L_3 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_3, (String_t*) &_stringLiteral573, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		(( void (*) (List_1_t174 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		ObjectU5BU5D_t164* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m9451(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m9451_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m15278_GenericMethod;
extern "C" void List_1_Reverse_m15278_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m9493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m9493_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern Il2CppGenericMethod List_1_Sort_m15280_GenericMethod;
extern TypeInfo* Comparer_1_t2920_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m15280_gshared (List_1_t174 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m15280_init;
	if (!List_1_Sort_m15280_init)
	{
		Comparer_1_t2920_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t2920_0_0_0);
		List_1_Sort_m15280_init = true;
	}
	{
		ObjectU5BU5D_t164* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2920_il2cpp_TypeInfo_var);
		Comparer_1_t2920 * L_2 = (( Comparer_1_t2920 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m15282_GenericMethod;
extern "C" void List_1_Sort_m15282_gshared (List_1_t174 * __this, Comparison_1_t249 * ___comparison, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t249 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, int32_t, Comparison_1_t249 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m15284_GenericMethod;
extern "C" ObjectU5BU5D_t164* List_1_ToArray_m15284_gshared (List_1_t174 * __this, MethodInfo* method)
{
	ObjectU5BU5D_t164* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((ObjectU5BU5D_t164*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0));
		ObjectU5BU5D_t164* L_1 = (__this->____items_1);
		ObjectU5BU5D_t164* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10282(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m10282_MethodInfo);
		ObjectU5BU5D_t164* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m15286_GenericMethod;
extern "C" void List_1_TrimExcess_m15286_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t174 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15288_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15290_gshared (List_1_t174 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_2 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8173(L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8173_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		ObjectU5BU5D_t164** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m15292_GenericMethod;
extern "C" int32_t List_1_get_Count_m15292_gshared (List_1_t174 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m15294_gshared (List_1_t174 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_2 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_2, (String_t*) &_stringLiteral573, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		ObjectU5BU5D_t164* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15296_gshared (List_1_t174 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t174 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_3 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_3, (String_t*) &_stringLiteral573, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		ObjectU5BU5D_t164* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		Object_t * L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo InvalidOperationException__ctor_m7992_MethodInfo;
extern MethodInfo Object_GetType_m568_MethodInfo;
extern MethodInfo Type_get_FullName_m6981_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m15300_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m15297_gshared (Enumerator_t2915 * __this, List_1_t174 * ___l, MethodInfo* method)
{
	{
		List_1_t174 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t174 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m15298_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15298_gshared (Enumerator_t2915 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2915 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1471 * L_1 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7992(L_1, /*hidden argument*/&InvalidOperationException__ctor_m7992_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		Object_t * L_2 = (__this->___current_3);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m15299_GenericMethod;
extern "C" void Enumerator_Dispose_m15299_gshared (Enumerator_t2915 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t174 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15300_gshared (Enumerator_t2915 * __this, MethodInfo* method)
{
	{
		List_1_t174 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t2915  L_1 = (*(Enumerator_t2915 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m568(L_2, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m6981_MethodInfo, L_3);
		ObjectDisposedException_t1780 * L_5 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m9468(L_5, L_4, /*hidden argument*/&ObjectDisposedException__ctor_m9468_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->___ver_2);
		List_1_t174 * L_7 = (__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1471 * L_9 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_9, (String_t*) &_stringLiteral1560, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m15301_GenericMethod;
extern "C" bool Enumerator_MoveNext_m15301_gshared (Enumerator_t2915 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2915 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		int32_t L_1 = (__this->___next_1);
		List_1_t174 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t174 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		ObjectU5BU5D_t164* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m15302_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m15302_gshared (Enumerator_t2915 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IList_1_t2916_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t587_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
extern Il2CppType IList_1_t2916_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m15332_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m449_MethodInfo;
extern MethodInfo IList_1_get_Item_m32352_MethodInfo;
extern MethodInfo ICollection_CopyTo_m7980_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m8128_MethodInfo;
extern MethodInfo ICollection_1_Contains_m31596_MethodInfo;
extern MethodInfo IList_1_IndexOf_m34682_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m15332_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m32352_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15364_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m31596_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m34682_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m15303_gshared (ReadOnlyCollection_1_t2917 * __this, Object_t* ___list, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1561, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15304_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15304_gshared (ReadOnlyCollection_1_t2917 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15305_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15305_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15306_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15306_gshared (ReadOnlyCollection_1_t2917 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15307_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15307_gshared (ReadOnlyCollection_1_t2917 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15308_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15308_gshared (ReadOnlyCollection_1_t2917 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15309_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15309_gshared (ReadOnlyCollection_1_t2917 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15310_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15310_gshared (ReadOnlyCollection_1_t2917 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15311_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15311_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15312_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15312_gshared (ReadOnlyCollection_1_t2917 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1268_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m7980_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1268_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15313_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15313_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m8128_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m15314_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m15314_gshared (ReadOnlyCollection_1_t2917 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m15315_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m15315_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m15316_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m15316_gshared (ReadOnlyCollection_1_t2917 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15317_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15317_gshared (ReadOnlyCollection_1_t2917 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m15318_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m15318_gshared (ReadOnlyCollection_1_t2917 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m15319_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m15319_gshared (ReadOnlyCollection_1_t2917 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15320_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15320_gshared (ReadOnlyCollection_1_t2917 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15321_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15321_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15322_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15322_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15323_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15323_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15324_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15324_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m15325_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m15325_gshared (ReadOnlyCollection_1_t2917 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m15326_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m15326_gshared (ReadOnlyCollection_1_t2917 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m15327_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m15327_gshared (ReadOnlyCollection_1_t2917 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m15328_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m15328_gshared (ReadOnlyCollection_1_t2917 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		ObjectU5BU5D_t164* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t164*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m15329_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m15329_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m15330_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m15330_gshared (ReadOnlyCollection_1_t2917 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m15331_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m15331_gshared (ReadOnlyCollection_1_t2917 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m15332_gshared (ReadOnlyCollection_1_t2917 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2918_il2cpp_TypeInfo;

extern TypeInfo IList_t1430_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2918_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m34683_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15363_MethodInfo;
extern MethodInfo List_1__ctor_m15200_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15356_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15354_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15359_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15350_MethodInfo;
extern MethodInfo ICollection_1_Clear_m34684_MethodInfo;
extern MethodInfo IList_1_Insert_m34685_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m34686_MethodInfo;
extern MethodInfo IList_1_set_Item_m34687_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10335_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14288_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14289_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34683_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15367_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15368_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15365_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15363_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15356_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15366_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15354_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15359_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15350_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m34684_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m34685_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m34686_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m34687_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m15333_GenericMethod;
extern TypeInfo* List_1_t174_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m15333_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m15333_init;
	if (!Collection_1__ctor_m15333_init)
	{
		List_1_t174_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t174_0_0_0);
		Collection_1__ctor_m15333_init = true;
	}
	List_1_t174 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t174_il2cpp_TypeInfo_var);
		List_1_t174 * L_0 = (List_1_t174 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t174 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t174 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14009_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t174 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15334_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15334_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m15335_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m15335_gshared (Collection_1_t2918 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1268_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m7980_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1268_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m15336_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m15336_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m15337_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m15337_gshared (Collection_1_t2918 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m15338_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m15338_gshared (Collection_1_t2918 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m15339_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m15339_gshared (Collection_1_t2918 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m15340_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m15340_gshared (Collection_1_t2918 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m15341_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m15341_gshared (Collection_1_t2918 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m15342_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m15342_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m15343_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m15343_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m15344_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m15344_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m15345_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m15345_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m15346_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m15346_gshared (Collection_1_t2918 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m15347_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m15347_gshared (Collection_1_t2918 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m15348_GenericMethod;
extern "C" void Collection_1_Add_m15348_gshared (Collection_1_t2918 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___item;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m15349_GenericMethod;
extern "C" void Collection_1_Clear_m15349_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m15350_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m15351_GenericMethod;
extern "C" bool Collection_1_Contains_m15351_gshared (Collection_1_t2918 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m15352_GenericMethod;
extern "C" void Collection_1_CopyTo_m15352_gshared (Collection_1_t2918 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		ObjectU5BU5D_t164* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t164*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m15353_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m15353_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m15354_gshared (Collection_1_t2918 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m15355_GenericMethod;
extern "C" void Collection_1_Insert_m15355_gshared (Collection_1_t2918 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___item;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m15356_gshared (Collection_1_t2918 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m15357_GenericMethod;
extern "C" bool Collection_1_Remove_m15357_gshared (Collection_1_t2918 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern Il2CppGenericMethod Collection_1_RemoveAt_m15358_GenericMethod;
extern "C" void Collection_1_RemoveAt_m15358_gshared (Collection_1_t2918 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m15359_gshared (Collection_1_t2918 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0, L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern Il2CppGenericMethod Collection_1_get_Count_m15360_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m15360_gshared (Collection_1_t2918 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m15361_GenericMethod;
extern "C" Object_t * Collection_1_get_Item_m15361_gshared (Collection_1_t2918 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m15362_GenericMethod;
extern "C" void Collection_1_set_Item_m15362_gshared (Collection_1_t2918 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m15363_gshared (Collection_1_t2918 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m15364_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m10335_MethodInfo, L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m15365_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)));
	}

IL_000f:
	{
		ArgumentException_t521 * L_3 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_3, (String_t*) &_stringLiteral1558, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m15366_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	{
		Object_t* L_0 = ___list;
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t146 * L_2 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_2, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m15367_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&ICollection_t1268_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ICollection_get_IsSynchronized_m14288_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m15368_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&IList_t1430_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IList_get_IsFixedSize_m14289_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m15369_GenericMethod;
extern "C" void Predicate_1__ctor_m15369_gshared (Predicate_1_t2919 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15370_gshared (Predicate_1_t2919 * __this, Object_t * ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m15370((Predicate_1_t2919 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m15371_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m15371_gshared (Predicate_1_t2919 * __this, Object_t * ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m15372_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m15372_gshared (Predicate_1_t2919 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar.h"
extern TypeInfo DefaultComparer_t2921_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultComparMethodDeclarations.h"
extern Il2CppType IComparable_1_t4670_0_0_0;
extern Il2CppType GenericComparer_1_t2627_0_0_0;
extern Il2CppType DefaultComparer_t2921_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15377_MethodInfo;
extern MethodInfo Comparer_1_Compare_m34688_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13180_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15377_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m34688_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Object>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m15373_GenericMethod;
extern "C" void Comparer_1__ctor_m15373_gshared (Comparer_1_t2920 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Object>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m15374_GenericMethod;
extern "C" void Comparer_1__cctor_m15374_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2921 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2921 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2921 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t2920_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Object>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m15375_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m15375_gshared (Comparer_1_t2920 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), ((Object_t *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t521 * L_8 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m13180(L_8, /*hidden argument*/&ArgumentException__ctor_m13180_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Object>::get_Default()
extern "C" Comparer_1_t2920 * Comparer_1_get_Default_m15376_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2920 * L_0 = ((Comparer_1_t2920_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4669_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t4670_il2cpp_TypeInfo;
extern TypeInfo IComparable_t206_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m30176_MethodInfo;
extern MethodInfo IComparable_CompareTo_m13982_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m30176_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m15377_gshared (DefaultComparer_t2921 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m15378_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m15378_gshared (DefaultComparer_t2921 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		Object_t * L_6 = ___x;
		Object_t * L_7 = L_6;
		if (!((Object_t*)IsInst(((Object_t *)L_7), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_8 = ___x;
		Object_t * L_9 = L_8;
		Object_t * L_10 = ___y;
		NullCheck(((Object_t*)Castclass(((Object_t *)L_9), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_11 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(((Object_t *)L_9), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_10);
		return L_11;
	}

IL_003e:
	{
		Object_t * L_12 = ___x;
		Object_t * L_13 = L_12;
		if (!((Object_t *)IsInst(((Object_t *)L_13), InitializedTypeInfo(&IComparable_t206_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		Object_t * L_14 = ___x;
		Object_t * L_15 = L_14;
		Object_t * L_16 = ___y;
		Object_t * L_17 = L_16;
		NullCheck(((Object_t *)Castclass(((Object_t *)L_15), InitializedTypeInfo(&IComparable_t206_il2cpp_TypeInfo))));
		int32_t L_18 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m13982_MethodInfo, ((Object_t *)Castclass(((Object_t *)L_15), InitializedTypeInfo(&IComparable_t206_il2cpp_TypeInfo))), ((Object_t *)L_17));
		return L_18;
	}

IL_0062:
	{
		ArgumentException_t521 * L_19 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_19, (String_t*) &_stringLiteral1548, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_19);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4878_il2cpp_TypeInfo;

// System.Double
#include "mscorlib_System_Double.h"


// T System.Collections.Generic.IEnumerator`1<System.Double>::get_Current()
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2922_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26MethodDeclarations.h"

extern TypeInfo Double_t939_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2922_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
extern "C" double Array_InternalArray__get_Item_TisDouble_t939_m30075_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDouble_t939_m30075(__this, p0, method) (( double (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDouble_t939_m30075_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15383_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDouble_t939_m30075_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Double>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15379_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15379_gshared (InternalEnumerator_1_t2922 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Double>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15380_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15380_gshared (InternalEnumerator_1_t2922 * __this, MethodInfo* method)
{
	{
		double L_0 = (( double (*) (InternalEnumerator_1_t2922 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		double L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Double>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15381_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15381_gshared (InternalEnumerator_1_t2922 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Double>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15382_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15382_gshared (InternalEnumerator_1_t2922 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Double>::get_Current()
extern "C" double InternalEnumerator_1_get_Current_m15383_gshared (InternalEnumerator_1_t2922 * __this, MethodInfo* method)
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
		double L_8 = (( double (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4879_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Double>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Double>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Double>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Double>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4880_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Double>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4881_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Double>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Double>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Double>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Double>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Double>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4882_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4883_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Double>>::GetEnumerator()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
