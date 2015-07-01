#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t36;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_10MethodDeclarations.h"
#define Action_1__ctor_m669(__this, ___object, ___method, method) (( void (*) (Action_1_t36 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m15194_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m478(__this, ___obj, method) (( void (*) (Action_1_t36 *, bool, MethodInfo*))Action_1_Invoke_m15195_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m15196(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t36 *, bool, AsyncCallback_t244 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m15197_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m15198(__this, ___result, method) (( void (*) (Action_1_t36 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m15199_gshared)(__this, ___result, method)
