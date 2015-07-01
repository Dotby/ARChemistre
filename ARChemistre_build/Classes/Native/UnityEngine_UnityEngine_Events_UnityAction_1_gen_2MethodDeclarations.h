#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t517;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2642_gshared (UnityAction_1_t517 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m2642(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t517 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m2642_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m18930_gshared (UnityAction_1_t517 * __this, float ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m18930(__this, ___arg0, method) (( void (*) (UnityAction_1_t517 *, float, MethodInfo*))UnityAction_1_Invoke_m18930_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m18931_gshared (UnityAction_1_t517 * __this, float ___arg0, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m18931(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t517 *, float, AsyncCallback_t244 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m18931_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m18932_gshared (UnityAction_1_t517 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m18932(__this, ___result, method) (( void (*) (UnityAction_1_t517 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m18932_gshared)(__this, ___result, method)
