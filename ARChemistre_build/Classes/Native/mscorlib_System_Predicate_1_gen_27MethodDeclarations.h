#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int32>
struct Predicate_1_t3453;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m20874_gshared (Predicate_1_t3453 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m20874(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3453 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m20874_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m20875_gshared (Predicate_1_t3453 * __this, int32_t ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m20875(__this, ___obj, method) (( bool (*) (Predicate_1_t3453 *, int32_t, MethodInfo*))Predicate_1_Invoke_m20875_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m20876_gshared (Predicate_1_t3453 * __this, int32_t ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m20876(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3453 *, int32_t, AsyncCallback_t244 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m20876_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m20877_gshared (Predicate_1_t3453 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m20877(__this, ___result, method) (( bool (*) (Predicate_1_t3453 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m20877_gshared)(__this, ___result, method)
