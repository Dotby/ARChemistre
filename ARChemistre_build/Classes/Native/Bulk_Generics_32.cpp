#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_61.h"
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
extern TypeInfo Comparer_1_t4334_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_61MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_61.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t147_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t913_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4335_il2cpp_TypeInfo;
extern TypeInfo TimeSpan_t150_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t521_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_61MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t4334_0_0_0;
extern Il2CppType IComparable_1_t2838_0_0_0;
extern Il2CppType TimeSpan_t150_0_0_0;
extern Il2CppType GenericComparer_1_t2627_0_0_0;
extern Il2CppType TypeU5BU5D_t913_0_0_0;
extern Il2CppType DefaultComparer_t4335_0_0_0;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m498_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m6867_MethodInfo;
extern MethodInfo Type_MakeGenericType_m6961_MethodInfo;
extern MethodInfo Activator_CreateInstance_m6868_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m29740_MethodInfo;
extern MethodInfo Comparer_1_Compare_m35552_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13180_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m29740_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m35552_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m29736_GenericMethod;
extern "C" void Comparer_1__ctor_m29736_gshared (Comparer_1_t4334 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m29737_GenericMethod;
extern "C" void Comparer_1__cctor_m29737_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4335 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4335 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4335 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t4334_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m29738_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m29738_gshared (Comparer_1_t4334 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, TimeSpan_t150 , TimeSpan_t150  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(TimeSpan_t150 *)((TimeSpan_t150 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(TimeSpan_t150 *)((TimeSpan_t150 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t521 * L_8 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m13180(L_8, /*hidden argument*/&ArgumentException__ctor_m13180_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m29739_GenericMethod;
extern "C" Comparer_1_t4334 * Comparer_1_get_Default_m29739_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t4334 * L_0 = ((Comparer_1_t4334_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5925_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo IComparable_1_t2838_il2cpp_TypeInfo;
extern TypeInfo IComparable_t206_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m35551_MethodInfo;
extern MethodInfo IComparable_CompareTo_m13982_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2726_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m35551_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m29740_gshared (DefaultComparer_t4335 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4334 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m29741_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m29741_gshared (DefaultComparer_t4335 * __this, TimeSpan_t150  ___x, TimeSpan_t150  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t150  L_0 = ___x;
		TimeSpan_t150  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t150  L_3 = ___y;
		TimeSpan_t150  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
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
		TimeSpan_t150  L_6 = ___y;
		TimeSpan_t150  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		TimeSpan_t150  L_9 = ___x;
		TimeSpan_t150  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		TimeSpan_t150  L_12 = ___x;
		TimeSpan_t150  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		TimeSpan_t150  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t150  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		TimeSpan_t150  L_17 = ___x;
		TimeSpan_t150  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t206_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		TimeSpan_t150  L_20 = ___x;
		TimeSpan_t150  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		TimeSpan_t150  L_23 = ___y;
		TimeSpan_t150  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t206_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m13982_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t206_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t521 * L_27 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_27, (String_t*) &_stringLiteral1548, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2382_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2839_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_82MethodDeclarations.h"
extern Il2CppType IEquatable_1_t2839_0_0_0;
extern MethodInfo Object_GetHashCode_m714_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m35553_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m29744_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m35553_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m14146_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m14146_gshared (GenericEqualityComparer_1_t2382 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4336 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m29742_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m29742_gshared (GenericEqualityComparer_1_t2382 * __this, TimeSpan_t150  ___obj, MethodInfo* method)
{
	{
		TimeSpan_t150  L_0 = ___obj;
		TimeSpan_t150  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m29743_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m29743_gshared (GenericEqualityComparer_1_t2382 * __this, TimeSpan_t150  ___x, TimeSpan_t150  ___y, MethodInfo* method)
{
	{
		TimeSpan_t150  L_0 = ___x;
		TimeSpan_t150  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t150  L_3 = ___y;
		TimeSpan_t150  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t150  L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, TimeSpan_t150  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_82.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4336_il2cpp_TypeInfo;

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_82.h"
extern TypeInfo DefaultComparer_t4337_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_82MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4336_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2714_0_0_0;
extern Il2CppType DefaultComparer_t4337_0_0_0;
extern MethodInfo DefaultComparer__ctor_m29749_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m35554_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m35555_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m29749_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m35554_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m35555_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void EqualityComparer_1__ctor_m29744_gshared (EqualityComparer_1_t4336 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m29745_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m29745_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4337 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4337 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4337 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4336_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29746_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29746_gshared (EqualityComparer_1_t4336 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t150  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(TimeSpan_t150 *)((TimeSpan_t150 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29747_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29747_gshared (EqualityComparer_1_t4336 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, TimeSpan_t150 , TimeSpan_t150  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(TimeSpan_t150 *)((TimeSpan_t150 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(TimeSpan_t150 *)((TimeSpan_t150 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m29748_GenericMethod;
extern "C" EqualityComparer_1_t4336 * EqualityComparer_1_get_Default_m29748_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4336 * L_0 = ((EqualityComparer_1_t4336_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5926_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m713_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m29749_gshared (DefaultComparer_t4337 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4336 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m29750_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m29750_gshared (DefaultComparer_t4337 * __this, TimeSpan_t150  ___obj, MethodInfo* method)
{
	{
		TimeSpan_t150  L_0 = ___obj;
		TimeSpan_t150  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m29751_GenericMethod;
extern "C" bool DefaultComparer_Equals_m29751_gshared (DefaultComparer_t4337 * __this, TimeSpan_t150  ___x, TimeSpan_t150  ___y, MethodInfo* method)
{
	{
		TimeSpan_t150  L_0 = ___x;
		TimeSpan_t150  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t150  L_3 = ___y;
		TimeSpan_t150  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t150  L_6 = ___y;
		TimeSpan_t150  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m713_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2842_il2cpp_TypeInfo;

// System.Version
#include "mscorlib_System_Version.h"


// System.Int32 System.IComparable`1<System.Version>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2843_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Version>::Equals(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
