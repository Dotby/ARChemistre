﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t3329;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t3328;
// System.Object[]
struct ObjectU5BU5D_t164;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m19436_gshared (InvokableCall_1_t3329 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m19436(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3329 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m19436_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m19437_gshared (InvokableCall_1_t3329 * __this, UnityAction_1_t3328 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m19437(__this, ___callback, method) (( void (*) (InvokableCall_1_t3329 *, UnityAction_1_t3328 *, MethodInfo*))InvokableCall_1__ctor_m19437_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m19438_gshared (InvokableCall_1_t3329 * __this, ObjectU5BU5D_t164* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m19438(__this, ___args, method) (( void (*) (InvokableCall_1_t3329 *, ObjectU5BU5D_t164*, MethodInfo*))InvokableCall_1_Invoke_m19438_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m19439_gshared (InvokableCall_1_t3329 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m19439(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3329 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m19439_gshared)(__this, ___targetObj, ___method, method)
