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
extern TypeInfo IEnumerable_1_t4937_il2cpp_TypeInfo;


// System.Array
#include "mscorlib_System_Array.h"

// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SampleAppUIRect>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4938_il2cpp_TypeInfo;

// SampleAppUIRect
#include "AssemblyU2DCSharp_SampleAppUIRect.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"


// System.Int32 System.Collections.Generic.IList`1<SampleAppUIRect>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SampleAppUIRect>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SampleAppUIRect>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SampleAppUIRect>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SampleAppUIRect>::set_Item(System.Int32,T)
// System.Action`1<System.Int32>
#include "mscorlib_System_Action_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t47_il2cpp_TypeInfo;
// System.Action`1<System.Int32>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Action_1__ctor_m670_GenericMethod;
extern "C" void Action_1__ctor_m670_gshared (Action_1_t47 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern Il2CppGenericMethod Action_1_Invoke_m490_GenericMethod;
extern "C" void Action_1_Invoke_m490_gshared (Action_1_t47 * __this, int32_t ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m490((Action_1_t47 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___obj, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___obj, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Action_1_BeginInvoke_m15560_GenericMethod;
extern "C" Object_t * Action_1_BeginInvoke_m15560_gshared (Action_1_t47 * __this, int32_t ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Action_1_EndInvoke_m15561_GenericMethod;
extern "C" void Action_1_EndInvoke_m15561_gshared (Action_1_t47 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.CastHelper`1<SampleInitErrorHandler>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2948_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<SampleInitErrorHandler>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2MethodDeclarations.h"



// System.Action`1<Vuforia.QCARUnity/InitError>
#include "mscorlib_System_Action_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t157_il2cpp_TypeInfo;
// System.Action`1<Vuforia.QCARUnity/InitError>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"

// Vuforia.QCARUnity/InitError
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_InitError.h"


// System.Void System.Action`1<Vuforia.QCARUnity/InitError>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<Vuforia.QCARUnity/InitError>::Invoke(T)
// System.IAsyncResult System.Action`1<Vuforia.QCARUnity/InitError>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<Vuforia.QCARUnity/InitError>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4939_il2cpp_TypeInfo;

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Texture2D>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Texture2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_43.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2949_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Texture2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_43MethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Texture2D_t51_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1471_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2949_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m7984_MethodInfo;
extern MethodInfo Array_get_Length_m7989_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m29753_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m29753(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Texture2D>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Texture2D>(System.Int32)
#define Array_InternalArray__get_Item_TisTexture2D_t51_m30284(__this, p0, method) (( Texture2D_t51 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15568_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTexture2D_t51_m30284_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Texture2D>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Texture2D>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Texture2D>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Texture2D>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Texture2D>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4940_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Texture2D>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Texture2D>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Texture2D>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Texture2D>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Texture2D>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Texture2D>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Texture2D>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4941_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Texture2D>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4942_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Texture2D>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Texture2D>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Texture2D>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Texture2D>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Texture2D>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4943_il2cpp_TypeInfo;

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Texture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Texture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Texture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Texture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Texture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Texture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Texture>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4944_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Texture>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4945_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Texture>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Texture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2950_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Texture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_44MethodDeclarations.h"

extern TypeInfo Texture_t33_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2950_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Texture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Texture>(System.Int32)
#define Array_InternalArray__get_Item_TisTexture_t33_m30295(__this, p0, method) (( Texture_t33 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15573_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTexture_t33_m30295_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Texture>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Texture>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Texture>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Texture>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Texture>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4946_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Texture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Texture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Texture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Texture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Texture>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<Vuforia.ReconstructionBehaviour>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2951_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<Vuforia.ReconstructionBehaviour>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3MethodDeclarations.h"



// System.Action`1<Vuforia.Prop>
#include "mscorlib_System_Action_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t162_il2cpp_TypeInfo;
// System.Action`1<Vuforia.Prop>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"



// System.Void System.Action`1<Vuforia.Prop>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<Vuforia.Prop>::Invoke(T)
// System.IAsyncResult System.Action`1<Vuforia.Prop>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<Vuforia.Prop>::EndInvoke(System.IAsyncResult)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t2952_il2cpp_TypeInfo;
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_11MethodDeclarations.h"



// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Action_1__ctor_m15574_GenericMethod;
extern "C" void Action_1__ctor_m15574_gshared (Action_1_t2952 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Object>::Invoke(T)
extern Il2CppGenericMethod Action_1_Invoke_m15575_GenericMethod;
extern "C" void Action_1_Invoke_m15575_gshared (Action_1_t2952 * __this, Object_t * ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m15575((Action_1_t2952 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Action_1_BeginInvoke_m15577_GenericMethod;
extern "C" Object_t * Action_1_BeginInvoke_m15577_gshared (Action_1_t2952 * __this, Object_t * ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Action_1_EndInvoke_m15579_GenericMethod;
extern "C" void Action_1_EndInvoke_m15579_gshared (Action_1_t2952 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Action`1<Vuforia.Surface>
#include "mscorlib_System_Action_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t163_il2cpp_TypeInfo;
// System.Action`1<Vuforia.Surface>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"



// System.Void System.Action`1<Vuforia.Surface>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<Vuforia.Surface>::Invoke(T)
// System.IAsyncResult System.Action`1<Vuforia.Surface>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<Vuforia.Surface>::EndInvoke(System.IAsyncResult)
// UnityEngine.CastHelper`1<Vuforia.TrackableBehaviour>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2953_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<Vuforia.TrackableBehaviour>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_4MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4947_il2cpp_TypeInfo;

// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Renderer>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Renderer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2954_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Renderer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45MethodDeclarations.h"

extern TypeInfo Renderer_t135_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2954_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Renderer>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Renderer>(System.Int32)
#define Array_InternalArray__get_Item_TisRenderer_t135_m30306(__this, p0, method) (( Renderer_t135 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15586_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRenderer_t135_m30306_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Renderer>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Renderer>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Renderer>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Renderer>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Renderer>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4948_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4949_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Renderer>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4950_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Renderer>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Renderer>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Renderer>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Renderer>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Renderer>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4358_il2cpp_TypeInfo;

// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Component>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Component>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Component>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Component>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Component>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4356_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Component>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4357_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Component>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Component>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2955_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Component>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46MethodDeclarations.h"

extern TypeInfo Component_t158_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2955_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Component>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Component>(System.Int32)
#define Array_InternalArray__get_Item_TisComponent_t158_m30317(__this, p0, method) (( Component_t158 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15591_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisComponent_t158_m30317_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Component>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Component>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Component>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Component>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Component>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3016_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Component>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Component>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Component>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Component>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4951_il2cpp_TypeInfo;

// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Collider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_47.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2956_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Collider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_47MethodDeclarations.h"

extern TypeInfo Collider_t12_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2956_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Collider>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Collider>(System.Int32)
#define Array_InternalArray__get_Item_TisCollider_t12_m30328(__this, p0, method) (( Collider_t12 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15596_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisCollider_t12_m30328_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Collider>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Collider>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Collider>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Collider>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Collider>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4952_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Collider>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4953_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4954_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Collider>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Collider>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t175_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1.h"
// System.Predicate`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Predicate_1_gen_6.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1.h"
// System.Comparison`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Comparison_1_gen_6.h"
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
extern TypeInfo Void_t133_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t521_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t837_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2302_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4348_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t168_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t170_il2cpp_TypeInfo;
extern TypeInfo Boolean_t147_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t1563_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t1560_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t26_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t153_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2962_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1172_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2966_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2967_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1MethodDeclarations.h"
extern Il2CppType List_1_t175_0_0_0;
extern Il2CppType ICollection_1_t4348_0_0_0;
extern Il2CppType MethodInfoU5BU5D_t168_0_0_0;
extern Il2CppType Enumerator_t170_0_0_0;
extern Il2CppType IEnumerable_1_t1563_0_0_0;
extern Il2CppType IEnumerator_1_t1560_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2962_0_0_0;
extern Il2CppType Predicate_1_t2966_0_0_0;
extern Il2CppType Comparer_1_t2967_0_0_0;
extern MethodInfo List_1_get_Item_m15643_MethodInfo;
extern MethodInfo List_1_set_Item_m15644_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2726_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8173_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m7993_MethodInfo;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m34699_MethodInfo;
extern MethodInfo Array_Copy_m10283_MethodInfo;
extern MethodInfo List_1_Add_m15616_MethodInfo;
extern MethodInfo List_1_Contains_m15622_MethodInfo;
extern MethodInfo List_1_IndexOf_m15627_MethodInfo;
extern MethodInfo List_1_Insert_m15630_MethodInfo;
extern MethodInfo List_1_Remove_m15632_MethodInfo;
extern MethodInfo Math_Max_m9460_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m34700_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m8446_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m8447_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m692_MethodInfo;
extern MethodInfo IDisposable_Dispose_m486_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15669_MethodInfo;
extern MethodInfo Array_Clear_m9451_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m6951_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15744_MethodInfo;
extern MethodInfo Enumerator__ctor_m15665_MethodInfo;
extern MethodInfo List_1_RemoveAt_m15634_MethodInfo;
extern MethodInfo Array_Reverse_m9493_MethodInfo;
extern MethodInfo Array_Copy_m10282_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m30068_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m30068(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<System.Reflection.MethodInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Reflection.MethodInfo>(!!0[]&,System.Int32)
#define Array_Resize_TisMethodInfo_t_m30386(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, MethodInfoU5BU5D_t168**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m30068_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14010_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14010(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<System.Reflection.MethodInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Reflection.MethodInfo>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisMethodInfo_t_m30388(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, MethodInfoU5BU5D_t168*, MethodInfo_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14010_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m30071_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m30071(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<System.Reflection.MethodInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Reflection.MethodInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisMethodInfo_t_m30390(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, MethodInfoU5BU5D_t168*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m30071_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
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
// Declaration System.Void System.Array::Sort<System.Reflection.MethodInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Reflection.MethodInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisMethodInfo_t_m30398(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, MethodInfoU5BU5D_t168*, int32_t, Comparison_1_t2969 *, MethodInfo*))Array_Sort_TisObject_t_m30178_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m15643_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m15644_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisMethodInfo_t_m30386_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15629_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15631_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15619_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m34699_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15618_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m576_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m15616_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m15622_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m15627_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m15630_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m15632_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15617_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15640_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15641_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m34700_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m8446_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m8447_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15669_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisMethodInfo_t_m30388_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15625_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15626_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15744_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15665_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15628_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m15634_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15750_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMethodInfo_t_m30390_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMethodInfo_t_m30398_GenericMethod;


// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor()
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Add(T)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Clear()
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Contains(T)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Reverse()
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort()
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<System.Reflection.MethodInfo>::ToArray()
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Capacity()
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Count()
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_48.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2957_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_48MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2957_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodInfo_t_m30342(__this, p0, method) (( MethodInfo_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15649_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMethodInfo_t_m30342_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2961_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4955_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4956_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4957_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_49.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2958_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_49MethodDeclarations.h"

extern TypeInfo _MethodInfo_t2775_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2958_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodInfo_t2775_m30353(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15654_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_MethodInfo_t2775_m30353_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4958_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4959_il2cpp_TypeInfo;

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4960_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4961_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_50.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2959_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_50MethodDeclarations.h"

extern TypeInfo MethodBase_t1169_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2959_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodBase>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodBase_t1169_m30364(__this, p0, method) (( MethodBase_t1169 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15659_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMethodBase_t1169_m30364_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4962_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4963_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4964_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4965_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2960_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51MethodDeclarations.h"

extern TypeInfo _MethodBase_t2770_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2960_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBase>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodBase_t2770_m30375(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15664_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_MethodBase_t2770_m30375_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4966_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1780_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m7992_MethodInfo;
extern MethodInfo Object_GetType_m568_MethodInfo;
extern MethodInfo Type_get_FullName_m6981_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m9468_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m15668_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::get_Current()
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
// System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1MethodDeclarations.h"
extern Il2CppType IList_1_t2961_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m15698_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m449_MethodInfo;
extern MethodInfo IList_1_get_Item_m34701_MethodInfo;
extern MethodInfo ICollection_CopyTo_m7980_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m8128_MethodInfo;
extern MethodInfo ICollection_1_Contains_m34702_MethodInfo;
extern MethodInfo IList_1_IndexOf_m34703_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m15698_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m34701_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15730_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m34702_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m34703_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2963_il2cpp_TypeInfo;

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IList_t1430_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2963_0_0_0;
extern Il2CppType MethodInfo_t_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m34704_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15729_MethodInfo;
extern MethodInfo List_1__ctor_m15597_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m14009_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15722_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15720_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15725_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15716_MethodInfo;
extern MethodInfo ICollection_1_Clear_m34705_MethodInfo;
extern MethodInfo IList_1_Insert_m34706_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m34707_MethodInfo;
extern MethodInfo IList_1_set_Item_m34708_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m498_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10335_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14288_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14289_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34704_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15733_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15734_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15731_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15729_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m15597_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15722_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15732_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15720_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15725_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15716_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m34705_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m34706_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m34707_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m34708_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::get_Count()
// T System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.MethodInfo>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2964_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
extern TypeInfo TypeU5BU5D_t913_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2965_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2964_0_0_0;
extern Il2CppType IEquatable_1_t4967_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2714_0_0_0;
extern Il2CppType TypeU5BU5D_t913_0_0_0;
extern Il2CppType DefaultComparer_t2965_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m6867_MethodInfo;
extern MethodInfo Type_MakeGenericType_m6961_MethodInfo;
extern MethodInfo Activator_CreateInstance_m6868_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m15740_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m34709_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m30387_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15740_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m34709_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m30387_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Reflection.MethodInfo>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<System.Reflection.MethodInfo>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Reflection.MethodInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Reflection.MethodInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Reflection.MethodInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Reflection.MethodInfo>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Reflection.MethodInfo>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4968_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Reflection.MethodInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Reflection.MethodInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4967_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Reflection.MethodInfo>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m714_MethodInfo;
extern MethodInfo Object_Equals_m713_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m15735_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.MethodInfo>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.MethodInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.MethodInfo>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<System.Reflection.MethodInfo>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<System.Reflection.MethodInfo>::Invoke(T)
// System.IAsyncResult System.Predicate`1<System.Reflection.MethodInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<System.Reflection.MethodInfo>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1.h"
extern TypeInfo DefaultComparer_t2968_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1MethodDeclarations.h"
extern Il2CppType IComparable_1_t4674_0_0_0;
extern Il2CppType GenericComparer_1_t2627_0_0_0;
extern Il2CppType DefaultComparer_t2968_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15751_MethodInfo;
extern MethodInfo Comparer_1_Compare_m34710_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13180_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15751_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m34710_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Reflection.MethodInfo>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<System.Reflection.MethodInfo>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<System.Reflection.MethodInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<System.Reflection.MethodInfo>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Reflection.MethodInfo>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4673_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Reflection.MethodInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4674_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Reflection.MethodInfo>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t206_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m30396_MethodInfo;
extern MethodInfo IComparable_CompareTo_m13982_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m15747_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m30396_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Reflection.MethodInfo>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Reflection.MethodInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2969_il2cpp_TypeInfo;
// System.Comparison`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Comparison_1_gen_6MethodDeclarations.h"



// System.Void System.Comparison`1<System.Reflection.MethodInfo>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<System.Reflection.MethodInfo>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<System.Reflection.MethodInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<System.Reflection.MethodInfo>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4969_il2cpp_TypeInfo;

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Material>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Material>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2970_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Material>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52MethodDeclarations.h"

extern TypeInfo Material_t116_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2970_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Material>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Material>(System.Int32)
#define Array_InternalArray__get_Item_TisMaterial_t116_m30401(__this, p0, method) (( Material_t116 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15761_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMaterial_t116_m30401_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Material>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Material>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Material>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Material>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Material>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4970_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Material>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4971_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Material>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4972_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Material>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Material>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<UnityEngine.MeshRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2971_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.MeshRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_5MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityEngine.MeshFilter>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2972_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.MeshFilter>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4973_il2cpp_TypeInfo;

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Camera>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2973_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Camera>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53MethodDeclarations.h"

extern TypeInfo Camera_t2_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2973_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Camera>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Camera>(System.Int32)
#define Array_InternalArray__get_Item_TisCamera_t2_m30412(__this, p0, method) (( Camera_t2 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15766_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisCamera_t2_m30412_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Camera>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Camera>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Camera>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4974_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4975_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4976_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Camera>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Camera>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4977_il2cpp_TypeInfo;

// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Behaviour>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Behaviour>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Behaviour>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Behaviour>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Behaviour>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Behaviour>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Behaviour>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4978_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Behaviour>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4979_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Behaviour>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Behaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2974_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Behaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54MethodDeclarations.h"

extern TypeInfo Behaviour_t530_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2974_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Behaviour>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Behaviour>(System.Int32)
#define Array_InternalArray__get_Item_TisBehaviour_t530_m30423(__this, p0, method) (( Behaviour_t530 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15771_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBehaviour_t530_m30423_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Behaviour>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Behaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Behaviour>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Behaviour>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Behaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4980_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Behaviour>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Behaviour>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Behaviour>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Behaviour>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Behaviour>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4981_il2cpp_TypeInfo;

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2975_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55MethodDeclarations.h"

extern TypeInfo Vector3_t30_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2975_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C" Vector3_t30  Array_InternalArray__get_Item_TisVector3_t30_m30434_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector3_t30_m30434(__this, p0, method) (( Vector3_t30  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisVector3_t30_m30434_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15776_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisVector3_t30_m30434_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15772_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15772_gshared (InternalEnumerator_1_t2975 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15773_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15773_gshared (InternalEnumerator_1_t2975 * __this, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = (( Vector3_t30  (*) (InternalEnumerator_1_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector3_t30  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15774_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15774_gshared (InternalEnumerator_1_t2975 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15775_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15775_gshared (InternalEnumerator_1_t2975 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
extern "C" Vector3_t30  InternalEnumerator_1_get_Current_m15776_gshared (InternalEnumerator_1_t2975 * __this, MethodInfo* method)
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
		Vector3_t30  L_8 = (( Vector3_t30  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4982_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4983_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4984_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector3>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4985_il2cpp_TypeInfo;

// Vuforia.WireframeBehaviour
#include "AssemblyU2DCSharp_Vuforia_WireframeBehaviour.h"


// T System.Collections.Generic.IEnumerator`1<Vuforia.WireframeBehaviour>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.WireframeBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2976_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.WireframeBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56MethodDeclarations.h"

extern TypeInfo WireframeBehaviour_t117_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2976_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.WireframeBehaviour>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.WireframeBehaviour>(System.Int32)
#define Array_InternalArray__get_Item_TisWireframeBehaviour_t117_m30446(__this, p0, method) (( WireframeBehaviour_t117 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15781_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisWireframeBehaviour_t117_m30446_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.WireframeBehaviour>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.WireframeBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.WireframeBehaviour>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.WireframeBehaviour>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.WireframeBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4986_il2cpp_TypeInfo;

#include "Assembly-CSharp_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.WireframeBehaviour>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.WireframeBehaviour>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.WireframeBehaviour>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.WireframeBehaviour>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.WireframeBehaviour>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.WireframeBehaviour>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.WireframeBehaviour>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4987_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.WireframeBehaviour>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4988_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.WireframeBehaviour>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.WireframeBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.WireframeBehaviour>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.WireframeBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.WireframeBehaviour>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4989_il2cpp_TypeInfo;

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.MonoBehaviour>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.MonoBehaviour>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.MonoBehaviour>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.MonoBehaviour>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.MonoBehaviour>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.MonoBehaviour>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.MonoBehaviour>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4990_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.MonoBehaviour>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4991_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.MonoBehaviour>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.MonoBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2977_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.MonoBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57MethodDeclarations.h"

extern TypeInfo MonoBehaviour_t8_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2977_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.MonoBehaviour>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.MonoBehaviour>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoBehaviour_t8_m30457(__this, p0, method) (( MonoBehaviour_t8 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m29753_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15786_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMonoBehaviour_t8_m30457_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.MonoBehaviour>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.MonoBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.MonoBehaviour>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.MonoBehaviour>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.MonoBehaviour>::get_Current()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
