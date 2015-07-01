﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t4143;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t4144;
// System.Object[]
struct ObjectU5BU5D_t164;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m28260_gshared (InvokableCall_1_t4143 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m28260(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t4143 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m28260_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m28261_gshared (InvokableCall_1_t4143 * __this, UnityAction_1_t4144 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m28261(__this, ___callback, method) (( void (*) (InvokableCall_1_t4143 *, UnityAction_1_t4144 *, MethodInfo*))InvokableCall_1__ctor_m28261_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m28262_gshared (InvokableCall_1_t4143 * __this, ObjectU5BU5D_t164* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m28262(__this, ___args, method) (( void (*) (InvokableCall_1_t4143 *, ObjectU5BU5D_t164*, MethodInfo*))InvokableCall_1_Invoke_m28262_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m28263_gshared (InvokableCall_1_t4143 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m28263(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t4143 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m28263_gshared)(__this, ___targetObj, ___method, method)