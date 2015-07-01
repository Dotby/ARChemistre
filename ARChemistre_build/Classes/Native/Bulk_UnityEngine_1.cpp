#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
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
extern TypeInfo Sprite_t376_il2cpp_TypeInfo;
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern MethodInfo Sprite_get_rect_m2478_MethodInfo;
extern "C" Rect_t32  Sprite_get_rect_m2478 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef Rect_t32  (*Sprite_get_rect_m2478_ftn) (Sprite_t376 *);
	static Sprite_get_rect_m2478_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_rect_m2478_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern MethodInfo Sprite_get_pixelsPerUnit_m2475_MethodInfo;
extern "C" float Sprite_get_pixelsPerUnit_m2475 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m2475_ftn) (Sprite_t376 *);
	static Sprite_get_pixelsPerUnit_m2475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m2475_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern MethodInfo Sprite_get_texture_m2472_MethodInfo;
extern "C" Texture2D_t51 * Sprite_get_texture_m2472 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef Texture2D_t51 * (*Sprite_get_texture_m2472_ftn) (Sprite_t376 *);
	static Sprite_get_texture_m2472_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m2472_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern MethodInfo Sprite_get_textureRect_m2503_MethodInfo;
extern "C" Rect_t32  Sprite_get_textureRect_m2503 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef Rect_t32  (*Sprite_get_textureRect_m2503_ftn) (Sprite_t376 *);
	static Sprite_get_textureRect_m2503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_textureRect_m2503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern MethodInfo Sprite_get_border_m2473_MethodInfo;
extern "C" Vector4_t151  Sprite_get_border_m2473 (Sprite_t376 * __this, MethodInfo* method)
{
	typedef Vector4_t151  (*Sprite_get_border_m2473_ftn) (Sprite_t376 *);
	static Sprite_get_border_m2473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_border_m2473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpriteRenderer_t488_il2cpp_TypeInfo;
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"



// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DataUtility_t1038_il2cpp_TypeInfo;
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Void
#include "mscorlib_System_Void.h"
extern MethodInfo DataUtility_Internal_GetMinSize_m6345_MethodInfo;


// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetInnerUV_m2492_MethodInfo;
extern "C" Vector4_t151  DataUtility_GetInnerUV_m2492 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t151  (*DataUtility_GetInnerUV_m2492_ftn) (Sprite_t376 *);
	static DataUtility_GetInnerUV_m2492_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m2492_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetOuterUV_m2491_MethodInfo;
extern "C" Vector4_t151  DataUtility_GetOuterUV_m2491 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t151  (*DataUtility_GetOuterUV_m2491_ftn) (Sprite_t376 *);
	static DataUtility_GetOuterUV_m2491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m2491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetPadding_m2481_MethodInfo;
extern "C" Vector4_t151  DataUtility_GetPadding_m2481 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t151  (*DataUtility_GetPadding_m2481_ftn) (Sprite_t376 *);
	static DataUtility_GetPadding_m2481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m2481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetMinSize_m2477_MethodInfo;
extern "C" Vector2_t20  DataUtility_GetMinSize_m2477 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, MethodInfo* method)
{
	Vector2_t20  V_0 = {0};
	{
		Sprite_t376 * L_0 = ___sprite;
		DataUtility_Internal_GetMinSize_m6345(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/&DataUtility_Internal_GetMinSize_m6345_MethodInfo);
		Vector2_t20  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m6345 (Object_t * __this /* static, unused */, Sprite_t376 * ___sprite, Vector2_t20 * ___output, MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m6345_ftn) (Sprite_t376 *, Vector2_t20 *);
	static DataUtility_Internal_GetMinSize_m6345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m6345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___sprite, ___output);
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CacheIndex_t1039_il2cpp_TypeInfo;
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"



// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.CacheIndex
void CacheIndex_t1039_marshal(const CacheIndex_t1039& unmarshaled, CacheIndex_t1039_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
void CacheIndex_t1039_marshal_back(const CacheIndex_t1039_marshaled& marshaled, CacheIndex_t1039& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void CacheIndex_t1039_marshal_cleanup(CacheIndex_t1039_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityString_t1040_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo String_Format_m2725_MethodInfo;


// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern MethodInfo UnityString_Format_m6346_MethodInfo;
extern "C" String_t* UnityString_Format_m6346 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t164* ___args, MethodInfo* method)
{
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t164* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Format_m2725(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_Format_m2725_MethodInfo);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AsyncOperation_t959_il2cpp_TypeInfo;
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t133_il2cpp_TypeInfo;
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo YieldInstruction__ctor_m6465_MethodInfo;
extern MethodInfo AsyncOperation_InternalDestroy_m6348_MethodInfo;
extern MethodInfo Object_Finalize_m710_MethodInfo;


// System.Void UnityEngine.AsyncOperation::.ctor()
extern MethodInfo AsyncOperation__ctor_m6347_MethodInfo;
extern "C" void AsyncOperation__ctor_m6347 (AsyncOperation_t959 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m6465(__this, /*hidden argument*/&YieldInstruction__ctor_m6465_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m6348 (AsyncOperation_t959 * __this, MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m6348_ftn) (AsyncOperation_t959 *);
	static AsyncOperation_InternalDestroy_m6348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m6348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern MethodInfo AsyncOperation_Finalize_m6349_MethodInfo;
extern "C" void AsyncOperation_Finalize_m6349 (AsyncOperation_t959 * __this, MethodInfo* method)
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
		AsyncOperation_InternalDestroy_m6348(__this, /*hidden argument*/&AsyncOperation_InternalDestroy_m6348_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m710(__this, /*hidden argument*/&Object_Finalize_m710_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t959_marshal(const AsyncOperation_t959& unmarshaled, AsyncOperation_t959_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t959_marshal_back(const AsyncOperation_t959_marshaled& marshaled, AsyncOperation_t959& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t959_marshal_cleanup(AsyncOperation_t959_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LogCallback_t1041_il2cpp_TypeInfo;
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo LogCallback__ctor_m6350_MethodInfo;
extern "C" void LogCallback__ctor_m6350 (LogCallback_t1041 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern MethodInfo LogCallback_Invoke_m6351_MethodInfo;
extern "C" void LogCallback_Invoke_m6351 (LogCallback_t1041 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m6351((LogCallback_t1041 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t1041(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
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
extern MethodInfo LogCallback_BeginInvoke_m6352_MethodInfo;
extern "C" Object_t * LogCallback_BeginInvoke_m6352 (LogCallback_t1041 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(InitializedTypeInfo(&LogType_t965_il2cpp_TypeInfo), &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo LogCallback_EndInvoke_m6353_MethodInfo;
extern "C" void LogCallback_EndInvoke_m6353 (LogCallback_t1041 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Application_t1042_il2cpp_TypeInfo;
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo LogType_t965_il2cpp_TypeInfo;
extern MethodInfo Application_LoadLevelAsync_m6354_MethodInfo;


// System.Void UnityEngine.Application::Quit()
extern MethodInfo Application_Quit_m461_MethodInfo;
extern "C" void Application_Quit_m461 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*Application_Quit_m461_ftn) ();
	static Application_Quit_m461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_Quit_m461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern MethodInfo Application_LoadLevel_m494_MethodInfo;
extern "C" void Application_LoadLevel_m494 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Application_LoadLevelAsync_m6354(NULL /*static, unused*/, (String_t*)NULL, L_0, 0, 1, /*hidden argument*/&Application_LoadLevelAsync_m6354_MethodInfo);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t959 * Application_LoadLevelAsync_m6354 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, MethodInfo* method)
{
	typedef AsyncOperation_t959 * (*Application_LoadLevelAsync_m6354_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m6354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m6354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern MethodInfo Application_get_isPlaying_m2625_MethodInfo;
extern "C" bool Application_get_isPlaying_m2625 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m2625_ftn) ();
	static Application_get_isPlaying_m2625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m2625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern MethodInfo Application_get_isEditor_m2628_MethodInfo;
extern "C" bool Application_get_isEditor_m2628 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m2628_ftn) ();
	static Application_get_isEditor_m2628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m2628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern MethodInfo Application_get_platform_m602_MethodInfo;
extern "C" int32_t Application_get_platform_m602 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m602_ftn) ();
	static Application_get_platform_m602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern MethodInfo Application_set_runInBackground_m5521_MethodInfo;
extern "C" void Application_set_runInBackground_m5521 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	typedef void (*Application_set_runInBackground_m5521_ftn) (bool);
	static Application_set_runInBackground_m5521_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_set_runInBackground_m5521_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::set_runInBackground(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Application::get_dataPath()
extern MethodInfo Application_get_dataPath_m5366_MethodInfo;
extern "C" String_t* Application_get_dataPath_m5366 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Application_get_dataPath_m5366_ftn) ();
	static Application_get_dataPath_m5366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_dataPath_m5366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_dataPath()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_unityVersion()
extern MethodInfo Application_get_unityVersion_m4959_MethodInfo;
extern "C" String_t* Application_get_unityVersion_m4959 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Application_get_unityVersion_m4959_ftn) ();
	static Application_get_unityVersion_m4959_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_unityVersion_m4959_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_unityVersion()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern MethodInfo Application_CallLogCallback_m6355_MethodInfo;
extern "C" void Application_CallLogCallback_m6355 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, MethodInfo* method)
{
	LogCallback_t1041 * V_0 = {0};
	LogCallback_t1041 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t1041 * L_1 = ((Application_t1042_StaticFields*)InitializedTypeInfo(&Application_t1042_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t1041 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t1041 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m6351_MethodInfo, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t1041 * L_7 = ((Application_t1042_StaticFields*)InitializedTypeInfo(&Application_t1042_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t1041 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t1041 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m6351_MethodInfo, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Behaviour_t530_il2cpp_TypeInfo;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern MethodInfo Component__ctor_m6432_MethodInfo;


// System.Void UnityEngine.Behaviour::.ctor()
extern MethodInfo Behaviour__ctor_m6356_MethodInfo;
extern "C" void Behaviour__ctor_m6356 (Behaviour_t530 * __this, MethodInfo* method)
{
	{
		Component__ctor_m6432(__this, /*hidden argument*/&Component__ctor_m6432_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern MethodInfo Behaviour_get_enabled_m639_MethodInfo;
extern "C" bool Behaviour_get_enabled_m639 (Behaviour_t530 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m639_ftn) (Behaviour_t530 *);
	static Behaviour_get_enabled_m639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m639_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern MethodInfo Behaviour_set_enabled_m647_MethodInfo;
extern "C" void Behaviour_set_enabled_m647 (Behaviour_t530 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m647_ftn) (Behaviour_t530 *, bool);
	static Behaviour_set_enabled_m647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern MethodInfo Behaviour_get_isActiveAndEnabled_m2269_MethodInfo;
extern "C" bool Behaviour_get_isActiveAndEnabled_m2269 (Behaviour_t530 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m2269_ftn) (Behaviour_t530 *);
	static Behaviour_get_isActiveAndEnabled_m2269_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m2269_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraCallback_t1043_il2cpp_TypeInfo;
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CameraCallback__ctor_m6357_MethodInfo;
extern "C" void CameraCallback__ctor_m6357 (CameraCallback_t1043 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern MethodInfo CameraCallback_Invoke_m6358_MethodInfo;
extern "C" void CameraCallback_Invoke_m6358 (CameraCallback_t1043 * __this, Camera_t2 * ___cam, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m6358((CameraCallback_t1043 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t2 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t2 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t1043(Il2CppObject* delegate, Camera_t2 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t2 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern MethodInfo CameraCallback_BeginInvoke_m6359_MethodInfo;
extern "C" Object_t * CameraCallback_BeginInvoke_m6359 (CameraCallback_t1043 * __this, Camera_t2 * ___cam, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CameraCallback_EndInvoke_m6360_MethodInfo;
extern "C" void CameraCallback_EndInvoke_m6360 (CameraCallback_t1043 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Camera_t2_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern MethodInfo Camera_INTERNAL_get_rect_m6362_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_rect_m6363_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_pixelRect_m6364_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_projectionMatrix_m6365_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_projectionMatrix_m6366_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_WorldToScreenPoint_m6368_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToViewportPoint_m6369_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ViewportPointToRay_m6370_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenPointToRay_m6371_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry_m6378_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry2D_m6380_MethodInfo;


// System.Single UnityEngine.Camera::get_nearClipPlane()
extern MethodInfo Camera_get_nearClipPlane_m2335_MethodInfo;
extern "C" float Camera_get_nearClipPlane_m2335 (Camera_t2 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m2335_ftn) (Camera_t2 *);
	static Camera_get_nearClipPlane_m2335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m2335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
extern MethodInfo Camera_set_nearClipPlane_m5333_MethodInfo;
extern "C" void Camera_set_nearClipPlane_m5333 (Camera_t2 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_nearClipPlane_m5333_ftn) (Camera_t2 *, float);
	static Camera_set_nearClipPlane_m5333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_nearClipPlane_m5333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_nearClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern MethodInfo Camera_get_farClipPlane_m2334_MethodInfo;
extern "C" float Camera_get_farClipPlane_m2334 (Camera_t2 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m2334_ftn) (Camera_t2 *);
	static Camera_get_farClipPlane_m2334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m2334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
extern MethodInfo Camera_set_farClipPlane_m5334_MethodInfo;
extern "C" void Camera_set_farClipPlane_m5334 (Camera_t2 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_farClipPlane_m5334_ftn) (Camera_t2 *, float);
	static Camera_set_farClipPlane_m5334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_farClipPlane_m5334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_farClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern MethodInfo Camera_set_orthographicSize_m5331_MethodInfo;
extern "C" void Camera_set_orthographicSize_m5331 (Camera_t2 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m5331_ftn) (Camera_t2 *, float);
	static Camera_set_orthographicSize_m5331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m5331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern MethodInfo Camera_set_orthographic_m5330_MethodInfo;
extern "C" void Camera_set_orthographic_m5330 (Camera_t2 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Camera_set_orthographic_m5330_ftn) (Camera_t2 *, bool);
	static Camera_set_orthographic_m5330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographic_m5330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern MethodInfo Camera_get_depth_m2198_MethodInfo;
extern "C" float Camera_get_depth_m2198 (Camera_t2 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_depth_m2198_ftn) (Camera_t2 *);
	static Camera_get_depth_m2198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m2198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_aspect(System.Single)
extern MethodInfo Camera_set_aspect_m5332_MethodInfo;
extern "C" void Camera_set_aspect_m5332 (Camera_t2 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_aspect_m5332_ftn) (Camera_t2 *, float);
	static Camera_set_aspect_m5332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_aspect_m5332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_aspect(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern MethodInfo Camera_get_cullingMask_m2349_MethodInfo;
extern "C" int32_t Camera_get_cullingMask_m2349 (Camera_t2 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m2349_ftn) (Camera_t2 *);
	static Camera_get_cullingMask_m2349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m2349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern MethodInfo Camera_set_cullingMask_m5335_MethodInfo;
extern "C" void Camera_set_cullingMask_m5335 (Camera_t2 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_cullingMask_m5335_ftn) (Camera_t2 *, int32_t);
	static Camera_set_cullingMask_m5335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_cullingMask_m5335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_cullingMask(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern MethodInfo Camera_get_eventMask_m6361_MethodInfo;
extern "C" int32_t Camera_get_eventMask_m6361 (Camera_t2 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m6361_ftn) (Camera_t2 *);
	static Camera_get_eventMask_m6361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m6361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m6362 (Camera_t2 * __this, Rect_t32 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_rect_m6362_ftn) (Camera_t2 *, Rect_t32 *);
	static Camera_INTERNAL_get_rect_m6362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_rect_m6362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m6363 (Camera_t2 * __this, Rect_t32 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_rect_m6363_ftn) (Camera_t2 *, Rect_t32 *);
	static Camera_INTERNAL_set_rect_m6363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_rect_m6363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern MethodInfo Camera_get_rect_m5407_MethodInfo;
extern "C" Rect_t32  Camera_get_rect_m5407 (Camera_t2 * __this, MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	{
		Camera_INTERNAL_get_rect_m6362(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_rect_m6362_MethodInfo);
		Rect_t32  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern MethodInfo Camera_set_rect_m5408_MethodInfo;
extern "C" void Camera_set_rect_m5408 (Camera_t2 * __this, Rect_t32  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_rect_m6363(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_rect_m6363_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m6364 (Camera_t2 * __this, Rect_t32 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m6364_ftn) (Camera_t2 *, Rect_t32 *);
	static Camera_INTERNAL_get_pixelRect_m6364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m6364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern MethodInfo Camera_get_pixelRect_m4625_MethodInfo;
extern "C" Rect_t32  Camera_get_pixelRect_m4625 (Camera_t2 * __this, MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m6364(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_pixelRect_m6364_MethodInfo);
		Rect_t32  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern MethodInfo Camera_get_targetTexture_m5342_MethodInfo;
extern "C" RenderTexture_t799 * Camera_get_targetTexture_m5342 (Camera_t2 * __this, MethodInfo* method)
{
	typedef RenderTexture_t799 * (*Camera_get_targetTexture_m5342_ftn) (Camera_t2 *);
	static Camera_get_targetTexture_m5342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m5342_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern MethodInfo Camera_set_targetTexture_m5341_MethodInfo;
extern "C" void Camera_set_targetTexture_m5341 (Camera_t2 * __this, RenderTexture_t799 * ___value, MethodInfo* method)
{
	typedef void (*Camera_set_targetTexture_m5341_ftn) (Camera_t2 *, RenderTexture_t799 *);
	static Camera_set_targetTexture_m5341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_targetTexture_m5341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m6365 (Camera_t2 * __this, Matrix4x4_t187 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m6365_ftn) (Camera_t2 *, Matrix4x4_t187 *);
	static Camera_INTERNAL_get_projectionMatrix_m6365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m6365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_projectionMatrix_m6366 (Camera_t2 * __this, Matrix4x4_t187 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_projectionMatrix_m6366_ftn) (Camera_t2 *, Matrix4x4_t187 *);
	static Camera_INTERNAL_set_projectionMatrix_m6366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_projectionMatrix_m6366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern MethodInfo Camera_get_projectionMatrix_m4626_MethodInfo;
extern "C" Matrix4x4_t187  Camera_get_projectionMatrix_m4626 (Camera_t2 * __this, MethodInfo* method)
{
	Matrix4x4_t187  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m6365(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_projectionMatrix_m6365_MethodInfo);
		Matrix4x4_t187  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern MethodInfo Camera_set_projectionMatrix_m5434_MethodInfo;
extern "C" void Camera_set_projectionMatrix_m5434 (Camera_t2 * __this, Matrix4x4_t187  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_projectionMatrix_m6366(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_projectionMatrix_m6366_MethodInfo);
		return;
	}
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern MethodInfo Camera_get_clearFlags_m6367_MethodInfo;
extern "C" int32_t Camera_get_clearFlags_m6367 (Camera_t2 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m6367_ftn) (Camera_t2 *);
	static Camera_get_clearFlags_m6367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m6367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern MethodInfo Camera_WorldToScreenPoint_m4704_MethodInfo;
extern "C" Vector3_t30  Camera_WorldToScreenPoint_m4704 (Camera_t2 * __this, Vector3_t30  ___position, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = Camera_INTERNAL_CALL_WorldToScreenPoint_m6368(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_WorldToScreenPoint_m6368_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t30  Camera_INTERNAL_CALL_WorldToScreenPoint_m6368 (Object_t * __this /* static, unused */, Camera_t2 * ___self, Vector3_t30 * ___position, MethodInfo* method)
{
	typedef Vector3_t30  (*Camera_INTERNAL_CALL_WorldToScreenPoint_m6368_ftn) (Camera_t2 *, Vector3_t30 *);
	static Camera_INTERNAL_CALL_WorldToScreenPoint_m6368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToScreenPoint_m6368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToViewportPoint_m2449_MethodInfo;
extern "C" Vector3_t30  Camera_ScreenToViewportPoint_m2449 (Camera_t2 * __this, Vector3_t30  ___position, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m6369(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToViewportPoint_m6369_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t30  Camera_INTERNAL_CALL_ScreenToViewportPoint_m6369 (Object_t * __this /* static, unused */, Camera_t2 * ___self, Vector3_t30 * ___position, MethodInfo* method)
{
	typedef Vector3_t30  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m6369_ftn) (Camera_t2 *, Vector3_t30 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m6369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m6369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
extern MethodInfo Camera_ViewportPointToRay_m384_MethodInfo;
extern "C" Ray_t136  Camera_ViewportPointToRay_m384 (Camera_t2 * __this, Vector3_t30  ___position, MethodInfo* method)
{
	{
		Ray_t136  L_0 = Camera_INTERNAL_CALL_ViewportPointToRay_m6370(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ViewportPointToRay_m6370_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ViewportPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t136  Camera_INTERNAL_CALL_ViewportPointToRay_m6370 (Object_t * __this /* static, unused */, Camera_t2 * ___self, Vector3_t30 * ___position, MethodInfo* method)
{
	typedef Ray_t136  (*Camera_INTERNAL_CALL_ViewportPointToRay_m6370_ftn) (Camera_t2 *, Vector3_t30 *);
	static Camera_INTERNAL_CALL_ViewportPointToRay_m6370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ViewportPointToRay_m6370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ViewportPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenPointToRay_m658_MethodInfo;
extern "C" Ray_t136  Camera_ScreenPointToRay_m658 (Camera_t2 * __this, Vector3_t30  ___position, MethodInfo* method)
{
	{
		Ray_t136  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m6371(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenPointToRay_m6371_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t136  Camera_INTERNAL_CALL_ScreenPointToRay_m6371 (Object_t * __this /* static, unused */, Camera_t2 * ___self, Vector3_t30 * ___position, MethodInfo* method)
{
	typedef Ray_t136  (*Camera_INTERNAL_CALL_ScreenPointToRay_m6371_ftn) (Camera_t2 *, Vector3_t30 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m6371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m6371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern MethodInfo Camera_get_main_m2348_MethodInfo;
extern "C" Camera_t2 * Camera_get_main_m2348 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t2 * (*Camera_get_main_m2348_ftn) ();
	static Camera_get_main_m2348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m2348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern MethodInfo Camera_get_current_m627_MethodInfo;
extern "C" Camera_t2 * Camera_get_current_m627 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t2 * (*Camera_get_current_m627_ftn) ();
	static Camera_get_current_m627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_current_m627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_current()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern MethodInfo Camera_get_allCamerasCount_m6372_MethodInfo;
extern "C" int32_t Camera_get_allCamerasCount_m6372 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m6372_ftn) ();
	static Camera_get_allCamerasCount_m6372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m6372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern MethodInfo Camera_GetAllCameras_m6373_MethodInfo;
extern "C" int32_t Camera_GetAllCameras_m6373 (Object_t * __this /* static, unused */, CameraU5BU5D_t182* ___cameras, MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m6373_ftn) (CameraU5BU5D_t182*);
	static Camera_GetAllCameras_m6373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m6373_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreCull_m6374_MethodInfo;
extern "C" void Camera_FireOnPreCull_m6374 (Object_t * __this /* static, unused */, Camera_t2 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t1043 * L_0 = ((Camera_t2_StaticFields*)InitializedTypeInfo(&Camera_t2_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t1043 * L_1 = ((Camera_t2_StaticFields*)InitializedTypeInfo(&Camera_t2_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		Camera_t2 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t2 * >::Invoke(&CameraCallback_Invoke_m6358_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreRender_m6375_MethodInfo;
extern "C" void Camera_FireOnPreRender_m6375 (Object_t * __this /* static, unused */, Camera_t2 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t1043 * L_0 = ((Camera_t2_StaticFields*)InitializedTypeInfo(&Camera_t2_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t1043 * L_1 = ((Camera_t2_StaticFields*)InitializedTypeInfo(&Camera_t2_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		Camera_t2 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t2 * >::Invoke(&CameraCallback_Invoke_m6358_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPostRender_m6376_MethodInfo;
extern "C" void Camera_FireOnPostRender_m6376 (Object_t * __this /* static, unused */, Camera_t2 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t1043 * L_0 = ((Camera_t2_StaticFields*)InitializedTypeInfo(&Camera_t2_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t1043 * L_1 = ((Camera_t2_StaticFields*)InitializedTypeInfo(&Camera_t2_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		Camera_t2 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t2 * >::Invoke(&CameraCallback_Invoke_m6358_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::Render()
extern MethodInfo Camera_Render_m5344_MethodInfo;
extern "C" void Camera_Render_m5344 (Camera_t2 * __this, MethodInfo* method)
{
	typedef void (*Camera_Render_m5344_ftn) (Camera_t2 *);
	static Camera_Render_m5344_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_Render_m5344_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::Render()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry_m6377_MethodInfo;
extern "C" GameObject_t1 * Camera_RaycastTry_m6377 (Camera_t2 * __this, Ray_t136  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t1 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m6378(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry_m6378_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t1 * Camera_INTERNAL_CALL_RaycastTry_m6378 (Object_t * __this /* static, unused */, Camera_t2 * ___self, Ray_t136 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t1 * (*Camera_INTERNAL_CALL_RaycastTry_m6378_ftn) (Camera_t2 *, Ray_t136 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m6378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m6378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry2D_m6379_MethodInfo;
extern "C" GameObject_t1 * Camera_RaycastTry2D_m6379 (Camera_t2 * __this, Ray_t136  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t1 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m6380(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry2D_m6380_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t1 * Camera_INTERNAL_CALL_RaycastTry2D_m6380 (Object_t * __this /* static, unused */, Camera_t2 * ___self, Ray_t136 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t1 * (*Camera_INTERNAL_CALL_RaycastTry2D_m6380_ftn) (Camera_t2 *, Ray_t136 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m6380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m6380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Debug_t1044_il2cpp_TypeInfo;
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
extern MethodInfo Object_ToString_m715_MethodInfo;
extern MethodInfo Debug_Internal_Log_m6381_MethodInfo;
extern MethodInfo Debug_Internal_LogException_m6382_MethodInfo;


// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m6381 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t138 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m6381_ftn) (int32_t, String_t*, Object_t138 *);
	static Debug_Internal_Log_m6381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m6381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m6382 (Object_t * __this /* static, unused */, Exception_t154 * ___exception, Object_t138 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m6382_ftn) (Exception_t154 *, Object_t138 *);
	static Debug_Internal_LogException_m6382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m6382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern MethodInfo Debug_Log_m472_MethodInfo;
extern "C" void Debug_Log_m472 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
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
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral499;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m6381(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t138 *)NULL, /*hidden argument*/&Debug_Internal_Log_m6381_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern MethodInfo Debug_LogError_m496_MethodInfo;
extern "C" void Debug_LogError_m496 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
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
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral499;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m6381(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t138 *)NULL, /*hidden argument*/&Debug_Internal_Log_m6381_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogError_m2508_MethodInfo;
extern "C" void Debug_LogError_m2508 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t138 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, L_0);
		Object_t138 * L_2 = ___context;
		Debug_Internal_Log_m6381(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m6381_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern MethodInfo Debug_LogException_m6383_MethodInfo;
extern "C" void Debug_LogException_m6383 (Object_t * __this /* static, unused */, Exception_t154 * ___exception, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = ___exception;
		Debug_Internal_LogException_m6382(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Debug_Internal_LogException_m6382_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern MethodInfo Debug_LogException_m2374_MethodInfo;
extern "C" void Debug_LogException_m2374 (Object_t * __this /* static, unused */, Exception_t154 * ___exception, Object_t138 * ___context, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = ___exception;
		Object_t138 * L_1 = ___context;
		Debug_Internal_LogException_m6382(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Debug_Internal_LogException_m6382_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern MethodInfo Debug_LogWarning_m656_MethodInfo;
extern "C" void Debug_LogWarning_m656 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, L_0);
		Debug_Internal_Log_m6381(NULL /*static, unused*/, 1, L_1, (Object_t138 *)NULL, /*hidden argument*/&Debug_Internal_Log_m6381_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogWarning_m2699_MethodInfo;
extern "C" void Debug_LogWarning_m2699 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t138 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, L_0);
		Object_t138 * L_2 = ___context;
		Debug_Internal_Log_m6381(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m6381_MethodInfo);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DisplaysUpdatedDelegate_t1045_il2cpp_TypeInfo;
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo DisplaysUpdatedDelegate__ctor_m6384_MethodInfo;
extern "C" void DisplaysUpdatedDelegate__ctor_m6384 (DisplaysUpdatedDelegate_t1045 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern MethodInfo DisplaysUpdatedDelegate_Invoke_m6385_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_Invoke_m6385 (DisplaysUpdatedDelegate_t1045 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m6385((DisplaysUpdatedDelegate_t1045 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t1045(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DisplaysUpdatedDelegate_BeginInvoke_m6386_MethodInfo;
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m6386 (DisplaysUpdatedDelegate_t1045 * __this, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo DisplaysUpdatedDelegate_EndInvoke_m6387_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m6387 (DisplaysUpdatedDelegate_t1045 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Display_t1047_il2cpp_TypeInfo;
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo DisplayU5BU5D_t1046_il2cpp_TypeInfo;
extern TypeInfo Vector3_t30_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern Il2CppType DisplayU5BU5D_t1046_0_0_0;
extern MethodInfo Display_GetRenderingExtImpl_m6409_MethodInfo;
extern MethodInfo Display_GetSystemExtImpl_m6408_MethodInfo;
extern MethodInfo Display_GetRenderingBuffersImpl_m6410_MethodInfo;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern MethodInfo IntPtr__ctor_m5111_MethodInfo;
extern MethodInfo Display__ctor_m6388_MethodInfo;
extern MethodInfo Delegate_Combine_m451_MethodInfo;
extern MethodInfo Delegate_Remove_m457_MethodInfo;
extern MethodInfo Display_ActivateDisplayImpl_m6412_MethodInfo;
extern MethodInfo Display_SetParamsImpl_m6413_MethodInfo;
extern MethodInfo Display_SetRenderingResolutionImpl_m6411_MethodInfo;
extern MethodInfo Display_MultiDisplayLicenseImpl_m6414_MethodInfo;
extern MethodInfo Display_RelativeMouseAtImpl_m6415_MethodInfo;
extern MethodInfo Display__ctor_m6389_MethodInfo;


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m6388 (Display_t1047 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m5111(&L_0, 0, /*hidden argument*/&IntPtr__ctor_m5111_MethodInfo);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m6389 (Display_t1047 * __this, IntPtr_t ___nativeDisplay, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern MethodInfo Display__cctor_m6390_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t1046_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m6390 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Display__cctor_m6390_init;
	if (!Display__cctor_m6390_init)
	{
		DisplayU5BU5D_t1046_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t1046_0_0_0);
		Display__cctor_m6390_init = true;
	}
	{
		DisplayU5BU5D_t1046* L_0 = ((DisplayU5BU5D_t1046*)SZArrayNew(DisplayU5BU5D_t1046_il2cpp_TypeInfo_var, 1));
		Display_t1047 * L_1 = (Display_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display__ctor_m6388(L_1, /*hidden argument*/&Display__ctor_m6388_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t1047 **)(Display_t1047 **)SZArrayLdElema(L_0, 0)) = (Display_t1047 *)L_1;
		((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t1046* L_2 = ((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t1047 **)(Display_t1047 **)SZArrayLdElema(L_2, L_3));
		((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t1045 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_add_onDisplaysUpdated_m6391_MethodInfo;
extern "C" void Display_add_onDisplaysUpdated_m6391 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t1045 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t1045 * L_0 = ((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t1045 * L_1 = ___value;
		Delegate_t148 * L_2 = Delegate_Combine_m451(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m451_MethodInfo);
		((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t1045 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t1045_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_remove_onDisplaysUpdated_m6392_MethodInfo;
extern "C" void Display_remove_onDisplaysUpdated_m6392 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t1045 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t1045 * L_0 = ((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t1045 * L_1 = ___value;
		Delegate_t148 * L_2 = Delegate_Remove_m457(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m457_MethodInfo);
		((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t1045 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t1045_il2cpp_TypeInfo)));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern MethodInfo Display_get_renderingWidth_m6393_MethodInfo;
extern "C" int32_t Display_get_renderingWidth_m6393 (Display_t1047 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m6409(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m6409_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern MethodInfo Display_get_renderingHeight_m6394_MethodInfo;
extern "C" int32_t Display_get_renderingHeight_m6394 (Display_t1047 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m6409(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m6409_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern MethodInfo Display_get_systemWidth_m6395_MethodInfo;
extern "C" int32_t Display_get_systemWidth_m6395 (Display_t1047 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m6408(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m6408_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern MethodInfo Display_get_systemHeight_m6396_MethodInfo;
extern "C" int32_t Display_get_systemHeight_m6396 (Display_t1047 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m6408(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m6408_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern MethodInfo Display_get_colorBuffer_m6397_MethodInfo;
extern "C" RenderBuffer_t1049  Display_get_colorBuffer_m6397 (Display_t1047 * __this, MethodInfo* method)
{
	RenderBuffer_t1049  V_0 = {0};
	RenderBuffer_t1049  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m6410(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m6410_MethodInfo);
		RenderBuffer_t1049  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern MethodInfo Display_get_depthBuffer_m6398_MethodInfo;
extern "C" RenderBuffer_t1049  Display_get_depthBuffer_m6398 (Display_t1047 * __this, MethodInfo* method)
{
	RenderBuffer_t1049  V_0 = {0};
	RenderBuffer_t1049  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m6410(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m6410_MethodInfo);
		RenderBuffer_t1049  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern MethodInfo Display_Activate_m6399_MethodInfo;
extern "C" void Display_Activate_m6399 (Display_t1047 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m6412(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/&Display_ActivateDisplayImpl_m6412_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_Activate_m6400_MethodInfo;
extern "C" void Display_Activate_m6400 (Display_t1047 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m6412(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Display_ActivateDisplayImpl_m6412_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_SetParams_m6401_MethodInfo;
extern "C" void Display_SetParams_m6401 (Display_t1047 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_SetParamsImpl_m6413(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Display_SetParamsImpl_m6413_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern MethodInfo Display_SetRenderingResolution_m6402_MethodInfo;
extern "C" void Display_SetRenderingResolution_m6402 (Display_t1047 * __this, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_SetRenderingResolutionImpl_m6411(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Display_SetRenderingResolutionImpl_m6411_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern MethodInfo Display_MultiDisplayLicense_m6403_MethodInfo;
extern "C" bool Display_MultiDisplayLicense_m6403 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		bool L_0 = Display_MultiDisplayLicenseImpl_m6414(NULL /*static, unused*/, /*hidden argument*/&Display_MultiDisplayLicenseImpl_m6414_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern MethodInfo Display_RelativeMouseAt_m6404_MethodInfo;
extern "C" Vector3_t30  Display_RelativeMouseAt_m6404 (Object_t * __this /* static, unused */, Vector3_t30  ___inputMouseCoordinates, MethodInfo* method)
{
	Vector3_t30  V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		int32_t L_4 = Display_RelativeMouseAtImpl_m6415(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/&Display_RelativeMouseAtImpl_m6415_MethodInfo);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t30  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern MethodInfo Display_get_main_m6405_MethodInfo;
extern "C" Display_t1047 * Display_get_main_m6405 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display_t1047 * L_0 = ((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern MethodInfo Display_RecreateDisplayList_m6406_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t1046_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m6406 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t1048* ___nativeDisplay, MethodInfo* method)
{
	static bool Display_RecreateDisplayList_m6406_init;
	if (!Display_RecreateDisplayList_m6406_init)
	{
		DisplayU5BU5D_t1046_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t1046_0_0_0);
		Display_RecreateDisplayList_m6406_init = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t1048* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___displays_1 = ((DisplayU5BU5D_t1046*)SZArrayNew(DisplayU5BU5D_t1046_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		DisplayU5BU5D_t1046* L_1 = ((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t1048* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t1047 * L_6 = (Display_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		Display__ctor_m6389(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Display__ctor_m6389_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t1047 **)(Display_t1047 **)SZArrayLdElema(L_1, L_2)) = (Display_t1047 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t1048* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		DisplayU5BU5D_t1046* L_10 = ((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t1047 **)(Display_t1047 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern MethodInfo Display_FireDisplaysUpdated_m6407_MethodInfo;
extern "C" void Display_FireDisplaysUpdated_m6407 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t1045 * L_0 = ((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t1045 * L_1 = ((Display_t1047_StaticFields*)InitializedTypeInfo(&Display_t1047_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&DisplaysUpdatedDelegate_Invoke_m6385_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m6408 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m6408_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m6408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m6408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m6409 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m6409_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m6409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m6409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m6410 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t1049 * ___color, RenderBuffer_t1049 * ___depth, MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m6410_ftn) (IntPtr_t, RenderBuffer_t1049 *, RenderBuffer_t1049 *);
	static Display_GetRenderingBuffersImpl_m6410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m6410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m6411 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m6411_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m6411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m6411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m6412 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m6412_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m6412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m6412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m6413 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m6413_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m6413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m6413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m6414 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m6414_ftn) ();
	static Display_MultiDisplayLicenseImpl_m6414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m6414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m6415 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m6415_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m6415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m6415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoBehaviour_t8_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern MethodInfo MonoBehaviour_StartCoroutine_Auto_m6416_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6418_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_Auto_m6419_MethodInfo;


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern MethodInfo MonoBehaviour__ctor_m380_MethodInfo;
extern "C" void MonoBehaviour__ctor_m380 (MonoBehaviour_t8 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m6356(__this, /*hidden argument*/&Behaviour__ctor_m6356_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern MethodInfo MonoBehaviour_InvokeRepeating_m1002_MethodInfo;
extern "C" void MonoBehaviour_InvokeRepeating_m1002 (MonoBehaviour_t8 * __this, String_t* ___methodName, float ___time, float ___repeatRate, MethodInfo* method)
{
	typedef void (*MonoBehaviour_InvokeRepeating_m1002_ftn) (MonoBehaviour_t8 *, String_t*, float, float);
	static MonoBehaviour_InvokeRepeating_m1002_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_InvokeRepeating_m1002_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___methodName, ___time, ___repeatRate);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StartCoroutine_m454_MethodInfo;
extern "C" Coroutine_t398 * MonoBehaviour_StartCoroutine_m454 (MonoBehaviour_t8 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t398 * L_1 = MonoBehaviour_StartCoroutine_Auto_m6416(__this, L_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_Auto_m6416_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t398 * MonoBehaviour_StartCoroutine_Auto_m6416 (MonoBehaviour_t8 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef Coroutine_t398 * (*MonoBehaviour_StartCoroutine_Auto_m6416_ftn) (MonoBehaviour_t8 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m6416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m6416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StopCoroutine_m6417_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m6417 (MonoBehaviour_t8 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6418(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6418_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern MethodInfo MonoBehaviour_StopCoroutine_m2631_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m2631 (MonoBehaviour_t8 * __this, Coroutine_t398 * ___routine, MethodInfo* method)
{
	{
		Coroutine_t398 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m6419(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutine_Auto_m6419_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6418 (MonoBehaviour_t8 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6418_ftn) (MonoBehaviour_t8 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m6419 (MonoBehaviour_t8 * __this, Coroutine_t398 * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m6419_ftn) (MonoBehaviour_t8 *, Coroutine_t398 *);
	static MonoBehaviour_StopCoroutine_Auto_m6419_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m6419_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchPhase_t1050_il2cpp_TypeInfo;
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IMECompositionMode_t1051_il2cpp_TypeInfo;
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Touch_t324_il2cpp_TypeInfo;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"



// System.Int32 UnityEngine.Touch::get_fingerId()
extern MethodInfo Touch_get_fingerId_m2287_MethodInfo;
extern "C" int32_t Touch_get_fingerId_m2287 (Touch_t324 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern MethodInfo Touch_get_position_m2289_MethodInfo;
extern "C" Vector2_t20  Touch_get_position_m2289 (Touch_t324 * __this, MethodInfo* method)
{
	{
		Vector2_t20  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern MethodInfo Touch_get_phase_m2288_MethodInfo;
extern "C" int32_t Touch_get_phase_m2288 (Touch_t324 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t324_marshal(const Touch_t324& unmarshaled, Touch_t324_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t324_marshal_back(const Touch_t324_marshaled& marshaled, Touch_t324& unmarshaled)
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
void Touch_t324_marshal_cleanup(Touch_t324_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Input_t149_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
extern MethodInfo Input_get_touchSupported_m2328_MethodInfo;
extern MethodInfo Input_INTERNAL_set_compositionCursorPos_m6422_MethodInfo;
extern MethodInfo Input_GetKeyInt_m6421_MethodInfo;


// System.Void UnityEngine.Input::.cctor()
extern MethodInfo Input__cctor_m6420_MethodInfo;
extern "C" void Input__cctor_m6420 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
extern "C" bool Input_GetKeyInt_m6421 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	typedef bool (*Input_GetKeyInt_m6421_ftn) (int32_t);
	static Input_GetKeyInt_m6421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyInt_m6421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
extern MethodInfo Input_GetAxis_m526_MethodInfo;
extern "C" float Input_GetAxis_m526 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxis_m526_ftn) (String_t*);
	static Input_GetAxis_m526_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxis_m526_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern MethodInfo Input_GetAxisRaw_m2311_MethodInfo;
extern "C" float Input_GetAxisRaw_m2311 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m2311_ftn) (String_t*);
	static Input_GetAxisRaw_m2311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m2311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern MethodInfo Input_GetButtonDown_m2310_MethodInfo;
extern "C" bool Input_GetButtonDown_m2310 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m2310_ftn) (String_t*);
	static Input_GetButtonDown_m2310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m2310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern MethodInfo Input_GetKey_m463_MethodInfo;
extern "C" bool Input_GetKey_m463 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t149_il2cpp_TypeInfo));
		bool L_1 = Input_GetKeyInt_m6421(NULL /*static, unused*/, L_0, /*hidden argument*/&Input_GetKeyInt_m6421_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern MethodInfo Input_GetMouseButton_m525_MethodInfo;
extern "C" bool Input_GetMouseButton_m525 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m525_ftn) (int32_t);
	static Input_GetMouseButton_m525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m525_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern MethodInfo Input_GetMouseButtonDown_m474_MethodInfo;
extern "C" bool Input_GetMouseButtonDown_m474 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m474_ftn) (int32_t);
	static Input_GetMouseButtonDown_m474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m474_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern MethodInfo Input_GetMouseButtonUp_m464_MethodInfo;
extern "C" bool Input_GetMouseButtonUp_m464 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m464_ftn) (int32_t);
	static Input_GetMouseButtonUp_m464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m464_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern MethodInfo Input_get_mousePosition_m469_MethodInfo;
extern "C" Vector3_t30  Input_get_mousePosition_m469 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t30  (*Input_get_mousePosition_m469_ftn) ();
	static Input_get_mousePosition_m469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern MethodInfo Input_get_mouseScrollDelta_m2292_MethodInfo;
extern "C" Vector2_t20  Input_get_mouseScrollDelta_m2292 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector2_t20  (*Input_get_mouseScrollDelta_m2292_ftn) ();
	static Input_get_mouseScrollDelta_m2292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m2292_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern MethodInfo Input_get_mousePresent_m2309_MethodInfo;
extern "C" bool Input_get_mousePresent_m2309 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t149_il2cpp_TypeInfo));
		bool L_0 = Input_get_touchSupported_m2328(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchSupported_m2328_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern MethodInfo Input_GetTouch_m2329_MethodInfo;
extern "C" Touch_t324  Input_GetTouch_m2329 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	typedef Touch_t324  (*Input_GetTouch_m2329_ftn) (int32_t);
	static Input_GetTouch_m2329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m2329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern MethodInfo Input_get_touchCount_m2330_MethodInfo;
extern "C" int32_t Input_get_touchCount_m2330 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m2330_ftn) ();
	static Input_get_touchCount_m2330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m2330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m2328 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern MethodInfo Input_set_imeCompositionMode_m2606_MethodInfo;
extern "C" void Input_set_imeCompositionMode_m2606 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m2606_ftn) (int32_t);
	static Input_set_imeCompositionMode_m2606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m2606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern MethodInfo Input_get_compositionString_m2526_MethodInfo;
extern "C" String_t* Input_get_compositionString_m2526 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2526_ftn) ();
	static Input_get_compositionString_m2526_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2526_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m6422 (Object_t * __this /* static, unused */, Vector2_t20 * ___value, MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m6422_ftn) (Vector2_t20 *);
	static Input_INTERNAL_set_compositionCursorPos_m6422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m6422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern MethodInfo Input_set_compositionCursorPos_m2595_MethodInfo;
extern "C" void Input_set_compositionCursorPos_m2595 (Object_t * __this /* static, unused */, Vector2_t20  ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t149_il2cpp_TypeInfo));
		Input_INTERNAL_set_compositionCursorPos_m6422(NULL /*static, unused*/, (&___value), /*hidden argument*/&Input_INTERNAL_set_compositionCursorPos_m6422_MethodInfo);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideFlags_t1052_il2cpp_TypeInfo;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Object_t138_il2cpp_TypeInfo;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo ArgumentException_t521_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo Object_Destroy_m6425_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m6426_MethodInfo;
extern MethodInfo Object_CompareBaseObjects_m6427_MethodInfo;
extern MethodInfo Object_GetInstanceID_m6429_MethodInfo;
extern MethodInfo Object_IsNativeObjectAlive_m6428_MethodInfo;
extern MethodInfo Object_GetCachedPtr_m6430_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m708_MethodInfo;
extern MethodInfo Object_CheckNullArgument_m6431_MethodInfo;
extern MethodInfo Object_Internal_CloneSingle_m6424_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2726_MethodInfo;
extern MethodInfo Object_FindObjectsOfType_m657_MethodInfo;


// System.Void UnityEngine.Object::.ctor()
extern MethodInfo Object__ctor_m6423_MethodInfo;
extern "C" void Object__ctor_m6423 (Object_t138 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t138 * Object_Internal_CloneSingle_m6424 (Object_t * __this /* static, unused */, Object_t138 * ___data, MethodInfo* method)
{
	typedef Object_t138 * (*Object_Internal_CloneSingle_m6424_ftn) (Object_t138 *);
	static Object_Internal_CloneSingle_m6424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m6424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m6425 (Object_t * __this /* static, unused */, Object_t138 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_Destroy_m6425_ftn) (Object_t138 *, float);
	static Object_Destroy_m6425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m6425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern MethodInfo Object_Destroy_m612_MethodInfo;
extern "C" void Object_Destroy_m612 (Object_t * __this /* static, unused */, Object_t138 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t138 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m6425(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_Destroy_m6425_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m6426 (Object_t * __this /* static, unused */, Object_t138 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m6426_ftn) (Object_t138 *, bool);
	static Object_DestroyImmediate_m6426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m6426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern MethodInfo Object_DestroyImmediate_m2627_MethodInfo;
extern "C" void Object_DestroyImmediate_m2627 (Object_t * __this /* static, unused */, Object_t138 * ___obj, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t138 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m6426(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_DestroyImmediate_m6426_MethodInfo);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t191* Object_FindObjectsOfType_m657 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	typedef ObjectU5BU5D_t191* (*Object_FindObjectsOfType_m657_ftn) (Type_t *);
	static Object_FindObjectsOfType_m657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m657_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern MethodInfo Object_get_name_m405_MethodInfo;
extern "C" String_t* Object_get_name_m405 (Object_t138 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m405_ftn) (Object_t138 *);
	static Object_get_name_m405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern MethodInfo Object_set_name_m2703_MethodInfo;
extern "C" void Object_set_name_m2703 (Object_t138 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*Object_set_name_m2703_ftn) (Object_t138 *, String_t*);
	static Object_set_name_m2703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m2703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern MethodInfo Object_DontDestroyOnLoad_m4640_MethodInfo;
extern "C" void Object_DontDestroyOnLoad_m4640 (Object_t * __this /* static, unused */, Object_t138 * ___target, MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m4640_ftn) (Object_t138 *);
	static Object_DontDestroyOnLoad_m4640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m4640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern MethodInfo Object_set_hideFlags_m623_MethodInfo;
extern "C" void Object_set_hideFlags_m623 (Object_t138 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m623_ftn) (Object_t138 *, int32_t);
	static Object_set_hideFlags_m623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern MethodInfo Object_ToString_m712_MethodInfo;
extern "C" String_t* Object_ToString_m712 (Object_t138 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m712_ftn) (Object_t138 *);
	static Object_ToString_m712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern MethodInfo Object_Equals_m709_MethodInfo;
extern "C" bool Object_Equals_m709 (Object_t138 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m6427(NULL /*static, unused*/, __this, ((Object_t138 *)IsInst(L_0, InitializedTypeInfo(&Object_t138_il2cpp_TypeInfo))), /*hidden argument*/&Object_CompareBaseObjects_m6427_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern MethodInfo Object_GetHashCode_m711_MethodInfo;
extern "C" int32_t Object_GetHashCode_m711 (Object_t138 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m6429(__this, /*hidden argument*/&Object_GetInstanceID_m6429_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m6427 (Object_t * __this /* static, unused */, Object_t138 * ___lhs, Object_t138 * ___rhs, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t138 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t138 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t138 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t138 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
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
		Object_t138 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m6428(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_IsNativeObjectAlive_m6428_MethodInfo);
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
		Object_t138 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m6428(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_IsNativeObjectAlive_m6428_MethodInfo);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t138 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t138 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m6428 (Object_t * __this /* static, unused */, Object_t138 * ___o, MethodInfo* method)
{
	{
		Object_t138 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m6430(L_0, /*hidden argument*/&Object_GetCachedPtr_m6430_MethodInfo);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m708(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&IntPtr_op_Inequality_m708_MethodInfo);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m6429 (Object_t138 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m6430 (Object_t138 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern MethodInfo Object_Instantiate_m5054_MethodInfo;
extern "C" Object_t138 * Object_Instantiate_m5054 (Object_t * __this /* static, unused */, Object_t138 * ___original, MethodInfo* method)
{
	{
		Object_t138 * L_0 = ___original;
		Object_CheckNullArgument_m6431(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral500, /*hidden argument*/&Object_CheckNullArgument_m6431_MethodInfo);
		Object_t138 * L_1 = ___original;
		Object_t138 * L_2 = Object_Internal_CloneSingle_m6424(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_Internal_CloneSingle_m6424_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m6431 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t521 * L_2 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_2, L_1, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern MethodInfo Object_FindObjectOfType_m499_MethodInfo;
extern "C" Object_t138 * Object_FindObjectOfType_m499 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	ObjectU5BU5D_t191* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t191* L_1 = Object_FindObjectsOfType_m657(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_FindObjectsOfType_m657_MethodInfo);
		V_0 = L_1;
		ObjectU5BU5D_t191* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t191* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t138 **)(Object_t138 **)SZArrayLdElema(L_3, L_4));
	}

IL_0014:
	{
		return (Object_t138 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern MethodInfo Object_op_Implicit_m497_MethodInfo;
extern "C" bool Object_op_Implicit_m497 (Object_t * __this /* static, unused */, Object_t138 * ___exists, MethodInfo* method)
{
	{
		Object_t138 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m6427(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Object_CompareBaseObjects_m6427_MethodInfo);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Equality_m382_MethodInfo;
extern "C" bool Object_op_Equality_m382 (Object_t * __this /* static, unused */, Object_t138 * ___x, Object_t138 * ___y, MethodInfo* method)
{
	{
		Object_t138 * L_0 = ___x;
		Object_t138 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m6427(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m6427_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Inequality_m388_MethodInfo;
extern "C" bool Object_op_Inequality_m388 (Object_t * __this /* static, unused */, Object_t138 * ___x, Object_t138 * ___y, MethodInfo* method)
{
	{
		Object_t138 * L_0 = ___x;
		Object_t138 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m6427(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m6427_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t138_marshal(const Object_t138& unmarshaled, Object_t138_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t138_marshal_back(const Object_t138_marshaled& marshaled, Object_t138& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t138_marshal_cleanup(Object_t138_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Component_t158_il2cpp_TypeInfo;

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_10.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern MethodInfo Component_get_gameObject_m387_MethodInfo;
extern MethodInfo GameObject_GetComponent_m995_MethodInfo;
extern MethodInfo GameObject_GetComponentInChildren_m6437_MethodInfo;
extern MethodInfo Component_GetComponentsForListInternal_m6435_MethodInfo;


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m6432 (Component_t158 * __this, MethodInfo* method)
{
	{
		Object__ctor_m6423(__this, /*hidden argument*/&Object__ctor_m6423_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern MethodInfo Component_get_transform_m399_MethodInfo;
extern "C" Transform_t6 * Component_get_transform_m399 (Component_t158 * __this, MethodInfo* method)
{
	typedef Transform_t6 * (*Component_get_transform_m399_ftn) (Component_t158 *);
	static Component_get_transform_m399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t1 * Component_get_gameObject_m387 (Component_t158 * __this, MethodInfo* method)
{
	typedef GameObject_t1 * (*Component_get_gameObject_m387_ftn) (Component_t158 *);
	static Component_get_gameObject_m387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern MethodInfo Component_GetComponent_m2761_MethodInfo;
extern "C" Component_t158 * Component_GetComponent_m2761 (Component_t158 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		GameObject_t1 * L_0 = Component_get_gameObject_m387(__this, /*hidden argument*/&Component_get_gameObject_m387_MethodInfo);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t158 * L_2 = GameObject_GetComponent_m995(L_0, L_1, /*hidden argument*/&GameObject_GetComponent_m995_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo Component_GetComponentFastPath_m6433_MethodInfo;
extern "C" void Component_GetComponentFastPath_m6433 (Component_t158 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m6433_ftn) (Component_t158 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m6433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m6433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern MethodInfo Component_GetComponentInChildren_m6434_MethodInfo;
extern "C" Component_t158 * Component_GetComponentInChildren_m6434 (Component_t158 * __this, Type_t * ___t, MethodInfo* method)
{
	{
		GameObject_t1 * L_0 = Component_get_gameObject_m387(__this, /*hidden argument*/&Component_get_gameObject_m387_MethodInfo);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t158 * L_2 = GameObject_GetComponentInChildren_m6437(L_0, L_1, /*hidden argument*/&GameObject_GetComponentInChildren_m6437_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m6435 (Component_t158 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m6435_ftn) (Component_t158 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m6435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m6435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern MethodInfo Component_GetComponents_m2398_MethodInfo;
extern "C" void Component_GetComponents_m2398 (Component_t158 * __this, Type_t * ___type, List_1_t462 * ___results, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t462 * L_1 = ___results;
		Component_GetComponentsForListInternal_m6435(__this, L_0, L_1, /*hidden argument*/&Component_GetComponentsForListInternal_m6435_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameObject_t1_il2cpp_TypeInfo;

// UnityEngine.PrimitiveType
#include "UnityEngine_UnityEngine_PrimitiveType.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern TypeInfo Transform_t6_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t26_il2cpp_TypeInfo;
extern TypeInfo Boolean_t147_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t153_il2cpp_TypeInfo;
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo GameObject_Internal_CreateGameObject_m6442_MethodInfo;
extern MethodInfo GameObject_AddComponent_m6441_MethodInfo;
extern MethodInfo GameObject_get_activeInHierarchy_m2270_MethodInfo;
extern MethodInfo GameObject_get_transform_m397_MethodInfo;
extern MethodInfo Transform_GetEnumerator_m6464_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m6898_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m692_MethodInfo;
extern MethodInfo IDisposable_Dispose_m486_MethodInfo;
extern MethodInfo GameObject_Internal_AddComponentWithType_m6440_MethodInfo;


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern MethodInfo GameObject__ctor_m510_MethodInfo;
extern "C" void GameObject__ctor_m510 (GameObject_t1 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Object__ctor_m6423(__this, /*hidden argument*/&Object__ctor_m6423_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m6442(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m6442_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor()
extern MethodInfo GameObject__ctor_m5276_MethodInfo;
extern "C" void GameObject__ctor_m5276 (GameObject_t1 * __this, MethodInfo* method)
{
	{
		Object__ctor_m6423(__this, /*hidden argument*/&Object__ctor_m6423_MethodInfo);
		GameObject_Internal_CreateGameObject_m6442(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/&GameObject_Internal_CreateGameObject_m6442_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern MethodInfo GameObject__ctor_m5336_MethodInfo;
extern "C" void GameObject__ctor_m5336 (GameObject_t1 * __this, String_t* ___name, TypeU5BU5D_t913* ___components, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t913* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m6423(__this, /*hidden argument*/&Object__ctor_m6423_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m6442(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m6442_MethodInfo);
		TypeU5BU5D_t913* L_1 = ___components;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		TypeU5BU5D_t913* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		GameObject_AddComponent_m6441(__this, L_5, /*hidden argument*/&GameObject_AddComponent_m6441_MethodInfo);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		TypeU5BU5D_t913* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern MethodInfo GameObject_CreatePrimitive_m4699_MethodInfo;
extern "C" GameObject_t1 * GameObject_CreatePrimitive_m4699 (Object_t * __this /* static, unused */, int32_t ___type, MethodInfo* method)
{
	typedef GameObject_t1 * (*GameObject_CreatePrimitive_m4699_ftn) (int32_t);
	static GameObject_CreatePrimitive_m4699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_CreatePrimitive_m4699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)");
	return _il2cpp_icall_func(___type);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t158 * GameObject_GetComponent_m995 (GameObject_t1 * __this, Type_t * ___type, MethodInfo* method)
{
	typedef Component_t158 * (*GameObject_GetComponent_m995_ftn) (GameObject_t1 *, Type_t *);
	static GameObject_GetComponent_m995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo GameObject_GetComponentFastPath_m6436_MethodInfo;
extern "C" void GameObject_GetComponentFastPath_m6436 (GameObject_t1 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m6436_ftn) (GameObject_t1 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m6436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m6436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
extern "C" Component_t158 * GameObject_GetComponentInChildren_m6437 (GameObject_t1 * __this, Type_t * ___type, MethodInfo* method)
{
	Component_t158 * V_0 = {0};
	Transform_t6 * V_1 = {0};
	Transform_t6 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t158 * V_4 = {0};
	Component_t158 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m2270(__this, /*hidden argument*/&GameObject_get_activeInHierarchy_m2270_MethodInfo);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t158 * L_2 = GameObject_GetComponent_m995(__this, L_1, /*hidden argument*/&GameObject_GetComponent_m995_MethodInfo);
		V_0 = L_2;
		Component_t158 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m388(NULL /*static, unused*/, L_3, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t158 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t6 * L_6 = GameObject_get_transform_m397(__this, /*hidden argument*/&GameObject_get_transform_m397_MethodInfo);
		V_1 = L_6;
		Transform_t6 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m388(NULL /*static, unused*/, L_7, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t6 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Transform_GetEnumerator_m6464_MethodInfo, L_9);
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
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m6898_MethodInfo, L_11);
			V_2 = ((Transform_t6 *)Castclass(L_12, InitializedTypeInfo(&Transform_t6_il2cpp_TypeInfo)));
			Transform_t6 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t1 * L_14 = Component_get_gameObject_m387(L_13, /*hidden argument*/&Component_get_gameObject_m387_MethodInfo);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t158 * L_16 = GameObject_GetComponentInChildren_m6437(L_14, L_15, /*hidden argument*/&GameObject_GetComponentInChildren_m6437_MethodInfo);
			V_4 = L_16;
			Component_t158 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m388(NULL /*static, unused*/, L_17, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t158 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m692_MethodInfo, L_20);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, InitializedTypeInfo(&IDisposable_t153_il2cpp_TypeInfo)));
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
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m486_MethodInfo, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0095:
	{
		return (Component_t158 *)NULL;
	}

IL_0097:
	{
		Component_t158 * L_25 = V_5;
		return L_25;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern MethodInfo GameObject_GetComponentsInternal_m6438_MethodInfo;
extern "C" Array_t * GameObject_GetComponentsInternal_m6438 (GameObject_t1 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m6438_ftn) (GameObject_t1 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m6438_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m6438_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t6 * GameObject_get_transform_m397 (GameObject_t1 * __this, MethodInfo* method)
{
	typedef Transform_t6 * (*GameObject_get_transform_m397_ftn) (GameObject_t1 *);
	static GameObject_get_transform_m397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern MethodInfo GameObject_get_layer_m2576_MethodInfo;
extern "C" int32_t GameObject_get_layer_m2576 (GameObject_t1 * __this, MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2576_ftn) (GameObject_t1 *);
	static GameObject_get_layer_m2576_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2576_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern MethodInfo GameObject_set_layer_m2577_MethodInfo;
extern "C" void GameObject_set_layer_m2577 (GameObject_t1 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m2577_ftn) (GameObject_t1 *, int32_t);
	static GameObject_set_layer_m2577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m2577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern MethodInfo GameObject_SetActive_m4702_MethodInfo;
extern "C" void GameObject_SetActive_m4702 (GameObject_t1 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m4702_ftn) (GameObject_t1 *, bool);
	static GameObject_SetActive_m4702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m4702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m2270 (GameObject_t1 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m2270_ftn) (GameObject_t1 *);
	static GameObject_get_activeInHierarchy_m2270_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m2270_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern MethodInfo GameObject_SendMessage_m6439_MethodInfo;
extern "C" void GameObject_SendMessage_m6439 (GameObject_t1 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m6439_ftn) (GameObject_t1 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m6439_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m6439_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t158 * GameObject_Internal_AddComponentWithType_m6440 (GameObject_t1 * __this, Type_t * ___componentType, MethodInfo* method)
{
	typedef Component_t158 * (*GameObject_Internal_AddComponentWithType_m6440_ftn) (GameObject_t1 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m6440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m6440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t158 * GameObject_AddComponent_m6441 (GameObject_t1 * __this, Type_t * ___componentType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t158 * L_1 = GameObject_Internal_AddComponentWithType_m6440(__this, L_0, /*hidden argument*/&GameObject_Internal_AddComponentWithType_m6440_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m6442 (Object_t * __this /* static, unused */, GameObject_t1 * ___mono, String_t* ___name, MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m6442_ftn) (GameObject_t1 *, String_t*);
	static GameObject_Internal_CreateGameObject_m6442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m6442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern MethodInfo GameObject_get_gameObject_m393_MethodInfo;
extern "C" GameObject_t1 * GameObject_get_gameObject_m393 (GameObject_t1 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t1053_il2cpp_TypeInfo;
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

extern MethodInfo Transform_GetChild_m2765_MethodInfo;
extern MethodInfo Transform_get_childCount_m996_MethodInfo;


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern MethodInfo Enumerator__ctor_m6443_MethodInfo;
extern "C" void Enumerator__ctor_m6443 (Enumerator_t1053 * __this, Transform_t6 * ___outer, MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Transform_t6 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m6444_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m6444 (Enumerator_t1053 * __this, MethodInfo* method)
{
	{
		Transform_t6 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t6 * L_2 = Transform_GetChild_m2765(L_0, L_1, /*hidden argument*/&Transform_GetChild_m2765_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m6445_MethodInfo;
extern "C" bool Enumerator_MoveNext_m6445 (Enumerator_t1053 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t6 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m996(L_0, /*hidden argument*/&Transform_get_childCount_m996_MethodInfo);
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
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
extern TypeInfo RectTransform_t354_il2cpp_TypeInfo;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern MethodInfo Transform_INTERNAL_get_position_m6446_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_position_m6447_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localPosition_m6448_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localPosition_m6449_MethodInfo;
extern MethodInfo Transform_get_rotation_m516_MethodInfo;
extern MethodInfo Vector3_get_right_m517_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m523_MethodInfo;
extern MethodInfo Vector3_get_up_m520_MethodInfo;
extern MethodInfo Vector3_get_forward_m522_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_rotation_m6450_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_rotation_m6451_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localRotation_m6452_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localRotation_m6453_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localScale_m6454_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localScale_m6455_MethodInfo;
extern MethodInfo Transform_get_parentInternal_m6456_MethodInfo;
extern MethodInfo Transform_set_parentInternal_m6457_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_worldToLocalMatrix_m6459_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localToWorldMatrix_m6460_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_lossyScale_m6463_MethodInfo;
extern MethodInfo Transform_SetParent_m6458_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformPoint_m6461_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_InverseTransformPoint_m6462_MethodInfo;
extern MethodInfo Transform_Find_m693_MethodInfo;


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m6446 (Transform_t6 * __this, Vector3_t30 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m6446_ftn) (Transform_t6 *, Vector3_t30 *);
	static Transform_INTERNAL_get_position_m6446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m6446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m6447 (Transform_t6 * __this, Vector3_t30 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m6447_ftn) (Transform_t6 *, Vector3_t30 *);
	static Transform_INTERNAL_set_position_m6447_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m6447_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern MethodInfo Transform_get_position_m511_MethodInfo;
extern "C" Vector3_t30  Transform_get_position_m511 (Transform_t6 * __this, MethodInfo* method)
{
	Vector3_t30  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m6446(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_position_m6446_MethodInfo);
		Vector3_t30  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern MethodInfo Transform_set_position_m515_MethodInfo;
extern "C" void Transform_set_position_m515 (Transform_t6 * __this, Vector3_t30  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m6447(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_position_m6447_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m6448 (Transform_t6 * __this, Vector3_t30 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m6448_ftn) (Transform_t6 *, Vector3_t30 *);
	static Transform_INTERNAL_get_localPosition_m6448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m6448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m6449 (Transform_t6 * __this, Vector3_t30 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m6449_ftn) (Transform_t6 *, Vector3_t30 *);
	static Transform_INTERNAL_set_localPosition_m6449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m6449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern MethodInfo Transform_get_localPosition_m2579_MethodInfo;
extern "C" Vector3_t30  Transform_get_localPosition_m2579 (Transform_t6 * __this, MethodInfo* method)
{
	Vector3_t30  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m6448(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localPosition_m6448_MethodInfo);
		Vector3_t30  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern MethodInfo Transform_set_localPosition_m2587_MethodInfo;
extern "C" void Transform_set_localPosition_m2587 (Transform_t6 * __this, Vector3_t30  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m6449(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localPosition_m6449_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern MethodInfo Transform_get_right_m518_MethodInfo;
extern "C" Vector3_t30  Transform_get_right_m518 (Transform_t6 * __this, MethodInfo* method)
{
	{
		Quaternion_t54  L_0 = Transform_get_rotation_m516(__this, /*hidden argument*/&Transform_get_rotation_m516_MethodInfo);
		Vector3_t30  L_1 = Vector3_get_right_m517(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m517_MethodInfo);
		Vector3_t30  L_2 = Quaternion_op_Multiply_m523(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m523_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern MethodInfo Transform_get_up_m521_MethodInfo;
extern "C" Vector3_t30  Transform_get_up_m521 (Transform_t6 * __this, MethodInfo* method)
{
	{
		Quaternion_t54  L_0 = Transform_get_rotation_m516(__this, /*hidden argument*/&Transform_get_rotation_m516_MethodInfo);
		Vector3_t30  L_1 = Vector3_get_up_m520(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m520_MethodInfo);
		Vector3_t30  L_2 = Quaternion_op_Multiply_m523(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m523_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern MethodInfo Transform_get_forward_m512_MethodInfo;
extern "C" Vector3_t30  Transform_get_forward_m512 (Transform_t6 * __this, MethodInfo* method)
{
	{
		Quaternion_t54  L_0 = Transform_get_rotation_m516(__this, /*hidden argument*/&Transform_get_rotation_m516_MethodInfo);
		Vector3_t30  L_1 = Vector3_get_forward_m522(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m522_MethodInfo);
		Vector3_t30  L_2 = Quaternion_op_Multiply_m523(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m523_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m6450 (Transform_t6 * __this, Quaternion_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m6450_ftn) (Transform_t6 *, Quaternion_t54 *);
	static Transform_INTERNAL_get_rotation_m6450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m6450_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m6451 (Transform_t6 * __this, Quaternion_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m6451_ftn) (Transform_t6 *, Quaternion_t54 *);
	static Transform_INTERNAL_set_rotation_m6451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m6451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t54  Transform_get_rotation_m516 (Transform_t6 * __this, MethodInfo* method)
{
	Quaternion_t54  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m6450(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_rotation_m6450_MethodInfo);
		Quaternion_t54  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern MethodInfo Transform_set_rotation_m529_MethodInfo;
extern "C" void Transform_set_rotation_m529 (Transform_t6 * __this, Quaternion_t54  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m6451(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_rotation_m6451_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m6452 (Transform_t6 * __this, Quaternion_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m6452_ftn) (Transform_t6 *, Quaternion_t54 *);
	static Transform_INTERNAL_get_localRotation_m6452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m6452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m6453 (Transform_t6 * __this, Quaternion_t54 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m6453_ftn) (Transform_t6 *, Quaternion_t54 *);
	static Transform_INTERNAL_set_localRotation_m6453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m6453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern MethodInfo Transform_get_localRotation_m2581_MethodInfo;
extern "C" Quaternion_t54  Transform_get_localRotation_m2581 (Transform_t6 * __this, MethodInfo* method)
{
	Quaternion_t54  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m6452(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localRotation_m6452_MethodInfo);
		Quaternion_t54  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern MethodInfo Transform_set_localRotation_m2588_MethodInfo;
extern "C" void Transform_set_localRotation_m2588 (Transform_t6 * __this, Quaternion_t54  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m6453(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localRotation_m6453_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m6454 (Transform_t6 * __this, Vector3_t30 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m6454_ftn) (Transform_t6 *, Vector3_t30 *);
	static Transform_INTERNAL_get_localScale_m6454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m6454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m6455 (Transform_t6 * __this, Vector3_t30 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m6455_ftn) (Transform_t6 *, Vector3_t30 *);
	static Transform_INTERNAL_set_localScale_m6455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m6455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern MethodInfo Transform_get_localScale_m695_MethodInfo;
extern "C" Vector3_t30  Transform_get_localScale_m695 (Transform_t6 * __this, MethodInfo* method)
{
	Vector3_t30  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m6454(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localScale_m6454_MethodInfo);
		Vector3_t30  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern MethodInfo Transform_set_localScale_m696_MethodInfo;
extern "C" void Transform_set_localScale_m696 (Transform_t6 * __this, Vector3_t30  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m6455(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localScale_m6455_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern MethodInfo Transform_get_parent_m2259_MethodInfo;
extern "C" Transform_t6 * Transform_get_parent_m2259 (Transform_t6 * __this, MethodInfo* method)
{
	{
		Transform_t6 * L_0 = Transform_get_parentInternal_m6456(__this, /*hidden argument*/&Transform_get_parentInternal_m6456_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern MethodInfo Transform_set_parent_m2626_MethodInfo;
extern "C" void Transform_set_parent_m2626 (Transform_t6 * __this, Transform_t6 * ___value, MethodInfo* method)
{
	{
		if (!((RectTransform_t354 *)IsInst(__this, InitializedTypeInfo(&RectTransform_t354_il2cpp_TypeInfo))))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m2699(NULL /*static, unused*/, (String_t*) &_stringLiteral501, __this, /*hidden argument*/&Debug_LogWarning_m2699_MethodInfo);
	}

IL_0016:
	{
		Transform_t6 * L_0 = ___value;
		Transform_set_parentInternal_m6457(__this, L_0, /*hidden argument*/&Transform_set_parentInternal_m6457_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t6 * Transform_get_parentInternal_m6456 (Transform_t6 * __this, MethodInfo* method)
{
	typedef Transform_t6 * (*Transform_get_parentInternal_m6456_ftn) (Transform_t6 *);
	static Transform_get_parentInternal_m6456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m6456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m6457 (Transform_t6 * __this, Transform_t6 * ___value, MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m6457_ftn) (Transform_t6 *, Transform_t6 *);
	static Transform_set_parentInternal_m6457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m6457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern MethodInfo Transform_SetParent_m398_MethodInfo;
extern "C" void Transform_SetParent_m398 (Transform_t6 * __this, Transform_t6 * ___parent, MethodInfo* method)
{
	{
		Transform_t6 * L_0 = ___parent;
		Transform_SetParent_m6458(__this, L_0, 1, /*hidden argument*/&Transform_SetParent_m6458_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m6458 (Transform_t6 * __this, Transform_t6 * ___parent, bool ___worldPositionStays, MethodInfo* method)
{
	typedef void (*Transform_SetParent_m6458_ftn) (Transform_t6 *, Transform_t6 *, bool);
	static Transform_SetParent_m6458_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m6458_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m6459 (Transform_t6 * __this, Matrix4x4_t187 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m6459_ftn) (Transform_t6 *, Matrix4x4_t187 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m6459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m6459_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern MethodInfo Transform_get_worldToLocalMatrix_m2657_MethodInfo;
extern "C" Matrix4x4_t187  Transform_get_worldToLocalMatrix_m2657 (Transform_t6 * __this, MethodInfo* method)
{
	Matrix4x4_t187  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m6459(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_worldToLocalMatrix_m6459_MethodInfo);
		Matrix4x4_t187  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_localToWorldMatrix_m6460 (Transform_t6 * __this, Matrix4x4_t187 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localToWorldMatrix_m6460_ftn) (Transform_t6 *, Matrix4x4_t187 *);
	static Transform_INTERNAL_get_localToWorldMatrix_m6460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localToWorldMatrix_m6460_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern MethodInfo Transform_get_localToWorldMatrix_m632_MethodInfo;
extern "C" Matrix4x4_t187  Transform_get_localToWorldMatrix_m632 (Transform_t6 * __this, MethodInfo* method)
{
	Matrix4x4_t187  V_0 = {0};
	{
		Transform_INTERNAL_get_localToWorldMatrix_m6460(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localToWorldMatrix_m6460_MethodInfo);
		Matrix4x4_t187  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_TransformPoint_m2677_MethodInfo;
extern "C" Vector3_t30  Transform_TransformPoint_m2677 (Transform_t6 * __this, Vector3_t30  ___position, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = Transform_INTERNAL_CALL_TransformPoint_m6461(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_TransformPoint_m6461_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t30  Transform_INTERNAL_CALL_TransformPoint_m6461 (Object_t * __this /* static, unused */, Transform_t6 * ___self, Vector3_t30 * ___position, MethodInfo* method)
{
	typedef Vector3_t30  (*Transform_INTERNAL_CALL_TransformPoint_m6461_ftn) (Transform_t6 *, Vector3_t30 *);
	static Transform_INTERNAL_CALL_TransformPoint_m6461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m6461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_InverseTransformPoint_m2544_MethodInfo;
extern "C" Vector3_t30  Transform_InverseTransformPoint_m2544 (Transform_t6 * __this, Vector3_t30  ___position, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m6462(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_InverseTransformPoint_m6462_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t30  Transform_INTERNAL_CALL_InverseTransformPoint_m6462 (Object_t * __this /* static, unused */, Transform_t6 * ___self, Vector3_t30 * ___position, MethodInfo* method)
{
	typedef Vector3_t30  (*Transform_INTERNAL_CALL_InverseTransformPoint_m6462_ftn) (Transform_t6 *, Vector3_t30 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m6462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m6462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern MethodInfo Transform_get_root_m400_MethodInfo;
extern "C" Transform_t6 * Transform_get_root_m400 (Transform_t6 * __this, MethodInfo* method)
{
	typedef Transform_t6 * (*Transform_get_root_m400_ftn) (Transform_t6 *);
	static Transform_get_root_m400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_root_m400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_root()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m996 (Transform_t6 * __this, MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m996_ftn) (Transform_t6 *);
	static Transform_get_childCount_m996_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m996_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern MethodInfo Transform_SetAsFirstSibling_m2575_MethodInfo;
extern "C" void Transform_SetAsFirstSibling_m2575 (Transform_t6 * __this, MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m2575_ftn) (Transform_t6 *);
	static Transform_SetAsFirstSibling_m2575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m2575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" Transform_t6 * Transform_Find_m693 (Transform_t6 * __this, String_t* ___name, MethodInfo* method)
{
	typedef Transform_t6 * (*Transform_Find_m693_ftn) (Transform_t6 *, String_t*);
	static Transform_Find_m693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_Find_m693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m6463 (Transform_t6 * __this, Vector3_t30 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_lossyScale_m6463_ftn) (Transform_t6 *, Vector3_t30 *);
	static Transform_INTERNAL_get_lossyScale_m6463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_lossyScale_m6463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern MethodInfo Transform_get_lossyScale_m640_MethodInfo;
extern "C" Vector3_t30  Transform_get_lossyScale_m640 (Transform_t6 * __this, MethodInfo* method)
{
	Vector3_t30  V_0 = {0};
	{
		Transform_INTERNAL_get_lossyScale_m6463(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_lossyScale_m6463_MethodInfo);
		Vector3_t30  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
extern MethodInfo Transform_FindChild_m615_MethodInfo;
extern "C" Transform_t6 * Transform_FindChild_m615 (Transform_t6 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Transform_t6 * L_1 = Transform_Find_m693(__this, L_0, /*hidden argument*/&Transform_Find_m693_MethodInfo);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m6464 (Transform_t6 * __this, MethodInfo* method)
{
	{
		Enumerator_t1053 * L_0 = (Enumerator_t1053 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t1053_il2cpp_TypeInfo));
		Enumerator__ctor_m6443(L_0, __this, /*hidden argument*/&Enumerator__ctor_m6443_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t6 * Transform_GetChild_m2765 (Transform_t6 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Transform_t6 * (*Transform_GetChild_m2765_ftn) (Transform_t6 *, int32_t);
	static Transform_GetChild_m2765_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m2765_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Time_t1054_il2cpp_TypeInfo;
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_time()
extern MethodInfo Time_get_time_m462_MethodInfo;
extern "C" float Time_get_time_m462 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_time_m462_ftn) ();
	static Time_get_time_m462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern MethodInfo Time_get_deltaTime_m661_MethodInfo;
extern "C" float Time_get_deltaTime_m661 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m661_ftn) ();
	static Time_get_deltaTime_m661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern MethodInfo Time_get_unscaledTime_m2313_MethodInfo;
extern "C" float Time_get_unscaledTime_m2313 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m2313_ftn) ();
	static Time_get_unscaledTime_m2313_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m2313_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern MethodInfo Time_get_unscaledDeltaTime_m2364_MethodInfo;
extern "C" float Time_get_unscaledDeltaTime_m2364 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m2364_ftn) ();
	static Time_get_unscaledDeltaTime_m2364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m2364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeScale()
extern MethodInfo Time_get_timeScale_m989_MethodInfo;
extern "C" float Time_get_timeScale_m989 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_timeScale_m989_ftn) ();
	static Time_get_timeScale_m989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeScale_m989_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern MethodInfo Time_set_timeScale_m991_MethodInfo;
extern "C" void Time_set_timeScale_m991 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method)
{
	typedef void (*Time_set_timeScale_m991_ftn) (float);
	static Time_set_timeScale_m991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_set_timeScale_m991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Random_t1055_il2cpp_TypeInfo;
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"



// UnityEngine.Quaternion UnityEngine.Random::get_rotation()
extern MethodInfo Random_get_rotation_m1003_MethodInfo;
extern "C" Quaternion_t54  Random_get_rotation_m1003 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Quaternion_t54  (*Random_get_rotation_m1003_ftn) ();
	static Random_get_rotation_m1003_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_rotation_m1003_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_rotation()");
	return _il2cpp_icall_func();
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo YieldInstruction_t966_il2cpp_TypeInfo;



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m6465 (YieldInstruction_t966 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t966_marshal(const YieldInstruction_t966& unmarshaled, YieldInstruction_t966_marshaled& marshaled)
{
}
void YieldInstruction_t966_marshal_back(const YieldInstruction_t966_marshaled& marshaled, YieldInstruction_t966& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t966_marshal_cleanup(YieldInstruction_t966_marshaled& marshaled)
{
}
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParticleSystem_t9_il2cpp_TypeInfo;
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_50.h"
extern TypeInfo List_1_t1057_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_50MethodDeclarations.h"
extern Il2CppType List_1_t1057_0_0_0;
extern MethodInfo ParticleSystem_Play_m6468_MethodInfo;
extern MethodInfo ParticleSystem_GetParticleSystems_m6470_MethodInfo;
extern MethodInfo ParticleSystem_Internal_Play_m6466_MethodInfo;
extern MethodInfo ParticleSystem_Stop_m6469_MethodInfo;
extern MethodInfo ParticleSystem_Internal_Stop_m6467_MethodInfo;
extern MethodInfo List_1__ctor_m6899_MethodInfo;
extern MethodInfo List_1_Add_m6900_MethodInfo;
extern MethodInfo ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471_MethodInfo;
struct GameObject_t1;
// UnityEngine.CastHelper`1<UnityEngine.ParticleSystem>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_26.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
struct GameObject_t1;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m402_gshared (GameObject_t1 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m402(__this, method) (( Object_t * (*) (GameObject_t1 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m402_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
#define GameObject_GetComponent_TisParticleSystem_t9_m6901(__this, method) (( ParticleSystem_t9 * (*) (GameObject_t1 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m402_gshared)(__this, method)
extern Il2CppGenericMethod List_1__ctor_m6899_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m6900_GenericMethod;
extern Il2CppGenericMethod List_1_ToArray_m6902_GenericMethod;
extern Il2CppGenericMethod GameObject_GetComponent_TisParticleSystem_t9_m6901_GenericMethod;


// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
extern MethodInfo ParticleSystem_set_startSpeed_m412_MethodInfo;
extern "C" void ParticleSystem_set_startSpeed_m412 (ParticleSystem_t9 * __this, float ___value, MethodInfo* method)
{
	typedef void (*ParticleSystem_set_startSpeed_m412_ftn) (ParticleSystem_t9 *, float);
	static ParticleSystem_set_startSpeed_m412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startSpeed_m412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m6466 (ParticleSystem_t9 * __this, MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Play_m6466_ftn) (ParticleSystem_t9 *);
	static ParticleSystem_Internal_Play_m6466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Play_m6466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Play()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m6467 (ParticleSystem_t9 * __this, MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Stop_m6467_ftn) (ParticleSystem_t9 *);
	static ParticleSystem_Internal_Stop_m6467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Stop_m6467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Play()
extern MethodInfo ParticleSystem_Play_m411_MethodInfo;
extern "C" void ParticleSystem_Play_m411 (ParticleSystem_t9 * __this, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Play_m6468(__this, L_0, /*hidden argument*/&ParticleSystem_Play_m6468_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m6468 (ParticleSystem_t9 * __this, bool ___withChildren, MethodInfo* method)
{
	ParticleSystemU5BU5D_t1056* V_0 = {0};
	ParticleSystem_t9 * V_1 = {0};
	ParticleSystemU5BU5D_t1056* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t1056* L_1 = ParticleSystem_GetParticleSystems_m6470(NULL /*static, unused*/, __this, /*hidden argument*/&ParticleSystem_GetParticleSystems_m6470_MethodInfo);
		V_0 = L_1;
		ParticleSystemU5BU5D_t1056* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t1056* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t9 **)(ParticleSystem_t9 **)SZArrayLdElema(L_3, L_5));
		ParticleSystem_t9 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Play_m6466(L_6, /*hidden argument*/&ParticleSystem_Internal_Play_m6466_MethodInfo);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t1056* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0038;
	}

IL_0032:
	{
		ParticleSystem_Internal_Play_m6466(__this, /*hidden argument*/&ParticleSystem_Internal_Play_m6466_MethodInfo);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop()
extern MethodInfo ParticleSystem_Stop_m415_MethodInfo;
extern "C" void ParticleSystem_Stop_m415 (ParticleSystem_t9 * __this, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Stop_m6469(__this, L_0, /*hidden argument*/&ParticleSystem_Stop_m6469_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m6469 (ParticleSystem_t9 * __this, bool ___withChildren, MethodInfo* method)
{
	ParticleSystemU5BU5D_t1056* V_0 = {0};
	ParticleSystem_t9 * V_1 = {0};
	ParticleSystemU5BU5D_t1056* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t1056* L_1 = ParticleSystem_GetParticleSystems_m6470(NULL /*static, unused*/, __this, /*hidden argument*/&ParticleSystem_GetParticleSystems_m6470_MethodInfo);
		V_0 = L_1;
		ParticleSystemU5BU5D_t1056* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t1056* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t9 **)(ParticleSystem_t9 **)SZArrayLdElema(L_3, L_5));
		ParticleSystem_t9 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Stop_m6467(L_6, /*hidden argument*/&ParticleSystem_Internal_Stop_m6467_MethodInfo);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t1056* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0038;
	}

IL_0032:
	{
		ParticleSystem_Internal_Stop_m6467(__this, /*hidden argument*/&ParticleSystem_Internal_Stop_m6467_MethodInfo);
	}

IL_0038:
	{
		return;
	}
}
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern TypeInfo* List_1_t1057_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m6899_MethodInfo_var;
extern MethodInfo* List_1_Add_m6900_MethodInfo_var;
extern MethodInfo* List_1_ToArray_m6902_MethodInfo_var;
extern "C" ParticleSystemU5BU5D_t1056* ParticleSystem_GetParticleSystems_m6470 (Object_t * __this /* static, unused */, ParticleSystem_t9 * ___root, MethodInfo* method)
{
	static bool ParticleSystem_GetParticleSystems_m6470_init;
	if (!ParticleSystem_GetParticleSystems_m6470_init)
	{
		List_1_t1057_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1057_0_0_0);
		List_1__ctor_m6899_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m6899_GenericMethod);
		List_1_Add_m6900_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m6900_GenericMethod);
		List_1_ToArray_m6902_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_ToArray_m6902_GenericMethod);
		ParticleSystem_GetParticleSystems_m6470_init = true;
	}
	List_1_t1057 * V_0 = {0};
	{
		ParticleSystem_t9 * L_0 = ___root;
		bool L_1 = Object_op_Implicit_m497(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m497_MethodInfo);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (ParticleSystemU5BU5D_t1056*)NULL;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1057_il2cpp_TypeInfo_var);
		List_1_t1057 * L_2 = (List_1_t1057 *)il2cpp_codegen_object_new (List_1_t1057_il2cpp_TypeInfo_var);
		List_1__ctor_m6899(L_2, /*hidden argument*/List_1__ctor_m6899_MethodInfo_var);
		V_0 = L_2;
		List_1_t1057 * L_3 = V_0;
		ParticleSystem_t9 * L_4 = ___root;
		NullCheck(L_3);
		VirtActionInvoker1< ParticleSystem_t9 * >::Invoke(List_1_Add_m6900_MethodInfo_var, L_3, L_4);
		ParticleSystem_t9 * L_5 = ___root;
		NullCheck(L_5);
		Transform_t6 * L_6 = Component_get_transform_m399(L_5, /*hidden argument*/&Component_get_transform_m399_MethodInfo);
		List_1_t1057 * L_7 = V_0;
		ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471_MethodInfo);
		List_1_t1057 * L_8 = V_0;
		NullCheck(L_8);
		ParticleSystemU5BU5D_t1056* L_9 = List_1_ToArray_m6902(L_8, /*hidden argument*/List_1_ToArray_m6902_MethodInfo_var);
		return L_9;
	}
}
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern MethodInfo* GameObject_GetComponent_TisParticleSystem_t9_m6901_MethodInfo_var;
extern MethodInfo* List_1_Add_m6900_MethodInfo_var;
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471 (Object_t * __this /* static, unused */, Transform_t6 * ___transform, List_1_t1057 * ___particleSystems, MethodInfo* method)
{
	static bool ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471_init;
	if (!ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471_init)
	{
		GameObject_GetComponent_TisParticleSystem_t9_m6901_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisParticleSystem_t9_m6901_GenericMethod);
		List_1_Add_m6900_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m6900_GenericMethod);
		ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471_init = true;
	}
	Transform_t6 * V_0 = {0};
	Object_t * V_1 = {0};
	ParticleSystem_t9 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t6 * L_0 = ___transform;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Transform_GetEnumerator_m6464_MethodInfo, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m6898_MethodInfo, L_2);
			V_0 = ((Transform_t6 *)Castclass(L_3, InitializedTypeInfo(&Transform_t6_il2cpp_TypeInfo)));
			Transform_t6 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t1 * L_5 = Component_get_gameObject_m387(L_4, /*hidden argument*/&Component_get_gameObject_m387_MethodInfo);
			NullCheck(L_5);
			ParticleSystem_t9 * L_6 = GameObject_GetComponent_TisParticleSystem_t9_m6901(L_5, /*hidden argument*/GameObject_GetComponent_TisParticleSystem_t9_m6901_MethodInfo_var);
			V_2 = L_6;
			ParticleSystem_t9 * L_7 = V_2;
			bool L_8 = Object_op_Inequality_m388(NULL /*static, unused*/, L_7, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0030:
		{
			List_1_t1057 * L_9 = ___particleSystems;
			ParticleSystem_t9 * L_10 = V_2;
			NullCheck(L_9);
			VirtActionInvoker1< ParticleSystem_t9 * >::Invoke(List_1_Add_m6900_MethodInfo_var, L_9, L_10);
			Transform_t6 * L_11 = V_0;
			List_1_t1057 * L_12 = ___particleSystems;
			ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471_MethodInfo);
		}

IL_003e:
		{
			Object_t * L_13 = V_1;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m692_MethodInfo, L_13);
			if (L_14)
			{
				goto IL_000c;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x60, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_1;
			V_3 = ((Object_t *)IsInst(L_15, InitializedTypeInfo(&IDisposable_t153_il2cpp_TypeInfo)));
			Object_t * L_16 = V_3;
			if (L_16)
			{
				goto IL_0059;
			}
		}

IL_0058:
		{
			IL2CPP_END_FINALLY(78)
		}

IL_0059:
		{
			Object_t * L_17 = V_3;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m486_MethodInfo, L_17);
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0060:
	{
		return;
	}
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Particle_t1058_il2cpp_TypeInfo;
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"


// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern MethodInfo Particle_get_position_m6472_MethodInfo;
extern "C" Vector3_t30  Particle_get_position_m6472 (Particle_t1058 * __this, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern MethodInfo Particle_set_position_m6473_MethodInfo;
extern "C" void Particle_set_position_m6473 (Particle_t1058 * __this, Vector3_t30  ___value, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern MethodInfo Particle_get_velocity_m6474_MethodInfo;
extern "C" Vector3_t30  Particle_get_velocity_m6474 (Particle_t1058 * __this, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern MethodInfo Particle_set_velocity_m6475_MethodInfo;
extern "C" void Particle_set_velocity_m6475 (Particle_t1058 * __this, Vector3_t30  ___value, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern MethodInfo Particle_get_energy_m6476_MethodInfo;
extern "C" float Particle_get_energy_m6476 (Particle_t1058 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern MethodInfo Particle_set_energy_m6477_MethodInfo;
extern "C" void Particle_set_energy_m6477 (Particle_t1058 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern MethodInfo Particle_get_startEnergy_m6478_MethodInfo;
extern "C" float Particle_get_startEnergy_m6478 (Particle_t1058 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern MethodInfo Particle_set_startEnergy_m6479_MethodInfo;
extern "C" void Particle_set_startEnergy_m6479 (Particle_t1058 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern MethodInfo Particle_get_size_m6480_MethodInfo;
extern "C" float Particle_get_size_m6480 (Particle_t1058 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern MethodInfo Particle_set_size_m6481_MethodInfo;
extern "C" void Particle_set_size_m6481 (Particle_t1058 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern MethodInfo Particle_get_rotation_m6482_MethodInfo;
extern "C" float Particle_get_rotation_m6482 (Particle_t1058 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern MethodInfo Particle_set_rotation_m6483_MethodInfo;
extern "C" void Particle_set_rotation_m6483 (Particle_t1058 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern MethodInfo Particle_get_angularVelocity_m6484_MethodInfo;
extern "C" float Particle_get_angularVelocity_m6484 (Particle_t1058 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern MethodInfo Particle_set_angularVelocity_m6485_MethodInfo;
extern "C" void Particle_set_angularVelocity_m6485 (Particle_t1058 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern MethodInfo Particle_get_color_m6486_MethodInfo;
extern "C" Color_t118  Particle_get_color_m6486 (Particle_t1058 * __this, MethodInfo* method)
{
	{
		Color_t118  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern MethodInfo Particle_set_color_m6487_MethodInfo;
extern "C" void Particle_set_color_m6487 (Particle_t1058 * __this, Color_t118  ___value, MethodInfo* method)
{
	{
		Color_t118  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics_t1059_il2cpp_TypeInfo;
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo Physics_INTERNAL_CALL_Internal_Raycast_m6489_MethodInfo;
extern MethodInfo Physics_Internal_Raycast_m6488_MethodInfo;
extern MethodInfo Physics_Raycast_m2450_MethodInfo;
extern MethodInfo Ray_get_origin_m2336_MethodInfo;
extern MethodInfo Ray_get_direction_m2337_MethodInfo;
extern MethodInfo Physics_Raycast_m6490_MethodInfo;
extern MethodInfo Physics_RaycastAll_m6491_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_RaycastAll_m6492_MethodInfo;


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m6488 (Object_t * __this /* static, unused */, Vector3_t30  ___origin, Vector3_t30  ___direction, RaycastHit_t137 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		RaycastHit_t137 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m6489(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/&Physics_INTERNAL_CALL_Internal_Raycast_m6489_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m6489 (Object_t * __this /* static, unused */, Vector3_t30 * ___origin, Vector3_t30 * ___direction, RaycastHit_t137 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m6489_ftn) (Vector3_t30 *, Vector3_t30 *, RaycastHit_t137 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m6489_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m6489_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m6490 (Object_t * __this /* static, unused */, Vector3_t30  ___origin, Vector3_t30  ___direction, RaycastHit_t137 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = ___origin;
		Vector3_t30  L_1 = ___direction;
		RaycastHit_t137 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m6488(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Internal_Raycast_m6488_MethodInfo);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern MethodInfo Physics_Raycast_m385_MethodInfo;
extern "C" bool Physics_Raycast_m385 (Object_t * __this /* static, unused */, Ray_t136  ___ray, RaycastHit_t137 * ___hitInfo, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = ((int32_t)-5);
		V_1 = (std::numeric_limits<float>::infinity());
		Ray_t136  L_0 = ___ray;
		RaycastHit_t137 * L_1 = ___hitInfo;
		float L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m2450(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_Raycast_m2450_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2450 (Object_t * __this /* static, unused */, Ray_t136  ___ray, RaycastHit_t137 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = Ray_get_origin_m2336((&___ray), /*hidden argument*/&Ray_get_origin_m2336_MethodInfo);
		Vector3_t30  L_1 = Ray_get_direction_m2337((&___ray), /*hidden argument*/&Ray_get_direction_m2337_MethodInfo);
		RaycastHit_t137 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m6490(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Raycast_m6490_MethodInfo);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Physics_RaycastAll_m2352_MethodInfo;
extern "C" RaycastHitU5BU5D_t492* Physics_RaycastAll_m2352 (Object_t * __this /* static, unused */, Ray_t136  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = Ray_get_origin_m2336((&___ray), /*hidden argument*/&Ray_get_origin_m2336_MethodInfo);
		Vector3_t30  L_1 = Ray_get_direction_m2337((&___ray), /*hidden argument*/&Ray_get_direction_m2337_MethodInfo);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t492* L_4 = Physics_RaycastAll_m6491(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_RaycastAll_m6491_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t492* Physics_RaycastAll_m6491 (Object_t * __this /* static, unused */, Vector3_t30  ___origin, Vector3_t30  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t492* L_2 = Physics_INTERNAL_CALL_RaycastAll_m6492(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/&Physics_INTERNAL_CALL_RaycastAll_m6492_MethodInfo);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t492* Physics_INTERNAL_CALL_RaycastAll_m6492 (Object_t * __this /* static, unused */, Vector3_t30 * ___origin, Vector3_t30 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t492* (*Physics_INTERNAL_CALL_RaycastAll_m6492_ftn) (Vector3_t30 *, Vector3_t30 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m6492_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m6492_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody_t134_il2cpp_TypeInfo;
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"



// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern MethodInfo Rigidbody_set_isKinematic_m381_MethodInfo;
extern "C" void Rigidbody_set_isKinematic_m381 (Rigidbody_t134 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_isKinematic_m381_ftn) (Rigidbody_t134 *, bool);
	static Rigidbody_set_isKinematic_m381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_isKinematic_m381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider_t12_il2cpp_TypeInfo;
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"

extern MethodInfo Collider_INTERNAL_CALL_Internal_Raycast_m6495_MethodInfo;
extern MethodInfo Collider_Internal_Raycast_m6494_MethodInfo;


// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern MethodInfo Collider_set_enabled_m552_MethodInfo;
extern "C" void Collider_set_enabled_m552 (Collider_t12 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Collider_set_enabled_m552_ftn) (Collider_t12 *, bool);
	static Collider_set_enabled_m552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_enabled_m552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern MethodInfo Collider_get_attachedRigidbody_m6493_MethodInfo;
extern "C" Rigidbody_t134 * Collider_get_attachedRigidbody_m6493 (Collider_t12 * __this, MethodInfo* method)
{
	typedef Rigidbody_t134 * (*Collider_get_attachedRigidbody_m6493_ftn) (Collider_t12 *);
	static Collider_get_attachedRigidbody_m6493_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m6493_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_Internal_Raycast_m6494 (Object_t * __this /* static, unused */, Collider_t12 * ___col, Ray_t136  ___ray, RaycastHit_t137 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	{
		Collider_t12 * L_0 = ___col;
		RaycastHit_t137 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		bool L_3 = Collider_INTERNAL_CALL_Internal_Raycast_m6495(NULL /*static, unused*/, L_0, (&___ray), L_1, L_2, /*hidden argument*/&Collider_INTERNAL_CALL_Internal_Raycast_m6495_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_INTERNAL_CALL_Internal_Raycast_m6495 (Object_t * __this /* static, unused */, Collider_t12 * ___col, Ray_t136 * ___ray, RaycastHit_t137 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	typedef bool (*Collider_INTERNAL_CALL_Internal_Raycast_m6495_ftn) (Collider_t12 *, Ray_t136 *, RaycastHit_t137 *, float);
	static Collider_INTERNAL_CALL_Internal_Raycast_m6495_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_CALL_Internal_Raycast_m6495_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)");
	return _il2cpp_icall_func(___col, ___ray, ___hitInfo, ___maxDistance);
}
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern MethodInfo Collider_Raycast_m659_MethodInfo;
extern "C" bool Collider_Raycast_m659 (Collider_t12 * __this, Ray_t136  ___ray, RaycastHit_t137 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	{
		Ray_t136  L_0 = ___ray;
		RaycastHit_t137 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		bool L_3 = Collider_Internal_Raycast_m6494(NULL /*static, unused*/, __this, L_0, L_1, L_2, /*hidden argument*/&Collider_Internal_Raycast_m6494_MethodInfo);
		return L_3;
	}
}
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxCollider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BoxCollider_t782_il2cpp_TypeInfo;
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"



// UnityEngine.MeshCollider
#include "UnityEngine_UnityEngine_MeshCollider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MeshCollider_t642_il2cpp_TypeInfo;
// UnityEngine.MeshCollider
#include "UnityEngine_UnityEngine_MeshColliderMethodDeclarations.h"

// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"


// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
extern MethodInfo MeshCollider_set_sharedMesh_m4735_MethodInfo;
extern "C" void MeshCollider_set_sharedMesh_m4735 (MeshCollider_t642 * __this, Mesh_t184 * ___value, MethodInfo* method)
{
	typedef void (*MeshCollider_set_sharedMesh_m4735_ftn) (MeshCollider_t642 *, Mesh_t184 *);
	static MeshCollider_set_sharedMesh_m4735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_set_sharedMesh_m4735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)");
	_il2cpp_icall_func(__this, ___value);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit_t137_il2cpp_TypeInfo;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"

extern MethodInfo RaycastHit_get_collider_m2356_MethodInfo;
extern MethodInfo RaycastHit_get_rigidbody_m6496_MethodInfo;


// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern MethodInfo RaycastHit_get_point_m2354_MethodInfo;
extern "C" Vector3_t30  RaycastHit_get_point_m2354 (RaycastHit_t137 * __this, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern MethodInfo RaycastHit_get_normal_m2355_MethodInfo;
extern "C" Vector3_t30  RaycastHit_get_normal_m2355 (RaycastHit_t137 * __this, MethodInfo* method)
{
	{
		Vector3_t30  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern MethodInfo RaycastHit_get_distance_m2357_MethodInfo;
extern "C" float RaycastHit_get_distance_m2357 (RaycastHit_t137 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t12 * RaycastHit_get_collider_m2356 (RaycastHit_t137 * __this, MethodInfo* method)
{
	{
		Collider_t12 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t134 * RaycastHit_get_rigidbody_m6496 (RaycastHit_t137 * __this, MethodInfo* method)
{
	Rigidbody_t134 * G_B3_0 = {0};
	{
		Collider_t12 * L_0 = RaycastHit_get_collider_m2356(__this, /*hidden argument*/&RaycastHit_get_collider_m2356_MethodInfo);
		bool L_1 = Object_op_Inequality_m388(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider_t12 * L_2 = RaycastHit_get_collider_m2356(__this, /*hidden argument*/&RaycastHit_get_collider_m2356_MethodInfo);
		NullCheck(L_2);
		Rigidbody_t134 * L_3 = Collider_get_attachedRigidbody_m6493(L_2, /*hidden argument*/&Collider_get_attachedRigidbody_m6493_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody_t134 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern MethodInfo RaycastHit_get_transform_m386_MethodInfo;
extern "C" Transform_t6 * RaycastHit_get_transform_m386 (RaycastHit_t137 * __this, MethodInfo* method)
{
	Rigidbody_t134 * V_0 = {0};
	{
		Rigidbody_t134 * L_0 = RaycastHit_get_rigidbody_m6496(__this, /*hidden argument*/&RaycastHit_get_rigidbody_m6496_MethodInfo);
		V_0 = L_0;
		Rigidbody_t134 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m388(NULL /*static, unused*/, L_1, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody_t134 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t6 * L_4 = Component_get_transform_m399(L_3, /*hidden argument*/&Component_get_transform_m399_MethodInfo);
		return L_4;
	}

IL_001a:
	{
		Collider_t12 * L_5 = RaycastHit_get_collider_m2356(__this, /*hidden argument*/&RaycastHit_get_collider_m2356_MethodInfo);
		bool L_6 = Object_op_Inequality_m388(NULL /*static, unused*/, L_5, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider_t12 * L_7 = RaycastHit_get_collider_m2356(__this, /*hidden argument*/&RaycastHit_get_collider_m2356_MethodInfo);
		NullCheck(L_7);
		Transform_t6 * L_8 = Component_get_transform_m399(L_7, /*hidden argument*/&Component_get_transform_m399_MethodInfo);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t6 *)NULL;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics2D_t487_il2cpp_TypeInfo;
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_51.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
extern TypeInfo List_1_t1060_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_51MethodDeclarations.h"
extern Il2CppType List_1_t1060_0_0_0;
extern MethodInfo List_1__ctor_m6903_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_Internal_Raycast_m6499_MethodInfo;
extern MethodInfo Physics2D_Raycast_m6500_MethodInfo;
extern MethodInfo Physics2D_Internal_Raycast_m6498_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_RaycastAll_m6501_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m6903_GenericMethod;


// System.Void UnityEngine.Physics2D::.cctor()
extern MethodInfo Physics2D__cctor_m6497_MethodInfo;
extern TypeInfo* List_1_t1060_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m6903_MethodInfo_var;
extern "C" void Physics2D__cctor_m6497 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Physics2D__cctor_m6497_init;
	if (!Physics2D__cctor_m6497_init)
	{
		List_1_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1060_0_0_0);
		List_1__ctor_m6903_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m6903_GenericMethod);
		Physics2D__cctor_m6497_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1060_il2cpp_TypeInfo_var);
		List_1_t1060 * L_0 = (List_1_t1060 *)il2cpp_codegen_object_new (List_1_t1060_il2cpp_TypeInfo_var);
		List_1__ctor_m6903(L_0, /*hidden argument*/List_1__ctor_m6903_MethodInfo_var);
		((Physics2D_t487_StaticFields*)InitializedTypeInfo(&Physics2D_t487_il2cpp_TypeInfo)->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m6498 (Object_t * __this /* static, unused */, Vector2_t20  ___origin, Vector2_t20  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t490 * ___raycastHit, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t490 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t487_il2cpp_TypeInfo));
		Physics2D_INTERNAL_CALL_Internal_Raycast_m6499(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics2D_INTERNAL_CALL_Internal_Raycast_m6499_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m6499 (Object_t * __this /* static, unused */, Vector2_t20 * ___origin, Vector2_t20 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t490 * ___raycastHit, MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m6499_ftn) (Vector2_t20 *, Vector2_t20 *, float, int32_t, float, float, RaycastHit2D_t490 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m6499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m6499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_Raycast_m2451_MethodInfo;
extern "C" RaycastHit2D_t490  Physics2D_Raycast_m2451 (Object_t * __this /* static, unused */, Vector2_t20  ___origin, Vector2_t20  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t20  L_0 = ___origin;
		Vector2_t20  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t487_il2cpp_TypeInfo));
		RaycastHit2D_t490  L_6 = Physics2D_Raycast_m6500(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Physics2D_Raycast_m6500_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t490  Physics2D_Raycast_m6500 (Object_t * __this /* static, unused */, Vector2_t20  ___origin, Vector2_t20  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	RaycastHit2D_t490  V_0 = {0};
	{
		Vector2_t20  L_0 = ___origin;
		Vector2_t20  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t487_il2cpp_TypeInfo));
		Physics2D_Internal_Raycast_m6498(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/&Physics2D_Internal_Raycast_m6498_MethodInfo);
		RaycastHit2D_t490  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_RaycastAll_m2338_MethodInfo;
extern "C" RaycastHit2DU5BU5D_t489* Physics2D_RaycastAll_m2338 (Object_t * __this /* static, unused */, Vector2_t20  ___origin, Vector2_t20  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t487_il2cpp_TypeInfo));
		RaycastHit2DU5BU5D_t489* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m6501(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/&Physics2D_INTERNAL_CALL_RaycastAll_m6501_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t489* Physics2D_INTERNAL_CALL_RaycastAll_m6501 (Object_t * __this /* static, unused */, Vector2_t20 * ___origin, Vector2_t20 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t489* (*Physics2D_INTERNAL_CALL_RaycastAll_m6501_ftn) (Vector2_t20 *, Vector2_t20 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m6501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m6501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit2D_t490_il2cpp_TypeInfo;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern MethodInfo RaycastHit2D_get_collider_m2341_MethodInfo;
extern MethodInfo Collider2D_get_attachedRigidbody_m6503_MethodInfo;
extern MethodInfo RaycastHit2D_get_rigidbody_m6502_MethodInfo;


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern MethodInfo RaycastHit2D_get_point_m2339_MethodInfo;
extern "C" Vector2_t20  RaycastHit2D_get_point_m2339 (RaycastHit2D_t490 * __this, MethodInfo* method)
{
	{
		Vector2_t20  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern MethodInfo RaycastHit2D_get_normal_m2340_MethodInfo;
extern "C" Vector2_t20  RaycastHit2D_get_normal_m2340 (RaycastHit2D_t490 * __this, MethodInfo* method)
{
	{
		Vector2_t20  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern MethodInfo RaycastHit2D_get_fraction_m2452_MethodInfo;
extern "C" float RaycastHit2D_get_fraction_m2452 (RaycastHit2D_t490 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t491 * RaycastHit2D_get_collider_m2341 (RaycastHit2D_t490 * __this, MethodInfo* method)
{
	{
		Collider2D_t491 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t1061 * RaycastHit2D_get_rigidbody_m6502 (RaycastHit2D_t490 * __this, MethodInfo* method)
{
	Rigidbody2D_t1061 * G_B3_0 = {0};
	{
		Collider2D_t491 * L_0 = RaycastHit2D_get_collider_m2341(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2341_MethodInfo);
		bool L_1 = Object_op_Inequality_m388(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t491 * L_2 = RaycastHit2D_get_collider_m2341(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2341_MethodInfo);
		NullCheck(L_2);
		Rigidbody2D_t1061 * L_3 = Collider2D_get_attachedRigidbody_m6503(L_2, /*hidden argument*/&Collider2D_get_attachedRigidbody_m6503_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t1061 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern MethodInfo RaycastHit2D_get_transform_m2342_MethodInfo;
extern "C" Transform_t6 * RaycastHit2D_get_transform_m2342 (RaycastHit2D_t490 * __this, MethodInfo* method)
{
	Rigidbody2D_t1061 * V_0 = {0};
	{
		Rigidbody2D_t1061 * L_0 = RaycastHit2D_get_rigidbody_m6502(__this, /*hidden argument*/&RaycastHit2D_get_rigidbody_m6502_MethodInfo);
		V_0 = L_0;
		Rigidbody2D_t1061 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m388(NULL /*static, unused*/, L_1, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t1061 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t6 * L_4 = Component_get_transform_m399(L_3, /*hidden argument*/&Component_get_transform_m399_MethodInfo);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t491 * L_5 = RaycastHit2D_get_collider_m2341(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2341_MethodInfo);
		bool L_6 = Object_op_Inequality_m388(NULL /*static, unused*/, L_5, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t491 * L_7 = RaycastHit2D_get_collider_m2341(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2341_MethodInfo);
		NullCheck(L_7);
		Transform_t6 * L_8 = Component_get_transform_m399(L_7, /*hidden argument*/&Component_get_transform_m399_MethodInfo);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t6 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody2D_t1061_il2cpp_TypeInfo;
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider2D_t491_il2cpp_TypeInfo;



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t1061 * Collider2D_get_attachedRigidbody_m6503 (Collider2D_t491 * __this, MethodInfo* method)
{
	typedef Rigidbody2D_t1061 * (*Collider2D_get_attachedRigidbody_m6503_ftn) (Collider2D_t491 *);
	static Collider2D_get_attachedRigidbody_m6503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m6503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioConfigurationChangeHandler_t1062_il2cpp_TypeInfo;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo AudioConfigurationChangeHandler__ctor_m6504_MethodInfo;
extern "C" void AudioConfigurationChangeHandler__ctor_m6504 (AudioConfigurationChangeHandler_t1062 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern MethodInfo AudioConfigurationChangeHandler_Invoke_m6505_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_Invoke_m6505 (AudioConfigurationChangeHandler_t1062 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m6505((AudioConfigurationChangeHandler_t1062 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t1062(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern MethodInfo AudioConfigurationChangeHandler_BeginInvoke_m6506_MethodInfo;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m6506 (AudioConfigurationChangeHandler_t1062 * __this, bool ___deviceWasChanged, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Boolean_t147_il2cpp_TypeInfo), &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo AudioConfigurationChangeHandler_EndInvoke_m6507_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m6507 (AudioConfigurationChangeHandler_t1062 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSettings_t1063_il2cpp_TypeInfo;
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern MethodInfo AudioSettings_InvokeOnAudioConfigurationChanged_m6508_MethodInfo;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m6508 (AudioSettings_t1063 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	{
		AudioConfigurationChangeHandler_t1062 * L_0 = ((AudioSettings_t1063_StaticFields*)InitializedTypeInfo(&AudioSettings_t1063_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t1062 * L_1 = ((AudioSettings_t1063_StaticFields*)InitializedTypeInfo(&AudioSettings_t1063_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(&AudioConfigurationChangeHandler_Invoke_m6505_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMReaderCallback_t1064_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMReaderCallback__ctor_m6509_MethodInfo;
extern "C" void PCMReaderCallback__ctor_m6509 (PCMReaderCallback_t1064 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern MethodInfo PCMReaderCallback_Invoke_m6510_MethodInfo;
extern "C" void PCMReaderCallback_Invoke_m6510 (PCMReaderCallback_t1064 * __this, SingleU5BU5D_t638* ___data, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m6510((PCMReaderCallback_t1064 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t638* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t638* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern TypeInfo Single_t139_il2cpp_TypeInfo;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t1064(Il2CppObject* delegate, SingleU5BU5D_t638* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern MethodInfo PCMReaderCallback_BeginInvoke_m6511_MethodInfo;
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m6511 (PCMReaderCallback_t1064 * __this, SingleU5BU5D_t638* ___data, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMReaderCallback_EndInvoke_m6512_MethodInfo;
extern "C" void PCMReaderCallback_EndInvoke_m6512 (PCMReaderCallback_t1064 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMSetPositionCallback_t1065_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMSetPositionCallback__ctor_m6513_MethodInfo;
extern "C" void PCMSetPositionCallback__ctor_m6513 (PCMSetPositionCallback_t1065 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern MethodInfo PCMSetPositionCallback_Invoke_m6514_MethodInfo;
extern "C" void PCMSetPositionCallback_Invoke_m6514 (PCMSetPositionCallback_t1065 * __this, int32_t ___position, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m6514((PCMSetPositionCallback_t1065 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t1065(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo PCMSetPositionCallback_BeginInvoke_m6515_MethodInfo;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m6515 (PCMSetPositionCallback_t1065 * __this, int32_t ___position, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMSetPositionCallback_EndInvoke_m6516_MethodInfo;
extern "C" void PCMSetPositionCallback_EndInvoke_m6516 (PCMSetPositionCallback_t1065 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioClip_t5_il2cpp_TypeInfo;
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"

extern TypeInfo SingleU5BU5D_t638_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;


// System.Single UnityEngine.AudioClip::get_length()
extern MethodInfo AudioClip_get_length_m6517_MethodInfo;
extern "C" float AudioClip_get_length_m6517 (AudioClip_t5 * __this, MethodInfo* method)
{
	typedef float (*AudioClip_get_length_m6517_ftn) (AudioClip_t5 *);
	static AudioClip_get_length_m6517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m6517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern MethodInfo AudioClip_InvokePCMReaderCallback_Internal_m6518_MethodInfo;
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m6518 (AudioClip_t5 * __this, SingleU5BU5D_t638* ___data, MethodInfo* method)
{
	{
		PCMReaderCallback_t1064 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t1064 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t638* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t638* >::Invoke(&PCMReaderCallback_Invoke_m6510_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern MethodInfo AudioClip_InvokePCMSetPositionCallback_Internal_m6519_MethodInfo;
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m6519 (AudioClip_t5 * __this, int32_t ___position, MethodInfo* method)
{
	{
		PCMSetPositionCallback_t1065 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t1065 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(&PCMSetPositionCallback_Invoke_m6514_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSource_t10_il2cpp_TypeInfo;
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"

// System.UInt64
#include "mscorlib_System_UInt64.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern Il2CppType AudioSource_t10_0_0_0;
extern MethodInfo AudioSource_Play_m6520_MethodInfo;
extern MethodInfo AudioSource_PlayClipAtPoint_m6521_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m498_MethodInfo;
extern MethodInfo AudioSource_set_clip_m408_MethodInfo;
extern MethodInfo AudioSource_set_volume_m413_MethodInfo;
extern MethodInfo AudioSource_Play_m409_MethodInfo;


// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m413 (AudioSource_t10 * __this, float ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_volume_m413_ftn) (AudioSource_t10 *, float);
	static AudioSource_set_volume_m413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m408 (AudioSource_t10 * __this, AudioClip_t5 * ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_clip_m408_ftn) (AudioSource_t10 *, AudioClip_t5 *);
	static AudioSource_set_clip_m408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m6520 (AudioSource_t10 * __this, uint64_t ___delay, MethodInfo* method)
{
	typedef void (*AudioSource_Play_m6520_ftn) (AudioSource_t10 *, uint64_t);
	static AudioSource_Play_m6520_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m6520_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m409 (AudioSource_t10 * __this, MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m6520(__this, L_0, /*hidden argument*/&AudioSource_Play_m6520_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AudioSource::Stop()
extern MethodInfo AudioSource_Stop_m414_MethodInfo;
extern "C" void AudioSource_Stop_m414 (AudioSource_t10 * __this, MethodInfo* method)
{
	typedef void (*AudioSource_Stop_m414_ftn) (AudioSource_t10 *);
	static AudioSource_Stop_m414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern MethodInfo AudioSource_PlayClipAtPoint_m396_MethodInfo;
extern "C" void AudioSource_PlayClipAtPoint_m396 (Object_t * __this /* static, unused */, AudioClip_t5 * ___clip, Vector3_t30  ___position, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t5 * L_0 = ___clip;
		Vector3_t30  L_1 = ___position;
		float L_2 = V_0;
		AudioSource_PlayClipAtPoint_m6521(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&AudioSource_PlayClipAtPoint_m6521_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C" void AudioSource_PlayClipAtPoint_m6521 (Object_t * __this /* static, unused */, AudioClip_t5 * ___clip, Vector3_t30  ___position, float ___volume, MethodInfo* method)
{
	GameObject_t1 * V_0 = {0};
	AudioSource_t10 * V_1 = {0};
	{
		GameObject_t1 * L_0 = (GameObject_t1 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t1_il2cpp_TypeInfo));
		GameObject__ctor_m510(L_0, (String_t*) &_stringLiteral502, /*hidden argument*/&GameObject__ctor_m510_MethodInfo);
		V_0 = L_0;
		GameObject_t1 * L_1 = V_0;
		NullCheck(L_1);
		Transform_t6 * L_2 = GameObject_get_transform_m397(L_1, /*hidden argument*/&GameObject_get_transform_m397_MethodInfo);
		Vector3_t30  L_3 = ___position;
		NullCheck(L_2);
		Transform_set_position_m515(L_2, L_3, /*hidden argument*/&Transform_set_position_m515_MethodInfo);
		GameObject_t1 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&AudioSource_t10_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_4);
		Component_t158 * L_6 = GameObject_AddComponent_m6441(L_4, L_5, /*hidden argument*/&GameObject_AddComponent_m6441_MethodInfo);
		V_1 = ((AudioSource_t10 *)Castclass(L_6, InitializedTypeInfo(&AudioSource_t10_il2cpp_TypeInfo)));
		AudioSource_t10 * L_7 = V_1;
		AudioClip_t5 * L_8 = ___clip;
		NullCheck(L_7);
		AudioSource_set_clip_m408(L_7, L_8, /*hidden argument*/&AudioSource_set_clip_m408_MethodInfo);
		AudioSource_t10 * L_9 = V_1;
		float L_10 = ___volume;
		NullCheck(L_9);
		AudioSource_set_volume_m413(L_9, L_10, /*hidden argument*/&AudioSource_set_volume_m413_MethodInfo);
		AudioSource_t10 * L_11 = V_1;
		NullCheck(L_11);
		AudioSource_Play_m409(L_11, /*hidden argument*/&AudioSource_Play_m409_MethodInfo);
		GameObject_t1 * L_12 = V_0;
		AudioClip_t5 * L_13 = ___clip;
		NullCheck(L_13);
		float L_14 = AudioClip_get_length_m6517(L_13, /*hidden argument*/&AudioClip_get_length_m6517_MethodInfo);
		float L_15 = Time_get_timeScale_m989(NULL /*static, unused*/, /*hidden argument*/&Time_get_timeScale_m989_MethodInfo);
		Object_Destroy_m6425(NULL /*static, unused*/, L_12, ((float)((float)L_14*(float)L_15)), /*hidden argument*/&Object_Destroy_m6425_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern MethodInfo AudioSource_set_loop_m410_MethodInfo;
extern "C" void AudioSource_set_loop_m410 (AudioSource_t10 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_loop_m410_ftn) (AudioSource_t10 *, bool);
	static AudioSource_set_loop_m410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_m410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern MethodInfo AudioSource_set_playOnAwake_m404_MethodInfo;
extern "C" void AudioSource_set_playOnAwake_m404 (AudioSource_t10 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_playOnAwake_m404_ftn) (AudioSource_t10 *, bool);
	static AudioSource_set_playOnAwake_m404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamDevice_t914_il2cpp_TypeInfo;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern MethodInfo WebCamDevice_get_name_m5355_MethodInfo;
extern "C" String_t* WebCamDevice_get_name_m5355 (WebCamDevice_t914 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern MethodInfo WebCamDevice_get_isFrontFacing_m6522_MethodInfo;
extern "C" bool WebCamDevice_get_isFrontFacing_m6522 (WebCamDevice_t914 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t914_marshal(const WebCamDevice_t914& unmarshaled, WebCamDevice_t914_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t914_marshal_back(const WebCamDevice_t914_marshaled& marshaled, WebCamDevice_t914& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t914_marshal_cleanup(WebCamDevice_t914_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.WebCamTexture
#include "UnityEngine_UnityEngine_WebCamTexture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamTexture_t742_il2cpp_TypeInfo;
// UnityEngine.WebCamTexture
#include "UnityEngine_UnityEngine_WebCamTextureMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern MethodInfo Texture__ctor_m5859_MethodInfo;
extern MethodInfo WebCamTexture_Internal_CreateWebCamTexture_m6523_MethodInfo;
extern MethodInfo WebCamTexture_INTERNAL_CALL_Play_m6524_MethodInfo;
extern MethodInfo WebCamTexture_INTERNAL_CALL_Stop_m6525_MethodInfo;


// System.Void UnityEngine.WebCamTexture::.ctor()
extern MethodInfo WebCamTexture__ctor_m5000_MethodInfo;
extern "C" void WebCamTexture__ctor_m5000 (WebCamTexture_t742 * __this, MethodInfo* method)
{
	{
		Texture__ctor_m5859(__this, /*hidden argument*/&Texture__ctor_m5859_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		WebCamTexture_Internal_CreateWebCamTexture_m6523(NULL /*static, unused*/, __this, L_0, 0, 0, 0, /*hidden argument*/&WebCamTexture_Internal_CreateWebCamTexture_m6523_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C" void WebCamTexture_Internal_CreateWebCamTexture_m6523 (Object_t * __this /* static, unused */, WebCamTexture_t742 * ___self, String_t* ___scriptingDevice, int32_t ___requestedWidth, int32_t ___requestedHeight, int32_t ___maxFramerate, MethodInfo* method)
{
	typedef void (*WebCamTexture_Internal_CreateWebCamTexture_m6523_ftn) (WebCamTexture_t742 *, String_t*, int32_t, int32_t, int32_t);
	static WebCamTexture_Internal_CreateWebCamTexture_m6523_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Internal_CreateWebCamTexture_m6523_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___self, ___scriptingDevice, ___requestedWidth, ___requestedHeight, ___maxFramerate);
}
// System.Void UnityEngine.WebCamTexture::Play()
extern MethodInfo WebCamTexture_Play_m5005_MethodInfo;
extern "C" void WebCamTexture_Play_m5005 (WebCamTexture_t742 * __this, MethodInfo* method)
{
	{
		WebCamTexture_INTERNAL_CALL_Play_m6524(NULL /*static, unused*/, __this, /*hidden argument*/&WebCamTexture_INTERNAL_CALL_Play_m6524_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Play_m6524 (Object_t * __this /* static, unused */, WebCamTexture_t742 * ___self, MethodInfo* method)
{
	typedef void (*WebCamTexture_INTERNAL_CALL_Play_m6524_ftn) (WebCamTexture_t742 *);
	static WebCamTexture_INTERNAL_CALL_Play_m6524_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_INTERNAL_CALL_Play_m6524_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)");
	_il2cpp_icall_func(___self);
}
// System.Void UnityEngine.WebCamTexture::Stop()
extern MethodInfo WebCamTexture_Stop_m5006_MethodInfo;
extern "C" void WebCamTexture_Stop_m5006 (WebCamTexture_t742 * __this, MethodInfo* method)
{
	{
		WebCamTexture_INTERNAL_CALL_Stop_m6525(NULL /*static, unused*/, __this, /*hidden argument*/&WebCamTexture_INTERNAL_CALL_Stop_m6525_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Stop_m6525 (Object_t * __this /* static, unused */, WebCamTexture_t742 * ___self, MethodInfo* method)
{
	typedef void (*WebCamTexture_INTERNAL_CALL_Stop_m6525_ftn) (WebCamTexture_t742 *);
	static WebCamTexture_INTERNAL_CALL_Stop_m6525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_INTERNAL_CALL_Stop_m6525_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)");
	_il2cpp_icall_func(___self);
}
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern MethodInfo WebCamTexture_get_isPlaying_m4999_MethodInfo;
extern "C" bool WebCamTexture_get_isPlaying_m4999 (WebCamTexture_t742 * __this, MethodInfo* method)
{
	typedef bool (*WebCamTexture_get_isPlaying_m4999_ftn) (WebCamTexture_t742 *);
	static WebCamTexture_get_isPlaying_m4999_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_isPlaying_m4999_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern MethodInfo WebCamTexture_set_deviceName_m5001_MethodInfo;
extern "C" void WebCamTexture_set_deviceName_m5001 (WebCamTexture_t742 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*WebCamTexture_set_deviceName_m5001_ftn) (WebCamTexture_t742 *, String_t*);
	static WebCamTexture_set_deviceName_m5001_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_deviceName_m5001_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_deviceName(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern MethodInfo WebCamTexture_set_requestedFPS_m5002_MethodInfo;
extern "C" void WebCamTexture_set_requestedFPS_m5002 (WebCamTexture_t742 * __this, float ___value, MethodInfo* method)
{
	typedef void (*WebCamTexture_set_requestedFPS_m5002_ftn) (WebCamTexture_t742 *, float);
	static WebCamTexture_set_requestedFPS_m5002_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedFPS_m5002_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedFPS(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern MethodInfo WebCamTexture_set_requestedWidth_m5003_MethodInfo;
extern "C" void WebCamTexture_set_requestedWidth_m5003 (WebCamTexture_t742 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*WebCamTexture_set_requestedWidth_m5003_ftn) (WebCamTexture_t742 *, int32_t);
	static WebCamTexture_set_requestedWidth_m5003_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedWidth_m5003_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern MethodInfo WebCamTexture_set_requestedHeight_m5004_MethodInfo;
extern "C" void WebCamTexture_set_requestedHeight_m5004 (WebCamTexture_t742 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*WebCamTexture_set_requestedHeight_m5004_ftn) (WebCamTexture_t742 *, int32_t);
	static WebCamTexture_set_requestedHeight_m5004_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedHeight_m5004_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern MethodInfo WebCamTexture_get_devices_m5354_MethodInfo;
extern "C" WebCamDeviceU5BU5D_t915* WebCamTexture_get_devices_m5354 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef WebCamDeviceU5BU5D_t915* (*WebCamTexture_get_devices_m5354_ftn) ();
	static WebCamTexture_get_devices_m5354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_devices_m5354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_devices()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern MethodInfo WebCamTexture_get_didUpdateThisFrame_m4998_MethodInfo;
extern "C" bool WebCamTexture_get_didUpdateThisFrame_m4998 (WebCamTexture_t742 * __this, MethodInfo* method)
{
	typedef bool (*WebCamTexture_get_didUpdateThisFrame_m4998_ftn) (WebCamTexture_t742 *);
	static WebCamTexture_get_didUpdateThisFrame_m4998_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_didUpdateThisFrame_m4998_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_didUpdateThisFrame()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEventSource_t1066_il2cpp_TypeInfo;
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEvent_t1068_il2cpp_TypeInfo;
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
extern MethodInfo AnimationEvent_get_isFiredByLegacy_m6543_MethodInfo;
extern MethodInfo AnimationEvent_get_isFiredByAnimator_m6544_MethodInfo;


// System.Void UnityEngine.AnimationEvent::.ctor()
extern MethodInfo AnimationEvent__ctor_m6526_MethodInfo;
extern "C" void AnimationEvent__ctor_m6526 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t138 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t1067 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern MethodInfo AnimationEvent_get_data_m6527_MethodInfo;
extern "C" String_t* AnimationEvent_get_data_m6527 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern MethodInfo AnimationEvent_set_data_m6528_MethodInfo;
extern "C" void AnimationEvent_set_data_m6528 (AnimationEvent_t1068 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern MethodInfo AnimationEvent_get_stringParameter_m6529_MethodInfo;
extern "C" String_t* AnimationEvent_get_stringParameter_m6529 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern MethodInfo AnimationEvent_set_stringParameter_m6530_MethodInfo;
extern "C" void AnimationEvent_set_stringParameter_m6530 (AnimationEvent_t1068 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern MethodInfo AnimationEvent_get_floatParameter_m6531_MethodInfo;
extern "C" float AnimationEvent_get_floatParameter_m6531 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern MethodInfo AnimationEvent_set_floatParameter_m6532_MethodInfo;
extern "C" void AnimationEvent_set_floatParameter_m6532 (AnimationEvent_t1068 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern MethodInfo AnimationEvent_get_intParameter_m6533_MethodInfo;
extern "C" int32_t AnimationEvent_get_intParameter_m6533 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern MethodInfo AnimationEvent_set_intParameter_m6534_MethodInfo;
extern "C" void AnimationEvent_set_intParameter_m6534 (AnimationEvent_t1068 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern MethodInfo AnimationEvent_get_objectReferenceParameter_m6535_MethodInfo;
extern "C" Object_t138 * AnimationEvent_get_objectReferenceParameter_m6535 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		Object_t138 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern MethodInfo AnimationEvent_set_objectReferenceParameter_m6536_MethodInfo;
extern "C" void AnimationEvent_set_objectReferenceParameter_m6536 (AnimationEvent_t1068 * __this, Object_t138 * ___value, MethodInfo* method)
{
	{
		Object_t138 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern MethodInfo AnimationEvent_get_functionName_m6537_MethodInfo;
extern "C" String_t* AnimationEvent_get_functionName_m6537 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern MethodInfo AnimationEvent_set_functionName_m6538_MethodInfo;
extern "C" void AnimationEvent_set_functionName_m6538 (AnimationEvent_t1068 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern MethodInfo AnimationEvent_get_time_m6539_MethodInfo;
extern "C" float AnimationEvent_get_time_m6539 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern MethodInfo AnimationEvent_set_time_m6540_MethodInfo;
extern "C" void AnimationEvent_set_time_m6540 (AnimationEvent_t1068 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern MethodInfo AnimationEvent_get_messageOptions_m6541_MethodInfo;
extern "C" int32_t AnimationEvent_get_messageOptions_m6541 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern MethodInfo AnimationEvent_set_messageOptions_m6542_MethodInfo;
extern "C" void AnimationEvent_set_messageOptions_m6542 (AnimationEvent_t1068 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m6543 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m6544 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern MethodInfo AnimationEvent_get_animationState_m6545_MethodInfo;
extern "C" AnimationState_t1067 * AnimationEvent_get_animationState_m6545 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m6543(__this, /*hidden argument*/&AnimationEvent_get_isFiredByLegacy_m6543_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m496(NULL /*static, unused*/, (String_t*) &_stringLiteral503, /*hidden argument*/&Debug_LogError_m496_MethodInfo);
	}

IL_0015:
	{
		AnimationState_t1067 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern MethodInfo AnimationEvent_get_animatorStateInfo_m6546_MethodInfo;
extern "C" AnimatorStateInfo_t1069  AnimationEvent_get_animatorStateInfo_m6546 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m6544(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m6544_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m496(NULL /*static, unused*/, (String_t*) &_stringLiteral504, /*hidden argument*/&Debug_LogError_m496_MethodInfo);
	}

IL_0015:
	{
		AnimatorStateInfo_t1069  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern MethodInfo AnimationEvent_get_animatorClipInfo_m6547_MethodInfo;
extern "C" AnimatorClipInfo_t1070  AnimationEvent_get_animatorClipInfo_m6547 (AnimationEvent_t1068 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m6544(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m6544_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m496(NULL /*static, unused*/, (String_t*) &_stringLiteral505, /*hidden argument*/&Debug_LogError_m496_MethodInfo);
	}

IL_0015:
	{
		AnimatorClipInfo_t1070  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Keyframe_t1071_il2cpp_TypeInfo;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationCurve_t1072_il2cpp_TypeInfo;
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"

extern MethodInfo AnimationCurve_Init_m6552_MethodInfo;
extern MethodInfo AnimationCurve_Cleanup_m6550_MethodInfo;


// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern MethodInfo AnimationCurve__ctor_m6548_MethodInfo;
extern "C" void AnimationCurve__ctor_m6548 (AnimationCurve_t1072 * __this, KeyframeU5BU5D_t1073* ___keys, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		KeyframeU5BU5D_t1073* L_0 = ___keys;
		AnimationCurve_Init_m6552(__this, L_0, /*hidden argument*/&AnimationCurve_Init_m6552_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern MethodInfo AnimationCurve__ctor_m6549_MethodInfo;
extern "C" void AnimationCurve__ctor_m6549 (AnimationCurve_t1072 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		AnimationCurve_Init_m6552(__this, (KeyframeU5BU5D_t1073*)(KeyframeU5BU5D_t1073*)NULL, /*hidden argument*/&AnimationCurve_Init_m6552_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6550 (AnimationCurve_t1072 * __this, MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m6550_ftn) (AnimationCurve_t1072 *);
	static AnimationCurve_Cleanup_m6550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m6550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern MethodInfo AnimationCurve_Finalize_m6551_MethodInfo;
extern "C" void AnimationCurve_Finalize_m6551 (AnimationCurve_t1072 * __this, MethodInfo* method)
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
		AnimationCurve_Cleanup_m6550(__this, /*hidden argument*/&AnimationCurve_Cleanup_m6550_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m710(__this, /*hidden argument*/&Object_Finalize_m710_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6552 (AnimationCurve_t1072 * __this, KeyframeU5BU5D_t1073* ___keys, MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m6552_ftn) (AnimationCurve_t1072 *, KeyframeU5BU5D_t1073*);
	static AnimationCurve_Init_m6552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m6552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t1072_marshal(const AnimationCurve_t1072& unmarshaled, AnimationCurve_t1072_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t1072_marshal_back(const AnimationCurve_t1072_marshaled& marshaled, AnimationCurve_t1072& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t1072_marshal_cleanup(AnimationCurve_t1072_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationState_t1067_il2cpp_TypeInfo;
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorClipInfo_t1070_il2cpp_TypeInfo;
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorStateInfo_t1069_il2cpp_TypeInfo;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern MethodInfo Animator_StringToHash_m6571_MethodInfo;


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern MethodInfo AnimatorStateInfo_IsName_m6553_MethodInfo;
extern "C" bool AnimatorStateInfo_IsName_m6553 (AnimatorStateInfo_t1069 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m6571(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m6571_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern MethodInfo AnimatorStateInfo_get_fullPathHash_m6554_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m6554 (AnimatorStateInfo_t1069 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern MethodInfo AnimatorStateInfo_get_nameHash_m6555_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_nameHash_m6555 (AnimatorStateInfo_t1069 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern MethodInfo AnimatorStateInfo_get_shortNameHash_m6556_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m6556 (AnimatorStateInfo_t1069 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern MethodInfo AnimatorStateInfo_get_normalizedTime_m6557_MethodInfo;
extern "C" float AnimatorStateInfo_get_normalizedTime_m6557 (AnimatorStateInfo_t1069 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern MethodInfo AnimatorStateInfo_get_length_m6558_MethodInfo;
extern "C" float AnimatorStateInfo_get_length_m6558 (AnimatorStateInfo_t1069 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern MethodInfo AnimatorStateInfo_get_tagHash_m6559_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_tagHash_m6559 (AnimatorStateInfo_t1069 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern MethodInfo AnimatorStateInfo_IsTag_m6560_MethodInfo;
extern "C" bool AnimatorStateInfo_IsTag_m6560 (AnimatorStateInfo_t1069 * __this, String_t* ___tag, MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m6571(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m6571_MethodInfo);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern MethodInfo AnimatorStateInfo_get_loop_m6561_MethodInfo;
extern "C" bool AnimatorStateInfo_get_loop_m6561 (AnimatorStateInfo_t1069 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorTransitionInfo_t1075_il2cpp_TypeInfo;
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsName_m6562_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsName_m6562 (AnimatorTransitionInfo_t1075 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m6571(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m6571_MethodInfo);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m6571(NULL /*static, unused*/, L_3, /*hidden argument*/&Animator_StringToHash_m6571_MethodInfo);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsUserName_m6563_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsUserName_m6563 (AnimatorTransitionInfo_t1075 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m6571(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m6571_MethodInfo);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern MethodInfo AnimatorTransitionInfo_get_fullPathHash_m6564_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m6564 (AnimatorTransitionInfo_t1075 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern MethodInfo AnimatorTransitionInfo_get_nameHash_m6565_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m6565 (AnimatorTransitionInfo_t1075 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern MethodInfo AnimatorTransitionInfo_get_userNameHash_m6566_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m6566 (AnimatorTransitionInfo_t1075 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern MethodInfo AnimatorTransitionInfo_get_normalizedTime_m6567_MethodInfo;
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m6567 (AnimatorTransitionInfo_t1075 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern MethodInfo AnimatorTransitionInfo_get_anyState_m6568_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_anyState_m6568 (AnimatorTransitionInfo_t1075 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern MethodInfo AnimatorTransitionInfo_get_entry_m6569_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_entry_m6569 (AnimatorTransitionInfo_t1075 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern MethodInfo AnimatorTransitionInfo_get_exit_m6570_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_exit_m6570 (AnimatorTransitionInfo_t1075 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t1075_marshal(const AnimatorTransitionInfo_t1075& unmarshaled, AnimatorTransitionInfo_t1075_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t1075_marshal_back(const AnimatorTransitionInfo_t1075_marshaled& marshaled, AnimatorTransitionInfo_t1075& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t1075_marshal_cleanup(AnimatorTransitionInfo_t1075_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Animator_t422_il2cpp_TypeInfo;

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
extern MethodInfo Animator_SetTriggerString_m6572_MethodInfo;
extern MethodInfo Animator_ResetTriggerString_m6573_MethodInfo;


// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern MethodInfo Animator_SetTrigger_m2686_MethodInfo;
extern "C" void Animator_SetTrigger_m2686 (Animator_t422 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m6572(__this, L_0, /*hidden argument*/&Animator_SetTriggerString_m6572_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern MethodInfo Animator_ResetTrigger_m2685_MethodInfo;
extern "C" void Animator_ResetTrigger_m2685 (Animator_t422 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m6573(__this, L_0, /*hidden argument*/&Animator_ResetTriggerString_m6573_MethodInfo);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern MethodInfo Animator_get_runtimeAnimatorController_m2684_MethodInfo;
extern "C" RuntimeAnimatorController_t518 * Animator_get_runtimeAnimatorController_m2684 (Animator_t422 * __this, MethodInfo* method)
{
	typedef RuntimeAnimatorController_t518 * (*Animator_get_runtimeAnimatorController_m2684_ftn) (Animator_t422 *);
	static Animator_get_runtimeAnimatorController_m2684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m6571 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m6571_ftn) (String_t*);
	static Animator_StringToHash_m6571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m6571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m6572 (Animator_t422 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m6572_ftn) (Animator_t422 *, String_t*);
	static Animator_SetTriggerString_m6572_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m6572_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m6573 (Animator_t422 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m6573_ftn) (Animator_t422 *, String_t*);
	static Animator_ResetTriggerString_m6573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m6573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkeletonBone_t1076_il2cpp_TypeInfo;
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t1076_marshal(const SkeletonBone_t1076& unmarshaled, SkeletonBone_t1076_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t1076_marshal_back(const SkeletonBone_t1076_marshaled& marshaled, SkeletonBone_t1076& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t1076_marshal_cleanup(SkeletonBone_t1076_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanLimit_t1077_il2cpp_TypeInfo;
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanBone_t1078_il2cpp_TypeInfo;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern MethodInfo HumanBone_get_boneName_m6574_MethodInfo;
extern "C" String_t* HumanBone_get_boneName_m6574 (HumanBone_t1078 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern MethodInfo HumanBone_set_boneName_m6575_MethodInfo;
extern "C" void HumanBone_set_boneName_m6575 (HumanBone_t1078 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern MethodInfo HumanBone_get_humanName_m6576_MethodInfo;
extern "C" String_t* HumanBone_get_humanName_m6576 (HumanBone_t1078 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern MethodInfo HumanBone_set_humanName_m6577_MethodInfo;
extern "C" void HumanBone_set_humanName_m6577 (HumanBone_t1078 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t1078_marshal(const HumanBone_t1078& unmarshaled, HumanBone_t1078_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t1078_marshal_back(const HumanBone_t1078_marshaled& marshaled, HumanBone_t1078& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t1078_marshal_cleanup(HumanBone_t1078_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimeAnimatorController_t518_il2cpp_TypeInfo;
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.Terrain
#include "UnityEngine_UnityEngine_Terrain.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Terrain_t1079_il2cpp_TypeInfo;
// UnityEngine.Terrain
#include "UnityEngine_UnityEngine_TerrainMethodDeclarations.h"



// System.Void UnityEngine.Terrain::.ctor()
extern MethodInfo Terrain__ctor_m6578_MethodInfo;
extern "C" void Terrain__ctor_m6578 (Terrain_t1079 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m6356(__this, /*hidden argument*/&Behaviour__ctor_m6356_MethodInfo);
		return;
	}
}
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAnchor_t526_il2cpp_TypeInfo;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HorizontalWrapMode_t559_il2cpp_TypeInfo;
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VerticalWrapMode_t560_il2cpp_TypeInfo;
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharacterInfo_t1080_il2cpp_TypeInfo;
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

extern TypeInfo Vector2_t20_il2cpp_TypeInfo;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo Rect_get_width_m2412_MethodInfo;
extern MethodInfo Rect_get_height_m2413_MethodInfo;
extern MethodInfo Rect_get_x_m2417_MethodInfo;
extern MethodInfo Rect_get_y_m2418_MethodInfo;
extern MethodInfo Vector2__ctor_m482_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomLeftUnFlipped_m6587_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopLeftUnFlipped_m6590_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomRightUnFlipped_m6588_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopRightUnFlipped_m6589_MethodInfo;


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern MethodInfo CharacterInfo_get_advance_m6579_MethodInfo;
extern "C" int32_t CharacterInfo_get_advance_m6579 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern MethodInfo CharacterInfo_get_glyphWidth_m6580_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphWidth_m6580 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m2412(L_0, /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern MethodInfo CharacterInfo_get_glyphHeight_m6581_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphHeight_m6581 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m2413(L_0, /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern MethodInfo CharacterInfo_get_bearing_m6582_MethodInfo;
extern "C" int32_t CharacterInfo_get_bearing_m6582 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2417(L_0, /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern MethodInfo CharacterInfo_get_minY_m6583_MethodInfo;
extern "C" int32_t CharacterInfo_get_minY_m6583 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t32 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m2418(L_1, /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		Rect_t32 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m2413(L_3, /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern MethodInfo CharacterInfo_get_maxY_m6584_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxY_m6584 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t32 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m2418(L_1, /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern MethodInfo CharacterInfo_get_minX_m6585_MethodInfo;
extern "C" int32_t CharacterInfo_get_minX_m6585 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2417(L_0, /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern MethodInfo CharacterInfo_get_maxX_m6586_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxX_m6586 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2417(L_0, /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		Rect_t32 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m2412(L_2, /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t20  CharacterInfo_get_uvBottomLeftUnFlipped_m6587 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2417(L_0, /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		Rect_t32 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m2418(L_2, /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		Vector2_t20  L_4 = {0};
		Vector2__ctor_m482(&L_4, L_1, L_3, /*hidden argument*/&Vector2__ctor_m482_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t20  CharacterInfo_get_uvBottomRightUnFlipped_m6588 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2417(L_0, /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		Rect_t32 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2412(L_2, /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		Rect_t32 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m2418(L_4, /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		Vector2_t20  L_6 = {0};
		Vector2__ctor_m482(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/&Vector2__ctor_m482_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t20  CharacterInfo_get_uvTopRightUnFlipped_m6589 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2417(L_0, /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		Rect_t32 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2412(L_2, /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		Rect_t32 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m2418(L_4, /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		Rect_t32 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m2413(L_6, /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		Vector2_t20  L_8 = {0};
		Vector2__ctor_m482(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/&Vector2__ctor_m482_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t20  CharacterInfo_get_uvTopLeftUnFlipped_m6590 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2417(L_0, /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		Rect_t32 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m2418(L_2, /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		Rect_t32 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m2413(L_4, /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		Vector2_t20  L_6 = {0};
		Vector2__ctor_m482(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/&Vector2__ctor_m482_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern MethodInfo CharacterInfo_get_uvBottomLeft_m6591_MethodInfo;
extern "C" Vector2_t20  CharacterInfo_get_uvBottomLeft_m6591 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	Vector2_t20  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t20  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m6587(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m6587_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t20  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m6587(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m6587_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern MethodInfo CharacterInfo_get_uvBottomRight_m6592_MethodInfo;
extern "C" Vector2_t20  CharacterInfo_get_uvBottomRight_m6592 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	Vector2_t20  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t20  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m6590(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m6590_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t20  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m6588(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m6588_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern MethodInfo CharacterInfo_get_uvTopRight_m6593_MethodInfo;
extern "C" Vector2_t20  CharacterInfo_get_uvTopRight_m6593 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	Vector2_t20  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t20  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m6589(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m6589_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t20  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m6589(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m6589_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern MethodInfo CharacterInfo_get_uvTopLeft_m6594_MethodInfo;
extern "C" Vector2_t20  CharacterInfo_get_uvTopLeft_m6594 (CharacterInfo_t1080 * __this, MethodInfo* method)
{
	Vector2_t20  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t20  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m6588(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m6588_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t20  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m6590(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m6590_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t1080_marshal(const CharacterInfo_t1080& unmarshaled, CharacterInfo_t1080_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t1080_marshal_back(const CharacterInfo_t1080_marshaled& marshaled, CharacterInfo_t1080& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t1080_marshal_cleanup(CharacterInfo_t1080_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FontTextureRebuildCallback_t1081_il2cpp_TypeInfo;
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo FontTextureRebuildCallback__ctor_m6595_MethodInfo;
extern "C" void FontTextureRebuildCallback__ctor_m6595 (FontTextureRebuildCallback_t1081 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern MethodInfo FontTextureRebuildCallback_Invoke_m6596_MethodInfo;
extern "C" void FontTextureRebuildCallback_Invoke_m6596 (FontTextureRebuildCallback_t1081 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m6596((FontTextureRebuildCallback_t1081 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t1081(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo FontTextureRebuildCallback_BeginInvoke_m6597_MethodInfo;
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m6597 (FontTextureRebuildCallback_t1081 * __this, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo FontTextureRebuildCallback_EndInvoke_m6598_MethodInfo;
extern "C" void FontTextureRebuildCallback_EndInvoke_m6598 (FontTextureRebuildCallback_t1081 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Font_t28_il2cpp_TypeInfo;
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_4.h"
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo Action_1_t495_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
extern Il2CppType Action_1_t495_0_0_0;
extern MethodInfo Action_1_Invoke_m6904_MethodInfo;
extern Il2CppGenericMethod Action_1_Invoke_m6904_GenericMethod;


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_add_textureRebuilt_m2391_MethodInfo;
extern TypeInfo* Action_1_t495_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m2391 (Object_t * __this /* static, unused */, Action_1_t495 * ___value, MethodInfo* method)
{
	static bool Font_add_textureRebuilt_m2391_init;
	if (!Font_add_textureRebuilt_m2391_init)
	{
		Action_1_t495_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t495_0_0_0);
		Font_add_textureRebuilt_m2391_init = true;
	}
	{
		Action_1_t495 * L_0 = ((Font_t28_StaticFields*)InitializedTypeInfo(&Font_t28_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t495 * L_1 = ___value;
		Delegate_t148 * L_2 = Delegate_Combine_m451(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m451_MethodInfo);
		((Font_t28_StaticFields*)InitializedTypeInfo(&Font_t28_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t495 *)Castclass(L_2, Action_1_t495_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_remove_textureRebuilt_m6599_MethodInfo;
extern TypeInfo* Action_1_t495_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m6599 (Object_t * __this /* static, unused */, Action_1_t495 * ___value, MethodInfo* method)
{
	static bool Font_remove_textureRebuilt_m6599_init;
	if (!Font_remove_textureRebuilt_m6599_init)
	{
		Action_1_t495_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t495_0_0_0);
		Font_remove_textureRebuilt_m6599_init = true;
	}
	{
		Action_1_t495 * L_0 = ((Font_t28_StaticFields*)InitializedTypeInfo(&Font_t28_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t495 * L_1 = ___value;
		Delegate_t148 * L_2 = Delegate_Remove_m457(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m457_MethodInfo);
		((Font_t28_StaticFields*)InitializedTypeInfo(&Font_t28_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t495 *)Castclass(L_2, Action_1_t495_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern MethodInfo Font_get_material_m2709_MethodInfo;
extern "C" Material_t116 * Font_get_material_m2709 (Font_t28 * __this, MethodInfo* method)
{
	typedef Material_t116 * (*Font_get_material_m2709_ftn) (Font_t28 *);
	static Font_get_material_m2709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern MethodInfo Font_HasCharacter_m2558_MethodInfo;
extern "C" bool Font_HasCharacter_m2558 (Font_t28 * __this, uint16_t ___c, MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m2558_ftn) (Font_t28 *, uint16_t);
	static Font_HasCharacter_m2558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern MethodInfo Font_InvokeTextureRebuilt_Internal_m6600_MethodInfo;
extern MethodInfo* Action_1_Invoke_m6904_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m6600 (Object_t * __this /* static, unused */, Font_t28 * ___font, MethodInfo* method)
{
	static bool Font_InvokeTextureRebuilt_Internal_m6600_init;
	if (!Font_InvokeTextureRebuilt_Internal_m6600_init)
	{
		Action_1_Invoke_m6904_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m6904_GenericMethod);
		Font_InvokeTextureRebuilt_Internal_m6600_init = true;
	}
	Action_1_t495 * V_0 = {0};
	{
		Action_1_t495 * L_0 = ((Font_t28_StaticFields*)InitializedTypeInfo(&Font_t28_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t495 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t495 * L_2 = V_0;
		Font_t28 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t28 * >::Invoke(Action_1_Invoke_m6904_MethodInfo_var, L_2, L_3);
	}

IL_0013:
	{
		Font_t28 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t1081 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t28 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t1081 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&FontTextureRebuildCallback_Invoke_m6596_MethodInfo, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern MethodInfo Font_get_dynamic_m2711_MethodInfo;
extern "C" bool Font_get_dynamic_m2711 (Font_t28 * __this, MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m2711_ftn) (Font_t28 *);
	static Font_get_dynamic_m2711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m2711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern MethodInfo Font_get_fontSize_m2713_MethodInfo;
extern "C" int32_t Font_get_fontSize_m2713 (Font_t28 * __this, MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m2713_ftn) (Font_t28 *);
	static Font_get_fontSize_m2713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m2713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UICharInfo_t512_il2cpp_TypeInfo;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UILineInfo_t510_il2cpp_TypeInfo;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerator_t397_il2cpp_TypeInfo;
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_52.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_53.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
extern TypeInfo Mathf_t160_il2cpp_TypeInfo;
extern TypeInfo List_1_t361_il2cpp_TypeInfo;
extern TypeInfo List_1_t1082_il2cpp_TypeInfo;
extern TypeInfo List_1_t1083_il2cpp_TypeInfo;
extern TypeInfo TextGenerationSettings_t431_il2cpp_TypeInfo;
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_11MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_52MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_53MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern Il2CppType List_1_t361_0_0_0;
extern Il2CppType List_1_t1082_0_0_0;
extern Il2CppType List_1_t1083_0_0_0;
extern MethodInfo String_IsNullOrEmpty_m2571_MethodInfo;
extern MethodInfo String_get_Length_m694_MethodInfo;
extern MethodInfo TextGenerator_get_vertexCount_m6607_MethodInfo;
extern MethodInfo Mathf_Max_m2563_MethodInfo;
extern MethodInfo Mathf_Min_m2565_MethodInfo;
extern MethodInfo TextGenerator_GetVertices_m6619_MethodInfo;
extern MethodInfo TextGenerator_GetCharacters_m6617_MethodInfo;
extern MethodInfo TextGenerator_GetLines_m6618_MethodInfo;
extern MethodInfo TextGenerator__ctor_m2707_MethodInfo;
extern MethodInfo List_1__ctor_m6905_MethodInfo;
extern MethodInfo List_1__ctor_m6906_MethodInfo;
extern MethodInfo List_1__ctor_m6907_MethodInfo;
extern MethodInfo TextGenerator_Init_m6602_MethodInfo;
extern MethodInfo TextGenerator_Dispose_cpp_m6603_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_cpp_m6605_MethodInfo;
extern MethodInfo TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6606_MethodInfo;
extern MethodInfo TextGenerator_GetCharactersInternal_m6611_MethodInfo;
extern MethodInfo TextGenerator_GetLinesInternal_m6613_MethodInfo;
extern MethodInfo TextGenerator_GetVerticesInternal_m6608_MethodInfo;
extern MethodInfo TextGenerator_Populate_m2572_MethodInfo;
extern MethodInfo TextGenerator_get_rectExtents_m2574_MethodInfo;
extern MethodInfo String_op_Equality_m406_MethodInfo;
extern MethodInfo TextGenerationSettings_Equals_m6782_MethodInfo;
extern MethodInfo TextGenerator_PopulateAlways_m6620_MethodInfo;
extern MethodInfo TextGenerator_ValidatedSettings_m6616_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_m6604_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m6905_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m6906_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m6907_GenericMethod;


// System.Void UnityEngine.TextGenerator::.ctor()
extern MethodInfo TextGenerator__ctor_m2522_MethodInfo;
extern "C" void TextGenerator__ctor_m2522 (TextGenerator_t397 * __this, MethodInfo* method)
{
	{
		TextGenerator__ctor_m2707(__this, ((int32_t)50), /*hidden argument*/&TextGenerator__ctor_m2707_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t361_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1082_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1083_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m6905_MethodInfo_var;
extern MethodInfo* List_1__ctor_m6906_MethodInfo_var;
extern MethodInfo* List_1__ctor_m6907_MethodInfo_var;
extern "C" void TextGenerator__ctor_m2707 (TextGenerator_t397 * __this, int32_t ___initialCapacity, MethodInfo* method)
{
	static bool TextGenerator__ctor_m2707_init;
	if (!TextGenerator__ctor_m2707_init)
	{
		List_1_t361_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t361_0_0_0);
		List_1_t1082_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1082_0_0_0);
		List_1_t1083_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1083_0_0_0);
		List_1__ctor_m6905_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m6905_GenericMethod);
		List_1__ctor_m6906_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m6906_GenericMethod);
		List_1__ctor_m6907_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m6907_GenericMethod);
		TextGenerator__ctor_m2707_init = true;
	}
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		int32_t L_0 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t361_il2cpp_TypeInfo_var);
		List_1_t361 * L_1 = (List_1_t361 *)il2cpp_codegen_object_new (List_1_t361_il2cpp_TypeInfo_var);
		List_1__ctor_m6905(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m6905_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1082_il2cpp_TypeInfo_var);
		List_1_t1082 * L_3 = (List_1_t1082 *)il2cpp_codegen_object_new (List_1_t1082_il2cpp_TypeInfo_var);
		List_1__ctor_m6906(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m6906_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1083_il2cpp_TypeInfo_var);
		List_1_t1083 * L_4 = (List_1_t1083 *)il2cpp_codegen_object_new (List_1_t1083_il2cpp_TypeInfo_var);
		List_1__ctor_m6907(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m6907_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m6602(__this, /*hidden argument*/&TextGenerator_Init_m6602_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern MethodInfo TextGenerator_System_IDisposable_Dispose_m6601_MethodInfo;
extern "C" void TextGenerator_System_IDisposable_Dispose_m6601 (TextGenerator_t397 * __this, MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m6603(__this, /*hidden argument*/&TextGenerator_Dispose_cpp_m6603_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m6602 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m6602_ftn) (TextGenerator_t397 *);
	static TextGenerator_Init_m6602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m6602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m6603 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m6603_ftn) (TextGenerator_t397 *);
	static TextGenerator_Dispose_cpp_m6603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m6603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m6604 (TextGenerator_t397 * __this, String_t* ___str, Font_t28 * ___font, Color_t118  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t20  ___extents, Vector2_t20  ___pivot, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t28 * L_1 = ___font;
		Color_t118  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ((&___extents)->___x_1);
		float L_15 = ((&___extents)->___y_2);
		float L_16 = ((&___pivot)->___x_1);
		float L_17 = ((&___pivot)->___y_2);
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_Populate_Internal_cpp_m6605(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/&TextGenerator_Populate_Internal_cpp_m6605_MethodInfo);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m6605 (TextGenerator_t397 * __this, String_t* ___str, Font_t28 * ___font, Color_t118  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t28 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___lineSpacing;
		int32_t L_4 = ___style;
		bool L_5 = ___richText;
		bool L_6 = ___resizeTextForBestFit;
		int32_t L_7 = ___resizeTextMinSize;
		int32_t L_8 = ___resizeTextMaxSize;
		int32_t L_9 = ___verticalOverFlow;
		int32_t L_10 = ___horizontalOverflow;
		bool L_11 = ___updateBounds;
		int32_t L_12 = ___anchor;
		float L_13 = ___extentsX;
		float L_14 = ___extentsY;
		float L_15 = ___pivotX;
		float L_16 = ___pivotY;
		bool L_17 = ___generateOutOfBounds;
		bool L_18 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6606(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/&TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6606_MethodInfo);
		return L_18;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6606 (Object_t * __this /* static, unused */, TextGenerator_t397 * ___self, String_t* ___str, Font_t28 * ___font, Color_t118 * ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6606_ftn) (TextGenerator_t397 *, String_t*, Font_t28 *, Color_t118 *, int32_t, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t32  TextGenerator_get_rectExtents_m2574 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef Rect_t32  (*TextGenerator_get_rectExtents_m2574_ftn) (TextGenerator_t397 *);
	static TextGenerator_get_rectExtents_m2574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m2574_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m6607 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m6607_ftn) (TextGenerator_t397 *);
	static TextGenerator_get_vertexCount_m6607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m6607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m6608 (TextGenerator_t397 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m6608_ftn) (TextGenerator_t397 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m6608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m6608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern MethodInfo TextGenerator_GetVerticesArray_m6609_MethodInfo;
extern "C" UIVertexU5BU5D_t396* TextGenerator_GetVerticesArray_m6609 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef UIVertexU5BU5D_t396* (*TextGenerator_GetVerticesArray_m6609_ftn) (TextGenerator_t397 *);
	static TextGenerator_GetVerticesArray_m6609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m6609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern MethodInfo TextGenerator_get_characterCount_m6610_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCount_m6610 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m6610_ftn) (TextGenerator_t397 *);
	static TextGenerator_get_characterCount_m6610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m6610_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern MethodInfo TextGenerator_get_characterCountVisible_m2551_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCountVisible_m2551 (TextGenerator_t397 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_IsNullOrEmpty_m2571(NULL /*static, unused*/, L_0, /*hidden argument*/&String_IsNullOrEmpty_m2571_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m694(L_2, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		int32_t L_4 = TextGenerator_get_vertexCount_m6607(__this, /*hidden argument*/&TextGenerator_get_vertexCount_m6607_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t160_il2cpp_TypeInfo));
		int32_t L_5 = Mathf_Max_m2563(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/&Mathf_Max_m2563_MethodInfo);
		int32_t L_6 = Mathf_Min_m2565(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Mathf_Min_m2565_MethodInfo);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m6611 (TextGenerator_t397 * __this, Object_t * ___characters, MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m6611_ftn) (TextGenerator_t397 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m6611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m6611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern MethodInfo TextGenerator_GetCharactersArray_m6612_MethodInfo;
extern "C" UICharInfoU5BU5D_t1084* TextGenerator_GetCharactersArray_m6612 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t1084* (*TextGenerator_GetCharactersArray_m6612_ftn) (TextGenerator_t397 *);
	static TextGenerator_GetCharactersArray_m6612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m6612_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern MethodInfo TextGenerator_get_lineCount_m2550_MethodInfo;
extern "C" int32_t TextGenerator_get_lineCount_m2550 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m2550_ftn) (TextGenerator_t397 *);
	static TextGenerator_get_lineCount_m2550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m2550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m6613 (TextGenerator_t397 * __this, Object_t * ___lines, MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m6613_ftn) (TextGenerator_t397 *, Object_t *);
	static TextGenerator_GetLinesInternal_m6613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m6613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern MethodInfo TextGenerator_GetLinesArray_m6614_MethodInfo;
extern "C" UILineInfoU5BU5D_t1085* TextGenerator_GetLinesArray_m6614 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t1085* (*TextGenerator_GetLinesArray_m6614_ftn) (TextGenerator_t397 *);
	static TextGenerator_GetLinesArray_m6614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m6614_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern MethodInfo TextGenerator_get_fontSizeUsedForBestFit_m2594_MethodInfo;
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m2594 (TextGenerator_t397 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m2594_ftn) (TextGenerator_t397 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m2594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m2594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern MethodInfo TextGenerator_Finalize_m6615_MethodInfo;
extern "C" void TextGenerator_Finalize_m6615 (TextGenerator_t397 * __this, MethodInfo* method)
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
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m486_MethodInfo, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m710(__this, /*hidden argument*/&Object_Finalize_m710_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t431  TextGenerator_ValidatedSettings_m6616 (TextGenerator_t397 * __this, TextGenerationSettings_t431  ___settings, MethodInfo* method)
{
	{
		Font_t28 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m388(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t28 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m2711(L_2, /*hidden argument*/&Font_get_dynamic_m2711_MethodInfo);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t431  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_5);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m656(NULL /*static, unused*/, (String_t*) &_stringLiteral506, /*hidden argument*/&Debug_LogWarning_m656_MethodInfo);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_5 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_7);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m656(NULL /*static, unused*/, (String_t*) &_stringLiteral507, /*hidden argument*/&Debug_LogWarning_m656_MethodInfo);
		(&___settings)->___resizeTextForBestFit_7 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t431  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern MethodInfo TextGenerator_Invalidate_m2716_MethodInfo;
extern "C" void TextGenerator_Invalidate_m2716 (TextGenerator_t397 * __this, MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m6617 (TextGenerator_t397 * __this, List_1_t1082 * ___characters, MethodInfo* method)
{
	{
		List_1_t1082 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m6611(__this, L_0, /*hidden argument*/&TextGenerator_GetCharactersInternal_m6611_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m6618 (TextGenerator_t397 * __this, List_1_t1083 * ___lines, MethodInfo* method)
{
	{
		List_1_t1083 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m6613(__this, L_0, /*hidden argument*/&TextGenerator_GetLinesInternal_m6613_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m6619 (TextGenerator_t397 * __this, List_1_t361 * ___vertices, MethodInfo* method)
{
	{
		List_1_t361 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m6608(__this, L_0, /*hidden argument*/&TextGenerator_GetVerticesInternal_m6608_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredWidth_m2714_MethodInfo;
extern "C" float TextGenerator_GetPreferredWidth_m2714 (TextGenerator_t397 * __this, String_t* ___str, TextGenerationSettings_t431  ___settings, MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_12 = 1;
		(&___settings)->___verticalOverflow_11 = 1;
		(&___settings)->___updateBounds_10 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t431  L_1 = ___settings;
		TextGenerator_Populate_m2572(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2572_MethodInfo);
		Rect_t32  L_2 = TextGenerator_get_rectExtents_m2574(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2574_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_width_m2412((&V_0), /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredHeight_m2715_MethodInfo;
extern "C" float TextGenerator_GetPreferredHeight_m2715 (TextGenerator_t397 * __this, String_t* ___str, TextGenerationSettings_t431  ___settings, MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_11 = 1;
		(&___settings)->___updateBounds_10 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t431  L_1 = ___settings;
		TextGenerator_Populate_m2572(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2572_MethodInfo);
		Rect_t32  L_2 = TextGenerator_get_rectExtents_m2574(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2574_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_height_m2413((&V_0), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_Populate_m2572 (TextGenerator_t397 * __this, String_t* ___str, TextGenerationSettings_t431  ___settings, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Equality_m406(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t431  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m6782((&___settings), L_4, /*hidden argument*/&TextGenerationSettings_Equals_m6782_MethodInfo);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t431  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m6620(__this, L_7, L_8, /*hidden argument*/&TextGenerator_PopulateAlways_m6620_MethodInfo);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m6620 (TextGenerator_t397 * __this, String_t* ___str, TextGenerationSettings_t431  ___settings, MethodInfo* method)
{
	TextGenerationSettings_t431  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t431  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t431  L_2 = ___settings;
		TextGenerationSettings_t431  L_3 = TextGenerator_ValidatedSettings_m6616(__this, L_2, /*hidden argument*/&TextGenerator_ValidatedSettings_m6616_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t28 * L_5 = ((&V_0)->___font_0);
		Color_t118  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___lineSpacing_3);
		int32_t L_9 = ((&V_0)->___fontStyle_5);
		bool L_10 = ((&V_0)->___richText_4);
		bool L_11 = ((&V_0)->___resizeTextForBestFit_7);
		int32_t L_12 = ((&V_0)->___resizeTextMinSize_8);
		int32_t L_13 = ((&V_0)->___resizeTextMaxSize_9);
		int32_t L_14 = ((&V_0)->___verticalOverflow_11);
		int32_t L_15 = ((&V_0)->___horizontalOverflow_12);
		bool L_16 = ((&V_0)->___updateBounds_10);
		int32_t L_17 = ((&V_0)->___textAnchor_6);
		Vector2_t20  L_18 = ((&V_0)->___generationExtents_13);
		Vector2_t20  L_19 = ((&V_0)->___pivot_14);
		bool L_20 = ((&V_0)->___generateOutOfBounds_15);
		bool L_21 = TextGenerator_Populate_Internal_m6604(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/&TextGenerator_Populate_Internal_m6604_MethodInfo);
		__this->___m_LastValid_4 = L_21;
		bool L_22 = (__this->___m_LastValid_4);
		return L_22;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern MethodInfo TextGenerator_get_verts_m2718_MethodInfo;
extern "C" Object_t* TextGenerator_get_verts_m2718 (TextGenerator_t397 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t361 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m6619(__this, L_1, /*hidden argument*/&TextGenerator_GetVertices_m6619_MethodInfo);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t361 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern MethodInfo TextGenerator_get_characters_m2552_MethodInfo;
extern "C" Object_t* TextGenerator_get_characters_m2552 (TextGenerator_t397 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t1082 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m6617(__this, L_1, /*hidden argument*/&TextGenerator_GetCharacters_m6617_MethodInfo);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t1082 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern MethodInfo TextGenerator_get_lines_m2548_MethodInfo;
extern "C" Object_t* TextGenerator_get_lines_m2548 (TextGenerator_t397 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t1083 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m6618(__this, L_1, /*hidden argument*/&TextGenerator_GetLines_m6618_MethodInfo);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t1083 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderMode_t1086_il2cpp_TypeInfo;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WillRenderCanvases_t493_il2cpp_TypeInfo;
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern MethodInfo WillRenderCanvases__ctor_m2367_MethodInfo;
extern "C" void WillRenderCanvases__ctor_m2367 (WillRenderCanvases_t493 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern MethodInfo WillRenderCanvases_Invoke_m6621_MethodInfo;
extern "C" void WillRenderCanvases_Invoke_m6621 (WillRenderCanvases_t493 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m6621((WillRenderCanvases_t493 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t493(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo WillRenderCanvases_BeginInvoke_m6622_MethodInfo;
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m6622 (WillRenderCanvases_t493 * __this, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern MethodInfo WillRenderCanvases_EndInvoke_m6623_MethodInfo;
extern "C" void WillRenderCanvases_EndInvoke_m6623 (WillRenderCanvases_t493 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Canvas_t356_il2cpp_TypeInfo;
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"

extern MethodInfo Canvas_SendWillRenderCanvases_m6625_MethodInfo;


// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_add_willRenderCanvases_m2368_MethodInfo;
extern "C" void Canvas_add_willRenderCanvases_m2368 (Object_t * __this /* static, unused */, WillRenderCanvases_t493 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t493 * L_0 = ((Canvas_t356_StaticFields*)InitializedTypeInfo(&Canvas_t356_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t493 * L_1 = ___value;
		Delegate_t148 * L_2 = Delegate_Combine_m451(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m451_MethodInfo);
		((Canvas_t356_StaticFields*)InitializedTypeInfo(&Canvas_t356_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t493 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t493_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_remove_willRenderCanvases_m6624_MethodInfo;
extern "C" void Canvas_remove_willRenderCanvases_m6624 (Object_t * __this /* static, unused */, WillRenderCanvases_t493 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t493 * L_0 = ((Canvas_t356_StaticFields*)InitializedTypeInfo(&Canvas_t356_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t493 * L_1 = ___value;
		Delegate_t148 * L_2 = Delegate_Remove_m457(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m457_MethodInfo);
		((Canvas_t356_StaticFields*)InitializedTypeInfo(&Canvas_t356_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t493 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t493_il2cpp_TypeInfo)));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern MethodInfo Canvas_get_renderMode_m2444_MethodInfo;
extern "C" int32_t Canvas_get_renderMode_m2444 (Canvas_t356 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m2444_ftn) (Canvas_t356 *);
	static Canvas_get_renderMode_m2444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m2444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern MethodInfo Canvas_get_isRootCanvas_m2738_MethodInfo;
extern "C" bool Canvas_get_isRootCanvas_m2738 (Canvas_t356 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m2738_ftn) (Canvas_t356 *);
	static Canvas_get_isRootCanvas_m2738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m2738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern MethodInfo Canvas_get_worldCamera_m2447_MethodInfo;
extern "C" Camera_t2 * Canvas_get_worldCamera_m2447 (Canvas_t356 * __this, MethodInfo* method)
{
	typedef Camera_t2 * (*Canvas_get_worldCamera_m2447_ftn) (Canvas_t356 *);
	static Canvas_get_worldCamera_m2447_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2447_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern MethodInfo Canvas_get_scaleFactor_m2712_MethodInfo;
extern "C" float Canvas_get_scaleFactor_m2712 (Canvas_t356 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m2712_ftn) (Canvas_t356 *);
	static Canvas_get_scaleFactor_m2712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m2712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern MethodInfo Canvas_set_scaleFactor_m2741_MethodInfo;
extern "C" void Canvas_set_scaleFactor_m2741 (Canvas_t356 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m2741_ftn) (Canvas_t356 *, float);
	static Canvas_set_scaleFactor_m2741_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m2741_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern MethodInfo Canvas_get_referencePixelsPerUnit_m2476_MethodInfo;
extern "C" float Canvas_get_referencePixelsPerUnit_m2476 (Canvas_t356 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m2476_ftn) (Canvas_t356 *);
	static Canvas_get_referencePixelsPerUnit_m2476_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m2476_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern MethodInfo Canvas_set_referencePixelsPerUnit_m2742_MethodInfo;
extern "C" void Canvas_set_referencePixelsPerUnit_m2742 (Canvas_t356 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m2742_ftn) (Canvas_t356 *, float);
	static Canvas_set_referencePixelsPerUnit_m2742_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m2742_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern MethodInfo Canvas_get_pixelPerfect_m2425_MethodInfo;
extern "C" bool Canvas_get_pixelPerfect_m2425 (Canvas_t356 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m2425_ftn) (Canvas_t356 *);
	static Canvas_get_pixelPerfect_m2425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m2425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern MethodInfo Canvas_get_renderOrder_m2446_MethodInfo;
extern "C" int32_t Canvas_get_renderOrder_m2446 (Canvas_t356 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m2446_ftn) (Canvas_t356 *);
	static Canvas_get_renderOrder_m2446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m2446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern MethodInfo Canvas_get_sortingOrder_m2445_MethodInfo;
extern "C" int32_t Canvas_get_sortingOrder_m2445 (Canvas_t356 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m2445_ftn) (Canvas_t356 *);
	static Canvas_get_sortingOrder_m2445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m2445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern MethodInfo Canvas_get_sortingLayerID_m2456_MethodInfo;
extern "C" int32_t Canvas_get_sortingLayerID_m2456 (Canvas_t356 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingLayerID_m2456_ftn) (Canvas_t356 *);
	static Canvas_get_sortingLayerID_m2456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingLayerID_m2456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern MethodInfo Canvas_GetDefaultCanvasMaterial_m2396_MethodInfo;
extern "C" Material_t116 * Canvas_GetDefaultCanvasMaterial_m2396 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t116 * (*Canvas_GetDefaultCanvasMaterial_m2396_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m2396_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m2396_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern MethodInfo Canvas_GetDefaultCanvasTextMaterial_m2708_MethodInfo;
extern "C" Material_t116 * Canvas_GetDefaultCanvasTextMaterial_m2708 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t116 * (*Canvas_GetDefaultCanvasTextMaterial_m2708_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m2708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m2708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m6625 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		WillRenderCanvases_t493 * L_0 = ((Canvas_t356_StaticFields*)InitializedTypeInfo(&Canvas_t356_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t493 * L_1 = ((Canvas_t356_StaticFields*)InitializedTypeInfo(&Canvas_t356_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&WillRenderCanvases_Invoke_m6621_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern MethodInfo Canvas_ForceUpdateCanvases_m2645_MethodInfo;
extern "C" void Canvas_ForceUpdateCanvases_m2645 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m6625(NULL /*static, unused*/, /*hidden argument*/&Canvas_SendWillRenderCanvases_m6625_MethodInfo);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasGroup_t500_il2cpp_TypeInfo;
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"

extern MethodInfo CanvasGroup_get_blocksRaycasts_m6626_MethodInfo;


// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern MethodInfo CanvasGroup_get_interactable_m2670_MethodInfo;
extern "C" bool CanvasGroup_get_interactable_m2670 (CanvasGroup_t500 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m2670_ftn) (CanvasGroup_t500 *);
	static CanvasGroup_get_interactable_m2670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m2670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m6626 (CanvasGroup_t500 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m6626_ftn) (CanvasGroup_t500 *);
	static CanvasGroup_get_blocksRaycasts_m6626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m6626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern MethodInfo CanvasGroup_get_ignoreParentGroups_m2423_MethodInfo;
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2423 (CanvasGroup_t500 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m2423_ftn) (CanvasGroup_t500 *);
	static CanvasGroup_get_ignoreParentGroups_m2423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m2423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo CanvasGroup_IsRaycastLocationValid_m6627_MethodInfo;
extern "C" bool CanvasGroup_IsRaycastLocationValid_m6627 (CanvasGroup_t500 * __this, Vector2_t20  ___sp, Camera_t2 * ___eventCamera, MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m6626(__this, /*hidden argument*/&CanvasGroup_get_blocksRaycasts_m6626_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UIVertex_t380_il2cpp_TypeInfo;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Color32_t479_il2cpp_TypeInfo;
extern TypeInfo Vector4_t151_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo Color32__ctor_m2383_MethodInfo;
extern MethodInfo Vector4__ctor_m2419_MethodInfo;
extern MethodInfo Vector3_get_zero_m395_MethodInfo;
extern MethodInfo Vector3_get_back_m6191_MethodInfo;
extern MethodInfo Vector2_get_zero_m2271_MethodInfo;


// System.Void UnityEngine.UIVertex::.cctor()
extern MethodInfo UIVertex__cctor_m6628_MethodInfo;
extern "C" void UIVertex__cctor_m6628 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	UIVertex_t380  V_0 = {0};
	{
		Color32_t479  L_0 = {0};
		Color32__ctor_m2383(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/&Color32__ctor_m2383_MethodInfo);
		((UIVertex_t380_StaticFields*)InitializedTypeInfo(&UIVertex_t380_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t151  L_1 = {0};
		Vector4__ctor_m2419(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector4__ctor_m2419_MethodInfo);
		((UIVertex_t380_StaticFields*)InitializedTypeInfo(&UIVertex_t380_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (InitializedTypeInfo(&UIVertex_t380_il2cpp_TypeInfo), (&V_0));
		Vector3_t30  L_2 = Vector3_get_zero_m395(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m395_MethodInfo);
		(&V_0)->___position_0 = L_2;
		Vector3_t30  L_3 = Vector3_get_back_m6191(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m6191_MethodInfo);
		(&V_0)->___normal_1 = L_3;
		Vector4_t151  L_4 = ((UIVertex_t380_StaticFields*)InitializedTypeInfo(&UIVertex_t380_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t479  L_5 = ((UIVertex_t380_StaticFields*)InitializedTypeInfo(&UIVertex_t380_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t20  L_6 = Vector2_get_zero_m2271(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2271_MethodInfo);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t20  L_7 = Vector2_get_zero_m2271(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2271_MethodInfo);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t380  L_8 = V_0;
		((UIVertex_t380_StaticFields*)InitializedTypeInfo(&UIVertex_t380_il2cpp_TypeInfo)->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasRenderer_t355_il2cpp_TypeInfo;
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo ObjectU5BU5D_t164_il2cpp_TypeInfo;
extern TypeInfo UInt16_t862_il2cpp_TypeInfo;
extern Il2CppType ObjectU5BU5D_t164_0_0_0;
extern MethodInfo CanvasRenderer_INTERNAL_CALL_SetColor_m6629_MethodInfo;
extern MethodInfo List_1_get_Count_m2578_MethodInfo;
extern MethodInfo List_1_Clear_m2432_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternal_m6630_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternalArray_m6631_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m2578_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m2432_GenericMethod;


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern MethodInfo CanvasRenderer_SetColor_m2430_MethodInfo;
extern "C" void CanvasRenderer_SetColor_m2430 (CanvasRenderer_t355 * __this, Color_t118  ___color, MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m6629(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/&CanvasRenderer_INTERNAL_CALL_SetColor_m6629_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m6629 (Object_t * __this /* static, unused */, CanvasRenderer_t355 * ___self, Color_t118 * ___color, MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m6629_ftn) (CanvasRenderer_t355 *, Color_t118 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m6629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m6629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern MethodInfo CanvasRenderer_GetColor_m2428_MethodInfo;
extern "C" Color_t118  CanvasRenderer_GetColor_m2428 (CanvasRenderer_t355 * __this, MethodInfo* method)
{
	typedef Color_t118  (*CanvasRenderer_GetColor_m2428_ftn) (CanvasRenderer_t355 *);
	static CanvasRenderer_GetColor_m2428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m2428_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern MethodInfo CanvasRenderer_set_isMask_m2791_MethodInfo;
extern "C" void CanvasRenderer_set_isMask_m2791 (CanvasRenderer_t355 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m2791_ftn) (CanvasRenderer_t355 *, bool);
	static CanvasRenderer_set_isMask_m2791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m2791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern MethodInfo CanvasRenderer_SetMaterial_m2416_MethodInfo;
extern "C" void CanvasRenderer_SetMaterial_m2416 (CanvasRenderer_t355 * __this, Material_t116 * ___material, Texture_t33 * ___texture, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m2416_ftn) (CanvasRenderer_t355 *, Material_t116 *, Texture_t33 *);
	static CanvasRenderer_SetMaterial_m2416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m2416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern MethodInfo CanvasRenderer_SetVertices_m2415_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m2578_MethodInfo_var;
extern MethodInfo* List_1_Clear_m2432_MethodInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2415 (CanvasRenderer_t355 * __this, List_1_t361 * ___vertices, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2415_init;
	if (!CanvasRenderer_SetVertices_m2415_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		List_1_get_Count_m2578_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m2578_GenericMethod);
		List_1_Clear_m2432_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m2432_GenericMethod);
		CanvasRenderer_SetVertices_m2415_init = true;
	}
	{
		List_1_t361 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m2578_MethodInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t164* L_2 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(InitializedTypeInfo(&UInt16_t862_il2cpp_TypeInfo), &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m6346(NULL /*static, unused*/, (String_t*) &_stringLiteral508, L_2, /*hidden argument*/&UnityString_Format_m6346_MethodInfo);
		Debug_LogWarning_m2699(NULL /*static, unused*/, L_5, __this, /*hidden argument*/&Debug_LogWarning_m2699_MethodInfo);
		List_1_t361 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(List_1_Clear_m2432_MethodInfo_var, L_6);
	}

IL_0039:
	{
		List_1_t361 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m6630(__this, L_7, /*hidden argument*/&CanvasRenderer_SetVerticesInternal_m6630_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m6630 (CanvasRenderer_t355 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m6630_ftn) (CanvasRenderer_t355 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m6630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m6630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern MethodInfo CanvasRenderer_SetVertices_m2537_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2537 (CanvasRenderer_t355 * __this, UIVertexU5BU5D_t396* ___vertices, int32_t ___size, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2537_init;
	if (!CanvasRenderer_SetVertices_m2537_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		CanvasRenderer_SetVertices_m2537_init = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t164* L_1 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(InitializedTypeInfo(&UInt16_t862_il2cpp_TypeInfo), &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m6346(NULL /*static, unused*/, (String_t*) &_stringLiteral508, L_1, /*hidden argument*/&UnityString_Format_m6346_MethodInfo);
		Debug_LogWarning_m2699(NULL /*static, unused*/, L_4, __this, /*hidden argument*/&Debug_LogWarning_m2699_MethodInfo);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t396* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m6631(__this, L_5, L_6, /*hidden argument*/&CanvasRenderer_SetVerticesInternalArray_m6631_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m6631 (CanvasRenderer_t355 * __this, UIVertexU5BU5D_t396* ___vertices, int32_t ___size, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m6631_ftn) (CanvasRenderer_t355 *, UIVertexU5BU5D_t396*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m6631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m6631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern MethodInfo CanvasRenderer_Clear_m2409_MethodInfo;
extern "C" void CanvasRenderer_Clear_m2409 (CanvasRenderer_t355 * __this, MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m2409_ftn) (CanvasRenderer_t355 *);
	static CanvasRenderer_Clear_m2409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m2409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern MethodInfo CanvasRenderer_get_absoluteDepth_m2397_MethodInfo;
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2397 (CanvasRenderer_t355 * __this, MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m2397_ftn) (CanvasRenderer_t355 *);
	static CanvasRenderer_get_absoluteDepth_m2397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m2397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RectTransformUtility_t501_il2cpp_TypeInfo;
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
extern TypeInfo Vector3U5BU5D_t185_il2cpp_TypeInfo;
extern TypeInfo Ray_t136_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern Il2CppType Vector3U5BU5D_t185_0_0_0;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6633_MethodInfo;
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m6634_MethodInfo;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6635_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m2333_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToRay_m6637_MethodInfo;
extern MethodInfo Plane__ctor_m2545_MethodInfo;
extern MethodInfo Plane_Raycast_m2546_MethodInfo;
extern MethodInfo Ray_GetPoint_m2547_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToWorldPointInRectangle_m6636_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m2291_MethodInfo;
extern MethodInfo Ray__ctor_m6281_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutOnAxis_m2637_MethodInfo;
extern MethodInfo RectTransform_get_pivot_m2484_MethodInfo;
extern MethodInfo Vector2_get_Item_m2498_MethodInfo;
extern MethodInfo Vector2_set_Item_m2509_MethodInfo;
extern MethodInfo RectTransform_set_pivot_m2591_MethodInfo;
extern MethodInfo RectTransform_get_anchoredPosition_m2585_MethodInfo;
extern MethodInfo RectTransform_set_anchoredPosition_m2590_MethodInfo;
extern MethodInfo RectTransform_get_anchorMin_m2488_MethodInfo;
extern MethodInfo RectTransform_get_anchorMax_m2584_MethodInfo;
extern MethodInfo RectTransform_set_anchorMin_m2589_MethodInfo;
extern MethodInfo RectTransform_set_anchorMax_m2489_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutAxes_m2636_MethodInfo;
extern MethodInfo RectTransformUtility_GetTransposed_m6638_MethodInfo;
extern MethodInfo RectTransform_get_sizeDelta_m2586_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m2490_MethodInfo;


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern MethodInfo RectTransformUtility__cctor_m6632_MethodInfo;
extern TypeInfo* Vector3U5BU5D_t185_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m6632 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool RectTransformUtility__cctor_m6632_init;
	if (!RectTransformUtility__cctor_m6632_init)
	{
		Vector3U5BU5D_t185_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t185_0_0_0);
		RectTransformUtility__cctor_m6632_init = true;
	}
	{
		((RectTransformUtility_t501_StaticFields*)InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo)->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t185*)SZArrayNew(Vector3U5BU5D_t185_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo RectTransformUtility_RectangleContainsScreenPoint_m2459_MethodInfo;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2459 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, Vector2_t20  ___screenPoint, Camera_t2 * ___cam, MethodInfo* method)
{
	{
		RectTransform_t354 * L_0 = ___rect;
		Camera_t2 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo));
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6633(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6633_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6633 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, Vector2_t20 * ___screenPoint, Camera_t2 * ___cam, MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6633_ftn) (RectTransform_t354 *, Vector2_t20 *, Camera_t2 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m2426_MethodInfo;
extern "C" Vector2_t20  RectTransformUtility_PixelAdjustPoint_m2426 (Object_t * __this /* static, unused */, Vector2_t20  ___point, Transform_t6 * ___elementTransform, Canvas_t356 * ___canvas, MethodInfo* method)
{
	Vector2_t20  V_0 = {0};
	{
		Vector2_t20  L_0 = ___point;
		Transform_t6 * L_1 = ___elementTransform;
		Canvas_t356 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo));
		RectTransformUtility_PixelAdjustPoint_m6634(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/&RectTransformUtility_PixelAdjustPoint_m6634_MethodInfo);
		Vector2_t20  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m6634 (Object_t * __this /* static, unused */, Vector2_t20  ___point, Transform_t6 * ___elementTransform, Canvas_t356 * ___canvas, Vector2_t20 * ___output, MethodInfo* method)
{
	{
		Transform_t6 * L_0 = ___elementTransform;
		Canvas_t356 * L_1 = ___canvas;
		Vector2_t20 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo));
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6635(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6635_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6635 (Object_t * __this /* static, unused */, Vector2_t20 * ___point, Transform_t6 * ___elementTransform, Canvas_t356 * ___canvas, Vector2_t20 * ___output, MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6635_ftn) (Vector2_t20 *, Transform_t6 *, Canvas_t356 *, Vector2_t20 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6635_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6635_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustRect_m2427_MethodInfo;
extern "C" Rect_t32  RectTransformUtility_PixelAdjustRect_m2427 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rectTransform, Canvas_t356 * ___canvas, MethodInfo* method)
{
	typedef Rect_t32  (*RectTransformUtility_PixelAdjustRect_m2427_ftn) (RectTransform_t354 *, Canvas_t356 *);
	static RectTransformUtility_PixelAdjustRect_m2427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m2427_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m6636 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, Vector2_t20  ___screenPoint, Camera_t2 * ___cam, Vector3_t30 * ___worldPoint, MethodInfo* method)
{
	Ray_t136  V_0 = {0};
	Plane_t515  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t30 * L_0 = ___worldPoint;
		Vector2_t20  L_1 = Vector2_get_zero_m2271(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2271_MethodInfo);
		Vector3_t30  L_2 = Vector2_op_Implicit_m2333(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector2_op_Implicit_m2333_MethodInfo);
		*L_0 = L_2;
		Camera_t2 * L_3 = ___cam;
		Vector2_t20  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo));
		Ray_t136  L_5 = RectTransformUtility_ScreenPointToRay_m6637(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&RectTransformUtility_ScreenPointToRay_m6637_MethodInfo);
		V_0 = L_5;
		RectTransform_t354 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t54  L_7 = Transform_get_rotation_m516(L_6, /*hidden argument*/&Transform_get_rotation_m516_MethodInfo);
		Vector3_t30  L_8 = Vector3_get_back_m6191(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m6191_MethodInfo);
		Vector3_t30  L_9 = Quaternion_op_Multiply_m523(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Quaternion_op_Multiply_m523_MethodInfo);
		RectTransform_t354 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t30  L_11 = Transform_get_position_m511(L_10, /*hidden argument*/&Transform_get_position_m511_MethodInfo);
		Plane__ctor_m2545((&V_1), L_9, L_11, /*hidden argument*/&Plane__ctor_m2545_MethodInfo);
		Ray_t136  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2546((&V_1), L_12, (&V_2), /*hidden argument*/&Plane_Raycast_m2546_MethodInfo);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t30 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t30  L_16 = Ray_GetPoint_m2547((&V_0), L_15, /*hidden argument*/&Ray_GetPoint_m2547_MethodInfo);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern MethodInfo RectTransformUtility_ScreenPointToLocalPointInRectangle_m2502_MethodInfo;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2502 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, Vector2_t20  ___screenPoint, Camera_t2 * ___cam, Vector2_t20 * ___localPoint, MethodInfo* method)
{
	Vector3_t30  V_0 = {0};
	{
		Vector2_t20 * L_0 = ___localPoint;
		Vector2_t20  L_1 = Vector2_get_zero_m2271(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2271_MethodInfo);
		*L_0 = L_1;
		RectTransform_t354 * L_2 = ___rect;
		Vector2_t20  L_3 = ___screenPoint;
		Camera_t2 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo));
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m6636(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/&RectTransformUtility_ScreenPointToWorldPointInRectangle_m6636_MethodInfo);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t20 * L_6 = ___localPoint;
		RectTransform_t354 * L_7 = ___rect;
		Vector3_t30  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t30  L_9 = Transform_InverseTransformPoint_m2544(L_7, L_8, /*hidden argument*/&Transform_InverseTransformPoint_m2544_MethodInfo);
		Vector2_t20  L_10 = Vector2_op_Implicit_m2291(NULL /*static, unused*/, L_9, /*hidden argument*/&Vector2_op_Implicit_m2291_MethodInfo);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t136  RectTransformUtility_ScreenPointToRay_m6637 (Object_t * __this /* static, unused */, Camera_t2 * ___cam, Vector2_t20  ___screenPos, MethodInfo* method)
{
	Vector3_t30  V_0 = {0};
	{
		Camera_t2 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m388(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t2 * L_2 = ___cam;
		Vector2_t20  L_3 = ___screenPos;
		Vector3_t30  L_4 = Vector2_op_Implicit_m2333(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector2_op_Implicit_m2333_MethodInfo);
		NullCheck(L_2);
		Ray_t136  L_5 = Camera_ScreenPointToRay_m658(L_2, L_4, /*hidden argument*/&Camera_ScreenPointToRay_m658_MethodInfo);
		return L_5;
	}

IL_0019:
	{
		Vector2_t20  L_6 = ___screenPos;
		Vector3_t30  L_7 = Vector2_op_Implicit_m2333(NULL /*static, unused*/, L_6, /*hidden argument*/&Vector2_op_Implicit_m2333_MethodInfo);
		V_0 = L_7;
		Vector3_t30 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t30  L_10 = V_0;
		Vector3_t30  L_11 = Vector3_get_forward_m522(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m522_MethodInfo);
		Ray_t136  L_12 = {0};
		Ray__ctor_m6281(&L_12, L_10, L_11, /*hidden argument*/&Ray__ctor_m6281_MethodInfo);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2637 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t354 * V_1 = {0};
	Vector2_t20  V_2 = {0};
	Vector2_t20  V_3 = {0};
	Vector2_t20  V_4 = {0};
	Vector2_t20  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t354 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m382(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Equality_m382_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t354 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t6 * L_5 = Transform_GetChild_m2765(L_3, L_4, /*hidden argument*/&Transform_GetChild_m2765_MethodInfo);
		V_1 = ((RectTransform_t354 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t354_il2cpp_TypeInfo)));
		RectTransform_t354 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m388(NULL /*static, unused*/, L_6, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t354 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutOnAxis_m2637(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutOnAxis_m2637_MethodInfo);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t354 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m996(L_12, /*hidden argument*/&Transform_get_childCount_m996_MethodInfo);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t354 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t20  L_15 = RectTransform_get_pivot_m2484(L_14, /*hidden argument*/&RectTransform_get_pivot_m2484_MethodInfo);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m2498((&V_2), L_17, /*hidden argument*/&Vector2_get_Item_m2498_MethodInfo);
		Vector2_set_Item_m2509((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/&Vector2_set_Item_m2509_MethodInfo);
		RectTransform_t354 * L_19 = ___rect;
		Vector2_t20  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m2591(L_19, L_20, /*hidden argument*/&RectTransform_set_pivot_m2591_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t354 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t20  L_23 = RectTransform_get_anchoredPosition_m2585(L_22, /*hidden argument*/&RectTransform_get_anchoredPosition_m2585_MethodInfo);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m2498((&V_3), L_25, /*hidden argument*/&Vector2_get_Item_m2498_MethodInfo);
		Vector2_set_Item_m2509((&V_3), L_24, ((-L_26)), /*hidden argument*/&Vector2_set_Item_m2509_MethodInfo);
		RectTransform_t354 * L_27 = ___rect;
		Vector2_t20  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m2590(L_27, L_28, /*hidden argument*/&RectTransform_set_anchoredPosition_m2590_MethodInfo);
		RectTransform_t354 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t20  L_30 = RectTransform_get_anchorMin_m2488(L_29, /*hidden argument*/&RectTransform_get_anchorMin_m2488_MethodInfo);
		V_4 = L_30;
		RectTransform_t354 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t20  L_32 = RectTransform_get_anchorMax_m2584(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2584_MethodInfo);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m2498((&V_4), L_33, /*hidden argument*/&Vector2_get_Item_m2498_MethodInfo);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m2498((&V_5), L_36, /*hidden argument*/&Vector2_get_Item_m2498_MethodInfo);
		Vector2_set_Item_m2509((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/&Vector2_set_Item_m2509_MethodInfo);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m2509((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/&Vector2_set_Item_m2509_MethodInfo);
		RectTransform_t354 * L_40 = ___rect;
		Vector2_t20  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m2589(L_40, L_41, /*hidden argument*/&RectTransform_set_anchorMin_m2589_MethodInfo);
		RectTransform_t354 * L_42 = ___rect;
		Vector2_t20  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m2489(L_42, L_43, /*hidden argument*/&RectTransform_set_anchorMax_m2489_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m2636 (Object_t * __this /* static, unused */, RectTransform_t354 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t354 * V_1 = {0};
	{
		RectTransform_t354 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m382(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Equality_m382_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t354 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t6 * L_5 = Transform_GetChild_m2765(L_3, L_4, /*hidden argument*/&Transform_GetChild_m2765_MethodInfo);
		V_1 = ((RectTransform_t354 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t354_il2cpp_TypeInfo)));
		RectTransform_t354 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m388(NULL /*static, unused*/, L_6, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t354 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutAxes_m2636(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutAxes_m2636_MethodInfo);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t354 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m996(L_11, /*hidden argument*/&Transform_get_childCount_m996_MethodInfo);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t354 * L_13 = ___rect;
		RectTransform_t354 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t20  L_15 = RectTransform_get_pivot_m2484(L_14, /*hidden argument*/&RectTransform_get_pivot_m2484_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo));
		Vector2_t20  L_16 = RectTransformUtility_GetTransposed_m6638(NULL /*static, unused*/, L_15, /*hidden argument*/&RectTransformUtility_GetTransposed_m6638_MethodInfo);
		NullCheck(L_13);
		RectTransform_set_pivot_m2591(L_13, L_16, /*hidden argument*/&RectTransform_set_pivot_m2591_MethodInfo);
		RectTransform_t354 * L_17 = ___rect;
		RectTransform_t354 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t20  L_19 = RectTransform_get_sizeDelta_m2586(L_18, /*hidden argument*/&RectTransform_get_sizeDelta_m2586_MethodInfo);
		Vector2_t20  L_20 = RectTransformUtility_GetTransposed_m6638(NULL /*static, unused*/, L_19, /*hidden argument*/&RectTransformUtility_GetTransposed_m6638_MethodInfo);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m2490(L_17, L_20, /*hidden argument*/&RectTransform_set_sizeDelta_m2490_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t354 * L_22 = ___rect;
		RectTransform_t354 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t20  L_24 = RectTransform_get_anchoredPosition_m2585(L_23, /*hidden argument*/&RectTransform_get_anchoredPosition_m2585_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t501_il2cpp_TypeInfo));
		Vector2_t20  L_25 = RectTransformUtility_GetTransposed_m6638(NULL /*static, unused*/, L_24, /*hidden argument*/&RectTransformUtility_GetTransposed_m6638_MethodInfo);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m2590(L_22, L_25, /*hidden argument*/&RectTransform_set_anchoredPosition_m2590_MethodInfo);
		RectTransform_t354 * L_26 = ___rect;
		RectTransform_t354 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t20  L_28 = RectTransform_get_anchorMin_m2488(L_27, /*hidden argument*/&RectTransform_get_anchorMin_m2488_MethodInfo);
		Vector2_t20  L_29 = RectTransformUtility_GetTransposed_m6638(NULL /*static, unused*/, L_28, /*hidden argument*/&RectTransformUtility_GetTransposed_m6638_MethodInfo);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m2589(L_26, L_29, /*hidden argument*/&RectTransform_set_anchorMin_m2589_MethodInfo);
		RectTransform_t354 * L_30 = ___rect;
		RectTransform_t354 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t20  L_32 = RectTransform_get_anchorMax_m2584(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2584_MethodInfo);
		Vector2_t20  L_33 = RectTransformUtility_GetTransposed_m6638(NULL /*static, unused*/, L_32, /*hidden argument*/&RectTransformUtility_GetTransposed_m6638_MethodInfo);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m2489(L_30, L_33, /*hidden argument*/&RectTransform_set_anchorMax_m2489_MethodInfo);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t20  RectTransformUtility_GetTransposed_m6638 (Object_t * __this /* static, unused */, Vector2_t20  ___input, MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t20  L_2 = {0};
		Vector2__ctor_m482(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m482_MethodInfo);
		return L_2;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WrapperlessIcall_t1087_il2cpp_TypeInfo;
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m4591_MethodInfo;


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern MethodInfo WrapperlessIcall__ctor_m6639_MethodInfo;
extern "C" void WrapperlessIcall__ctor_m6639 (WrapperlessIcall_t1087 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IL2CPPStructAlignmentAttribute_t1088_il2cpp_TypeInfo;
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern MethodInfo IL2CPPStructAlignmentAttribute__ctor_m6640_MethodInfo;
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m6640 (IL2CPPStructAlignmentAttribute_t1088 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AttributeHelperEngine_t1092_il2cpp_TypeInfo;
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
extern TypeInfo DisallowMultipleComponentU5BU5D_t1089_il2cpp_TypeInfo;
extern TypeInfo DisallowMultipleComponent_t561_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditModeU5BU5D_t1090_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditMode_t562_il2cpp_TypeInfo;
extern TypeInfo RequireComponentU5BU5D_t1091_il2cpp_TypeInfo;
extern TypeInfo RequireComponent_t212_il2cpp_TypeInfo;
extern TypeInfo Stack_1_t1161_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t913_il2cpp_TypeInfo;
extern TypeInfo List_1_t815_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"
extern Il2CppType DisallowMultipleComponentU5BU5D_t1089_0_0_0;
extern Il2CppType ExecuteInEditModeU5BU5D_t1090_0_0_0;
extern Il2CppType RequireComponentU5BU5D_t1091_0_0_0;
extern Il2CppType Stack_1_t1161_0_0_0;
extern Il2CppType MonoBehaviour_t8_0_0_0;
extern Il2CppType DisallowMultipleComponent_t561_0_0_0;
extern Il2CppType RequireComponent_t212_0_0_0;
extern Il2CppType TypeU5BU5D_t913_0_0_0;
extern Il2CppType List_1_t815_0_0_0;
extern Il2CppType ExecuteInEditMode_t562_0_0_0;
extern MethodInfo Stack_1__ctor_m6908_MethodInfo;
extern MethodInfo Type_get_BaseType_m6909_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m6910_MethodInfo;
extern MethodInfo Stack_1_get_Count_m6911_MethodInfo;
extern MethodInfo List_1__ctor_m5439_MethodInfo;
extern MethodInfo List_1_Add_m6912_MethodInfo;
extern Il2CppGenericMethod Stack_1__ctor_m6908_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m6913_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m6914_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m6911_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m5439_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m6912_GenericMethod;
extern Il2CppGenericMethod List_1_ToArray_m6915_GenericMethod;


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern MethodInfo AttributeHelperEngine__cctor_m6641_MethodInfo;
extern TypeInfo* DisallowMultipleComponentU5BU5D_t1089_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t1090_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t1091_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m6641 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool AttributeHelperEngine__cctor_m6641_init;
	if (!AttributeHelperEngine__cctor_m6641_init)
	{
		DisallowMultipleComponentU5BU5D_t1089_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisallowMultipleComponentU5BU5D_t1089_0_0_0);
		ExecuteInEditModeU5BU5D_t1090_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ExecuteInEditModeU5BU5D_t1090_0_0_0);
		RequireComponentU5BU5D_t1091_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&RequireComponentU5BU5D_t1091_0_0_0);
		AttributeHelperEngine__cctor_m6641_init = true;
	}
	{
		((AttributeHelperEngine_t1092_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t1092_il2cpp_TypeInfo)->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t1089*)SZArrayNew(DisallowMultipleComponentU5BU5D_t1089_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t1092_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t1092_il2cpp_TypeInfo)->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t1090*)SZArrayNew(ExecuteInEditModeU5BU5D_t1090_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t1092_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t1092_il2cpp_TypeInfo)->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t1091*)SZArrayNew(RequireComponentU5BU5D_t1091_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern MethodInfo AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6642_MethodInfo;
extern TypeInfo* Stack_1_t1161_il2cpp_TypeInfo_var;
extern MethodInfo* Stack_1__ctor_m6908_MethodInfo_var;
extern MethodInfo* Stack_1_Push_m6913_MethodInfo_var;
extern MethodInfo* Stack_1_Pop_m6914_MethodInfo_var;
extern MethodInfo* Stack_1_get_Count_m6911_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6642 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6642_init;
	if (!AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6642_init)
	{
		Stack_1_t1161_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Stack_1_t1161_0_0_0);
		Stack_1__ctor_m6908_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1__ctor_m6908_GenericMethod);
		Stack_1_Push_m6913_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Push_m6913_GenericMethod);
		Stack_1_Pop_m6914_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Pop_m6914_GenericMethod);
		Stack_1_get_Count_m6911_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_get_Count_m6911_GenericMethod);
		AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6642_init = true;
	}
	Stack_1_t1161 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t164* V_2 = {0};
	{
		Stack_1_t1161 * L_0 = (Stack_1_t1161 *)il2cpp_codegen_object_new (Stack_1_t1161_il2cpp_TypeInfo_var);
		Stack_1__ctor_m6908(L_0, /*hidden argument*/Stack_1__ctor_m6908_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t1161 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m6913(L_1, L_2, /*hidden argument*/Stack_1_Push_m6913_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m6909_MethodInfo, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_7 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t8_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t1161 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m6914(L_8, /*hidden argument*/Stack_1_Pop_m6914_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&DisallowMultipleComponent_t561_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_10);
		ObjectU5BU5D_t164* L_12 = (ObjectU5BU5D_t164*)VirtFuncInvoker2< ObjectU5BU5D_t164*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m6910_MethodInfo, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t164* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t1161 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Stack_1_get_Count_m6911_MethodInfo_var, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern MethodInfo AttributeHelperEngine_GetRequiredComponents_m6643_MethodInfo;
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t815_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m5439_MethodInfo_var;
extern MethodInfo* List_1_Add_m6912_MethodInfo_var;
extern MethodInfo* List_1_ToArray_m6915_MethodInfo_var;
extern "C" TypeU5BU5D_t913* AttributeHelperEngine_GetRequiredComponents_m6643 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetRequiredComponents_m6643_init;
	if (!AttributeHelperEngine_GetRequiredComponents_m6643_init)
	{
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		List_1_t815_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t815_0_0_0);
		List_1__ctor_m5439_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m5439_GenericMethod);
		List_1_Add_m6912_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m6912_GenericMethod);
		List_1_ToArray_m6915_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_ToArray_m6915_GenericMethod);
		AttributeHelperEngine_GetRequiredComponents_m6643_init = true;
	}
	List_1_t815 * V_0 = {0};
	ObjectU5BU5D_t164* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t212 * V_3 = {0};
	TypeU5BU5D_t913* V_4 = {0};
	{
		V_0 = (List_1_t815 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&RequireComponent_t212_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t164* L_2 = (ObjectU5BU5D_t164*)VirtFuncInvoker2< ObjectU5BU5D_t164*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m6910_MethodInfo, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t164* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t212 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), InitializedTypeInfo(&RequireComponent_t212_il2cpp_TypeInfo)));
		List_1_t815 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t164* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m6909_MethodInfo, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_10 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t8_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t913* L_11 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 3));
		RequireComponent_t212 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t913* L_14 = L_11;
		RequireComponent_t212 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t913* L_17 = L_14;
		RequireComponent_t212 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t913* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t815 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t815_il2cpp_TypeInfo_var);
		List_1_t815 * L_22 = (List_1_t815 *)il2cpp_codegen_object_new (List_1_t815_il2cpp_TypeInfo_var);
		List_1__ctor_m5439(L_22, /*hidden argument*/List_1__ctor_m5439_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t212 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t815 * L_25 = V_0;
		RequireComponent_t212 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m6912_MethodInfo_var, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t212 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t815 * L_30 = V_0;
		RequireComponent_t212 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m6912_MethodInfo_var, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t212 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t815 * L_35 = V_0;
		RequireComponent_t212 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m6912_MethodInfo_var, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t164* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m6909_MethodInfo, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_45 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t8_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t815 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t913*)NULL;
	}

IL_00f7:
	{
		List_1_t815 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t913* L_48 = List_1_ToArray_m6915(L_47, /*hidden argument*/List_1_ToArray_m6915_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern MethodInfo AttributeHelperEngine_CheckIsEditorScript_m6644_MethodInfo;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m6644 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	ObjectU5BU5D_t164* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&ExecuteInEditMode_t562_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t164* L_2 = (ObjectU5BU5D_t164*)VirtFuncInvoker2< ObjectU5BU5D_t164*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m6910_MethodInfo, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t164* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m6909_MethodInfo, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t8_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern MethodInfo DisallowMultipleComponent__ctor_m2855_MethodInfo;
extern "C" void DisallowMultipleComponent__ctor_m2855 (DisallowMultipleComponent_t561 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern MethodInfo RequireComponent__ctor_m746_MethodInfo;
extern "C" void RequireComponent__ctor_m746 (RequireComponent_t212 * __this, Type_t * ___requiredComponent, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AddComponentMenu_t213_il2cpp_TypeInfo;
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern MethodInfo AddComponentMenu__ctor_m747_MethodInfo;
extern "C" void AddComponentMenu__ctor_m747 (AddComponentMenu_t213 * __this, String_t* ___menuName, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern MethodInfo AddComponentMenu__ctor_m2853_MethodInfo;
extern "C" void AddComponentMenu__ctor_m2853 (AddComponentMenu_t213 * __this, String_t* ___menuName, int32_t ___order, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"



// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern MethodInfo ExecuteInEditMode__ctor_m2856_MethodInfo;
extern "C" void ExecuteInEditMode__ctor_m2856 (ExecuteInEditMode_t562 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideInInspector_t236_il2cpp_TypeInfo;
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"



// System.Void UnityEngine.HideInInspector::.ctor()
extern MethodInfo HideInInspector__ctor_m961_MethodInfo;
extern "C" void HideInInspector__ctor_m961 (HideInInspector_t236 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SetupCoroutine_t1093_il2cpp_TypeInfo;
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo BindingFlags_t169_il2cpp_TypeInfo;
extern TypeInfo Binder_t1162_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t1163_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t1164_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t1165_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t43_il2cpp_TypeInfo;
extern MethodInfo Object_GetType_m568_MethodInfo;
extern MethodInfo Type_InvokeMember_m6916_MethodInfo;


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern MethodInfo SetupCoroutine__ctor_m6645_MethodInfo;
extern "C" void SetupCoroutine__ctor_m6645 (SetupCoroutine_t1093 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeMember_m6646_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m6646 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeMember_m6646_init;
	if (!SetupCoroutine_InvokeMember_m6646_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		SetupCoroutine_InvokeMember_m6646_init = true;
	}
	ObjectU5BU5D_t164* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t164*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t164* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m568(L_3, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t164* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t1162 *, Object_t *, ObjectU5BU5D_t164*, ParameterModifierU5BU5D_t1163*, CultureInfo_t1165 *, StringU5BU5D_t43* >::Invoke(&Type_InvokeMember_m6916_MethodInfo, L_4, L_5, ((int32_t)308), (Binder_t1162 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t1163*)(ParameterModifierU5BU5D_t1163*)NULL, (CultureInfo_t1165 *)NULL, (StringU5BU5D_t43*)(StringU5BU5D_t43*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeStatic_m6647_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m6647 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeStatic_m6647_init;
	if (!SetupCoroutine_InvokeStatic_m6647_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		SetupCoroutine_InvokeStatic_m6647_init = true;
	}
	ObjectU5BU5D_t164* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t164*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t164* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t164* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t1162 *, Object_t *, ObjectU5BU5D_t164*, ParameterModifierU5BU5D_t1163*, CultureInfo_t1165 *, StringU5BU5D_t43* >::Invoke(&Type_InvokeMember_m6916_MethodInfo, L_3, L_4, ((int32_t)312), (Binder_t1162 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t1163*)(ParameterModifierU5BU5D_t1163*)NULL, (CultureInfo_t1165 *)NULL, (StringU5BU5D_t43*)(StringU5BU5D_t43*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WritableAttribute_t1094_il2cpp_TypeInfo;
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern MethodInfo WritableAttribute__ctor_m6648_MethodInfo;
extern "C" void WritableAttribute__ctor_m6648 (WritableAttribute_t1094 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyIsEditorAssembly_t1095_il2cpp_TypeInfo;
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern MethodInfo AssemblyIsEditorAssembly__ctor_m6649_MethodInfo;
extern "C" void AssemblyIsEditorAssembly__ctor_m6649 (AssemblyIsEditorAssembly_t1095 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcUserProfileData_t986_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
extern TypeInfo UserProfile_t1096_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern MethodInfo UserProfile__ctor_m6663_MethodInfo;
extern MethodInfo GcUserProfileData_ToUserProfile_m6650_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t1096 * GcUserProfileData_ToUserProfile_m6650 (GcUserProfileData_t986 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t51 * L_3 = (__this->___image_3);
		UserProfile_t1096 * L_4 = (UserProfile_t1096 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UserProfile_t1096_il2cpp_TypeInfo));
		UserProfile__ctor_m6663(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/&UserProfile__ctor_m6663_MethodInfo);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern MethodInfo GcUserProfileData_AddToArray_m6651_MethodInfo;
extern "C" void GcUserProfileData_AddToArray_m6651 (GcUserProfileData_t986 * __this, UserProfileU5BU5D_t974** ___array, int32_t ___number, MethodInfo* method)
{
	{
		UserProfileU5BU5D_t974** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t974**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t974**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t974** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t1096 * L_5 = GcUserProfileData_ToUserProfile_m6650(__this, /*hidden argument*/&GcUserProfileData_ToUserProfile_m6650_MethodInfo);
		NullCheck((*((UserProfileU5BU5D_t974**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t974**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t974**)L_3)), L_5);
		*((UserProfile_t1096 **)(UserProfile_t1096 **)SZArrayLdElema((*((UserProfileU5BU5D_t974**)L_3)), L_4)) = (UserProfile_t1096 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m472(NULL /*static, unused*/, (String_t*) &_stringLiteral509, /*hidden argument*/&Debug_Log_m472_MethodInfo);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcAchievementDescriptionData_t985_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
extern TypeInfo AchievementDescription_t1097_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern MethodInfo AchievementDescription__ctor_m6683_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern MethodInfo GcAchievementDescriptionData_ToAchievementDescription_m6652_MethodInfo;
extern "C" AchievementDescription_t1097 * GcAchievementDescriptionData_ToAchievementDescription_m6652 (GcAchievementDescriptionData_t985 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t51 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t51 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t51 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t51 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t1097 * L_7 = (AchievementDescription_t1097 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AchievementDescription_t1097_il2cpp_TypeInfo));
		AchievementDescription__ctor_m6683(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/&AchievementDescription__ctor_m6683_MethodInfo);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcAchievementData_t980_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Double
#include "mscorlib_System_Double.h"
extern TypeInfo Achievement_t1098_il2cpp_TypeInfo;
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern MethodInfo DateTime__ctor_m6917_MethodInfo;
extern MethodInfo DateTime_AddSeconds_m6918_MethodInfo;
extern MethodInfo Achievement__ctor_m6672_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern MethodInfo GcAchievementData_ToAchievement_m6653_MethodInfo;
extern "C" Achievement_t1098 * GcAchievementData_ToAchievement_m6653 (GcAchievementData_t980 * __this, MethodInfo* method)
{
	DateTime_t31  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m6917((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m6917_MethodInfo);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t31  L_5 = DateTime_AddSeconds_m6918((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m6918_MethodInfo);
		Achievement_t1098 * L_6 = (Achievement_t1098 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Achievement_t1098_il2cpp_TypeInfo));
		Achievement__ctor_m6672(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/&Achievement__ctor_m6672_MethodInfo);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t980_marshal(const GcAchievementData_t980& unmarshaled, GcAchievementData_t980_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t980_marshal_back(const GcAchievementData_t980_marshaled& marshaled, GcAchievementData_t980& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t980_marshal_cleanup(GcAchievementData_t980_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcScoreData_t982_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
extern TypeInfo Score_t1099_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern MethodInfo Score__ctor_m6694_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern MethodInfo GcScoreData_ToScore_m6654_MethodInfo;
extern "C" Score_t1099 * GcScoreData_ToScore_m6654 (GcScoreData_t982 * __this, MethodInfo* method)
{
	DateTime_t31  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m6917((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m6917_MethodInfo);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t31  L_5 = DateTime_AddSeconds_m6918((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m6918_MethodInfo);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t1099 * L_8 = (Score_t1099 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t1099_il2cpp_TypeInfo));
		Score__ctor_m6694(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/&Score__ctor_m6694_MethodInfo);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t982_marshal(const GcScoreData_t982& unmarshaled, GcScoreData_t982_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t982_marshal_back(const GcScoreData_t982_marshaled& marshaled, GcScoreData_t982& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t982_marshal_cleanup(GcScoreData_t982_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderBuffer_t1049_il2cpp_TypeInfo;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraClearFlags_t1100_il2cpp_TypeInfo;
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScreenOrientation_t222_il2cpp_TypeInfo;
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientationMethodDeclarations.h"



// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FilterMode_t1101_il2cpp_TypeInfo;
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterModeMethodDeclarations.h"



// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextureWrapMode_t1102_il2cpp_TypeInfo;
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapModeMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextureFormat_t937_il2cpp_TypeInfo;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderTextureFormat_t1103_il2cpp_TypeInfo;
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormatMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
