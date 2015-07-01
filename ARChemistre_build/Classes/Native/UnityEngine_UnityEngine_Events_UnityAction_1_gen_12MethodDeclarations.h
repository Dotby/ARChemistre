#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t4144;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m28264_gshared (UnityAction_1_t4144 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m28264(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t4144 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m28264_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m28265_gshared (UnityAction_1_t4144 * __this, int32_t ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m28265(__this, ___arg0, method) (( void (*) (UnityAction_1_t4144 *, int32_t, MethodInfo*))UnityAction_1_Invoke_m28265_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m28266_gshared (UnityAction_1_t4144 * __this, int32_t ___arg0, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m28266(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t4144 *, int32_t, AsyncCallback_t244 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m28266_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m28267_gshared (UnityAction_1_t4144 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m28267(__this, ___result, method) (( void (*) (UnityAction_1_t4144 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m28267_gshared)(__this, ___result, method)
