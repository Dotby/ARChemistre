﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"
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
extern TypeInfo RenderTextureReadWrite_t1104_il2cpp_TypeInfo;
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWriteMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReflectionProbeBlendInfo_t1105_il2cpp_TypeInfo;
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjects.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIStateObjects_t1107_il2cpp_TypeInfo;
// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjectsMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Dictionary_2_t1106_il2cpp_TypeInfo;
extern TypeInfo Boolean_t147_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t133_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern Il2CppType Dictionary_2_t1106_0_0_0;
extern MethodInfo Dictionary_2__ctor_m6919_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m6920_MethodInfo;
extern MethodInfo Object_GetType_m568_MethodInfo;
extern MethodInfo Activator_CreateInstance_m6868_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m6921_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m6919_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m6920_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m6921_GenericMethod;


// System.Void UnityEngine.GUIStateObjects::.cctor()
extern MethodInfo GUIStateObjects__cctor_m6655_MethodInfo;
extern TypeInfo* Dictionary_2_t1106_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m6919_MethodInfo_var;
extern "C" void GUIStateObjects__cctor_m6655 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool GUIStateObjects__cctor_m6655_init;
	if (!GUIStateObjects__cctor_m6655_init)
	{
		Dictionary_2_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t1106_0_0_0);
		Dictionary_2__ctor_m6919_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m6919_GenericMethod);
		GUIStateObjects__cctor_m6655_init = true;
	}
	{
		Dictionary_2_t1106 * L_0 = (Dictionary_2_t1106 *)il2cpp_codegen_object_new (Dictionary_2_t1106_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6919(L_0, /*hidden argument*/Dictionary_2__ctor_m6919_MethodInfo_var);
		((GUIStateObjects_t1107_StaticFields*)InitializedTypeInfo(&GUIStateObjects_t1107_il2cpp_TypeInfo)->static_fields)->___s_StateCache_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.GUIStateObjects::GetStateObject(System.Type,System.Int32)
extern MethodInfo GUIStateObjects_GetStateObject_m6656_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m6920_MethodInfo_var;
extern MethodInfo* Dictionary_2_set_Item_m6921_MethodInfo_var;
extern "C" Object_t * GUIStateObjects_GetStateObject_m6656 (Object_t * __this /* static, unused */, Type_t * ___t, int32_t ___controlID, MethodInfo* method)
{
	static bool GUIStateObjects_GetStateObject_m6656_init;
	if (!GUIStateObjects_GetStateObject_m6656_init)
	{
		Dictionary_2_TryGetValue_m6920_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m6920_GenericMethod);
		Dictionary_2_set_Item_m6921_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m6921_GenericMethod);
		GUIStateObjects_GetStateObject_m6656_init = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStateObjects_t1107_il2cpp_TypeInfo));
		Dictionary_2_t1106 * L_0 = ((GUIStateObjects_t1107_StaticFields*)InitializedTypeInfo(&GUIStateObjects_t1107_il2cpp_TypeInfo)->static_fields)->___s_StateCache_0;
		int32_t L_1 = ___controlID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, Object_t ** >::Invoke(Dictionary_2_TryGetValue_m6920_MethodInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m568(L_3, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		Type_t * L_5 = ___t;
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0031;
		}
	}

IL_001e:
	{
		Type_t * L_6 = ___t;
		Object_t * L_7 = Activator_CreateInstance_m6868(NULL /*static, unused*/, L_6, /*hidden argument*/&Activator_CreateInstance_m6868_MethodInfo);
		V_0 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStateObjects_t1107_il2cpp_TypeInfo));
		Dictionary_2_t1106 * L_8 = ((GUIStateObjects_t1107_StaticFields*)InitializedTypeInfo(&GUIStateObjects_t1107_il2cpp_TypeInfo)->static_fields)->___s_StateCache_0;
		int32_t L_9 = ___controlID;
		Object_t * L_10 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(Dictionary_2_set_Item_m6921_MethodInfo_var, L_8, L_9, L_10);
	}

