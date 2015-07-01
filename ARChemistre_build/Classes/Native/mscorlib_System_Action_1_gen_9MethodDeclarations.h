#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t972;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t1108;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_11MethodDeclarations.h"
#define Action_1__ctor_m26825(__this, ___object, ___method, method) (( void (*) (Action_1_t972 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m15574_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
#define Action_1_Invoke_m6850(__this, ___obj, method) (( void (*) (Action_1_t972 *, IUserProfileU5BU5D_t1108*, MethodInfo*))Action_1_Invoke_m15575_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m26826(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t972 *, IUserProfileU5BU5D_t1108*, AsyncCallback_t244 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m15577_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m26827(__this, ___result, method) (( void (*) (Action_1_t972 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m15579_gshared)(__this, ___result, method)
