﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t4156;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t1136;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"
#define Comparison_1__ctor_m28413(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4156 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m15424_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m28414(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4156 *, PersistentCall_t1136 *, PersistentCall_t1136 *, MethodInfo*))Comparison_1_Invoke_m15425_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m28415(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4156 *, PersistentCall_t1136 *, PersistentCall_t1136 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m15426_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m28416(__this, ___result, method) (( int32_t (*) (Comparison_1_t4156 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m15427_gshared)(__this, ___result, method)