#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<Vuforia.Surface>
struct Action_1_t163;
// System.Object
struct Object_t;
// Vuforia.Surface
struct Surface_t69;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<Vuforia.Surface>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_11MethodDeclarations.h"
#define Action_1__ctor_m543(__this, ___object, ___method, method) (( void (*) (Action_1_t163 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m15574_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.Surface>::Invoke(T)
#define Action_1_Invoke_m5164(__this, ___obj, method) (( void (*) (Action_1_t163 *, Object_t *, MethodInfo*))Action_1_Invoke_m15575_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.Surface>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m15580(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t163 *, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m15577_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.Surface>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m15581(__this, ___result, method) (( void (*) (Action_1_t163 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m15579_gshared)(__this, ___result, method)