IL_0031:
	{
		Object_t * L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LocalUser_t975_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
extern TypeInfo UserProfileU5BU5D_t974_il2cpp_TypeInfo;
extern TypeInfo UserProfile_t1096_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern Il2CppType UserProfileU5BU5D_t974_0_0_0;
extern MethodInfo UserProfile__ctor_m6662_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern MethodInfo LocalUser__ctor_m6657_MethodInfo;
extern TypeInfo* UserProfileU5BU5D_t974_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m6657 (LocalUser_t975 * __this, MethodInfo* method)
{
	static bool LocalUser__ctor_m6657_init;
	if (!LocalUser__ctor_m6657_init)
	{
		UserProfileU5BU5D_t974_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t974_0_0_0);
		LocalUser__ctor_m6657_init = true;
	}
	{
		UserProfile__ctor_m6662(__this, /*hidden argument*/&UserProfile__ctor_m6662_MethodInfo);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t1108*)((UserProfileU5BU5D_t974*)SZArrayNew(UserProfileU5BU5D_t974_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern MethodInfo LocalUser_SetFriends_m6658_MethodInfo;
extern "C" void LocalUser_SetFriends_m6658 (LocalUser_t975 * __this, IUserProfileU5BU5D_t1108* ___friends, MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t1108* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern MethodInfo LocalUser_SetAuthenticated_m6659_MethodInfo;
extern "C" void LocalUser_SetAuthenticated_m6659 (LocalUser_t975 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern MethodInfo LocalUser_SetUnderage_m6660_MethodInfo;
extern "C" void LocalUser_SetUnderage_m6660 (LocalUser_t975 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern MethodInfo LocalUser_get_authenticated_m6661_MethodInfo;
extern "C" bool LocalUser_get_authenticated_m6661 (LocalUser_t975 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo Texture2D_t51_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t164_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo UserState_t1115_il2cpp_TypeInfo;
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t164_0_0_0;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern MethodInfo Texture2D__ctor_m4899_MethodInfo;
extern MethodInfo UserProfile_get_id_m6669_MethodInfo;
extern MethodInfo UserProfile_get_userName_m6668_MethodInfo;
extern MethodInfo UserProfile_get_isFriend_m6670_MethodInfo;
extern MethodInfo UserProfile_get_state_m6671_MethodInfo;
extern MethodInfo String_Concat_m621_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C" void UserProfile__ctor_m6662 (UserProfile_t1096 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral510;
		__this->___m_ID_1 = (String_t*) &_stringLiteral406;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t51 * L_0 = (Texture2D_t51 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t51_il2cpp_TypeInfo));
		Texture2D__ctor_m4899(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/&Texture2D__ctor_m4899_MethodInfo);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern MethodInfo UserProfile__ctor_m6663_MethodInfo;
extern "C" void UserProfile__ctor_m6663 (UserProfile_t1096 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t51 * ___image, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t51 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern MethodInfo UserProfile_ToString_m6664_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m6664 (UserProfile_t1096 * __this, MethodInfo* method)
{
	static bool UserProfile_ToString_m6664_init;
	if (!UserProfile_ToString_m6664_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		UserProfile_ToString_m6664_init = true;
	}
	{
		ObjectU5BU5D_t164* L_0 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_id_m6669_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t164* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_userName_m6668_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t164* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&UserProfile_get_isFriend_m6670_MethodInfo, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Boolean_t147_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t164* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&UserProfile_get_state_m6671_MethodInfo, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&UserState_t1115_il2cpp_TypeInfo), &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m621(NULL /*static, unused*/, L_11, /*hidden argument*/&String_Concat_m621_MethodInfo);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern MethodInfo UserProfile_SetUserName_m6665_MethodInfo;
extern "C" void UserProfile_SetUserName_m6665 (UserProfile_t1096 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern MethodInfo UserProfile_SetUserID_m6666_MethodInfo;
extern "C" void UserProfile_SetUserID_m6666 (UserProfile_t1096 * __this, String_t* ___id, MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern MethodInfo UserProfile_SetImage_m6667_MethodInfo;
extern "C" void UserProfile_SetImage_m6667 (UserProfile_t1096 * __this, Texture2D_t51 * ___image, MethodInfo* method)
{
	{
		Texture2D_t51 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m6668 (UserProfile_t1096 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m6669 (UserProfile_t1096 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m6670 (UserProfile_t1096 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m6671 (UserProfile_t1096 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Achievement_t1098_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
extern TypeInfo Double_t939_il2cpp_TypeInfo;
extern TypeInfo DateTime_t31_il2cpp_TypeInfo;
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
extern MethodInfo Achievement_set_id_m6677_MethodInfo;
extern MethodInfo Achievement_set_percentCompleted_m6679_MethodInfo;
extern MethodInfo Achievement__ctor_m6673_MethodInfo;
extern MethodInfo Achievement_get_id_m6676_MethodInfo;
extern MethodInfo Achievement_get_percentCompleted_m6678_MethodInfo;
extern MethodInfo Achievement_get_completed_m6680_MethodInfo;
extern MethodInfo Achievement_get_hidden_m6681_MethodInfo;
extern MethodInfo Achievement_get_lastReportedDate_m6682_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern MethodInfo Achievement__ctor_m6672_MethodInfo;
extern "C" void Achievement__ctor_m6672 (Achievement_t1098 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t31  ___lastReportedDate, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m6677_MethodInfo, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m6679_MethodInfo, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t31  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C" void Achievement__ctor_m6673 (Achievement_t1098 * __this, String_t* ___id, double ___percent, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m6677_MethodInfo, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m6679_MethodInfo, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t31_il2cpp_TypeInfo));
		DateTime_t31  L_2 = ((DateTime_t31_StaticFields*)InitializedTypeInfo(&DateTime_t31_il2cpp_TypeInfo)->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern MethodInfo Achievement__ctor_m6674_MethodInfo;
extern "C" void Achievement__ctor_m6674 (Achievement_t1098 * __this, MethodInfo* method)
{
	{
		Achievement__ctor_m6673(__this, (String_t*) &_stringLiteral512, (0.0), /*hidden argument*/&Achievement__ctor_m6673_MethodInfo);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern MethodInfo Achievement_ToString_m6675_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m6675 (Achievement_t1098 * __this, MethodInfo* method)
{
	static bool Achievement_ToString_m6675_init;
	if (!Achievement_ToString_m6675_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		Achievement_ToString_m6675_init = true;
	}
	{
		ObjectU5BU5D_t164* L_0 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Achievement_get_id_m6676_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t164* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(&Achievement_get_percentCompleted_m6678_MethodInfo, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Double_t939_il2cpp_TypeInfo), &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t164* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_completed_m6680_MethodInfo, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t147_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t164* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_hidden_m6681_MethodInfo, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Boolean_t147_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t164* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_18 = L_17;
		DateTime_t31  L_19 = (DateTime_t31 )VirtFuncInvoker0< DateTime_t31  >::Invoke(&Achievement_get_lastReportedDate_m6682_MethodInfo, __this);
		DateTime_t31  L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&DateTime_t31_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m621(NULL /*static, unused*/, L_18, /*hidden argument*/&String_Concat_m621_MethodInfo);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m6676 (Achievement_t1098 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m6677 (Achievement_t1098 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m6678 (Achievement_t1098 * __this, MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m6679 (Achievement_t1098 * __this, double ___value, MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m6680 (Achievement_t1098 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m6681 (Achievement_t1098 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t31  Achievement_get_lastReportedDate_m6682 (Achievement_t1098 * __this, MethodInfo* method)
{
	{
		DateTime_t31  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AchievementDescription_t1097_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"

extern MethodInfo AchievementDescription_set_id_m6687_MethodInfo;
extern MethodInfo AchievementDescription_get_id_m6686_MethodInfo;
extern MethodInfo AchievementDescription_get_title_m6688_MethodInfo;
extern MethodInfo AchievementDescription_get_achievedDescription_m6689_MethodInfo;
extern MethodInfo AchievementDescription_get_unachievedDescription_m6690_MethodInfo;
extern MethodInfo AchievementDescription_get_points_m6692_MethodInfo;
extern MethodInfo AchievementDescription_get_hidden_m6691_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern MethodInfo AchievementDescription__ctor_m6683_MethodInfo;
extern "C" void AchievementDescription__ctor_m6683 (AchievementDescription_t1097 * __this, String_t* ___id, String_t* ___title, Texture2D_t51 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&AchievementDescription_set_id_m6687_MethodInfo, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t51 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern MethodInfo AchievementDescription_ToString_m6684_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m6684 (AchievementDescription_t1097 * __this, MethodInfo* method)
{
	static bool AchievementDescription_ToString_m6684_init;
	if (!AchievementDescription_ToString_m6684_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		AchievementDescription_ToString_m6684_init = true;
	}
	{
		ObjectU5BU5D_t164* L_0 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_id_m6686_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t164* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_title_m6688_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t164* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_achievedDescription_m6689_MethodInfo, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t164* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_unachievedDescription_m6690_MethodInfo, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t164* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&AchievementDescription_get_points_m6692_MethodInfo, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t164* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral511;
		ObjectU5BU5D_t164* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&AchievementDescription_get_hidden_m6691_MethodInfo, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Boolean_t147_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m621(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m621_MethodInfo);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern MethodInfo AchievementDescription_SetImage_m6685_MethodInfo;
extern "C" void AchievementDescription_SetImage_m6685 (AchievementDescription_t1097 * __this, Texture2D_t51 * ___image, MethodInfo* method)
{
	{
		Texture2D_t51 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m6686 (AchievementDescription_t1097 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m6687 (AchievementDescription_t1097 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m6688 (AchievementDescription_t1097 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m6689 (AchievementDescription_t1097 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m6690 (AchievementDescription_t1097 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m6691 (AchievementDescription_t1097 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m6692 (AchievementDescription_t1097 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Score_t1099_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"
extern TypeInfo Int64_t1166_il2cpp_TypeInfo;
extern MethodInfo DateTime_get_Now_m465_MethodInfo;
extern MethodInfo Score__ctor_m6694_MethodInfo;
extern MethodInfo Score_set_leaderboardID_m6697_MethodInfo;
extern MethodInfo Score_set_value_m6699_MethodInfo;
extern MethodInfo Score_get_value_m6698_MethodInfo;
extern MethodInfo Score_get_leaderboardID_m6696_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern MethodInfo Score__ctor_m6693_MethodInfo;
extern "C" void Score__ctor_m6693 (Score_t1099 * __this, String_t* ___leaderboardID, int64_t ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t31_il2cpp_TypeInfo));
		DateTime_t31  L_2 = DateTime_get_Now_m465(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m465_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		Score__ctor_m6694(__this, L_0, L_1, (String_t*) &_stringLiteral406, L_2, L_3, (-1), /*hidden argument*/&Score__ctor_m6694_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m6694 (Score_t1099 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t31  ___date, String_t* ___formattedValue, int32_t ___rank, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(&Score_set_leaderboardID_m6697_MethodInfo, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(&Score_set_value_m6699_MethodInfo, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t31  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern MethodInfo Score_ToString_m6695_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m6695 (Score_t1099 * __this, MethodInfo* method)
{
	static bool Score_ToString_m6695_init;
	if (!Score_ToString_m6695_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		Score_ToString_m6695_init = true;
	}
	{
		ObjectU5BU5D_t164* L_0 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral513);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral513;
		ObjectU5BU5D_t164* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t164* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral514);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral514;
		ObjectU5BU5D_t164* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Score_get_value_m6698_MethodInfo, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int64_t1166_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t164* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral515);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral515;
		ObjectU5BU5D_t164* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Score_get_leaderboardID_m6696_MethodInfo, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t164* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral516);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral516;
		ObjectU5BU5D_t164* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t164* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral517);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral517;
		ObjectU5BU5D_t164* L_17 = L_16;
		DateTime_t31  L_18 = (__this->___m_Date_0);
		DateTime_t31  L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&DateTime_t31_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m621(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m621_MethodInfo);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m6696 (Score_t1099 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m6697 (Score_t1099 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m6698 (Score_t1099 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m6699 (Score_t1099 * __this, int64_t ___value, MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Leaderboard_t987_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern TypeInfo Range_t1111_il2cpp_TypeInfo;
extern TypeInfo UserScope_t1116_il2cpp_TypeInfo;
extern TypeInfo TimeScope_t1117_il2cpp_TypeInfo;
extern TypeInfo ScoreU5BU5D_t1152_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t43_il2cpp_TypeInfo;
extern TypeInfo UInt32_t1167_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
extern Il2CppType ScoreU5BU5D_t1152_0_0_0;
extern Il2CppType StringU5BU5D_t43_0_0_0;
extern MethodInfo Leaderboard_set_id_m6708_MethodInfo;
extern MethodInfo Range__ctor_m6721_MethodInfo;
extern MethodInfo Leaderboard_set_range_m6712_MethodInfo;
extern MethodInfo Leaderboard_set_userScope_m6710_MethodInfo;
extern MethodInfo Leaderboard_set_timeScope_m6714_MethodInfo;
extern MethodInfo Leaderboard_get_id_m6707_MethodInfo;
extern MethodInfo Leaderboard_get_range_m6711_MethodInfo;
extern MethodInfo Leaderboard_get_userScope_m6709_MethodInfo;
extern MethodInfo Leaderboard_get_timeScope_m6713_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern MethodInfo Leaderboard__ctor_m6700_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t1152_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t43_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m6700 (Leaderboard_t987 * __this, MethodInfo* method)
{
	static bool Leaderboard__ctor_m6700_init;
	if (!Leaderboard__ctor_m6700_init)
	{
		ScoreU5BU5D_t1152_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t1152_0_0_0);
		StringU5BU5D_t43_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t43_0_0_0);
		Leaderboard__ctor_m6700_init = true;
	}
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&Leaderboard_set_id_m6708_MethodInfo, __this, (String_t*) &_stringLiteral518);
		Range_t1111  L_0 = {0};
		Range__ctor_m6721(&L_0, 1, ((int32_t)10), /*hidden argument*/&Range__ctor_m6721_MethodInfo);
		VirtActionInvoker1< Range_t1111  >::Invoke(&Leaderboard_set_range_m6712_MethodInfo, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_userScope_m6710_MethodInfo, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_timeScope_m6714_MethodInfo, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t1099 * L_1 = (Score_t1099 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t1099_il2cpp_TypeInfo));
		Score__ctor_m6693(L_1, (String_t*) &_stringLiteral518, (((int64_t)0)), /*hidden argument*/&Score__ctor_m6693_MethodInfo);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t1110*)((ScoreU5BU5D_t1152*)SZArrayNew(ScoreU5BU5D_t1152_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral518;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t43*)SZArrayNew(StringU5BU5D_t43_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern MethodInfo Leaderboard_ToString_m6701_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m6701 (Leaderboard_t987 * __this, MethodInfo* method)
{
	static bool Leaderboard_ToString_m6701_init;
	if (!Leaderboard_ToString_m6701_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		Leaderboard_ToString_m6701_init = true;
	}
	Range_t1111  V_0 = {0};
	Range_t1111  V_1 = {0};
	{
		ObjectU5BU5D_t164* L_0 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral519);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral519;
		ObjectU5BU5D_t164* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Leaderboard_get_id_m6707_MethodInfo, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t164* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral520);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral520;
		ObjectU5BU5D_t164* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t164* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral521);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral521;
		ObjectU5BU5D_t164* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Boolean_t147_il2cpp_TypeInfo), &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t164* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral522);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral522;
		ObjectU5BU5D_t164* L_12 = L_11;
		Range_t1111  L_13 = (Range_t1111 )VirtFuncInvoker0< Range_t1111  >::Invoke(&Leaderboard_get_range_m6711_MethodInfo, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t164* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral128);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral128;
		ObjectU5BU5D_t164* L_18 = L_17;
		Range_t1111  L_19 = (Range_t1111 )VirtFuncInvoker0< Range_t1111  >::Invoke(&Leaderboard_get_range_m6711_MethodInfo, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t164* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral523);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral523;
		ObjectU5BU5D_t164* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(InitializedTypeInfo(&UInt32_t1167_il2cpp_TypeInfo), &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t164* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral524);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral524;
		ObjectU5BU5D_t164* L_29 = L_28;
		IScoreU5BU5D_t1110* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t164* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral525);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral525;
		ObjectU5BU5D_t164* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_userScope_m6709_MethodInfo, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(InitializedTypeInfo(&UserScope_t1116_il2cpp_TypeInfo), &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t164* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral526);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral526;
		ObjectU5BU5D_t164* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_timeScope_m6713_MethodInfo, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(InitializedTypeInfo(&TimeScope_t1117_il2cpp_TypeInfo), &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t164* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral527);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral527;
		ObjectU5BU5D_t164* L_44 = L_43;
		StringU5BU5D_t43* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = String_Concat_m621(NULL /*static, unused*/, L_44, /*hidden argument*/&String_Concat_m621_MethodInfo);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern MethodInfo Leaderboard_SetLocalUserScore_m6702_MethodInfo;
extern "C" void Leaderboard_SetLocalUserScore_m6702 (Leaderboard_t987 * __this, Object_t * ___score, MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern MethodInfo Leaderboard_SetMaxRange_m6703_MethodInfo;
extern "C" void Leaderboard_SetMaxRange_m6703 (Leaderboard_t987 * __this, uint32_t ___maxRange, MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern MethodInfo Leaderboard_SetScores_m6704_MethodInfo;
extern "C" void Leaderboard_SetScores_m6704 (Leaderboard_t987 * __this, IScoreU5BU5D_t1110* ___scores, MethodInfo* method)
{
	{
		IScoreU5BU5D_t1110* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern MethodInfo Leaderboard_SetTitle_m6705_MethodInfo;
extern "C" void Leaderboard_SetTitle_m6705 (Leaderboard_t987 * __this, String_t* ___title, MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern MethodInfo Leaderboard_GetUserFilter_m6706_MethodInfo;
extern "C" StringU5BU5D_t43* Leaderboard_GetUserFilter_m6706 (Leaderboard_t987 * __this, MethodInfo* method)
{
	{
		StringU5BU5D_t43* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m6707 (Leaderboard_t987 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m6708 (Leaderboard_t987 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m6709 (Leaderboard_t987 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m6710 (Leaderboard_t987 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t1111  Leaderboard_get_range_m6711 (Leaderboard_t987 * __this, MethodInfo* method)
{
	{
		Range_t1111  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m6712 (Leaderboard_t987 * __this, Range_t1111  ___value, MethodInfo* method)
{
	{
		Range_t1111  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m6713 (Leaderboard_t987 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m6714 (Leaderboard_t987 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HitInfo_t1112_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern MethodInfo GameObject_SendMessage_m6439_MethodInfo;
extern MethodInfo Object_op_Equality_m382_MethodInfo;
extern MethodInfo Object_op_Inequality_m388_MethodInfo;


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern MethodInfo HitInfo_SendMessage_m6715_MethodInfo;
extern "C" void HitInfo_SendMessage_m6715 (HitInfo_t1112 * __this, String_t* ___name, MethodInfo* method)
{
	{
		GameObject_t1 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m6439(L_0, L_1, NULL, 1, /*hidden argument*/&GameObject_SendMessage_m6439_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_Compare_m6716_MethodInfo;
extern "C" bool HitInfo_Compare_m6716 (Object_t * __this /* static, unused */, HitInfo_t1112  ___lhs, HitInfo_t1112  ___rhs, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t1 * L_0 = ((&___lhs)->___target_0);
		GameObject_t1 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m382(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_op_Equality_m382_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t2 * L_3 = ((&___lhs)->___camera_1);
		Camera_t2 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m382(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Object_op_Equality_m382_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_op_Implicit_m6717_MethodInfo;
extern "C" bool HitInfo_op_Implicit_m6717 (Object_t * __this /* static, unused */, HitInfo_t1112  ___exists, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t1 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m388(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t2 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m388(NULL /*static, unused*/, L_2, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SendMouseEvents_t1114_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
extern TypeInfo HitInfoU5BU5D_t1113_il2cpp_TypeInfo;
extern TypeInfo Input_t149_il2cpp_TypeInfo;
extern TypeInfo CameraU5BU5D_t182_il2cpp_TypeInfo;
extern TypeInfo Camera_t2_il2cpp_TypeInfo;
extern TypeInfo Vector3_t30_il2cpp_TypeInfo;
extern TypeInfo Mathf_t160_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern Il2CppType HitInfoU5BU5D_t1113_0_0_0;
extern Il2CppType CameraU5BU5D_t182_0_0_0;
extern MethodInfo Input_get_mousePosition_m469_MethodInfo;
extern MethodInfo Camera_get_allCamerasCount_m6372_MethodInfo;
extern MethodInfo Camera_GetAllCameras_m6373_MethodInfo;
extern MethodInfo Camera_get_targetTexture_m5342_MethodInfo;
extern MethodInfo Camera_get_pixelRect_m4625_MethodInfo;
extern MethodInfo Rect_Contains_m6215_MethodInfo;
extern MethodInfo Object_op_Implicit_m497_MethodInfo;
extern MethodInfo GUILayer_HitTest_m5877_MethodInfo;
extern MethodInfo Component_get_gameObject_m387_MethodInfo;
extern MethodInfo Camera_get_eventMask_m6361_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m658_MethodInfo;
extern MethodInfo Ray_get_direction_m2337_MethodInfo;
extern MethodInfo Mathf_Approximately_m2312_MethodInfo;
extern MethodInfo Camera_get_farClipPlane_m2334_MethodInfo;
extern MethodInfo Camera_get_nearClipPlane_m2335_MethodInfo;
extern MethodInfo Mathf_Abs_m509_MethodInfo;
extern MethodInfo Camera_get_cullingMask_m2349_MethodInfo;
extern MethodInfo Camera_RaycastTry_m6377_MethodInfo;
extern MethodInfo Camera_get_clearFlags_m6367_MethodInfo;
extern MethodInfo Camera_RaycastTry2D_m6379_MethodInfo;
extern MethodInfo SendMouseEvents_SendEvents_m6720_MethodInfo;
extern MethodInfo Input_GetMouseButtonDown_m474_MethodInfo;
extern MethodInfo Input_GetMouseButton_m525_MethodInfo;
struct Component_t158;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.GUILayer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_27.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Component_t158;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m504_gshared (Component_t158 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m504(__this, method) (( Object_t * (*) (Component_t158 *, MethodInfo*))Component_GetComponent_TisObject_t_m504_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t997_m6922(__this, method) (( GUILayer_t997 * (*) (Component_t158 *, MethodInfo*))Component_GetComponent_TisObject_t_m504_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisGUILayer_t997_m6922_GenericMethod;


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern MethodInfo SendMouseEvents__cctor_m6718_MethodInfo;
extern TypeInfo* HitInfoU5BU5D_t1113_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m6718 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool SendMouseEvents__cctor_m6718_init;
	if (!SendMouseEvents__cctor_m6718_init)
	{
		HitInfoU5BU5D_t1113_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&HitInfoU5BU5D_t1113_0_0_0);
		SendMouseEvents__cctor_m6718_init = true;
	}
	HitInfo_t1112  V_0 = {0};
	HitInfo_t1112  V_1 = {0};
	HitInfo_t1112  V_2 = {0};
	HitInfo_t1112  V_3 = {0};
	HitInfo_t1112  V_4 = {0};
	HitInfo_t1112  V_5 = {0};
	HitInfo_t1112  V_6 = {0};
	HitInfo_t1112  V_7 = {0};
	HitInfo_t1112  V_8 = {0};
	{
		HitInfoU5BU5D_t1113* L_0 = ((HitInfoU5BU5D_t1113*)SZArrayNew(HitInfoU5BU5D_t1113_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_0));
		HitInfo_t1112  L_1 = V_0;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t1113* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_1));
		HitInfo_t1112  L_3 = V_1;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t1113* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_2));
		HitInfo_t1112  L_5 = V_2;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t1113* L_6 = ((HitInfoU5BU5D_t1113*)SZArrayNew(HitInfoU5BU5D_t1113_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_3));
		HitInfo_t1112  L_7 = V_3;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t1113* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_4));
		HitInfo_t1112  L_9 = V_4;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t1113* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_5));
		HitInfo_t1112  L_11 = V_5;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t1113* L_12 = ((HitInfoU5BU5D_t1113*)SZArrayNew(HitInfoU5BU5D_t1113_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_6));
		HitInfo_t1112  L_13 = V_6;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t1113* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_7));
		HitInfo_t1112  L_15 = V_7;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t1113* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_8));
		HitInfo_t1112  L_17 = V_8;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern MethodInfo SendMouseEvents_DoSendMouseEvents_m6719_MethodInfo;
extern TypeInfo* CameraU5BU5D_t182_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponent_TisGUILayer_t997_m6922_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m6719 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, MethodInfo* method)
{
	static bool SendMouseEvents_DoSendMouseEvents_m6719_init;
	if (!SendMouseEvents_DoSendMouseEvents_m6719_init)
	{
		CameraU5BU5D_t182_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CameraU5BU5D_t182_0_0_0);
		Component_GetComponent_TisGUILayer_t997_m6922_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisGUILayer_t997_m6922_GenericMethod);
		SendMouseEvents_DoSendMouseEvents_m6719_init = true;
	}
	Vector3_t30  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t2 * V_3 = {0};
	CameraU5BU5D_t182* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t32  V_6 = {0};
	GUILayer_t997 * V_7 = {0};
	GUIElement_t996 * V_8 = {0};
	Ray_t136  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t1 * V_12 = {0};
	GameObject_t1 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t1112  V_15 = {0};
	Vector3_t30  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t149_il2cpp_TypeInfo));
		Vector3_t30  L_0 = Input_get_mousePosition_m469(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m469_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m6372(NULL /*static, unused*/, /*hidden argument*/&Camera_get_allCamerasCount_m6372_MethodInfo);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		CameraU5BU5D_t182* L_2 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		CameraU5BU5D_t182* L_3 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t182*)SZArrayNew(CameraU5BU5D_t182_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		CameraU5BU5D_t182* L_6 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m6373(NULL /*static, unused*/, L_6, /*hidden argument*/&Camera_GetAllCameras_m6373_MethodInfo);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_7 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_15));
		HitInfo_t1112  L_9 = V_15;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_12 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		CameraU5BU5D_t182* L_14 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t182* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t2 **)(Camera_t2 **)SZArrayLdElema(L_15, L_17));
		Camera_t2 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m382(NULL /*static, unused*/, L_18, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Equality_m382_MethodInfo);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t2 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t799 * L_22 = Camera_get_targetTexture_m5342(L_21, /*hidden argument*/&Camera_get_targetTexture_m5342_MethodInfo);
		bool L_23 = Object_op_Inequality_m388(NULL /*static, unused*/, L_22, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t2 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t32  L_25 = Camera_get_pixelRect_m4625(L_24, /*hidden argument*/&Camera_get_pixelRect_m4625_MethodInfo);
		V_6 = L_25;
		Vector3_t30  L_26 = V_0;
		bool L_27 = Rect_Contains_m6215((&V_6), L_26, /*hidden argument*/&Rect_Contains_m6215_MethodInfo);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t2 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t997 * L_29 = Component_GetComponent_TisGUILayer_t997_m6922(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t997_m6922_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t997 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m497(NULL /*static, unused*/, L_30, /*hidden argument*/&Object_op_Implicit_m497_MethodInfo);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t997 * L_32 = V_7;
		Vector3_t30  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t996 * L_34 = GUILayer_HitTest_m5877(L_32, L_33, /*hidden argument*/&GUILayer_HitTest_m5877_MethodInfo);
		V_8 = L_34;
		GUIElement_t996 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m497(NULL /*static, unused*/, L_35, /*hidden argument*/&Object_op_Implicit_m497_MethodInfo);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_37 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t996 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t1 * L_39 = Component_get_gameObject_m387(L_38, /*hidden argument*/&Component_get_gameObject_m387_MethodInfo);
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t1113* L_40 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t2 * L_41 = V_3;
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_42 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t1 *)NULL;
		HitInfoU5BU5D_t1113* L_43 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t2 *)NULL;
	}

IL_0141:
	{
		Camera_t2 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m6361(L_44, /*hidden argument*/&Camera_get_eventMask_m6361_MethodInfo);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t2 * L_46 = V_3;
		Vector3_t30  L_47 = V_0;
		NullCheck(L_46);
		Ray_t136  L_48 = Camera_ScreenPointToRay_m658(L_46, L_47, /*hidden argument*/&Camera_ScreenPointToRay_m658_MethodInfo);
		V_9 = L_48;
		Vector3_t30  L_49 = Ray_get_direction_m2337((&V_9), /*hidden argument*/&Ray_get_direction_m2337_MethodInfo);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t160_il2cpp_TypeInfo));
		bool L_52 = Mathf_Approximately_m2312(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/&Mathf_Approximately_m2312_MethodInfo);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t2 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m2334(L_53, /*hidden argument*/&Camera_get_farClipPlane_m2334_MethodInfo);
		Camera_t2 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m2335(L_55, /*hidden argument*/&Camera_get_nearClipPlane_m2335_MethodInfo);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t160_il2cpp_TypeInfo));
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t2 * L_59 = V_3;
		Ray_t136  L_60 = V_9;
		float L_61 = V_11;
		Camera_t2 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m2349(L_62, /*hidden argument*/&Camera_get_cullingMask_m2349_MethodInfo);
		Camera_t2 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m6361(L_64, /*hidden argument*/&Camera_get_eventMask_m6361_MethodInfo);
		NullCheck(L_59);
		GameObject_t1 * L_66 = Camera_RaycastTry_m6377(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/&Camera_RaycastTry_m6377_MethodInfo);
		V_12 = L_66;
		GameObject_t1 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m388(NULL /*static, unused*/, L_67, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_69 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t1 * L_70 = V_12;
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t1113* L_71 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t2 * L_72 = V_3;
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t2 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m6367(L_73, /*hidden argument*/&Camera_get_clearFlags_m6367_MethodInfo);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t2 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m6367(L_75, /*hidden argument*/&Camera_get_clearFlags_m6367_MethodInfo);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_77 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t1 *)NULL;
		HitInfoU5BU5D_t1113* L_78 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t2 *)NULL;
	}

IL_0226:
	{
		Camera_t2 * L_79 = V_3;
		Ray_t136  L_80 = V_9;
		float L_81 = V_11;
		Camera_t2 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m2349(L_82, /*hidden argument*/&Camera_get_cullingMask_m2349_MethodInfo);
		Camera_t2 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m6361(L_84, /*hidden argument*/&Camera_get_eventMask_m6361_MethodInfo);
		NullCheck(L_79);
		GameObject_t1 * L_86 = Camera_RaycastTry2D_m6379(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/&Camera_RaycastTry2D_m6379_MethodInfo);
		V_13 = L_86;
		GameObject_t1 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m388(NULL /*static, unused*/, L_87, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_89 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t1 * L_90 = V_13;
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t1113* L_91 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t2 * L_92 = V_3;
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t2 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m6367(L_93, /*hidden argument*/&Camera_get_clearFlags_m6367_MethodInfo);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t2 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m6367(L_95, /*hidden argument*/&Camera_get_clearFlags_m6367_MethodInfo);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_97 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t1 *)NULL;
		HitInfoU5BU5D_t1113* L_98 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t2 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t182* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_103 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m6720(NULL /*static, unused*/, L_102, (*(HitInfo_t1112 *)((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/&SendMouseEvents_SendEvents_m6720_MethodInfo);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_107 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C" void SendMouseEvents_SendEvents_m6720 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t1112  ___hit, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t1112  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t149_il2cpp_TypeInfo));
		bool L_0 = Input_GetMouseButtonDown_m474(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m474_MethodInfo);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m525(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m525_MethodInfo);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t1112  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m6717(NULL /*static, unused*/, L_3, /*hidden argument*/&HitInfo_op_Implicit_m6717_MethodInfo);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_5 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t1112  L_7 = ___hit;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t1113* L_8 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m6715(((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral528, /*hidden argument*/&HitInfo_SendMessage_m6715_MethodInfo);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_11 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m6717(NULL /*static, unused*/, (*(HitInfo_t1112 *)((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/&HitInfo_op_Implicit_m6717_MethodInfo);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t1112  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_15 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m6716(NULL /*static, unused*/, L_14, (*(HitInfo_t1112 *)((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/&HitInfo_Compare_m6716_MethodInfo);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_18 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m6715(((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral529, /*hidden argument*/&HitInfo_SendMessage_m6715_MethodInfo);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_20 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m6715(((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral530, /*hidden argument*/&HitInfo_SendMessage_m6715_MethodInfo);
		HitInfoU5BU5D_t1113* L_22 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (InitializedTypeInfo(&HitInfo_t1112_il2cpp_TypeInfo), (&V_2));
		HitInfo_t1112  L_24 = V_2;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_25 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m6717(NULL /*static, unused*/, (*(HitInfo_t1112 *)((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/&HitInfo_op_Implicit_m6717_MethodInfo);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_28 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m6715(((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral531, /*hidden argument*/&HitInfo_SendMessage_m6715_MethodInfo);
	}

IL_00fc:
	{
		HitInfo_t1112  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_31 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m6716(NULL /*static, unused*/, L_30, (*(HitInfo_t1112 *)((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/&HitInfo_Compare_m6716_MethodInfo);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t1112  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m6717(NULL /*static, unused*/, L_34, /*hidden argument*/&HitInfo_op_Implicit_m6717_MethodInfo);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m6715((&___hit), (String_t*) &_stringLiteral532, /*hidden argument*/&HitInfo_SendMessage_m6715_MethodInfo);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_36 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m6717(NULL /*static, unused*/, (*(HitInfo_t1112 *)((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/&HitInfo_op_Implicit_m6717_MethodInfo);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_39 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m6715(((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral533, /*hidden argument*/&HitInfo_SendMessage_m6715_MethodInfo);
	}

IL_0162:
	{
		HitInfo_t1112  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m6717(NULL /*static, unused*/, L_41, /*hidden argument*/&HitInfo_op_Implicit_m6717_MethodInfo);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m6715((&___hit), (String_t*) &_stringLiteral534, /*hidden argument*/&HitInfo_SendMessage_m6715_MethodInfo);
		HitInfo_SendMessage_m6715((&___hit), (String_t*) &_stringLiteral532, /*hidden argument*/&HitInfo_SendMessage_m6715_MethodInfo);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo));
		HitInfoU5BU5D_t1113* L_43 = ((SendMouseEvents_t1114_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t1114_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t1112  L_45 = ___hit;
		*((HitInfo_t1112 *)(HitInfo_t1112 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m6721 (Range_t1111 * __this, int32_t ___fromValue, int32_t ___valueCount, MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyAttribute_t1118_il2cpp_TypeInfo;
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m4591_MethodInfo;


// System.Void UnityEngine.PropertyAttribute::.ctor()
extern MethodInfo PropertyAttribute__ctor_m6722_MethodInfo;
extern "C" void PropertyAttribute__ctor_m6722 (PropertyAttribute_t1118 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TooltipAttribute_t568_il2cpp_TypeInfo;
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern MethodInfo TooltipAttribute__ctor_m2866_MethodInfo;
extern "C" void TooltipAttribute__ctor_m2866 (TooltipAttribute_t568 * __this, String_t* ___tooltip, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m6722(__this, /*hidden argument*/&PropertyAttribute__ctor_m6722_MethodInfo);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpaceAttribute_t566_il2cpp_TypeInfo;
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern MethodInfo SpaceAttribute__ctor_m2862_MethodInfo;
extern "C" void SpaceAttribute__ctor_m2862 (SpaceAttribute_t566 * __this, float ___height, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m6722(__this, /*hidden argument*/&PropertyAttribute__ctor_m6722_MethodInfo);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RangeAttribute_t557_il2cpp_TypeInfo;
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern MethodInfo RangeAttribute__ctor_m2854_MethodInfo;
extern "C" void RangeAttribute__ctor_m2854 (RangeAttribute_t557 * __this, float ___min, float ___max, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m6722(__this, /*hidden argument*/&PropertyAttribute__ctor_m6722_MethodInfo);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAreaAttribute_t572_il2cpp_TypeInfo;
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern MethodInfo TextAreaAttribute__ctor_m2869_MethodInfo;
extern "C" void TextAreaAttribute__ctor_m2869 (TextAreaAttribute_t572 * __this, int32_t ___minLines, int32_t ___maxLines, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m6722(__this, /*hidden argument*/&PropertyAttribute__ctor_m6722_MethodInfo);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SelectionBaseAttribute_t567_il2cpp_TypeInfo;
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern MethodInfo SelectionBaseAttribute__ctor_m2865_MethodInfo;
extern "C" void SelectionBaseAttribute__ctor_m2865 (SelectionBaseAttribute_t567 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SliderState_t1119_il2cpp_TypeInfo;
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern MethodInfo SliderState__ctor_m6723_MethodInfo;
extern "C" void SliderState__ctor_m6723 (SliderState_t1119 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SliderHandler_t1120_il2cpp_TypeInfo;
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandlerMethodDeclarations.h"

// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
extern TypeInfo GUI_t140_il2cpp_TypeInfo;
extern TypeInfo GUIUtility_t155_il2cpp_TypeInfo;
extern TypeInfo GUIContent_t508_il2cpp_TypeInfo;
extern TypeInfo Vector2_t20_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Rect_t32_il2cpp_TypeInfo;
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClockMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern Il2CppType SliderState_t1119_0_0_0;
extern MethodInfo SliderHandler_CurrentEventType_m6730_MethodInfo;
extern MethodInfo SliderHandler_OnMouseDown_m6726_MethodInfo;
extern MethodInfo SliderHandler_OnMouseDrag_m6727_MethodInfo;
extern MethodInfo SliderHandler_OnMouseUp_m6728_MethodInfo;
extern MethodInfo SliderHandler_OnRepaint_m6729_MethodInfo;
extern MethodInfo SliderHandler_CurrentEvent_m6736_MethodInfo;
extern MethodInfo Event_get_mousePosition_m6160_MethodInfo;
extern MethodInfo Rect_Contains_m6214_MethodInfo;
extern MethodInfo SliderHandler_IsEmptySlider_m6732_MethodInfo;
extern MethodInfo GUI_set_scrollTroughSide_m5893_MethodInfo;
extern MethodInfo GUIUtility_set_hotControl_m5997_MethodInfo;
extern MethodInfo Event_Use_m6168_MethodInfo;
extern MethodInfo SliderHandler_ThumbSelectionRect_m6739_MethodInfo;
extern MethodInfo SliderHandler_ClampedCurrentValue_m6745_MethodInfo;
extern MethodInfo SliderHandler_StartDraggingWithValue_m6740_MethodInfo;
extern MethodInfo GUI_set_changed_m5897_MethodInfo;
extern MethodInfo SliderHandler_SupportsPageMovements_m6733_MethodInfo;
extern MethodInfo SliderHandler_SliderState_m6741_MethodInfo;
extern MethodInfo SystemClock_get_now_m6773_MethodInfo;
extern MethodInfo DateTime_AddMilliseconds_m6858_MethodInfo;
extern MethodInfo GUI_set_nextScrollStepTime_m5891_MethodInfo;
extern MethodInfo SliderHandler_CurrentScrollTroughSide_m6731_MethodInfo;
extern MethodInfo SliderHandler_PageMovementValue_m6734_MethodInfo;
extern MethodInfo SliderHandler_ValueForCurrentMousePosition_m6737_MethodInfo;
extern MethodInfo SliderHandler_Clamp_m6738_MethodInfo;
extern MethodInfo GUIUtility_get_hotControl_m5996_MethodInfo;
extern MethodInfo SliderHandler_MousePosition_m6746_MethodInfo;
extern MethodInfo SliderHandler_ValuesPerPixel_m6747_MethodInfo;
extern MethodInfo GUIStyle_Draw_m6132_MethodInfo;
extern MethodInfo SliderHandler_ThumbRect_m6742_MethodInfo;
extern MethodInfo GUI_get_scrollTroughSide_m5892_MethodInfo;
extern MethodInfo GUI_InternalRepaintEditorWindow_m5916_MethodInfo;
extern MethodInfo GUI_get_nextScrollStepTime_m5890_MethodInfo;
extern MethodInfo DateTime_op_LessThan_m6923_MethodInfo;
extern MethodInfo Event_GetTypeForControl_m6159_MethodInfo;
extern MethodInfo Rect_get_x_m2417_MethodInfo;
extern MethodInfo Rect_get_y_m2418_MethodInfo;
extern MethodInfo GUI_get_usePageScrollbars_m5914_MethodInfo;
extern MethodInfo SliderHandler_PageUpMovementBound_m6735_MethodInfo;
extern MethodInfo Rect_get_xMax_m2504_MethodInfo;
extern MethodInfo Rect_get_yMax_m2505_MethodInfo;
extern MethodInfo Event_get_current_m6165_MethodInfo;
extern MethodInfo Rect_get_width_m2412_MethodInfo;
extern MethodInfo Rect_get_height_m2413_MethodInfo;
extern MethodInfo SliderHandler_MinValue_m6750_MethodInfo;
extern MethodInfo SliderHandler_MaxValue_m6749_MethodInfo;
extern MethodInfo Mathf_Clamp_m530_MethodInfo;
extern MethodInfo Rect_set_x_m2487_MethodInfo;
extern MethodInfo Rect_set_width_m2486_MethodInfo;
extern MethodInfo Rect_set_y_m2485_MethodInfo;
extern MethodInfo Rect_set_height_m2483_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m498_MethodInfo;
extern MethodInfo GUIUtility_GetStateObject_m5995_MethodInfo;
extern MethodInfo SliderHandler_HorizontalThumbRect_m6744_MethodInfo;
extern MethodInfo SliderHandler_VerticalThumbRect_m6743_MethodInfo;
extern MethodInfo GUIStyle_get_padding_m6115_MethodInfo;
extern MethodInfo RectOffset_get_left_m2756_MethodInfo;
extern MethodInfo RectOffset_get_top_m2757_MethodInfo;
extern MethodInfo RectOffset_get_horizontal_m2747_MethodInfo;
extern MethodInfo SliderHandler_ThumbSize_m6748_MethodInfo;
extern MethodInfo Rect__ctor_m429_MethodInfo;
extern MethodInfo RectOffset_get_vertical_m2748_MethodInfo;
extern MethodInfo GUIStyle_get_fixedWidth_m6120_MethodInfo;
extern MethodInfo GUIStyle_get_fixedHeight_m6121_MethodInfo;
extern MethodInfo Mathf_Max_m2681_MethodInfo;
extern MethodInfo Mathf_Min_m2740_MethodInfo;


// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern MethodInfo SliderHandler__ctor_m6724_MethodInfo;
extern "C" void SliderHandler__ctor_m6724 (SliderHandler_t1120 * __this, Rect_t32  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t15 * ___slider, GUIStyle_t15 * ___thumb, bool ___horiz, int32_t ___id, MethodInfo* method)
{
	{
		Rect_t32  L_0 = ___position;
		__this->___position_0 = L_0;
		float L_1 = ___currentValue;
		__this->___currentValue_1 = L_1;
		float L_2 = ___size;
		__this->___size_2 = L_2;
		float L_3 = ___start;
		__this->___start_3 = L_3;
		float L_4 = ___end;
		__this->___end_4 = L_4;
		GUIStyle_t15 * L_5 = ___slider;
		__this->___slider_5 = L_5;
		GUIStyle_t15 * L_6 = ___thumb;
		__this->___thumb_6 = L_6;
		bool L_7 = ___horiz;
		__this->___horiz_7 = L_7;
		int32_t L_8 = ___id;
		__this->___id_8 = L_8;
		return;
	}
}
// System.Single UnityEngine.SliderHandler::Handle()
extern MethodInfo SliderHandler_Handle_m6725_MethodInfo;
extern "C" float SliderHandler_Handle_m6725 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		GUIStyle_t15 * L_0 = (__this->___slider_5);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GUIStyle_t15 * L_1 = (__this->___thumb_6);
		if (L_1)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		float L_2 = (__this->___currentValue_1);
		return L_2;
	}

IL_001d:
	{
		int32_t L_3 = SliderHandler_CurrentEventType_m6730(__this, /*hidden argument*/&SliderHandler_CurrentEventType_m6730_MethodInfo);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4 == 0)
		{
			goto IL_004f;
		}
		if (L_4 == 1)
		{
			goto IL_005d;
		}
		if (L_4 == 2)
		{
			goto IL_006b;
		}
		if (L_4 == 3)
		{
			goto IL_0056;
		}
		if (L_4 == 4)
		{
			goto IL_006b;
		}
		if (L_4 == 5)
		{
			goto IL_006b;
		}
		if (L_4 == 6)
		{
			goto IL_006b;
		}
		if (L_4 == 7)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_006b;
	}

IL_004f:
	{
		float L_5 = SliderHandler_OnMouseDown_m6726(__this, /*hidden argument*/&SliderHandler_OnMouseDown_m6726_MethodInfo);
		return L_5;
	}

IL_0056:
	{
		float L_6 = SliderHandler_OnMouseDrag_m6727(__this, /*hidden argument*/&SliderHandler_OnMouseDrag_m6727_MethodInfo);
		return L_6;
	}

IL_005d:
	{
		float L_7 = SliderHandler_OnMouseUp_m6728(__this, /*hidden argument*/&SliderHandler_OnMouseUp_m6728_MethodInfo);
		return L_7;
	}

IL_0064:
	{
		float L_8 = SliderHandler_OnRepaint_m6729(__this, /*hidden argument*/&SliderHandler_OnRepaint_m6729_MethodInfo);
		return L_8;
	}

IL_006b:
	{
		float L_9 = (__this->___currentValue_1);
		return L_9;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern "C" float SliderHandler_OnMouseDown_m6726 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Rect_t32  V_1 = {0};
	Rect_t32  V_2 = {0};
	DateTime_t31  V_3 = {0};
	{
		Rect_t32  L_0 = (__this->___position_0);
		V_1 = L_0;
		Event_t399 * L_1 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_1);
		Vector2_t20  L_2 = Event_get_mousePosition_m6160(L_1, /*hidden argument*/&Event_get_mousePosition_m6160_MethodInfo);
		bool L_3 = Rect_Contains_m6214((&V_1), L_2, /*hidden argument*/&Rect_Contains_m6214_MethodInfo);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4 = SliderHandler_IsEmptySlider_m6732(__this, /*hidden argument*/&SliderHandler_IsEmptySlider_m6732_MethodInfo);
		if (!L_4)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		float L_5 = (__this->___currentValue_1);
		return L_5;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		GUI_set_scrollTroughSide_m5893(NULL /*static, unused*/, 0, /*hidden argument*/&GUI_set_scrollTroughSide_m5893_MethodInfo);
		int32_t L_6 = (__this->___id_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t155_il2cpp_TypeInfo));
		GUIUtility_set_hotControl_m5997(NULL /*static, unused*/, L_6, /*hidden argument*/&GUIUtility_set_hotControl_m5997_MethodInfo);
		Event_t399 * L_7 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_7);
		Event_Use_m6168(L_7, /*hidden argument*/&Event_Use_m6168_MethodInfo);
		Rect_t32  L_8 = SliderHandler_ThumbSelectionRect_m6739(__this, /*hidden argument*/&SliderHandler_ThumbSelectionRect_m6739_MethodInfo);
		V_2 = L_8;
		Event_t399 * L_9 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_9);
		Vector2_t20  L_10 = Event_get_mousePosition_m6160(L_9, /*hidden argument*/&Event_get_mousePosition_m6160_MethodInfo);
		bool L_11 = Rect_Contains_m6214((&V_2), L_10, /*hidden argument*/&Rect_Contains_m6214_MethodInfo);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		float L_12 = SliderHandler_ClampedCurrentValue_m6745(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m6745_MethodInfo);
		SliderHandler_StartDraggingWithValue_m6740(__this, L_12, /*hidden argument*/&SliderHandler_StartDraggingWithValue_m6740_MethodInfo);
		float L_13 = (__this->___currentValue_1);
		return L_13;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		GUI_set_changed_m5897(NULL /*static, unused*/, 1, /*hidden argument*/&GUI_set_changed_m5897_MethodInfo);
		bool L_14 = SliderHandler_SupportsPageMovements_m6733(__this, /*hidden argument*/&SliderHandler_SupportsPageMovements_m6733_MethodInfo);
		if (!L_14)
		{
			goto IL_00c7;
		}
	}
	{
		SliderState_t1119 * L_15 = SliderHandler_SliderState_m6741(__this, /*hidden argument*/&SliderHandler_SliderState_m6741_MethodInfo);
		NullCheck(L_15);
		L_15->___isDragging_2 = 0;
		DateTime_t31  L_16 = SystemClock_get_now_m6773(NULL /*static, unused*/, /*hidden argument*/&SystemClock_get_now_m6773_MethodInfo);
		V_3 = L_16;
		DateTime_t31  L_17 = DateTime_AddMilliseconds_m6858((&V_3), (250.0), /*hidden argument*/&DateTime_AddMilliseconds_m6858_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		GUI_set_nextScrollStepTime_m5891(NULL /*static, unused*/, L_17, /*hidden argument*/&GUI_set_nextScrollStepTime_m5891_MethodInfo);
		int32_t L_18 = SliderHandler_CurrentScrollTroughSide_m6731(__this, /*hidden argument*/&SliderHandler_CurrentScrollTroughSide_m6731_MethodInfo);
		GUI_set_scrollTroughSide_m5893(NULL /*static, unused*/, L_18, /*hidden argument*/&GUI_set_scrollTroughSide_m5893_MethodInfo);
		float L_19 = SliderHandler_PageMovementValue_m6734(__this, /*hidden argument*/&SliderHandler_PageMovementValue_m6734_MethodInfo);
		return L_19;
	}

IL_00c7:
	{
		float L_20 = SliderHandler_ValueForCurrentMousePosition_m6737(__this, /*hidden argument*/&SliderHandler_ValueForCurrentMousePosition_m6737_MethodInfo);
		V_0 = L_20;
		float L_21 = V_0;
		SliderHandler_StartDraggingWithValue_m6740(__this, L_21, /*hidden argument*/&SliderHandler_StartDraggingWithValue_m6740_MethodInfo);
		float L_22 = V_0;
		float L_23 = SliderHandler_Clamp_m6738(__this, L_22, /*hidden argument*/&SliderHandler_Clamp_m6738_MethodInfo);
		return L_23;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern "C" float SliderHandler_OnMouseDrag_m6727 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	SliderState_t1119 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t155_il2cpp_TypeInfo));
		int32_t L_0 = GUIUtility_get_hotControl_m5996(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_hotControl_m5996_MethodInfo);
		int32_t L_1 = (__this->___id_8);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		float L_2 = (__this->___currentValue_1);
		return L_2;
	}

IL_0017:
	{
		SliderState_t1119 * L_3 = SliderHandler_SliderState_m6741(__this, /*hidden argument*/&SliderHandler_SliderState_m6741_MethodInfo);
		V_0 = L_3;
		SliderState_t1119 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = (L_4->___isDragging_2);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = (__this->___currentValue_1);
		return L_6;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		GUI_set_changed_m5897(NULL /*static, unused*/, 1, /*hidden argument*/&GUI_set_changed_m5897_MethodInfo);
		Event_t399 * L_7 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_7);
		Event_Use_m6168(L_7, /*hidden argument*/&Event_Use_m6168_MethodInfo);
		float L_8 = SliderHandler_MousePosition_m6746(__this, /*hidden argument*/&SliderHandler_MousePosition_m6746_MethodInfo);
		SliderState_t1119 * L_9 = V_0;
		NullCheck(L_9);
		float L_10 = (L_9->___dragStartPos_0);
		V_1 = ((float)((float)L_8-(float)L_10));
		SliderState_t1119 * L_11 = V_0;
		NullCheck(L_11);
		float L_12 = (L_11->___dragStartValue_1);
		float L_13 = V_1;
		float L_14 = SliderHandler_ValuesPerPixel_m6747(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m6747_MethodInfo);
		V_2 = ((float)((float)L_12+(float)((float)((float)L_13/(float)L_14))));
		float L_15 = V_2;
		float L_16 = SliderHandler_Clamp_m6738(__this, L_15, /*hidden argument*/&SliderHandler_Clamp_m6738_MethodInfo);
		return L_16;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern "C" float SliderHandler_OnMouseUp_m6728 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t155_il2cpp_TypeInfo));
		int32_t L_0 = GUIUtility_get_hotControl_m5996(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_hotControl_m5996_MethodInfo);
		int32_t L_1 = (__this->___id_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		Event_t399 * L_2 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_2);
		Event_Use_m6168(L_2, /*hidden argument*/&Event_Use_m6168_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t155_il2cpp_TypeInfo));
		GUIUtility_set_hotControl_m5997(NULL /*static, unused*/, 0, /*hidden argument*/&GUIUtility_set_hotControl_m5997_MethodInfo);
	}

IL_0021:
	{
		float L_3 = (__this->___currentValue_1);
		return L_3;
	}
}
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern "C" float SliderHandler_OnRepaint_m6729 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	Rect_t32  V_1 = {0};
	DateTime_t31  V_2 = {0};
	{
		GUIStyle_t15 * L_0 = (__this->___slider_5);
		Rect_t32  L_1 = (__this->___position_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t508_il2cpp_TypeInfo));
		GUIContent_t508 * L_2 = ((GUIContent_t508_StaticFields*)InitializedTypeInfo(&GUIContent_t508_il2cpp_TypeInfo)->static_fields)->___none_3;
		int32_t L_3 = (__this->___id_8);
		NullCheck(L_0);
		GUIStyle_Draw_m6132(L_0, L_1, L_2, L_3, /*hidden argument*/&GUIStyle_Draw_m6132_MethodInfo);
		bool L_4 = SliderHandler_IsEmptySlider_m6732(__this, /*hidden argument*/&SliderHandler_IsEmptySlider_m6732_MethodInfo);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		GUIStyle_t15 * L_5 = (__this->___thumb_6);
		Rect_t32  L_6 = SliderHandler_ThumbRect_m6742(__this, /*hidden argument*/&SliderHandler_ThumbRect_m6742_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t508_il2cpp_TypeInfo));
		GUIContent_t508 * L_7 = ((GUIContent_t508_StaticFields*)InitializedTypeInfo(&GUIContent_t508_il2cpp_TypeInfo)->static_fields)->___none_3;
		int32_t L_8 = (__this->___id_8);
		NullCheck(L_5);
		GUIStyle_Draw_m6132(L_5, L_6, L_7, L_8, /*hidden argument*/&GUIStyle_Draw_m6132_MethodInfo);
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t155_il2cpp_TypeInfo));
		int32_t L_9 = GUIUtility_get_hotControl_m5996(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_hotControl_m5996_MethodInfo);
		int32_t L_10 = (__this->___id_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_007c;
		}
	}
	{
		Rect_t32  L_11 = (__this->___position_0);
		V_0 = L_11;
		Event_t399 * L_12 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_12);
		Vector2_t20  L_13 = Event_get_mousePosition_m6160(L_12, /*hidden argument*/&Event_get_mousePosition_m6160_MethodInfo);
		bool L_14 = Rect_Contains_m6214((&V_0), L_13, /*hidden argument*/&Rect_Contains_m6214_MethodInfo);
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		bool L_15 = SliderHandler_IsEmptySlider_m6732(__this, /*hidden argument*/&SliderHandler_IsEmptySlider_m6732_MethodInfo);
		if (!L_15)
		{
			goto IL_0083;
		}
	}

IL_007c:
	{
		float L_16 = (__this->___currentValue_1);
		return L_16;
	}

IL_0083:
	{
		Rect_t32  L_17 = SliderHandler_ThumbRect_m6742(__this, /*hidden argument*/&SliderHandler_ThumbRect_m6742_MethodInfo);
		V_1 = L_17;
		Event_t399 * L_18 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_18);
		Vector2_t20  L_19 = Event_get_mousePosition_m6160(L_18, /*hidden argument*/&Event_get_mousePosition_m6160_MethodInfo);
		bool L_20 = Rect_Contains_m6214((&V_1), L_19, /*hidden argument*/&Rect_Contains_m6214_MethodInfo);
		if (!L_20)
		{
			goto IL_00b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		int32_t L_21 = GUI_get_scrollTroughSide_m5892(NULL /*static, unused*/, /*hidden argument*/&GUI_get_scrollTroughSide_m5892_MethodInfo);
		if (!L_21)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t155_il2cpp_TypeInfo));
		GUIUtility_set_hotControl_m5997(NULL /*static, unused*/, 0, /*hidden argument*/&GUIUtility_set_hotControl_m5997_MethodInfo);
	}

IL_00b1:
	{
		float L_22 = (__this->___currentValue_1);
		return L_22;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		GUI_InternalRepaintEditorWindow_m5916(NULL /*static, unused*/, /*hidden argument*/&GUI_InternalRepaintEditorWindow_m5916_MethodInfo);
		DateTime_t31  L_23 = SystemClock_get_now_m6773(NULL /*static, unused*/, /*hidden argument*/&SystemClock_get_now_m6773_MethodInfo);
		DateTime_t31  L_24 = GUI_get_nextScrollStepTime_m5890(NULL /*static, unused*/, /*hidden argument*/&GUI_get_nextScrollStepTime_m5890_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t31_il2cpp_TypeInfo));
		bool L_25 = DateTime_op_LessThan_m6923(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/&DateTime_op_LessThan_m6923_MethodInfo);
		if (!L_25)
		{
			goto IL_00d8;
		}
	}
	{
		float L_26 = (__this->___currentValue_1);
		return L_26;
	}

IL_00d8:
	{
		int32_t L_27 = SliderHandler_CurrentScrollTroughSide_m6731(__this, /*hidden argument*/&SliderHandler_CurrentScrollTroughSide_m6731_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		int32_t L_28 = GUI_get_scrollTroughSide_m5892(NULL /*static, unused*/, /*hidden argument*/&GUI_get_scrollTroughSide_m5892_MethodInfo);
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00ef;
		}
	}
	{
		float L_29 = (__this->___currentValue_1);
		return L_29;
	}

IL_00ef:
	{
		DateTime_t31  L_30 = SystemClock_get_now_m6773(NULL /*static, unused*/, /*hidden argument*/&SystemClock_get_now_m6773_MethodInfo);
		V_2 = L_30;
		DateTime_t31  L_31 = DateTime_AddMilliseconds_m6858((&V_2), (30.0), /*hidden argument*/&DateTime_AddMilliseconds_m6858_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		GUI_set_nextScrollStepTime_m5891(NULL /*static, unused*/, L_31, /*hidden argument*/&GUI_set_nextScrollStepTime_m5891_MethodInfo);
		bool L_32 = SliderHandler_SupportsPageMovements_m6733(__this, /*hidden argument*/&SliderHandler_SupportsPageMovements_m6733_MethodInfo);
		if (!L_32)
		{
			goto IL_012e;
		}
	}
	{
		SliderState_t1119 * L_33 = SliderHandler_SliderState_m6741(__this, /*hidden argument*/&SliderHandler_SliderState_m6741_MethodInfo);
		NullCheck(L_33);
		L_33->___isDragging_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		GUI_set_changed_m5897(NULL /*static, unused*/, 1, /*hidden argument*/&GUI_set_changed_m5897_MethodInfo);
		float L_34 = SliderHandler_PageMovementValue_m6734(__this, /*hidden argument*/&SliderHandler_PageMovementValue_m6734_MethodInfo);
		return L_34;
	}

IL_012e:
	{
		float L_35 = SliderHandler_ClampedCurrentValue_m6745(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m6745_MethodInfo);
		return L_35;
	}
}
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C" int32_t SliderHandler_CurrentEventType_m6730 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	{
		Event_t399 * L_0 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		int32_t L_1 = (__this->___id_8);
		NullCheck(L_0);
		int32_t L_2 = Event_GetTypeForControl_m6159(L_0, L_1, /*hidden argument*/&Event_GetTypeForControl_m6159_MethodInfo);
		return L_2;
	}
}
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C" int32_t SliderHandler_CurrentScrollTroughSide_m6731 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t20  V_2 = {0};
	Vector2_t20  V_3 = {0};
	Rect_t32  V_4 = {0};
	Rect_t32  V_5 = {0};
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Event_t399 * L_1 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_1);
		Vector2_t20  L_2 = Event_get_mousePosition_m6160(L_1, /*hidden argument*/&Event_get_mousePosition_m6160_MethodInfo);
		V_2 = L_2;
		float L_3 = ((&V_2)->___x_1);
		G_B3_0 = L_3;
		goto IL_0036;
	}

IL_0023:
	{
		Event_t399 * L_4 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_4);
		Vector2_t20  L_5 = Event_get_mousePosition_m6160(L_4, /*hidden argument*/&Event_get_mousePosition_m6160_MethodInfo);
		V_3 = L_5;
		float L_6 = ((&V_3)->___y_2);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		V_0 = G_B3_0;
		bool L_7 = (__this->___horiz_7);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		Rect_t32  L_8 = SliderHandler_ThumbRect_m6742(__this, /*hidden argument*/&SliderHandler_ThumbRect_m6742_MethodInfo);
		V_4 = L_8;
		float L_9 = Rect_get_x_m2417((&V_4), /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		G_B6_0 = L_9;
		goto IL_0065;
	}

IL_0056:
	{
		Rect_t32  L_10 = SliderHandler_ThumbRect_m6742(__this, /*hidden argument*/&SliderHandler_ThumbRect_m6742_MethodInfo);
		V_5 = L_10;
		float L_11 = Rect_get_y_m2418((&V_5), /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		G_B6_0 = L_11;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		float L_12 = V_0;
		float L_13 = V_1;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_0073;
		}
	}
	{
		G_B9_0 = 1;
		goto IL_0074;
	}

IL_0073:
	{
		G_B9_0 = (-1);
	}

IL_0074:
	{
		return G_B9_0;
	}
}
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C" bool SliderHandler_IsEmptySlider_m6732 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		return ((((float)L_0) == ((float)L_1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern "C" bool SliderHandler_SupportsPageMovements_m6733 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		float L_0 = (__this->___size_2);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t140_il2cpp_TypeInfo));
		bool L_1 = GUI_get_usePageScrollbars_m5914(NULL /*static, unused*/, /*hidden argument*/&GUI_get_usePageScrollbars_m5914_MethodInfo);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C" float SliderHandler_PageMovementValue_m6734 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		float L_0 = (__this->___currentValue_1);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_1 = G_B3_0;
		float L_3 = SliderHandler_MousePosition_m6746(__this, /*hidden argument*/&SliderHandler_MousePosition_m6746_MethodInfo);
		float L_4 = SliderHandler_PageUpMovementBound_m6735(__this, /*hidden argument*/&SliderHandler_PageUpMovementBound_m6735_MethodInfo);
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0048;
		}
	}
	{
		float L_5 = V_0;
		float L_6 = (__this->___size_2);
		int32_t L_7 = V_1;
		V_0 = ((float)((float)L_5+(float)((float)((float)((float)((float)L_6*(float)(((float)L_7))))*(float)(0.9f)))));
		goto IL_005a;
	}

IL_0048:
	{
		float L_8 = V_0;
		float L_9 = (__this->___size_2);
		int32_t L_10 = V_1;
		V_0 = ((float)((float)L_8-(float)((float)((float)((float)((float)L_9*(float)(((float)L_10))))*(float)(0.9f)))));
	}

IL_005a:
	{
		float L_11 = V_0;
		float L_12 = SliderHandler_Clamp_m6738(__this, L_11, /*hidden argument*/&SliderHandler_Clamp_m6738_MethodInfo);
		return L_12;
	}
}
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C" float SliderHandler_PageUpMovementBound_m6735 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	Rect_t32  V_1 = {0};
	Rect_t32  V_2 = {0};
	Rect_t32  V_3 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		Rect_t32  L_1 = SliderHandler_ThumbRect_m6742(__this, /*hidden argument*/&SliderHandler_ThumbRect_m6742_MethodInfo);
		V_0 = L_1;
		float L_2 = Rect_get_xMax_m2504((&V_0), /*hidden argument*/&Rect_get_xMax_m2504_MethodInfo);
		Rect_t32  L_3 = (__this->___position_0);
		V_1 = L_3;
		float L_4 = Rect_get_x_m2417((&V_1), /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		return ((float)((float)L_2-(float)L_4));
	}

IL_0029:
	{
		Rect_t32  L_5 = SliderHandler_ThumbRect_m6742(__this, /*hidden argument*/&SliderHandler_ThumbRect_m6742_MethodInfo);
		V_2 = L_5;
		float L_6 = Rect_get_yMax_m2505((&V_2), /*hidden argument*/&Rect_get_yMax_m2505_MethodInfo);
		Rect_t32  L_7 = (__this->___position_0);
		V_3 = L_7;
		float L_8 = Rect_get_y_m2418((&V_3), /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		return ((float)((float)L_6-(float)L_8));
	}
}
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C" Event_t399 * SliderHandler_CurrentEvent_m6736 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	{
		Event_t399 * L_0 = Event_get_current_m6165(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m6165_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C" float SliderHandler_ValueForCurrentMousePosition_m6737 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	Rect_t32  V_1 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		float L_1 = SliderHandler_MousePosition_m6746(__this, /*hidden argument*/&SliderHandler_MousePosition_m6746_MethodInfo);
		Rect_t32  L_2 = SliderHandler_ThumbRect_m6742(__this, /*hidden argument*/&SliderHandler_ThumbRect_m6742_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_width_m2412((&V_0), /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		float L_4 = SliderHandler_ValuesPerPixel_m6747(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m6747_MethodInfo);
		float L_5 = (__this->___start_3);
		float L_6 = (__this->___size_2);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_1-(float)((float)((float)L_3*(float)(0.5f)))))/(float)L_4))+(float)L_5))-(float)((float)((float)L_6*(float)(0.5f)))));
	}

IL_0042:
	{
		float L_7 = SliderHandler_MousePosition_m6746(__this, /*hidden argument*/&SliderHandler_MousePosition_m6746_MethodInfo);
		Rect_t32  L_8 = SliderHandler_ThumbRect_m6742(__this, /*hidden argument*/&SliderHandler_ThumbRect_m6742_MethodInfo);
		V_1 = L_8;
		float L_9 = Rect_get_height_m2413((&V_1), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		float L_10 = SliderHandler_ValuesPerPixel_m6747(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m6747_MethodInfo);
		float L_11 = (__this->___start_3);
		float L_12 = (__this->___size_2);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_7-(float)((float)((float)L_9*(float)(0.5f)))))/(float)L_10))+(float)L_11))-(float)((float)((float)L_12*(float)(0.5f)))));
	}
}
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern "C" float SliderHandler_Clamp_m6738 (SliderHandler_t1120 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = SliderHandler_MinValue_m6750(__this, /*hidden argument*/&SliderHandler_MinValue_m6750_MethodInfo);
		float L_2 = SliderHandler_MaxValue_m6749(__this, /*hidden argument*/&SliderHandler_MaxValue_m6749_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t160_il2cpp_TypeInfo));
		float L_3 = Mathf_Clamp_m530(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Mathf_Clamp_m530_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C" Rect_t32  SliderHandler_ThumbSelectionRect_m6739 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	int32_t V_1 = 0;
	{
		Rect_t32  L_0 = SliderHandler_ThumbRect_m6742(__this, /*hidden argument*/&SliderHandler_ThumbRect_m6742_MethodInfo);
		V_0 = L_0;
		V_1 = ((int32_t)12);
		float L_1 = Rect_get_width_m2412((&V_0), /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		int32_t L_2 = V_1;
		if ((!(((float)L_1) < ((float)(((float)L_2))))))
		{
			goto IL_003f;
		}
	}
	{
		Rect_t32 * L_3 = (&V_0);
		float L_4 = Rect_get_x_m2417(L_3, /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		int32_t L_5 = V_1;
		float L_6 = Rect_get_width_m2412((&V_0), /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		Rect_set_x_m2487(L_3, ((float)((float)L_4-(float)((float)((float)((float)((float)(((float)L_5))-(float)L_6))/(float)(2.0f))))), /*hidden argument*/&Rect_set_x_m2487_MethodInfo);
		int32_t L_7 = V_1;
		Rect_set_width_m2486((&V_0), (((float)L_7)), /*hidden argument*/&Rect_set_width_m2486_MethodInfo);
	}

IL_003f:
	{
		float L_8 = Rect_get_height_m2413((&V_0), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		int32_t L_9 = V_1;
		if ((!(((float)L_8) < ((float)(((float)L_9))))))
		{
			goto IL_0074;
		}
	}
	{
		Rect_t32 * L_10 = (&V_0);
		float L_11 = Rect_get_y_m2418(L_10, /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		int32_t L_12 = V_1;
		float L_13 = Rect_get_height_m2413((&V_0), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		Rect_set_y_m2485(L_10, ((float)((float)L_11-(float)((float)((float)((float)((float)(((float)L_12))-(float)L_13))/(float)(2.0f))))), /*hidden argument*/&Rect_set_y_m2485_MethodInfo);
		int32_t L_14 = V_1;
		Rect_set_height_m2483((&V_0), (((float)L_14)), /*hidden argument*/&Rect_set_height_m2483_MethodInfo);
	}

IL_0074:
	{
		Rect_t32  L_15 = V_0;
		return L_15;
	}
}
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C" void SliderHandler_StartDraggingWithValue_m6740 (SliderHandler_t1120 * __this, float ___dragStartValue, MethodInfo* method)
{
	SliderState_t1119 * V_0 = {0};
	{
		SliderState_t1119 * L_0 = SliderHandler_SliderState_m6741(__this, /*hidden argument*/&SliderHandler_SliderState_m6741_MethodInfo);
		V_0 = L_0;
		SliderState_t1119 * L_1 = V_0;
		float L_2 = SliderHandler_MousePosition_m6746(__this, /*hidden argument*/&SliderHandler_MousePosition_m6746_MethodInfo);
		NullCheck(L_1);
		L_1->___dragStartPos_0 = L_2;
		SliderState_t1119 * L_3 = V_0;
		float L_4 = ___dragStartValue;
		NullCheck(L_3);
		L_3->___dragStartValue_1 = L_4;
		SliderState_t1119 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___isDragging_2 = 1;
		return;
	}
}
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern "C" SliderState_t1119 * SliderHandler_SliderState_m6741 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&SliderState_t1119_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		int32_t L_1 = (__this->___id_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t155_il2cpp_TypeInfo));
		Object_t * L_2 = GUIUtility_GetStateObject_m5995(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&GUIUtility_GetStateObject_m5995_MethodInfo);
		return ((SliderState_t1119 *)Castclass(L_2, InitializedTypeInfo(&SliderState_t1119_il2cpp_TypeInfo)));
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C" Rect_t32  SliderHandler_ThumbRect_m6742 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	Rect_t32  G_B3_0 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Rect_t32  L_1 = SliderHandler_HorizontalThumbRect_m6744(__this, /*hidden argument*/&SliderHandler_HorizontalThumbRect_m6744_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Rect_t32  L_2 = SliderHandler_VerticalThumbRect_m6743(__this, /*hidden argument*/&SliderHandler_VerticalThumbRect_m6743_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C" Rect_t32  SliderHandler_VerticalThumbRect_m6743 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Rect_t32  V_1 = {0};
	Rect_t32  V_2 = {0};
	Rect_t32  V_3 = {0};
	Rect_t32  V_4 = {0};
	Rect_t32  V_5 = {0};
	Rect_t32  V_6 = {0};
	{
		float L_0 = SliderHandler_ValuesPerPixel_m6747(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m6747_MethodInfo);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_009d;
		}
	}
	{
		Rect_t32  L_3 = (__this->___position_0);
		V_1 = L_3;
		float L_4 = Rect_get_x_m2417((&V_1), /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		GUIStyle_t15 * L_5 = (__this->___slider_5);
		NullCheck(L_5);
		RectOffset_t457 * L_6 = GUIStyle_get_padding_m6115(L_5, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_left_m2756(L_6, /*hidden argument*/&RectOffset_get_left_m2756_MethodInfo);
		float L_8 = SliderHandler_ClampedCurrentValue_m6745(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m6745_MethodInfo);
		float L_9 = (__this->___start_3);
		float L_10 = V_0;
		Rect_t32  L_11 = (__this->___position_0);
		V_2 = L_11;
		float L_12 = Rect_get_y_m2418((&V_2), /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		GUIStyle_t15 * L_13 = (__this->___slider_5);
		NullCheck(L_13);
		RectOffset_t457 * L_14 = GUIStyle_get_padding_m6115(L_13, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_14);
		int32_t L_15 = RectOffset_get_top_m2757(L_14, /*hidden argument*/&RectOffset_get_top_m2757_MethodInfo);
		Rect_t32  L_16 = (__this->___position_0);
		V_3 = L_16;
		float L_17 = Rect_get_width_m2412((&V_3), /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		GUIStyle_t15 * L_18 = (__this->___slider_5);
		NullCheck(L_18);
		RectOffset_t457 * L_19 = GUIStyle_get_padding_m6115(L_18, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_horizontal_m2747(L_19, /*hidden argument*/&RectOffset_get_horizontal_m2747_MethodInfo);
		float L_21 = (__this->___size_2);
		float L_22 = V_0;
		float L_23 = SliderHandler_ThumbSize_m6748(__this, /*hidden argument*/&SliderHandler_ThumbSize_m6748_MethodInfo);
		Rect_t32  L_24 = {0};
		Rect__ctor_m429(&L_24, ((float)((float)L_4+(float)(((float)L_7)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_8-(float)L_9))*(float)L_10))+(float)L_12))+(float)(((float)L_15)))), ((float)((float)L_17-(float)(((float)L_20)))), ((float)((float)((float)((float)L_21*(float)L_22))+(float)L_23)), /*hidden argument*/&Rect__ctor_m429_MethodInfo);
		return L_24;
	}

IL_009d:
	{
		Rect_t32  L_25 = (__this->___position_0);
		V_4 = L_25;
		float L_26 = Rect_get_x_m2417((&V_4), /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		GUIStyle_t15 * L_27 = (__this->___slider_5);
		NullCheck(L_27);
		RectOffset_t457 * L_28 = GUIStyle_get_padding_m6115(L_27, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_28);
		int32_t L_29 = RectOffset_get_left_m2756(L_28, /*hidden argument*/&RectOffset_get_left_m2756_MethodInfo);
		float L_30 = SliderHandler_ClampedCurrentValue_m6745(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m6745_MethodInfo);
		float L_31 = (__this->___size_2);
		float L_32 = (__this->___start_3);
		float L_33 = V_0;
		Rect_t32  L_34 = (__this->___position_0);
		V_5 = L_34;
		float L_35 = Rect_get_y_m2418((&V_5), /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		GUIStyle_t15 * L_36 = (__this->___slider_5);
		NullCheck(L_36);
		RectOffset_t457 * L_37 = GUIStyle_get_padding_m6115(L_36, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_37);
		int32_t L_38 = RectOffset_get_top_m2757(L_37, /*hidden argument*/&RectOffset_get_top_m2757_MethodInfo);
		Rect_t32  L_39 = (__this->___position_0);
		V_6 = L_39;
		float L_40 = Rect_get_width_m2412((&V_6), /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		GUIStyle_t15 * L_41 = (__this->___slider_5);
		NullCheck(L_41);
		RectOffset_t457 * L_42 = GUIStyle_get_padding_m6115(L_41, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_42);
		int32_t L_43 = RectOffset_get_horizontal_m2747(L_42, /*hidden argument*/&RectOffset_get_horizontal_m2747_MethodInfo);
		float L_44 = (__this->___size_2);
		float L_45 = V_0;
		float L_46 = SliderHandler_ThumbSize_m6748(__this, /*hidden argument*/&SliderHandler_ThumbSize_m6748_MethodInfo);
		Rect_t32  L_47 = {0};
		Rect__ctor_m429(&L_47, ((float)((float)L_26+(float)(((float)L_29)))), ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))-(float)L_32))*(float)L_33))+(float)L_35))+(float)(((float)L_38)))), ((float)((float)L_40-(float)(((float)L_43)))), ((float)((float)((float)((float)L_44*(float)((-L_45))))+(float)L_46)), /*hidden argument*/&Rect__ctor_m429_MethodInfo);
		return L_47;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C" Rect_t32  SliderHandler_HorizontalThumbRect_m6744 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Rect_t32  V_1 = {0};
	Rect_t32  V_2 = {0};
	Rect_t32  V_3 = {0};
	Rect_t32  V_4 = {0};
	Rect_t32  V_5 = {0};
	Rect_t32  V_6 = {0};
	{
		float L_0 = SliderHandler_ValuesPerPixel_m6747(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m6747_MethodInfo);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_009d;
		}
	}
	{
		float L_3 = SliderHandler_ClampedCurrentValue_m6745(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m6745_MethodInfo);
		float L_4 = (__this->___start_3);
		float L_5 = V_0;
		Rect_t32  L_6 = (__this->___position_0);
		V_1 = L_6;
		float L_7 = Rect_get_x_m2417((&V_1), /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		GUIStyle_t15 * L_8 = (__this->___slider_5);
		NullCheck(L_8);
		RectOffset_t457 * L_9 = GUIStyle_get_padding_m6115(L_8, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_left_m2756(L_9, /*hidden argument*/&RectOffset_get_left_m2756_MethodInfo);
		Rect_t32  L_11 = (__this->___position_0);
		V_2 = L_11;
		float L_12 = Rect_get_y_m2418((&V_2), /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		GUIStyle_t15 * L_13 = (__this->___slider_5);
		NullCheck(L_13);
		RectOffset_t457 * L_14 = GUIStyle_get_padding_m6115(L_13, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_14);
		int32_t L_15 = RectOffset_get_top_m2757(L_14, /*hidden argument*/&RectOffset_get_top_m2757_MethodInfo);
		float L_16 = (__this->___size_2);
		float L_17 = V_0;
		float L_18 = SliderHandler_ThumbSize_m6748(__this, /*hidden argument*/&SliderHandler_ThumbSize_m6748_MethodInfo);
		Rect_t32  L_19 = (__this->___position_0);
		V_3 = L_19;
		float L_20 = Rect_get_height_m2413((&V_3), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		GUIStyle_t15 * L_21 = (__this->___slider_5);
		NullCheck(L_21);
		RectOffset_t457 * L_22 = GUIStyle_get_padding_m6115(L_21, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_22);
		int32_t L_23 = RectOffset_get_vertical_m2748(L_22, /*hidden argument*/&RectOffset_get_vertical_m2748_MethodInfo);
		Rect_t32  L_24 = {0};
		Rect__ctor_m429(&L_24, ((float)((float)((float)((float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5))+(float)L_7))+(float)(((float)L_10)))), ((float)((float)L_12+(float)(((float)L_15)))), ((float)((float)((float)((float)L_16*(float)L_17))+(float)L_18)), ((float)((float)L_20-(float)(((float)L_23)))), /*hidden argument*/&Rect__ctor_m429_MethodInfo);
		return L_24;
	}

IL_009d:
	{
		float L_25 = SliderHandler_ClampedCurrentValue_m6745(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m6745_MethodInfo);
		float L_26 = (__this->___size_2);
		float L_27 = (__this->___start_3);
		float L_28 = V_0;
		Rect_t32  L_29 = (__this->___position_0);
		V_4 = L_29;
		float L_30 = Rect_get_x_m2417((&V_4), /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		GUIStyle_t15 * L_31 = (__this->___slider_5);
		NullCheck(L_31);
		RectOffset_t457 * L_32 = GUIStyle_get_padding_m6115(L_31, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_32);
		int32_t L_33 = RectOffset_get_left_m2756(L_32, /*hidden argument*/&RectOffset_get_left_m2756_MethodInfo);
		Rect_t32  L_34 = (__this->___position_0);
		V_5 = L_34;
		float L_35 = Rect_get_y_m2418((&V_5), /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		float L_36 = (__this->___size_2);
		float L_37 = V_0;
		float L_38 = SliderHandler_ThumbSize_m6748(__this, /*hidden argument*/&SliderHandler_ThumbSize_m6748_MethodInfo);
		Rect_t32  L_39 = (__this->___position_0);
		V_6 = L_39;
		float L_40 = Rect_get_height_m2413((&V_6), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		Rect_t32  L_41 = {0};
		Rect__ctor_m429(&L_41, ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_25+(float)L_26))-(float)L_27))*(float)L_28))+(float)L_30))+(float)(((float)L_33)))), L_35, ((float)((float)((float)((float)L_36*(float)((-L_37))))+(float)L_38)), L_40, /*hidden argument*/&Rect__ctor_m429_MethodInfo);
		return L_41;
	}
}
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C" float SliderHandler_ClampedCurrentValue_m6745 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___currentValue_1);
		float L_1 = SliderHandler_Clamp_m6738(__this, L_0, /*hidden argument*/&SliderHandler_Clamp_m6738_MethodInfo);
		return L_1;
	}
}
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C" float SliderHandler_MousePosition_m6746 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	Vector2_t20  V_0 = {0};
	Rect_t32  V_1 = {0};
	Vector2_t20  V_2 = {0};
	Rect_t32  V_3 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Event_t399 * L_1 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_1);
		Vector2_t20  L_2 = Event_get_mousePosition_m6160(L_1, /*hidden argument*/&Event_get_mousePosition_m6160_MethodInfo);
		V_0 = L_2;
		float L_3 = ((&V_0)->___x_1);
		Rect_t32  L_4 = (__this->___position_0);
		V_1 = L_4;
		float L_5 = Rect_get_x_m2417((&V_1), /*hidden argument*/&Rect_get_x_m2417_MethodInfo);
		return ((float)((float)L_3-(float)L_5));
	}

IL_002e:
	{
		Event_t399 * L_6 = SliderHandler_CurrentEvent_m6736(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m6736_MethodInfo);
		NullCheck(L_6);
		Vector2_t20  L_7 = Event_get_mousePosition_m6160(L_6, /*hidden argument*/&Event_get_mousePosition_m6160_MethodInfo);
		V_2 = L_7;
		float L_8 = ((&V_2)->___y_2);
		Rect_t32  L_9 = (__this->___position_0);
		V_3 = L_9;
		float L_10 = Rect_get_y_m2418((&V_3), /*hidden argument*/&Rect_get_y_m2418_MethodInfo);
		return ((float)((float)L_8-(float)L_10));
	}
}
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C" float SliderHandler_ValuesPerPixel_m6747 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	Rect_t32  V_1 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		Rect_t32  L_1 = (__this->___position_0);
		V_0 = L_1;
		float L_2 = Rect_get_width_m2412((&V_0), /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		GUIStyle_t15 * L_3 = (__this->___slider_5);
		NullCheck(L_3);
		RectOffset_t457 * L_4 = GUIStyle_get_padding_m6115(L_3, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_horizontal_m2747(L_4, /*hidden argument*/&RectOffset_get_horizontal_m2747_MethodInfo);
		float L_6 = SliderHandler_ThumbSize_m6748(__this, /*hidden argument*/&SliderHandler_ThumbSize_m6748_MethodInfo);
		float L_7 = (__this->___end_4);
		float L_8 = (__this->___start_3);
		return ((float)((float)((float)((float)((float)((float)L_2-(float)(((float)L_5))))-(float)L_6))/(float)((float)((float)L_7-(float)L_8))));
	}

IL_0041:
	{
		Rect_t32  L_9 = (__this->___position_0);
		V_1 = L_9;
		float L_10 = Rect_get_height_m2413((&V_1), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		GUIStyle_t15 * L_11 = (__this->___slider_5);
		NullCheck(L_11);
		RectOffset_t457 * L_12 = GUIStyle_get_padding_m6115(L_11, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_vertical_m2748(L_12, /*hidden argument*/&RectOffset_get_vertical_m2748_MethodInfo);
		float L_14 = SliderHandler_ThumbSize_m6748(__this, /*hidden argument*/&SliderHandler_ThumbSize_m6748_MethodInfo);
		float L_15 = (__this->___end_4);
		float L_16 = (__this->___start_3);
		return ((float)((float)((float)((float)((float)((float)L_10-(float)(((float)L_13))))-(float)L_14))/(float)((float)((float)L_15-(float)L_16))));
	}
}
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C" float SliderHandler_ThumbSize_m6748 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	float G_B4_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		GUIStyle_t15 * L_1 = (__this->___thumb_6);
		NullCheck(L_1);
		float L_2 = GUIStyle_get_fixedWidth_m6120(L_1, /*hidden argument*/&GUIStyle_get_fixedWidth_m6120_MethodInfo);
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		GUIStyle_t15 * L_3 = (__this->___thumb_6);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedWidth_m6120(L_3, /*hidden argument*/&GUIStyle_get_fixedWidth_m6120_MethodInfo);
		G_B4_0 = L_4;
		goto IL_0041;
	}

IL_0030:
	{
		GUIStyle_t15 * L_5 = (__this->___thumb_6);
		NullCheck(L_5);
		RectOffset_t457 * L_6 = GUIStyle_get_padding_m6115(L_5, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_horizontal_m2747(L_6, /*hidden argument*/&RectOffset_get_horizontal_m2747_MethodInfo);
		G_B4_0 = (((float)L_7));
	}

IL_0041:
	{
		return G_B4_0;
	}

IL_0042:
	{
		GUIStyle_t15 * L_8 = (__this->___thumb_6);
		NullCheck(L_8);
		float L_9 = GUIStyle_get_fixedHeight_m6121(L_8, /*hidden argument*/&GUIStyle_get_fixedHeight_m6121_MethodInfo);
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_0067;
		}
	}
	{
		GUIStyle_t15 * L_10 = (__this->___thumb_6);
		NullCheck(L_10);
		float L_11 = GUIStyle_get_fixedHeight_m6121(L_10, /*hidden argument*/&GUIStyle_get_fixedHeight_m6121_MethodInfo);
		G_B8_0 = L_11;
		goto IL_0078;
	}

IL_0067:
	{
		GUIStyle_t15 * L_12 = (__this->___thumb_6);
		NullCheck(L_12);
		RectOffset_t457 * L_13 = GUIStyle_get_padding_m6115(L_12, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_vertical_m2748(L_13, /*hidden argument*/&RectOffset_get_vertical_m2748_MethodInfo);
		G_B8_0 = (((float)L_14));
	}

IL_0078:
	{
		return G_B8_0;
	}
}
// System.Single UnityEngine.SliderHandler::MaxValue()
extern "C" float SliderHandler_MaxValue_m6749 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t160_il2cpp_TypeInfo));
		float L_2 = Mathf_Max_m2681(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Max_m2681_MethodInfo);
		float L_3 = (__this->___size_2);
		return ((float)((float)L_2-(float)L_3));
	}
}
// System.Single UnityEngine.SliderHandler::MinValue()
extern "C" float SliderHandler_MinValue_m6750 (SliderHandler_t1120 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t160_il2cpp_TypeInfo));
		float L_2 = Mathf_Min_m2740(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Min_m2740_MethodInfo);
		return L_2;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StackTraceUtility_t1121_il2cpp_TypeInfo;
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
extern TypeInfo StackTrace_t1122_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t521_il2cpp_TypeInfo;
extern TypeInfo Exception_t154_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t480_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t395_il2cpp_TypeInfo;
extern TypeInfo Char_t389_il2cpp_TypeInfo;
extern TypeInfo StackFrame_t1168_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t1169_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t1171_il2cpp_TypeInfo;
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern Il2CppType CharU5BU5D_t395_0_0_0;
extern MethodInfo StackTrace__ctor_m6924_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractFormattedStackTrace_m6759_MethodInfo;
extern MethodInfo String_ToString_m6925_MethodInfo;
extern MethodInfo String_StartsWith_m6926_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractStringFromExceptionInternal_m6757_MethodInfo;
extern MethodInfo String_Concat_m554_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2726_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m6927_MethodInfo;
extern MethodInfo String_get_Length_m694_MethodInfo;
extern MethodInfo StringBuilder__ctor_m4793_MethodInfo;
extern MethodInfo Exception_GetType_m6928_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m6929_MethodInfo;
extern MethodInfo Exception_get_Message_m2507_MethodInfo;
extern MethodInfo String_Trim_m6930_MethodInfo;
extern MethodInfo String_Concat_m540_MethodInfo;
extern MethodInfo Exception_get_InnerException_m6876_MethodInfo;
extern MethodInfo String_Concat_m4768_MethodInfo;
extern MethodInfo StringBuilder_Append_m6931_MethodInfo;
extern MethodInfo StringBuilder_ToString_m2209_MethodInfo;
extern MethodInfo String_Split_m5453_MethodInfo;
extern MethodInfo String_get_Chars_m2541_MethodInfo;
extern MethodInfo StackTraceUtility_IsSystemStacktraceType_m6755_MethodInfo;
extern MethodInfo String_IndexOf_m6932_MethodInfo;
extern MethodInfo String_Substring_m2542_MethodInfo;
extern MethodInfo String_EndsWith_m4752_MethodInfo;
extern MethodInfo String_Remove_m2566_MethodInfo;
extern MethodInfo String_IndexOf_m6933_MethodInfo;
extern MethodInfo String_Replace_m997_MethodInfo;
extern MethodInfo String_Replace_m6934_MethodInfo;
extern MethodInfo String_LastIndexOf_m6935_MethodInfo;
extern MethodInfo String_Insert_m2568_MethodInfo;
extern MethodInfo StackTrace_GetFrame_m6936_MethodInfo;
extern MethodInfo StackFrame_GetMethod_m6937_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m6938_MethodInfo;
extern MethodInfo Type_get_Namespace_m6939_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m6940_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m6941_MethodInfo;
extern MethodInfo StackFrame_GetFileName_m6942_MethodInfo;
extern MethodInfo String_op_Equality_m406_MethodInfo;
extern MethodInfo StackFrame_GetFileLineNumber_m6943_MethodInfo;
extern MethodInfo Int32_ToString_m6944_MethodInfo;
extern MethodInfo StackTrace_get_FrameCount_m6945_MethodInfo;


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern MethodInfo StackTraceUtility__ctor_m6751_MethodInfo;
extern "C" void StackTraceUtility__ctor_m6751 (StackTraceUtility_t1121 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern MethodInfo StackTraceUtility__cctor_m6752_MethodInfo;
extern "C" void StackTraceUtility__cctor_m6752 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		((StackTraceUtility_t1121_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern MethodInfo StackTraceUtility_SetProjectFolder_m6753_MethodInfo;
extern "C" void StackTraceUtility_SetProjectFolder_m6753 (Object_t * __this /* static, unused */, String_t* ___folder, MethodInfo* method)
{
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo));
		((StackTraceUtility_t1121_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern MethodInfo StackTraceUtility_ExtractStackTrace_m6754_MethodInfo;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m6754 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	StackTrace_t1122 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t1122 * L_0 = (StackTrace_t1122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t1122_il2cpp_TypeInfo));
		StackTrace__ctor_m6924(L_0, 1, 1, /*hidden argument*/&StackTrace__ctor_m6924_MethodInfo);
		V_0 = L_0;
		StackTrace_t1122 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo));
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m6759(NULL /*static, unused*/, L_1, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m6759_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m6925_MethodInfo, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m6755 (Object_t * __this /* static, unused */, Object_t * ___name, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m6926(L_1, (String_t*) &_stringLiteral535, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m6926(L_3, (String_t*) &_stringLiteral536, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m6926(L_5, (String_t*) &_stringLiteral537, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m6926(L_7, (String_t*) &_stringLiteral538, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m6926(L_9, (String_t*) &_stringLiteral539, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m6926(L_11, (String_t*) &_stringLiteral540, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern MethodInfo StackTraceUtility_ExtractStringFromException_m6756_MethodInfo;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m6756 (Object_t * __this /* static, unused */, Object_t * ___exception, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo));
		StackTraceUtility_ExtractStringFromExceptionInternal_m6757(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/&StackTraceUtility_ExtractStringFromExceptionInternal_m6757_MethodInfo);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m554(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral154, L_4, /*hidden argument*/&String_Concat_m554_MethodInfo);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m6757 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, MethodInfo* method)
{
	Exception_t154 * V_0 = {0};
	StringBuilder_t480 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t1122 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t521 * L_1 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_1, (String_t*) &_stringLiteral541, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t154 *)IsInst(L_2, InitializedTypeInfo(&Exception_t154_il2cpp_TypeInfo)));
		Exception_t154 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t521 * L_4 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_4, (String_t*) &_stringLiteral542, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t154 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m6927_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t154 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m6927_MethodInfo, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m694(L_8, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t480 * L_10 = (StringBuilder_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t480_il2cpp_TypeInfo));
		StringBuilder__ctor_m4793(L_10, G_B7_0, /*hidden argument*/&StringBuilder__ctor_m4793_MethodInfo);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m694(L_14, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t154 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m6927_MethodInfo, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t154 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m6927_MethodInfo, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m554(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral154, L_20, /*hidden argument*/&String_Concat_m554_MethodInfo);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t154 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Exception_GetType_m6928_MethodInfo, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_25 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t154 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m2507_MethodInfo, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t154 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m2507_MethodInfo, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m6930(L_30, /*hidden argument*/&String_Trim_m6930_MethodInfo);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m694(L_31, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_34 = String_Concat_m540(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral152, /*hidden argument*/&String_Concat_m540_MethodInfo);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m540(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/&String_Concat_m540_MethodInfo);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t154 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t154 * L_41 = (Exception_t154 *)VirtFuncInvoker0< Exception_t154 * >::Invoke(&Exception_get_InnerException_m6876_MethodInfo, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_44 = String_Concat_m4768(NULL /*static, unused*/, (String_t*) &_stringLiteral543, L_42, (String_t*) &_stringLiteral154, L_43, /*hidden argument*/&String_Concat_m4768_MethodInfo);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t154 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t154 * L_46 = (Exception_t154 *)VirtFuncInvoker0< Exception_t154 * >::Invoke(&Exception_get_InnerException_m6876_MethodInfo, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t154 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t480 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_50 = String_Concat_m540(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral154, /*hidden argument*/&String_Concat_m540_MethodInfo);
		NullCheck(L_48);
		StringBuilder_Append_m6931(L_48, L_50, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StackTrace_t1122 * L_51 = (StackTrace_t1122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t1122_il2cpp_TypeInfo));
		StackTrace__ctor_m6924(L_51, 1, 1, /*hidden argument*/&StackTrace__ctor_m6924_MethodInfo);
		V_5 = L_51;
		StringBuilder_t480 * L_52 = V_1;
		StackTrace_t1122 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo));
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m6759(NULL /*static, unused*/, L_53, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m6759_MethodInfo);
		NullCheck(L_52);
		StringBuilder_Append_m6931(L_52, L_54, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t480 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2209_MethodInfo, L_56);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern MethodInfo StackTraceUtility_PostprocessStacktrace_m6758_MethodInfo;
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m6758 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, MethodInfo* method)
{
	static bool StackTraceUtility_PostprocessStacktrace_m6758_init;
	if (!StackTraceUtility_PostprocessStacktrace_m6758_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		StackTraceUtility_PostprocessStacktrace_m6758_init = true;
	}
	StringU5BU5D_t43* V_0 = {0};
	StringBuilder_t480 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t395* L_3 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t43* L_4 = String_Split_m5453(L_2, L_3, /*hidden argument*/&String_Split_m5453_MethodInfo);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m694(L_5, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		StringBuilder_t480 * L_7 = (StringBuilder_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t480_il2cpp_TypeInfo));
		StringBuilder__ctor_m4793(L_7, L_6, /*hidden argument*/&StringBuilder__ctor_m4793_MethodInfo);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t43* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t43* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m6930((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/&String_Trim_m6930_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t43* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t43* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m694(L_20, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m2541(L_22, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m6926(L_24, (String_t*) &_stringLiteral544, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m6926(L_27, (String_t*) &_stringLiteral545, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t43* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo));
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m6755(NULL /*static, unused*/, L_32, /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m6755_MethodInfo);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t43* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo));
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m6755(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m6755_MethodInfo);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m6932(L_38, (String_t*) &_stringLiteral546, /*hidden argument*/&String_IndexOf_m6932_MethodInfo);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m2542(L_41, 0, L_42, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m6932(L_44, (String_t*) &_stringLiteral547, /*hidden argument*/&String_IndexOf_m6932_MethodInfo);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m6932(L_46, (String_t*) &_stringLiteral548, /*hidden argument*/&String_IndexOf_m6932_MethodInfo);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m6932(L_48, (String_t*) &_stringLiteral549, /*hidden argument*/&String_IndexOf_m6932_MethodInfo);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m6926(L_51, (String_t*) &_stringLiteral550, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m4752(L_53, (String_t*) &_stringLiteral551, /*hidden argument*/&String_EndsWith_m4752_MethodInfo);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m6926(L_55, (String_t*) &_stringLiteral552, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m2566(L_57, 0, 3, /*hidden argument*/&String_Remove_m2566_MethodInfo);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m6932(L_59, (String_t*) &_stringLiteral553, /*hidden argument*/&String_IndexOf_m6932_MethodInfo);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m6933(L_62, (String_t*) &_stringLiteral551, L_63, /*hidden argument*/&String_IndexOf_m6933_MethodInfo);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m2566(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/&String_Remove_m2566_MethodInfo);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_74 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m997(L_73, (String_t*) &_stringLiteral554, L_74, /*hidden argument*/&String_Replace_m997_MethodInfo);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo));
		String_t* L_77 = ((StackTraceUtility_t1121_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m997(L_76, L_77, L_78, /*hidden argument*/&String_Replace_m997_MethodInfo);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m6934(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/&String_Replace_m6934_MethodInfo);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m6935(L_82, (String_t*) &_stringLiteral555, /*hidden argument*/&String_LastIndexOf_m6935_MethodInfo);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m2566(L_85, L_86, 5, /*hidden argument*/&String_Remove_m2566_MethodInfo);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m2568(L_88, L_89, (String_t*) &_stringLiteral556, /*hidden argument*/&String_Insert_m2568_MethodInfo);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m694(L_92, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m2568(L_91, L_93, (String_t*) &_stringLiteral215, /*hidden argument*/&String_Insert_m2568_MethodInfo);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t480 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_97 = String_Concat_m540(NULL /*static, unused*/, L_96, (String_t*) &_stringLiteral154, /*hidden argument*/&String_Concat_m540_MethodInfo);
		NullCheck(L_95);
		StringBuilder_Append_m6931(L_95, L_97, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t43* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t480 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2209_MethodInfo, L_101);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m6759 (Object_t * __this /* static, unused */, StackTrace_t1122 * ___stackTrace, MethodInfo* method)
{
	StringBuilder_t480 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t1168 * V_2 = {0};
	MethodBase_t1169 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t1170* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t480 * L_0 = (StringBuilder_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t480_il2cpp_TypeInfo));
		StringBuilder__ctor_m4793(L_0, ((int32_t)255), /*hidden argument*/&StringBuilder__ctor_m4793_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t1122 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t1168 * L_3 = (StackFrame_t1168 *)VirtFuncInvoker1< StackFrame_t1168 *, int32_t >::Invoke(&StackTrace_GetFrame_m6936_MethodInfo, L_1, L_2);
		V_2 = L_3;
		StackFrame_t1168 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t1169 * L_5 = (MethodBase_t1169 *)VirtFuncInvoker0< MethodBase_t1169 * >::Invoke(&StackFrame_GetMethod_m6937_MethodInfo, L_4);
		V_3 = L_5;
		MethodBase_t1169 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t1169 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m6939_MethodInfo, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m694(L_13, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t480 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m6931(L_15, L_16, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m6931(L_17, (String_t*) &_stringLiteral207, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0071:
	{
		StringBuilder_t480 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m6931(L_18, L_20, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m6931(L_21, (String_t*) &_stringLiteral557, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_22 = V_0;
		MethodBase_t1169 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m6931(L_22, L_24, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m6931(L_25, (String_t*) &_stringLiteral558, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		V_6 = 0;
		MethodBase_t1169 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t1170* L_27 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t480 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m6931(L_29, (String_t*) &_stringLiteral559, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t480 * L_30 = V_0;
		ParameterInfoU5BU5D_t1170* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m6931(L_30, L_35, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t1170* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t480 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m6931(L_39, (String_t*) &_stringLiteral215, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StackFrame_t1168 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StackFrame_GetFileName_m6942_MethodInfo, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_43);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_45 = String_op_Equality_m406(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral560, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m6939_MethodInfo, L_46);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_48 = String_op_Equality_m406(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral561, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t480 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m6931(L_49, (String_t*) &_stringLiteral556, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo));
		String_t* L_51 = ((StackTraceUtility_t1121_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m6926(L_50, L_51, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo));
		String_t* L_54 = ((StackTraceUtility_t1121_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m694(L_54, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m694(L_56, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		String_t* L_58 = ((StackTraceUtility_t1121_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t1121_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m694(L_58, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m2542(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t480 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m6931(L_61, L_62, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m6931(L_63, (String_t*) &_stringLiteral557, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_64 = V_0;
		StackFrame_t1168 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackFrame_GetFileLineNumber_m6943_MethodInfo, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m6944((&V_10), /*hidden argument*/&Int32_ToString_m6944_MethodInfo);
		NullCheck(L_64);
		StringBuilder_Append_m6931(L_64, L_67, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m6931(L_68, (String_t*) &_stringLiteral215, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_01b9:
	{
		StringBuilder_t480 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m6931(L_69, (String_t*) &_stringLiteral154, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t1122 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackTrace_get_FrameCount_m6945_MethodInfo, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t480 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2209_MethodInfo, L_74);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityException_t506_il2cpp_TypeInfo;
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern MethodInfo Exception__ctor_m6946_MethodInfo;
extern MethodInfo Exception_set_HResult_m6947_MethodInfo;
extern MethodInfo Exception__ctor_m6948_MethodInfo;
extern MethodInfo Exception__ctor_m6949_MethodInfo;


// System.Void UnityEngine.UnityException::.ctor()
extern MethodInfo UnityException__ctor_m6760_MethodInfo;
extern "C" void UnityException__ctor_m6760 (UnityException_t506 * __this, MethodInfo* method)
{
	{
		Exception__ctor_m6946(__this, (String_t*) &_stringLiteral562, /*hidden argument*/&Exception__ctor_m6946_MethodInfo);
		Exception_set_HResult_m6947(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m6947_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern MethodInfo UnityException__ctor_m6761_MethodInfo;
extern "C" void UnityException__ctor_m6761 (UnityException_t506 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m6946(__this, L_0, /*hidden argument*/&Exception__ctor_m6946_MethodInfo);
		Exception_set_HResult_m6947(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m6947_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern MethodInfo UnityException__ctor_m6762_MethodInfo;
extern "C" void UnityException__ctor_m6762 (UnityException_t506 * __this, String_t* ___message, Exception_t154 * ___innerException, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t154 * L_1 = ___innerException;
		Exception__ctor_m6948(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m6948_MethodInfo);
		Exception_set_HResult_m6947(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m6947_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnityException__ctor_m6763_MethodInfo;
extern "C" void UnityException__ctor_m6763 (UnityException_t506 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		StreamingContext_t1124  L_1 = ___context;
		Exception__ctor_m6949(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m6949_MethodInfo);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SharedBetweenAnimatorsAttribute_t1125_il2cpp_TypeInfo;
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern MethodInfo SharedBetweenAnimatorsAttribute__ctor_m6764_MethodInfo;
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m6764 (SharedBetweenAnimatorsAttribute_t1125 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StateMachineBehaviour_t1126_il2cpp_TypeInfo;
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern MethodInfo ScriptableObject__ctor_m5747_MethodInfo;


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern MethodInfo StateMachineBehaviour__ctor_m6765_MethodInfo;
extern "C" void StateMachineBehaviour__ctor_m6765 (StateMachineBehaviour_t1126 * __this, MethodInfo* method)
{
	{
		ScriptableObject__ctor_m5747(__this, /*hidden argument*/&ScriptableObject__ctor_m5747_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateEnter_m6766_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateEnter_m6766 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateUpdate_m6767_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateUpdate_m6767 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateExit_m6768_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateExit_m6768 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMove_m6769_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMove_m6769 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateIK_m6770_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateIK_m6770 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineEnter_m6771_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m6771 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineExit_m6772_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMachineExit_m6772 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClock.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SystemClock_t1127_il2cpp_TypeInfo;



// System.DateTime UnityEngine.SystemClock::get_now()
extern "C" DateTime_t31  SystemClock_get_now_m6773 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t31_il2cpp_TypeInfo));
		DateTime_t31  L_0 = DateTime_get_Now_m465(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m465_MethodInfo);
		return L_0;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DblClickSnapping_t1128_il2cpp_TypeInfo;
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditOp_t1129_il2cpp_TypeInfo;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditor_t507_il2cpp_TypeInfo;
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

extern TypeInfo GUIStyle_t15_il2cpp_TypeInfo;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo GUIContent__ctor_m6078_MethodInfo;
extern MethodInfo GUIStyle_get_none_m6137_MethodInfo;
extern MethodInfo Vector2_get_zero_m2271_MethodInfo;
extern MethodInfo TextEditor_SelectAll_m6775_MethodInfo;
extern MethodInfo GUIContent_get_text_m2529_MethodInfo;
extern MethodInfo TextEditor_ClearCursorPos_m6774_MethodInfo;
extern MethodInfo GUIContent_set_text_m6081_MethodInfo;
extern MethodInfo TextEditor_DeleteSelection_m6776_MethodInfo;
extern MethodInfo TextEditor_UpdateScrollOffset_m6778_MethodInfo;
extern MethodInfo GUIStyle_GetCursorPixelPosition_m6138_MethodInfo;
extern MethodInfo RectOffset_Remove_m6104_MethodInfo;
extern MethodInfo GUIStyle_CalcSize_m6141_MethodInfo;
extern MethodInfo GUIStyle_CalcHeight_m6143_MethodInfo;
extern MethodInfo Vector2__ctor_m482_MethodInfo;
extern MethodInfo GUIStyle_get_lineHeight_m6128_MethodInfo;
extern MethodInfo RectOffset_get_bottom_m6102_MethodInfo;
extern MethodInfo GUIUtility_set_systemCopyBuffer_m6001_MethodInfo;
extern MethodInfo GUIUtility_get_systemCopyBuffer_m6000_MethodInfo;
extern MethodInfo String_op_Inequality_m2540_MethodInfo;
extern MethodInfo TextEditor_ReplaceNewlinesWithSpaces_m6779_MethodInfo;
extern MethodInfo TextEditor_ReplaceSelection_m6777_MethodInfo;


// System.Void UnityEngine.TextEditor::.ctor()
extern MethodInfo TextEditor__ctor_m2527_MethodInfo;
extern "C" void TextEditor__ctor_m2527 (TextEditor_t507 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t508_il2cpp_TypeInfo));
		GUIContent_t508 * L_0 = (GUIContent_t508 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t508_il2cpp_TypeInfo));
		GUIContent__ctor_m6078(L_0, /*hidden argument*/&GUIContent__ctor_m6078_MethodInfo);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t15_il2cpp_TypeInfo));
		GUIStyle_t15 * L_1 = GUIStyle_get_none_m6137(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m6137_MethodInfo);
		__this->___style_5 = L_1;
		Vector2_t20  L_2 = Vector2_get_zero_m2271(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2271_MethodInfo);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m6774 (TextEditor_t507 * __this, MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern MethodInfo TextEditor_OnFocus_m2531_MethodInfo;
extern "C" void TextEditor_OnFocus_m2531 (TextEditor_t507 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m6775(__this, /*hidden argument*/&TextEditor_SelectAll_m6775_MethodInfo);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m6775 (TextEditor_t507 * __this, MethodInfo* method)
{
	{
		__this->___pos_1 = 0;
		GUIContent_t508 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2529(L_0, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m694(L_1, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m6774(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m6774_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m6776 (TextEditor_t507 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GUIContent_t508 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2529(L_0, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m694(L_1, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->___pos_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->___selectPos_2);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->___selectPos_2 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->___pos_1);
		int32_t L_10 = (__this->___selectPos_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->___pos_1);
		int32_t L_12 = (__this->___selectPos_2);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t508 * L_13 = (__this->___content_4);
		GUIContent_t508 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m2529(L_14, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		int32_t L_16 = (__this->___pos_1);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m2542(L_15, 0, L_16, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		GUIContent_t508 * L_18 = (__this->___content_4);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m2529(L_18, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		int32_t L_20 = (__this->___selectPos_2);
		GUIContent_t508 * L_21 = (__this->___content_4);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m2529(L_21, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m694(L_22, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		int32_t L_24 = (__this->___selectPos_2);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m2542(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_26 = String_Concat_m540(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/&String_Concat_m540_MethodInfo);
		NullCheck(L_13);
		GUIContent_set_text_m6081(L_13, L_26, /*hidden argument*/&GUIContent_set_text_m6081_MethodInfo);
		int32_t L_27 = (__this->___pos_1);
		__this->___selectPos_2 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t508 * L_28 = (__this->___content_4);
		GUIContent_t508 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m2529(L_29, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		int32_t L_31 = (__this->___selectPos_2);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m2542(L_30, 0, L_31, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		GUIContent_t508 * L_33 = (__this->___content_4);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m2529(L_33, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		int32_t L_35 = (__this->___pos_1);
		GUIContent_t508 * L_36 = (__this->___content_4);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m2529(L_36, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m694(L_37, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		int32_t L_39 = (__this->___pos_1);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m2542(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_41 = String_Concat_m540(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/&String_Concat_m540_MethodInfo);
		NullCheck(L_28);
		GUIContent_set_text_m6081(L_28, L_41, /*hidden argument*/&GUIContent_set_text_m6081_MethodInfo);
		int32_t L_42 = (__this->___selectPos_2);
		__this->___pos_1 = L_42;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m6774(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m6774_MethodInfo);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m6777 (TextEditor_t507 * __this, String_t* ___replace, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m6776(__this, /*hidden argument*/&TextEditor_DeleteSelection_m6776_MethodInfo);
		GUIContent_t508 * L_0 = (__this->___content_4);
		GUIContent_t508 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m2529(L_1, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		int32_t L_3 = (__this->___pos_1);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m2568(L_2, L_3, L_4, /*hidden argument*/&String_Insert_m2568_MethodInfo);
		NullCheck(L_0);
		GUIContent_set_text_m6081(L_0, L_5, /*hidden argument*/&GUIContent_set_text_m6081_MethodInfo);
		int32_t L_6 = (__this->___pos_1);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m694(L_7, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->___pos_1 = L_9;
		int32_t L_10 = V_0;
		__this->___selectPos_2 = L_10;
		TextEditor_ClearCursorPos_m6774(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m6774_MethodInfo);
		TextEditor_UpdateScrollOffset_m6778(__this, /*hidden argument*/&TextEditor_UpdateScrollOffset_m6778_MethodInfo);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m6778 (TextEditor_t507 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t32  V_1 = {0};
	Vector2_t20  V_2 = {0};
	Vector2_t20  V_3 = {0};
	Vector2_t20 * G_B17_0 = {0};
	Vector2_t20 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t20 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t15 * L_1 = (__this->___style_5);
		Rect_t32 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m2412(L_2, /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		Rect_t32 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m2413(L_4, /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		Rect_t32  L_6 = {0};
		Rect__ctor_m429(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/&Rect__ctor_m429_MethodInfo);
		GUIContent_t508 * L_7 = (__this->___content_4);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t20  L_9 = GUIStyle_GetCursorPixelPosition_m6138(L_1, L_6, L_7, L_8, /*hidden argument*/&GUIStyle_GetCursorPixelPosition_m6138_MethodInfo);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t15 * L_10 = (__this->___style_5);
		NullCheck(L_10);
		RectOffset_t457 * L_11 = GUIStyle_get_padding_m6115(L_10, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		Rect_t32  L_12 = (__this->___position_6);
		NullCheck(L_11);
		Rect_t32  L_13 = RectOffset_Remove_m6104(L_11, L_12, /*hidden argument*/&RectOffset_Remove_m6104_MethodInfo);
		V_1 = L_13;
		GUIStyle_t15 * L_14 = (__this->___style_5);
		GUIContent_t508 * L_15 = (__this->___content_4);
		NullCheck(L_14);
		Vector2_t20  L_16 = GUIStyle_CalcSize_m6141(L_14, L_15, /*hidden argument*/&GUIStyle_CalcSize_m6141_MethodInfo);
		V_3 = L_16;
		float L_17 = ((&V_3)->___x_1);
		GUIStyle_t15 * L_18 = (__this->___style_5);
		GUIContent_t508 * L_19 = (__this->___content_4);
		Rect_t32 * L_20 = &(__this->___position_6);
		float L_21 = Rect_get_width_m2412(L_20, /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m6143(L_18, L_19, L_21, /*hidden argument*/&GUIStyle_CalcHeight_m6143_MethodInfo);
		Vector2__ctor_m482((&V_2), L_17, L_22, /*hidden argument*/&Vector2__ctor_m482_MethodInfo);
		float L_23 = ((&V_2)->___x_1);
		Rect_t32 * L_24 = &(__this->___position_6);
		float L_25 = Rect_get_width_m2412(L_24, /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t20 * L_26 = &(__this->___scrollOffset_11);
		L_26->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t20 * L_27 = &(__this->___graphicalCursorPos_13);
		float L_28 = (L_27->___x_1);
		Vector2_t20 * L_29 = &(__this->___scrollOffset_11);
		float L_30 = (L_29->___x_1);
		float L_31 = Rect_get_width_m2412((&V_1), /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t20 * L_32 = &(__this->___scrollOffset_11);
		Vector2_t20 * L_33 = &(__this->___graphicalCursorPos_13);
		float L_34 = (L_33->___x_1);
		float L_35 = Rect_get_width_m2412((&V_1), /*hidden argument*/&Rect_get_width_m2412_MethodInfo);
		L_32->___x_1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		Vector2_t20 * L_36 = &(__this->___graphicalCursorPos_13);
		float L_37 = (L_36->___x_1);
		Vector2_t20 * L_38 = &(__this->___scrollOffset_11);
		float L_39 = (L_38->___x_1);
		GUIStyle_t15 * L_40 = (__this->___style_5);
		NullCheck(L_40);
		RectOffset_t457 * L_41 = GUIStyle_get_padding_m6115(L_40, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_41);
		int32_t L_42 = RectOffset_get_left_m2756(L_41, /*hidden argument*/&RectOffset_get_left_m2756_MethodInfo);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t20 * L_43 = &(__this->___scrollOffset_11);
		Vector2_t20 * L_44 = &(__this->___graphicalCursorPos_13);
		float L_45 = (L_44->___x_1);
		GUIStyle_t15 * L_46 = (__this->___style_5);
		NullCheck(L_46);
		RectOffset_t457 * L_47 = GUIStyle_get_padding_m6115(L_46, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_47);
		int32_t L_48 = RectOffset_get_left_m2756(L_47, /*hidden argument*/&RectOffset_get_left_m2756_MethodInfo);
		L_43->___x_1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->___y_2);
		float L_50 = Rect_get_height_m2413((&V_1), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t20 * L_51 = &(__this->___scrollOffset_11);
		L_51->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t20 * L_52 = &(__this->___graphicalCursorPos_13);
		float L_53 = (L_52->___y_2);
		GUIStyle_t15 * L_54 = (__this->___style_5);
		NullCheck(L_54);
		float L_55 = GUIStyle_get_lineHeight_m6128(L_54, /*hidden argument*/&GUIStyle_get_lineHeight_m6128_MethodInfo);
		Vector2_t20 * L_56 = &(__this->___scrollOffset_11);
		float L_57 = (L_56->___y_2);
		float L_58 = Rect_get_height_m2413((&V_1), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		GUIStyle_t15 * L_59 = (__this->___style_5);
		NullCheck(L_59);
		RectOffset_t457 * L_60 = GUIStyle_get_padding_m6115(L_59, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m2757(L_60, /*hidden argument*/&RectOffset_get_top_m2757_MethodInfo);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t20 * L_62 = &(__this->___scrollOffset_11);
		Vector2_t20 * L_63 = &(__this->___graphicalCursorPos_13);
		float L_64 = (L_63->___y_2);
		float L_65 = Rect_get_height_m2413((&V_1), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		GUIStyle_t15 * L_66 = (__this->___style_5);
		NullCheck(L_66);
		RectOffset_t457 * L_67 = GUIStyle_get_padding_m6115(L_66, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_67);
		int32_t L_68 = RectOffset_get_top_m2757(L_67, /*hidden argument*/&RectOffset_get_top_m2757_MethodInfo);
		GUIStyle_t15 * L_69 = (__this->___style_5);
		NullCheck(L_69);
		float L_70 = GUIStyle_get_lineHeight_m6128(L_69, /*hidden argument*/&GUIStyle_get_lineHeight_m6128_MethodInfo);
		L_62->___y_2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		Vector2_t20 * L_71 = &(__this->___graphicalCursorPos_13);
		float L_72 = (L_71->___y_2);
		Vector2_t20 * L_73 = &(__this->___scrollOffset_11);
		float L_74 = (L_73->___y_2);
		GUIStyle_t15 * L_75 = (__this->___style_5);
		NullCheck(L_75);
		RectOffset_t457 * L_76 = GUIStyle_get_padding_m6115(L_75, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_76);
		int32_t L_77 = RectOffset_get_top_m2757(L_76, /*hidden argument*/&RectOffset_get_top_m2757_MethodInfo);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t20 * L_78 = &(__this->___scrollOffset_11);
		Vector2_t20 * L_79 = &(__this->___graphicalCursorPos_13);
		float L_80 = (L_79->___y_2);
		GUIStyle_t15 * L_81 = (__this->___style_5);
		NullCheck(L_81);
		RectOffset_t457 * L_82 = GUIStyle_get_padding_m6115(L_81, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_82);
		int32_t L_83 = RectOffset_get_top_m2757(L_82, /*hidden argument*/&RectOffset_get_top_m2757_MethodInfo);
		L_78->___y_2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		Vector2_t20 * L_84 = &(__this->___scrollOffset_11);
		float L_85 = (L_84->___y_2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->___y_2);
		Vector2_t20 * L_87 = &(__this->___scrollOffset_11);
		float L_88 = (L_87->___y_2);
		float L_89 = Rect_get_height_m2413((&V_1), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t20 * L_90 = &(__this->___scrollOffset_11);
		float L_91 = ((&V_2)->___y_2);
		float L_92 = Rect_get_height_m2413((&V_1), /*hidden argument*/&Rect_get_height_m2413_MethodInfo);
		GUIStyle_t15 * L_93 = (__this->___style_5);
		NullCheck(L_93);
		RectOffset_t457 * L_94 = GUIStyle_get_padding_m6115(L_93, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_94);
		int32_t L_95 = RectOffset_get_top_m2757(L_94, /*hidden argument*/&RectOffset_get_top_m2757_MethodInfo);
		GUIStyle_t15 * L_96 = (__this->___style_5);
		NullCheck(L_96);
		RectOffset_t457 * L_97 = GUIStyle_get_padding_m6115(L_96, /*hidden argument*/&GUIStyle_get_padding_m6115_MethodInfo);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_bottom_m6102(L_97, /*hidden argument*/&RectOffset_get_bottom_m6102_MethodInfo);
		L_90->___y_2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		Vector2_t20 * L_99 = &(__this->___scrollOffset_11);
		Vector2_t20 * L_100 = &(__this->___scrollOffset_11);
		float L_101 = (L_100->___y_2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t20 * L_102 = &(__this->___scrollOffset_11);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern MethodInfo TextEditor_Copy_m2532_MethodInfo;
extern "C" void TextEditor_Copy_m2532 (TextEditor_t507 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t508 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2529(L_5, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m2542(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t508 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m2529(L_11, /*hidden argument*/&GUIContent_get_text_m2529_MethodInfo);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m2542(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t155_il2cpp_TypeInfo));
		GUIUtility_set_systemCopyBuffer_m6001(NULL /*static, unused*/, L_17, /*hidden argument*/&GUIUtility_set_systemCopyBuffer_m6001_MethodInfo);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m6779 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m997(L_0, (String_t*) &_stringLiteral563, (String_t*) &_stringLiteral260, /*hidden argument*/&String_Replace_m997_MethodInfo);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m6934(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/&String_Replace_m6934_MethodInfo);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m6934(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/&String_Replace_m6934_MethodInfo);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern MethodInfo TextEditor_Paste_m2528_MethodInfo;
extern "C" bool TextEditor_Paste_m2528 (TextEditor_t507 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t155_il2cpp_TypeInfo));
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m6000(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_systemCopyBuffer_m6000_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m2540(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Inequality_m2540_MethodInfo);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_7);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m6779(NULL /*static, unused*/, L_5, /*hidden argument*/&TextEditor_ReplaceNewlinesWithSpaces_m6779_MethodInfo);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m6777(__this, L_7, /*hidden argument*/&TextEditor_ReplaceSelection_m6777_MethodInfo);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerationSettings_t431_il2cpp_TypeInfo;
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern TypeInfo Color32_t479_il2cpp_TypeInfo;
extern TypeInfo ValueType_t211_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
extern MethodInfo Color32_op_Implicit_m2420_MethodInfo;
extern MethodInfo ValueType_Equals_m743_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareColors_m6780_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareVector2_m6781_MethodInfo;


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern "C" bool TextGenerationSettings_CompareColors_m6780 (TextGenerationSettings_t431 * __this, Color_t118  ___left, Color_t118  ___right, MethodInfo* method)
{
	Color32_t479  V_0 = {0};
	Color32_t479  V_1 = {0};
	{
		Color_t118  L_0 = ___left;
		Color32_t479  L_1 = Color32_op_Implicit_m2420(NULL /*static, unused*/, L_0, /*hidden argument*/&Color32_op_Implicit_m2420_MethodInfo);
		V_0 = L_1;
		Color_t118  L_2 = ___right;
		Color32_t479  L_3 = Color32_op_Implicit_m2420(NULL /*static, unused*/, L_2, /*hidden argument*/&Color32_op_Implicit_m2420_MethodInfo);
		V_1 = L_3;
		Color32_t479  L_4 = V_0;
		Color32_t479  L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Color32_t479_il2cpp_TypeInfo), &L_5);
		Color32_t479  L_7 = V_1;
		Color32_t479  L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Color32_t479_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ValueType_Equals_m743_MethodInfo, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool TextGenerationSettings_CompareVector2_m6781 (TextGenerationSettings_t431 * __this, Vector2_t20  ___left, Vector2_t20  ___right, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t160_il2cpp_TypeInfo));
		bool L_2 = Mathf_Approximately_m2312(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Approximately_m2312_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t160_il2cpp_TypeInfo));
		bool L_5 = Mathf_Approximately_m2312(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Approximately_m2312_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerationSettings_Equals_m6782_MethodInfo;
extern "C" bool TextGenerationSettings_Equals_m6782 (TextGenerationSettings_t431 * __this, TextGenerationSettings_t431  ___other, MethodInfo* method)
{
	int32_t G_B19_0 = 0;
	{
		Color_t118  L_0 = (__this->___color_1);
		Color_t118  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m6780(__this, L_0, L_1, /*hidden argument*/&TextGenerationSettings_CompareColors_m6780_MethodInfo);
		if (!L_2)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_5 = (__this->___resizeTextMinSize_8);
		int32_t L_6 = ((&___other)->___resizeTextMinSize_8);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_7 = (__this->___resizeTextMaxSize_9);
		int32_t L_8 = ((&___other)->___resizeTextMaxSize_9);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_015d;
		}
	}
	{
		float L_9 = (__this->___lineSpacing_3);
		float L_10 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t160_il2cpp_TypeInfo));
		bool L_11 = Mathf_Approximately_m2312(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Mathf_Approximately_m2312_MethodInfo);
		if (!L_11)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_12 = (__this->___fontStyle_5);
		int32_t L_13 = ((&___other)->___fontStyle_5);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_015d;
		}
	}
	{
		bool L_14 = (__this->___richText_4);
		bool L_15 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_16 = (__this->___textAnchor_6);
		int32_t L_17 = ((&___other)->___textAnchor_6);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_015d;
		}
	}
	{
		bool L_18 = (__this->___resizeTextForBestFit_7);
		bool L_19 = ((&___other)->___resizeTextForBestFit_7);
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_20 = (__this->___resizeTextMinSize_8);
		int32_t L_21 = ((&___other)->___resizeTextMinSize_8);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_22 = (__this->___resizeTextMaxSize_9);
		int32_t L_23 = ((&___other)->___resizeTextMaxSize_9);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_015d;
		}
	}
	{
		bool L_24 = (__this->___resizeTextForBestFit_7);
		bool L_25 = ((&___other)->___resizeTextForBestFit_7);
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_015d;
		}
	}
	{
		bool L_26 = (__this->___updateBounds_10);
		bool L_27 = ((&___other)->___updateBounds_10);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_28 = (__this->___horizontalOverflow_12);
		int32_t L_29 = ((&___other)->___horizontalOverflow_12);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_30 = (__this->___verticalOverflow_11);
		int32_t L_31 = ((&___other)->___verticalOverflow_11);
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_t20  L_32 = (__this->___generationExtents_13);
		Vector2_t20  L_33 = ((&___other)->___generationExtents_13);
		bool L_34 = TextGenerationSettings_CompareVector2_m6781(__this, L_32, L_33, /*hidden argument*/&TextGenerationSettings_CompareVector2_m6781_MethodInfo);
		if (!L_34)
		{
			goto IL_015d;
		}
	}
	{
		Vector2_t20  L_35 = (__this->___pivot_14);
		Vector2_t20  L_36 = ((&___other)->___pivot_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m6781(__this, L_35, L_36, /*hidden argument*/&TextGenerationSettings_CompareVector2_m6781_MethodInfo);
		if (!L_37)
		{
			goto IL_015d;
		}
	}
	{
		Font_t28 * L_38 = (__this->___font_0);
		Font_t28 * L_39 = ((&___other)->___font_0);
		bool L_40 = Object_op_Equality_m382(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/&Object_op_Equality_m382_MethodInfo);
		G_B19_0 = ((int32_t)(L_40));
		goto IL_015e;
	}

IL_015d:
	{
		G_B19_0 = 0;
	}

IL_015e:
	{
		return G_B19_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TrackedReference_t1074_il2cpp_TypeInfo;
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern MethodInfo TrackedReference_op_Equality_m6785_MethodInfo;
extern MethodInfo IntPtr_op_Explicit_m6950_MethodInfo;
extern MethodInfo IntPtr_op_Equality_m4790_MethodInfo;


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern MethodInfo TrackedReference_Equals_m6783_MethodInfo;
extern "C" bool TrackedReference_Equals_m6783 (TrackedReference_t1074 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m6785(NULL /*static, unused*/, ((TrackedReference_t1074 *)IsInst(L_0, InitializedTypeInfo(&TrackedReference_t1074_il2cpp_TypeInfo))), __this, /*hidden argument*/&TrackedReference_op_Equality_m6785_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern MethodInfo TrackedReference_GetHashCode_m6784_MethodInfo;
extern "C" int32_t TrackedReference_GetHashCode_m6784 (TrackedReference_t1074 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m6950(NULL /*static, unused*/, L_0, /*hidden argument*/&IntPtr_op_Explicit_m6950_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m6785 (Object_t * __this /* static, unused */, TrackedReference_t1074 * ___x, TrackedReference_t1074 * ___y, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t1074 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t1074 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t1074 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m4790(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&IntPtr_op_Equality_m4790_MethodInfo);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t1074 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m4790(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&IntPtr_op_Equality_m4790_MethodInfo);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t1074 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t1074 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m4790(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/&IntPtr_op_Equality_m4790_MethodInfo);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t1074_marshal(const TrackedReference_t1074& unmarshaled, TrackedReference_t1074_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t1074_marshal_back(const TrackedReference_t1074_marshaled& marshaled, TrackedReference_t1074& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t1074_marshal_cleanup(TrackedReference_t1074_marshaled& marshaled)
{
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentListenerMode_t1131_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgumentCache_t1132_il2cpp_TypeInfo;
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"



// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern MethodInfo ArgumentCache__ctor_m6786_MethodInfo;
extern "C" void ArgumentCache__ctor_m6786 (ArgumentCache_t1132 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern MethodInfo ArgumentCache_get_unityObjectArgument_m6787_MethodInfo;
extern "C" Object_t138 * ArgumentCache_get_unityObjectArgument_m6787 (ArgumentCache_t1132 * __this, MethodInfo* method)
{
	{
		Object_t138 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788_MethodInfo;
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788 (ArgumentCache_t1132 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern MethodInfo ArgumentCache_get_intArgument_m6789_MethodInfo;
extern "C" int32_t ArgumentCache_get_intArgument_m6789 (ArgumentCache_t1132 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern MethodInfo ArgumentCache_get_floatArgument_m6790_MethodInfo;
extern "C" float ArgumentCache_get_floatArgument_m6790 (ArgumentCache_t1132 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern MethodInfo ArgumentCache_get_stringArgument_m6791_MethodInfo;
extern "C" String_t* ArgumentCache_get_stringArgument_m6791 (ArgumentCache_t1132 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern MethodInfo ArgumentCache_get_boolArgument_m6792_MethodInfo;
extern "C" bool ArgumentCache_get_boolArgument_m6792 (ArgumentCache_t1132 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BaseInvokableCall_t1133_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern TypeInfo ArgumentNullException_t1172_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern MethodInfo ArgumentNullException__ctor_m6951_MethodInfo;
extern MethodInfo Delegate_get_Method_m6952_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m6953_MethodInfo;
extern MethodInfo Delegate_get_Target_m6954_MethodInfo;


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern MethodInfo BaseInvokableCall__ctor_m6793_MethodInfo;
extern "C" void BaseInvokableCall__ctor_m6793 (BaseInvokableCall_t1133 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo BaseInvokableCall__ctor_m6794_MethodInfo;
extern "C" void BaseInvokableCall__ctor_m6794 (BaseInvokableCall_t1133 * __this, Object_t * ___target, MethodInfo_t * ___function, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral564, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t1172 * L_3 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_3, (String_t*) &_stringLiteral565, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern MethodInfo BaseInvokableCall_AllowInvoke_m6795_MethodInfo;
extern "C" bool BaseInvokableCall_AllowInvoke_m6795 (Object_t * __this /* static, unused */, Delegate_t148 * ___delegate, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Delegate_t148 * L_0 = ___delegate;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m6952(L_0, /*hidden argument*/&Delegate_get_Method_m6952_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m6953_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Delegate_t148 * L_3 = ___delegate;
		NullCheck(L_3);
		Object_t * L_4 = Delegate_get_Target_m6954(L_3, /*hidden argument*/&Delegate_get_Target_m6954_MethodInfo);
		G_B3_0 = ((((int32_t)((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_t1134_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
extern TypeInfo UnityAction_t357_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
extern Il2CppType UnityAction_t357_0_0_0;
extern MethodInfo Delegate_CreateDelegate_m571_MethodInfo;
extern MethodInfo Delegate_Combine_m451_MethodInfo;
extern MethodInfo UnityAction_Invoke_m2405_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall__ctor_m6796_MethodInfo;
extern "C" void InvokableCall__ctor_m6796 (InvokableCall_t1134 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m6794(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m6794_MethodInfo);
		UnityAction_t357 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&UnityAction_t357_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t148 * L_6 = Delegate_CreateDelegate_m571(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m571_MethodInfo);
		Delegate_t148 * L_7 = Delegate_Combine_m451(NULL /*static, unused*/, L_2, ((UnityAction_t357 *)IsInst(L_6, InitializedTypeInfo(&UnityAction_t357_il2cpp_TypeInfo))), /*hidden argument*/&Delegate_Combine_m451_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_t357 *)Castclass(L_7, InitializedTypeInfo(&UnityAction_t357_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern MethodInfo InvokableCall_Invoke_m6797_MethodInfo;
extern "C" void InvokableCall_Invoke_m6797 (InvokableCall_t1134 * __this, ObjectU5BU5D_t164* ___args, MethodInfo* method)
{
	{
		UnityAction_t357 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m6795(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m6795_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t357 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&UnityAction_Invoke_m2405_MethodInfo, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall_Find_m6798_MethodInfo;
extern "C" bool InvokableCall_Find_m6798 (InvokableCall_t1134 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t357 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m6954(L_0, /*hidden argument*/&Delegate_get_Target_m6954_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t357 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m6952(L_3, /*hidden argument*/&Delegate_get_Method_m6952_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEventCallState_t1135_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCall_t1136_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
extern TypeInfo UnityEventBase_t1137_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t1173_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t1174_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t1175_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t1176_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t913_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t1177_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern Il2CppType CachedInvokableCall_1_t1173_0_0_0;
extern Il2CppType CachedInvokableCall_1_t1174_0_0_0;
extern Il2CppType CachedInvokableCall_1_t1175_0_0_0;
extern Il2CppType CachedInvokableCall_1_t1176_0_0_0;
extern Il2CppType Object_t138_0_0_0;
extern Il2CppType CachedInvokableCall_1_t1178_0_0_0;
extern Il2CppType TypeU5BU5D_t913_0_0_0;
extern Il2CppType MethodInfo_t_0_0_0;
extern MethodInfo PersistentCall_get_target_m6800_MethodInfo;
extern MethodInfo PersistentCall_get_methodName_m6801_MethodInfo;
extern MethodInfo String_IsNullOrEmpty_m2571_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m6816_MethodInfo;
extern MethodInfo UnityEventBase_GetDelegate_m6955_MethodInfo;
extern MethodInfo PersistentCall_GetObjectCall_m6806_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m6956_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m6957_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m6958_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m6959_MethodInfo;
extern MethodInfo Type_GetType_m6960_MethodInfo;
extern MethodInfo Type_MakeGenericType_m6961_MethodInfo;
extern MethodInfo Type_GetConstructor_m6962_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m6867_MethodInfo;
extern MethodInfo ConstructorInfo_Invoke_m6963_MethodInfo;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m6956_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m6957_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m6958_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m6959_GenericMethod;


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern MethodInfo PersistentCall__ctor_m6799_MethodInfo;
extern "C" void PersistentCall__ctor_m6799 (PersistentCall_t1136 * __this, MethodInfo* method)
{
	{
		ArgumentCache_t1132 * L_0 = (ArgumentCache_t1132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentCache_t1132_il2cpp_TypeInfo));
		ArgumentCache__ctor_m6786(L_0, /*hidden argument*/&ArgumentCache__ctor_m6786_MethodInfo);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t138 * PersistentCall_get_target_m6800 (PersistentCall_t1136 * __this, MethodInfo* method)
{
	{
		Object_t138 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m6801 (PersistentCall_t1136 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern MethodInfo PersistentCall_get_mode_m6802_MethodInfo;
extern "C" int32_t PersistentCall_get_mode_m6802 (PersistentCall_t1136 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern MethodInfo PersistentCall_get_arguments_m6803_MethodInfo;
extern "C" ArgumentCache_t1132 * PersistentCall_get_arguments_m6803 (PersistentCall_t1136 * __this, MethodInfo* method)
{
	{
		ArgumentCache_t1132 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern MethodInfo PersistentCall_IsValid_m6804_MethodInfo;
extern "C" bool PersistentCall_IsValid_m6804 (PersistentCall_t1136 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t138 * L_0 = PersistentCall_get_target_m6800(__this, /*hidden argument*/&PersistentCall_get_target_m6800_MethodInfo);
		bool L_1 = Object_op_Inequality_m388(NULL /*static, unused*/, L_0, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m6801(__this, /*hidden argument*/&PersistentCall_get_methodName_m6801_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m2571(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m2571_MethodInfo);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCall_GetRuntimeCall_m6805_MethodInfo;
extern TypeInfo* CachedInvokableCall_1_t1173_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t1174_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t1175_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t1176_il2cpp_TypeInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m6956_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m6957_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m6958_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m6959_MethodInfo_var;
extern "C" BaseInvokableCall_t1133 * PersistentCall_GetRuntimeCall_m6805 (PersistentCall_t1136 * __this, UnityEventBase_t1137 * ___theEvent, MethodInfo* method)
{
	static bool PersistentCall_GetRuntimeCall_m6805_init;
	if (!PersistentCall_GetRuntimeCall_m6805_init)
	{
		CachedInvokableCall_1_t1173_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t1173_0_0_0);
		CachedInvokableCall_1_t1174_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t1174_0_0_0);
		CachedInvokableCall_1_t1175_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t1175_0_0_0);
		CachedInvokableCall_1_t1176_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t1176_0_0_0);
		CachedInvokableCall_1__ctor_m6956_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m6956_GenericMethod);
		CachedInvokableCall_1__ctor_m6957_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m6957_GenericMethod);
		CachedInvokableCall_1__ctor_m6958_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m6958_GenericMethod);
		CachedInvokableCall_1__ctor_m6959_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m6959_GenericMethod);
		PersistentCall_GetRuntimeCall_m6805_init = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t1137 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t1133 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t1137 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m6816(L_2, __this, /*hidden argument*/&UnityEventBase_FindMethod_m6816_MethodInfo);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t1133 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t1137 * L_7 = ___theEvent;
		Object_t138 * L_8 = PersistentCall_get_target_m6800(__this, /*hidden argument*/&PersistentCall_get_target_m6800_MethodInfo);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t1133 * L_10 = (BaseInvokableCall_t1133 *)VirtFuncInvoker2< BaseInvokableCall_t1133 *, Object_t *, MethodInfo_t * >::Invoke(&UnityEventBase_GetDelegate_m6955_MethodInfo, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t138 * L_11 = PersistentCall_get_target_m6800(__this, /*hidden argument*/&PersistentCall_get_target_m6800_MethodInfo);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t1132 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t1133 * L_14 = PersistentCall_GetObjectCall_m6806(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/&PersistentCall_GetObjectCall_m6806_MethodInfo);
		return L_14;
	}

IL_0072:
	{
		Object_t138 * L_15 = PersistentCall_get_target_m6800(__this, /*hidden argument*/&PersistentCall_get_target_m6800_MethodInfo);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t1132 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m6790(L_17, /*hidden argument*/&ArgumentCache_get_floatArgument_m6790_MethodInfo);
		CachedInvokableCall_1_t1173 * L_19 = (CachedInvokableCall_1_t1173 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1173_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m6956(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m6956_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t138 * L_20 = PersistentCall_get_target_m6800(__this, /*hidden argument*/&PersistentCall_get_target_m6800_MethodInfo);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t1132 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m6789(L_22, /*hidden argument*/&ArgumentCache_get_intArgument_m6789_MethodInfo);
		CachedInvokableCall_1_t1174 * L_24 = (CachedInvokableCall_1_t1174 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1174_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m6957(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m6957_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t138 * L_25 = PersistentCall_get_target_m6800(__this, /*hidden argument*/&PersistentCall_get_target_m6800_MethodInfo);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t1132 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m6791(L_27, /*hidden argument*/&ArgumentCache_get_stringArgument_m6791_MethodInfo);
		CachedInvokableCall_1_t1175 * L_29 = (CachedInvokableCall_1_t1175 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1175_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m6958(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m6958_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t138 * L_30 = PersistentCall_get_target_m6800(__this, /*hidden argument*/&PersistentCall_get_target_m6800_MethodInfo);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t1132 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m6792(L_32, /*hidden argument*/&ArgumentCache_get_boolArgument_m6792_MethodInfo);
		CachedInvokableCall_1_t1176 * L_34 = (CachedInvokableCall_1_t1176 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1176_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m6959(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m6959_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t138 * L_35 = PersistentCall_get_target_m6800(__this, /*hidden argument*/&PersistentCall_get_target_m6800_MethodInfo);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t1134 * L_37 = (InvokableCall_t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t1134_il2cpp_TypeInfo));
		InvokableCall__ctor_m6796(L_37, L_35, L_36, /*hidden argument*/&InvokableCall__ctor_m6796_MethodInfo);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t1133 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t1133 * PersistentCall_GetObjectCall_m6806 (Object_t * __this /* static, unused */, Object_t138 * ___target, MethodInfo_t * ___method, ArgumentCache_t1132 * ___arguments, MethodInfo* method)
{
	static bool PersistentCall_GetObjectCall_m6806_init;
	if (!PersistentCall_GetObjectCall_m6806_init)
	{
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		PersistentCall_GetObjectCall_m6806_init = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t1177 * V_3 = {0};
	Object_t138 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t138_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		V_0 = L_0;
		ArgumentCache_t1132 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788(L_1, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m2571(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m2571_MethodInfo);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t1132 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788(L_4, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetType_m6960(NULL /*static, unused*/, L_5, 0, /*hidden argument*/&Type_GetType_m6960_MethodInfo);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t138_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&CachedInvokableCall_1_t1178_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t913* L_11 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t913* >::Invoke(&Type_MakeGenericType_m6961_MethodInfo, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t913* L_15 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t138_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		TypeU5BU5D_t913* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&MethodInfo_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1)) = (Type_t *)L_18;
		TypeU5BU5D_t913* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2)) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t1177 * L_21 = (ConstructorInfo_t1177 *)VirtFuncInvoker1< ConstructorInfo_t1177 *, TypeU5BU5D_t913* >::Invoke(&Type_GetConstructor_m6962_MethodInfo, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t1132 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t138 * L_23 = ArgumentCache_get_unityObjectArgument_m6787(L_22, /*hidden argument*/&ArgumentCache_get_unityObjectArgument_m6787_MethodInfo);
		V_4 = L_23;
		Object_t138 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m388(NULL /*static, unused*/, L_24, (Object_t138 *)NULL, /*hidden argument*/&Object_op_Inequality_m388_MethodInfo);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t138 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m568(L_27, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m6867_MethodInfo, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t138 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t1177 * L_30 = V_3;
		ObjectU5BU5D_t164* L_31 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 3));
		Object_t138 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)L_32;
		ObjectU5BU5D_t164* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1)) = (Object_t *)L_34;
		ObjectU5BU5D_t164* L_35 = L_33;
		Object_t138 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2)) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m6963(L_30, L_35, /*hidden argument*/&ConstructorInfo_Invoke_m6963_MethodInfo);
		return ((BaseInvokableCall_t1133 *)IsInst(L_37, InitializedTypeInfo(&BaseInvokableCall_t1133_il2cpp_TypeInfo)));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCallGroup_t1139_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_54.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"
extern TypeInfo List_1_t1138_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t1179_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t153_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_54MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
extern Il2CppType List_1_t1138_0_0_0;
extern Il2CppType Enumerator_t1179_0_0_0;
extern MethodInfo List_1__ctor_m6964_MethodInfo;
extern MethodInfo InvokableCallList_AddPersistentInvokableCall_m6810_MethodInfo;
extern MethodInfo IDisposable_Dispose_m486_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m6964_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m6965_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m6966_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m6967_GenericMethod;


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern MethodInfo PersistentCallGroup__ctor_m6807_MethodInfo;
extern TypeInfo* List_1_t1138_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m6964_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m6807 (PersistentCallGroup_t1139 * __this, MethodInfo* method)
{
	static bool PersistentCallGroup__ctor_m6807_init;
	if (!PersistentCallGroup__ctor_m6807_init)
	{
		List_1_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1138_0_0_0);
		List_1__ctor_m6964_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m6964_GenericMethod);
		PersistentCallGroup__ctor_m6807_init = true;
	}
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1138_il2cpp_TypeInfo_var);
		List_1_t1138 * L_0 = (List_1_t1138 *)il2cpp_codegen_object_new (List_1_t1138_il2cpp_TypeInfo_var);
		List_1__ctor_m6964(L_0, /*hidden argument*/List_1__ctor_m6964_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCallGroup_Initialize_m6808_MethodInfo;
extern TypeInfo* Enumerator_t1179_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m6965_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m6966_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m6967_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m6808 (PersistentCallGroup_t1139 * __this, InvokableCallList_t1140 * ___invokableList, UnityEventBase_t1137 * ___unityEventBase, MethodInfo* method)
{
	static bool PersistentCallGroup_Initialize_m6808_init;
	if (!PersistentCallGroup_Initialize_m6808_init)
	{
		Enumerator_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t1179_0_0_0);
		List_1_GetEnumerator_m6965_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m6965_GenericMethod);
		Enumerator_get_Current_m6966_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m6966_GenericMethod);
		Enumerator_MoveNext_m6967_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m6967_GenericMethod);
		PersistentCallGroup_Initialize_m6808_init = true;
	}
	PersistentCall_t1136 * V_0 = {0};
	Enumerator_t1179  V_1 = {0};
	BaseInvokableCall_t1133 * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1138 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t1179  L_1 = List_1_GetEnumerator_m6965(L_0, /*hidden argument*/List_1_GetEnumerator_m6965_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t1136 * L_2 = Enumerator_get_Current_m6966((&V_1), /*hidden argument*/Enumerator_get_Current_m6966_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t1136 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m6804(L_3, /*hidden argument*/&PersistentCall_IsValid_m6804_MethodInfo);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t1136 * L_5 = V_0;
			UnityEventBase_t1137 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t1133 * L_7 = PersistentCall_GetRuntimeCall_m6805(L_5, L_6, /*hidden argument*/&PersistentCall_GetRuntimeCall_m6805_MethodInfo);
			V_2 = L_7;
			BaseInvokableCall_t1133 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t1140 * L_9 = ___invokableList;
			BaseInvokableCall_t1133 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m6810(L_9, L_10, /*hidden argument*/&InvokableCallList_AddPersistentInvokableCall_m6810_MethodInfo);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m6967((&V_1), /*hidden argument*/Enumerator_MoveNext_m6967_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t1179  L_12 = V_1;
		Enumerator_t1179  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t1179_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m486_MethodInfo, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCallList_t1140_il2cpp_TypeInfo;

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_55.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_3.h"
extern TypeInfo List_1_t1141_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t1180_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_55MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
extern Il2CppType List_1_t1141_0_0_0;
extern Il2CppType Predicate_1_t1180_0_0_0;
extern MethodInfo List_1__ctor_m6968_MethodInfo;
extern MethodInfo List_1_Add_m6969_MethodInfo;
extern MethodInfo List_1_get_Item_m6970_MethodInfo;
extern MethodInfo BaseInvokableCall_Find_m6971_MethodInfo;
extern MethodInfo List_1_get_Count_m6972_MethodInfo;
extern MethodInfo List_1_Contains_m6973_MethodInfo;
extern MethodInfo Predicate_1__ctor_m6974_MethodInfo;
extern MethodInfo List_1_Clear_m6975_MethodInfo;
extern MethodInfo BaseInvokableCall_Invoke_m6976_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m6968_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m6969_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m6970_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m6972_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m6973_GenericMethod;
extern Il2CppGenericMethod Predicate_1__ctor_m6974_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAll_m6977_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m6975_GenericMethod;
extern Il2CppGenericMethod List_1_AddRange_m6978_GenericMethod;


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern MethodInfo InvokableCallList__ctor_m6809_MethodInfo;
extern TypeInfo* List_1_t1141_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m6968_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m6809 (InvokableCallList_t1140 * __this, MethodInfo* method)
{
	static bool InvokableCallList__ctor_m6809_init;
	if (!InvokableCallList__ctor_m6809_init)
	{
		List_1_t1141_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1141_0_0_0);
		List_1__ctor_m6968_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m6968_GenericMethod);
		InvokableCallList__ctor_m6809_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1141_il2cpp_TypeInfo_var);
		List_1_t1141 * L_0 = (List_1_t1141 *)il2cpp_codegen_object_new (List_1_t1141_il2cpp_TypeInfo_var);
		List_1__ctor_m6968(L_0, /*hidden argument*/List_1__ctor_m6968_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t1141 * L_1 = (List_1_t1141 *)il2cpp_codegen_object_new (List_1_t1141_il2cpp_TypeInfo_var);
		List_1__ctor_m6968(L_1, /*hidden argument*/List_1__ctor_m6968_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t1141 * L_2 = (List_1_t1141 *)il2cpp_codegen_object_new (List_1_t1141_il2cpp_TypeInfo_var);
		List_1__ctor_m6968(L_2, /*hidden argument*/List_1__ctor_m6968_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo* List_1_Add_m6969_MethodInfo_var;
extern "C" void InvokableCallList_AddPersistentInvokableCall_m6810 (InvokableCallList_t1140 * __this, BaseInvokableCall_t1133 * ___call, MethodInfo* method)
{
	static bool InvokableCallList_AddPersistentInvokableCall_m6810_init;
	if (!InvokableCallList_AddPersistentInvokableCall_m6810_init)
	{
		List_1_Add_m6969_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m6969_GenericMethod);
		InvokableCallList_AddPersistentInvokableCall_m6810_init = true;
	}
	{
		List_1_t1141 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t1133 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t1133 * >::Invoke(List_1_Add_m6969_MethodInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo InvokableCallList_AddListener_m6811_MethodInfo;
extern MethodInfo* List_1_Add_m6969_MethodInfo_var;
extern "C" void InvokableCallList_AddListener_m6811 (InvokableCallList_t1140 * __this, BaseInvokableCall_t1133 * ___call, MethodInfo* method)
{
	static bool InvokableCallList_AddListener_m6811_init;
	if (!InvokableCallList_AddListener_m6811_init)
	{
		List_1_Add_m6969_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m6969_GenericMethod);
		InvokableCallList_AddListener_m6811_init = true;
	}
	{
		List_1_t1141 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t1133 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t1133 * >::Invoke(List_1_Add_m6969_MethodInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCallList_RemoveListener_m6812_MethodInfo;
extern TypeInfo* List_1_t1141_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t1180_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m6968_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m6970_MethodInfo_var;
extern MethodInfo* List_1_Add_m6969_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m6972_MethodInfo_var;
extern MethodInfo* List_1_Contains_m6973_MethodInfo_var;
extern MethodInfo* Predicate_1__ctor_m6974_MethodInfo_var;
extern MethodInfo* List_1_RemoveAll_m6977_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m6812 (InvokableCallList_t1140 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	static bool InvokableCallList_RemoveListener_m6812_init;
	if (!InvokableCallList_RemoveListener_m6812_init)
	{
		List_1_t1141_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1141_0_0_0);
		Predicate_1_t1180_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Predicate_1_t1180_0_0_0);
		List_1__ctor_m6968_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m6968_GenericMethod);
		List_1_get_Item_m6970_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m6970_GenericMethod);
		List_1_Add_m6969_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m6969_GenericMethod);
		List_1_get_Count_m6972_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m6972_GenericMethod);
		List_1_Contains_m6973_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Contains_m6973_GenericMethod);
		Predicate_1__ctor_m6974_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Predicate_1__ctor_m6974_GenericMethod);
		List_1_RemoveAll_m6977_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_RemoveAll_m6977_GenericMethod);
		InvokableCallList_RemoveListener_m6812_init = true;
	}
	List_1_t1141 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1141_il2cpp_TypeInfo_var);
		List_1_t1141 * L_0 = (List_1_t1141 *)il2cpp_codegen_object_new (List_1_t1141_il2cpp_TypeInfo_var);
		List_1__ctor_m6968(L_0, /*hidden argument*/List_1__ctor_m6968_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t1141 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t1133 * L_3 = (BaseInvokableCall_t1133 *)VirtFuncInvoker1< BaseInvokableCall_t1133 *, int32_t >::Invoke(List_1_get_Item_m6970_MethodInfo_var, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(&BaseInvokableCall_Find_m6971_MethodInfo, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t1141 * L_7 = V_0;
		List_1_t1141 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t1133 * L_10 = (BaseInvokableCall_t1133 *)VirtFuncInvoker1< BaseInvokableCall_t1133 *, int32_t >::Invoke(List_1_get_Item_m6970_MethodInfo_var, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t1133 * >::Invoke(List_1_Add_m6969_MethodInfo_var, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t1141 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m6972_MethodInfo_var, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t1141 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t1141 * L_16 = V_0;
		List_1_t1141 * L_17 = L_16;
		IntPtr_t L_18 = { GetVirtualMethodInfo(L_17, List_1_Contains_m6973_MethodInfo_var) };
		Predicate_1_t1180 * L_19 = (Predicate_1_t1180 *)il2cpp_codegen_object_new (Predicate_1_t1180_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m6974(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m6974_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m6977(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m6977_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern MethodInfo InvokableCallList_ClearPersistent_m6813_MethodInfo;
extern MethodInfo* List_1_Clear_m6975_MethodInfo_var;
extern "C" void InvokableCallList_ClearPersistent_m6813 (InvokableCallList_t1140 * __this, MethodInfo* method)
{
	static bool InvokableCallList_ClearPersistent_m6813_init;
	if (!InvokableCallList_ClearPersistent_m6813_init)
	{
		List_1_Clear_m6975_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m6975_GenericMethod);
		InvokableCallList_ClearPersistent_m6813_init = true;
	}
	{
		List_1_t1141 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(List_1_Clear_m6975_MethodInfo_var, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern MethodInfo InvokableCallList_Invoke_m6814_MethodInfo;
extern MethodInfo* List_1_AddRange_m6978_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m6970_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m6972_MethodInfo_var;
extern MethodInfo* List_1_Clear_m6975_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m6814 (InvokableCallList_t1140 * __this, ObjectU5BU5D_t164* ___parameters, MethodInfo* method)
{
	static bool InvokableCallList_Invoke_m6814_init;
	if (!InvokableCallList_Invoke_m6814_init)
	{
		List_1_AddRange_m6978_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_AddRange_m6978_GenericMethod);
		List_1_get_Item_m6970_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m6970_GenericMethod);
		List_1_get_Count_m6972_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m6972_GenericMethod);
		List_1_Clear_m6975_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m6975_GenericMethod);
		InvokableCallList_Invoke_m6814_init = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t1141 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t1141 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m6978(L_0, L_1, /*hidden argument*/List_1_AddRange_m6978_MethodInfo_var);
		List_1_t1141 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t1141 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m6978(L_2, L_3, /*hidden argument*/List_1_AddRange_m6978_MethodInfo_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t1141 * L_4 = (__this->___m_ExecutingCalls_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BaseInvokableCall_t1133 * L_6 = (BaseInvokableCall_t1133 *)VirtFuncInvoker1< BaseInvokableCall_t1133 *, int32_t >::Invoke(List_1_get_Item_m6970_MethodInfo_var, L_4, L_5);
		ObjectU5BU5D_t164* L_7 = ___parameters;
		NullCheck(L_6);
		VirtActionInvoker1< ObjectU5BU5D_t164* >::Invoke(&BaseInvokableCall_Invoke_m6976_MethodInfo, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		List_1_t1141 * L_10 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m6972_MethodInfo_var, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t1141 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(List_1_Clear_m6975_MethodInfo_var, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
extern TypeInfo BindingFlags_t169_il2cpp_TypeInfo;
extern TypeInfo Binder_t1162_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t1163_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t1164_il2cpp_TypeInfo;
extern Il2CppType Single_t139_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Type_get_AssemblyQualifiedName_m6979_MethodInfo;
extern MethodInfo UnityEventBase_DirtyPersistentCalls_m6818_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m6817_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_Impl_m6980_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m6823_MethodInfo;
extern MethodInfo UnityEventBase_RebuildPersistentCallsIfNeeded_m6819_MethodInfo;
extern MethodInfo Object_ToString_m715_MethodInfo;
extern MethodInfo Type_get_FullName_m6981_MethodInfo;
extern MethodInfo Type_GetMethod_m6982_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m6983_MethodInfo;
extern MethodInfo Type_get_BaseType_m6909_MethodInfo;


// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern MethodInfo UnityEventBase__ctor_m6815_MethodInfo;
extern "C" void UnityEventBase__ctor_m6815 (UnityEventBase_t1137 * __this, MethodInfo* method)
{
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		InvokableCallList_t1140 * L_0 = (InvokableCallList_t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCallList_t1140_il2cpp_TypeInfo));
		InvokableCallList__ctor_m6809(L_0, /*hidden argument*/&InvokableCallList__ctor_m6809_MethodInfo);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t1139 * L_1 = (PersistentCallGroup_t1139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PersistentCallGroup_t1139_il2cpp_TypeInfo));
		PersistentCallGroup__ctor_m6807(L_1, /*hidden argument*/&PersistentCallGroup__ctor_m6807_MethodInfo);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m568(__this, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m6979_MethodInfo, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m2811_MethodInfo;
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m2811 (UnityEventBase_t1137 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m2812_MethodInfo;
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m2812 (UnityEventBase_t1137 * __this, MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m6818(__this, /*hidden argument*/&UnityEventBase_DirtyPersistentCalls_m6818_MethodInfo);
		Type_t * L_0 = Object_GetType_m568(__this, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m6979_MethodInfo, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m6816 (UnityEventBase_t1137 * __this, PersistentCall_t1136 * ___call, MethodInfo* method)
{
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t138_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		V_0 = L_0;
		PersistentCall_t1136 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t1132 * L_2 = PersistentCall_get_arguments_m6803(L_1, /*hidden argument*/&PersistentCall_get_arguments_m6803_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788(L_2, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_IsNullOrEmpty_m2571(NULL /*static, unused*/, L_3, /*hidden argument*/&String_IsNullOrEmpty_m2571_MethodInfo);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t1136 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t1132 * L_6 = PersistentCall_get_arguments_m6803(L_5, /*hidden argument*/&PersistentCall_get_arguments_m6803_MethodInfo);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788(L_6, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m6788_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetType_m6960(NULL /*static, unused*/, L_7, 0, /*hidden argument*/&Type_GetType_m6960_MethodInfo);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_10 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t138_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t1136 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m6801(L_11, /*hidden argument*/&PersistentCall_get_methodName_m6801_MethodInfo);
		PersistentCall_t1136 * L_13 = ___call;
		NullCheck(L_13);
		Object_t138 * L_14 = PersistentCall_get_target_m6800(L_13, /*hidden argument*/&PersistentCall_get_target_m6800_MethodInfo);
		PersistentCall_t1136 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m6802(L_15, /*hidden argument*/&PersistentCall_get_mode_m6802_MethodInfo);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m6817(__this, L_12, L_14, L_16, L_17, /*hidden argument*/&UnityEventBase_FindMethod_m6817_MethodInfo);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m6817 (UnityEventBase_t1137 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method)
{
	static bool UnityEventBase_FindMethod_m6817_init;
	if (!UnityEventBase_FindMethod_m6817_init)
	{
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		UnityEventBase_FindMethod_m6817_init = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t913* G_B10_2 = {0};
	TypeU5BU5D_t913* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t913* G_B9_2 = {0};
	TypeU5BU5D_t913* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(&UnityEventBase_FindMethod_Impl_m6980_MethodInfo, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m6823(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m6823_MethodInfo);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t913* L_10 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Single_t139_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m6823(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m6823_MethodInfo);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t913* L_15 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Int32_t141_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m6823(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m6823_MethodInfo);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t913* L_20 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_21 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Boolean_t147_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0)) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m6823(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m6823_MethodInfo);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t913* L_25 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_26 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0)) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m6823(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m6823_MethodInfo);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t913* L_30 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_33 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t138_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m6823(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m6823_MethodInfo);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m6818 (UnityEventBase_t1137 * __this, MethodInfo* method)
{
	{
		InvokableCallList_t1140 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m6813(L_0, /*hidden argument*/&InvokableCallList_ClearPersistent_m6813_MethodInfo);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m6819 (UnityEventBase_t1137 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t1139 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t1140 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m6808(L_1, L_2, __this, /*hidden argument*/&PersistentCallGroup_Initialize_m6808_MethodInfo);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo UnityEventBase_AddCall_m6820_MethodInfo;
extern "C" void UnityEventBase_AddCall_m6820 (UnityEventBase_t1137 * __this, BaseInvokableCall_t1133 * ___call, MethodInfo* method)
{
	{
		InvokableCallList_t1140 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t1133 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m6811(L_0, L_1, /*hidden argument*/&InvokableCallList_AddListener_m6811_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEventBase_RemoveListener_m6821_MethodInfo;
extern "C" void UnityEventBase_RemoveListener_m6821 (UnityEventBase_t1137 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	{
		InvokableCallList_t1140 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m6812(L_0, L_1, L_2, /*hidden argument*/&InvokableCallList_RemoveListener_m6812_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern MethodInfo UnityEventBase_Invoke_m6822_MethodInfo;
extern "C" void UnityEventBase_Invoke_m6822 (UnityEventBase_t1137 * __this, ObjectU5BU5D_t164* ___parameters, MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m6819(__this, /*hidden argument*/&UnityEventBase_RebuildPersistentCallsIfNeeded_m6819_MethodInfo);
		InvokableCallList_t1140 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t164* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m6814(L_0, L_1, /*hidden argument*/&InvokableCallList_Invoke_m6814_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern MethodInfo UnityEventBase_ToString_m2810_MethodInfo;
extern "C" String_t* UnityEventBase_ToString_m2810 (UnityEventBase_t1137 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Object_ToString_m715(__this, /*hidden argument*/&Object_ToString_m715_MethodInfo);
		Type_t * L_1 = Object_GetType_m568(__this, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m6981_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m554(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral260, L_2, /*hidden argument*/&String_Concat_m554_MethodInfo);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m6823 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t913* ___argumentTypes, MethodInfo* method)
{
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t1170* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t1171 * V_5 = {0};
	ParameterInfoU5BU5D_t1170* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m568(L_0, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t913* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t1162 *, TypeU5BU5D_t913*, ParameterModifierU5BU5D_t1163* >::Invoke(&Type_GetMethod_m6982_MethodInfo, L_2, L_3, ((int32_t)52), (Binder_t1162 *)NULL, L_4, (ParameterModifierU5BU5D_t1163*)(ParameterModifierU5BU5D_t1163*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t1170* L_8 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t1170* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t1170* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_10, L_12));
		TypeU5BU5D_t913* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15));
		ParameterInfo_t1171 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m6983_MethodInfo, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m6983_MethodInfo, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t1170* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m6909_MethodInfo, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_t339_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern MethodInfo UnityEvent__ctor_m2363_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m2363 (UnityEvent_t339 * __this, MethodInfo* method)
{
	static bool UnityEvent__ctor_m2363_init;
	if (!UnityEvent__ctor_m2363_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		UnityEvent__ctor_m2363_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m6815(__this, /*hidden argument*/&UnityEventBase__ctor_m6815_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern MethodInfo UnityEvent_FindMethod_Impl_m2851_MethodInfo;
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m2851 (UnityEvent_t339 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_FindMethod_Impl_m2851_init;
	if (!UnityEvent_FindMethod_Impl_m2851_init)
	{
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		UnityEvent_FindMethod_Impl_m2851_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m6823(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m6823_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEvent_GetDelegate_m2852_MethodInfo;
extern "C" BaseInvokableCall_t1133 * UnityEvent_GetDelegate_m2852 (UnityEvent_t339 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t1134 * L_2 = (InvokableCall_t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t1134_il2cpp_TypeInfo));
		InvokableCall__ctor_m6796(L_2, L_0, L_1, /*hidden argument*/&InvokableCall__ctor_m6796_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern MethodInfo UnityEvent_Invoke_m2365_MethodInfo;
extern "C" void UnityEvent_Invoke_m2365 (UnityEvent_t339 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m6822(__this, L_0, /*hidden argument*/&UnityEventBase_Invoke_m6822_MethodInfo);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UserAuthorizationDialog_t1142_il2cpp_TypeInfo;
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m380_MethodInfo;


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern MethodInfo UserAuthorizationDialog__ctor_m6824_MethodInfo;
extern "C" void UserAuthorizationDialog__ctor_m6824 (UserAuthorizationDialog_t1142 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m380(__this, /*hidden argument*/&MonoBehaviour__ctor_m380_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern MethodInfo UserAuthorizationDialog_Start_m6825_MethodInfo;
extern "C" void UserAuthorizationDialog_Start_m6825 (UserAuthorizationDialog_t1142 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern MethodInfo UserAuthorizationDialog_OnGUI_m6826_MethodInfo;
extern "C" void UserAuthorizationDialog_OnGUI_m6826 (UserAuthorizationDialog_t1142 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern MethodInfo UserAuthorizationDialog_DoUserAuthorizationDialog_m6827_MethodInfo;
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m6827 (UserAuthorizationDialog_t1142 * __this, int32_t ___windowID, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultValueAttribute_t1143_il2cpp_TypeInfo;
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"
extern TypeInfo Attribute_t171_il2cpp_TypeInfo;
extern MethodInfo DefaultValueAttribute_get_Value_m6829_MethodInfo;
extern MethodInfo Object_Equals_m713_MethodInfo;
extern MethodInfo Attribute_GetHashCode_m5526_MethodInfo;
extern MethodInfo Object_GetHashCode_m714_MethodInfo;


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern MethodInfo DefaultValueAttribute__ctor_m6828_MethodInfo;
extern "C" void DefaultValueAttribute__ctor_m6828 (DefaultValueAttribute_t1143 * __this, String_t* ___value, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m6829 (DefaultValueAttribute_t1143 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern MethodInfo DefaultValueAttribute_Equals_m6830_MethodInfo;
extern "C" bool DefaultValueAttribute_Equals_m6830 (DefaultValueAttribute_t1143 * __this, Object_t * ___obj, MethodInfo* method)
{
	DefaultValueAttribute_t1143 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t1143 *)IsInst(L_0, InitializedTypeInfo(&DefaultValueAttribute_t1143_il2cpp_TypeInfo)));
		DefaultValueAttribute_t1143 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t1143 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m6829(L_3, /*hidden argument*/&DefaultValueAttribute_get_Value_m6829_MethodInfo);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t1143 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m6829(L_6, /*hidden argument*/&DefaultValueAttribute_get_Value_m6829_MethodInfo);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m713_MethodInfo, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern MethodInfo DefaultValueAttribute_GetHashCode_m6831_MethodInfo;
extern "C" int32_t DefaultValueAttribute_GetHashCode_m6831 (DefaultValueAttribute_t1143 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m5526(__this, /*hidden argument*/&Attribute_GetHashCode_m5526_MethodInfo);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m714_MethodInfo, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExcludeFromDocsAttribute_t1144_il2cpp_TypeInfo;
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern MethodInfo ExcludeFromDocsAttribute__ctor_m6832_MethodInfo;
extern "C" void ExcludeFromDocsAttribute__ctor_m6832 (ExcludeFromDocsAttribute_t1144 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FormerlySerializedAsAttribute_t534_il2cpp_TypeInfo;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern MethodInfo FormerlySerializedAsAttribute__ctor_m2809_MethodInfo;
extern "C" void FormerlySerializedAsAttribute__ctor_m2809 (FormerlySerializedAsAttribute_t534 * __this, String_t* ___oldName, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRules_t1145_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRuleAttribute_t1146_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_Enum.h"
extern TypeInfo Enum_t207_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
extern MethodInfo Enum_ToString_m718_MethodInfo;
extern MethodInfo TypeInferenceRuleAttribute__ctor_m6834_MethodInfo;


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern MethodInfo TypeInferenceRuleAttribute__ctor_m6833_MethodInfo;
extern "C" void TypeInferenceRuleAttribute__ctor_m6833 (TypeInferenceRuleAttribute_t1146 * __this, int32_t ___rule, MethodInfo* method)
{
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeInferenceRules_t1145_il2cpp_TypeInfo), &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m718_MethodInfo, L_2);
		TypeInferenceRuleAttribute__ctor_m6834(__this, L_3, /*hidden argument*/&TypeInferenceRuleAttribute__ctor_m6834_MethodInfo);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m6834 (TypeInferenceRuleAttribute_t1146 * __this, String_t* ___rule, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern MethodInfo TypeInferenceRuleAttribute_ToString_m6835_MethodInfo;
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m6835 (TypeInferenceRuleAttribute_t1146 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericStack_t1003_il2cpp_TypeInfo;
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern MethodInfo Stack__ctor_m6984_MethodInfo;


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern MethodInfo GenericStack__ctor_m6836_MethodInfo;
extern "C" void GenericStack__ctor_m6836 (GenericStack_t1003 * __this, MethodInfo* method)
{
	{
		Stack__ctor_m6984(__this, /*hidden argument*/&Stack__ctor_m6984_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern MethodInfo UnityAction__ctor_m2536_MethodInfo;
extern "C" void UnityAction__ctor_m2536 (UnityAction_t357 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m2405 (UnityAction_t357 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m2405((UnityAction_t357 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_UnityAction_t357(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo UnityAction_BeginInvoke_m6837_MethodInfo;
extern "C" Object_t * UnityAction_BeginInvoke_m6837 (UnityAction_t357 * __this, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern MethodInfo UnityAction_EndInvoke_m6838_MethodInfo;
extern "C" void UnityAction_EndInvoke_m6838 (UnityAction_t357 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif