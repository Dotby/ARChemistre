#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t4294;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m29448_gshared (StaticGetter_1_t4294 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define StaticGetter_1__ctor_m29448(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t4294 *, Object_t *, IntPtr_t, MethodInfo*))StaticGetter_1__ctor_m29448_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m29449_gshared (StaticGetter_1_t4294 * __this, MethodInfo* method);
#define StaticGetter_1_Invoke_m29449(__this, method) (( Object_t * (*) (StaticGetter_1_t4294 *, MethodInfo*))StaticGetter_1_Invoke_m29449_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m29450_gshared (StaticGetter_1_t4294 * __this, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m29450(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t4294 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))StaticGetter_1_BeginInvoke_m29450_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m29451_gshared (StaticGetter_1_t4294 * __this, Object_t * ___result, MethodInfo* method);
#define StaticGetter_1_EndInvoke_m29451(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t4294 *, Object_t *, MethodInfo*))StaticGetter_1_EndInvoke_m29451_gshared)(__this, ___result, method)
