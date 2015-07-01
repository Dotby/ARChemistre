#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t4293;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m29444_gshared (Getter_2_t4293 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Getter_2__ctor_m29444(__this, ___object, ___method, method) (( void (*) (Getter_2_t4293 *, Object_t *, IntPtr_t, MethodInfo*))Getter_2__ctor_m29444_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m29445_gshared (Getter_2_t4293 * __this, Object_t * ____this, MethodInfo* method);
#define Getter_2_Invoke_m29445(__this, ____this, method) (( Object_t * (*) (Getter_2_t4293 *, Object_t *, MethodInfo*))Getter_2_Invoke_m29445_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m29446_gshared (Getter_2_t4293 * __this, Object_t * ____this, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Getter_2_BeginInvoke_m29446(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t4293 *, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Getter_2_BeginInvoke_m29446_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m29447_gshared (Getter_2_t4293 * __this, Object_t * ___result, MethodInfo* method);
#define Getter_2_EndInvoke_m29447(__this, ___result, method) (( Object_t * (*) (Getter_2_t4293 *, Object_t *, MethodInfo*))Getter_2_EndInvoke_m29447_gshared)(__this, ___result, method)
