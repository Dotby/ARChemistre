#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Int32>
struct Action_1_t47;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m670_gshared (Action_1_t47 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Action_1__ctor_m670(__this, ___object, ___method, method) (( void (*) (Action_1_t47 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m670_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern "C" void Action_1_Invoke_m490_gshared (Action_1_t47 * __this, int32_t ___obj, MethodInfo* method);
#define Action_1_Invoke_m490(__this, ___obj, method) (( void (*) (Action_1_t47 *, int32_t, MethodInfo*))Action_1_Invoke_m490_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m15560_gshared (Action_1_t47 * __this, int32_t ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m15560(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t47 *, int32_t, AsyncCallback_t244 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m15560_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m15561_gshared (Action_1_t47 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m15561(__this, ___result, method) (( void (*) (Action_1_t47 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m15561_gshared)(__this, ___result, method)
