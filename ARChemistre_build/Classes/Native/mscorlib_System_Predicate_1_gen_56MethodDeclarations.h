﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t4099;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m28006_gshared (Predicate_1_t4099 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m28006(__this, ___object, ___method, method) (( void (*) (Predicate_1_t4099 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m28006_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m28007_gshared (Predicate_1_t4099 * __this, UILineInfo_t510  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m28007(__this, ___obj, method) (( bool (*) (Predicate_1_t4099 *, UILineInfo_t510 , MethodInfo*))Predicate_1_Invoke_m28007_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m28008_gshared (Predicate_1_t4099 * __this, UILineInfo_t510  ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m28008(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t4099 *, UILineInfo_t510 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m28008_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m28009_gshared (Predicate_1_t4099 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m28009(__this, ___result, method) (( bool (*) (Predicate_1_t4099 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m28009_gshared)(__this, ___result, method)