﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t2919;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15369_gshared (Predicate_1_t2919 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m15369(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2919 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m15369_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15370_gshared (Predicate_1_t2919 * __this, Object_t * ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m15370(__this, ___obj, method) (( bool (*) (Predicate_1_t2919 *, Object_t *, MethodInfo*))Predicate_1_Invoke_m15370_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15371_gshared (Predicate_1_t2919 * __this, Object_t * ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m15371(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2919 *, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m15371_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15372_gshared (Predicate_1_t2919 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m15372(__this, ___result, method) (( bool (*) (Predicate_1_t2919 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m15372_gshared)(__this, ___result, method)