﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t4141;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t164;

// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_4__ctor_m28249_gshared (InvokableCall_4_t4141 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_4__ctor_m28249(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_4_t4141 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_4__ctor_m28249_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_4_Invoke_m28250_gshared (InvokableCall_4_t4141 * __this, ObjectU5BU5D_t164* ___args, MethodInfo* method);
#define InvokableCall_4_Invoke_m28250(__this, ___args, method) (( void (*) (InvokableCall_4_t4141 *, ObjectU5BU5D_t164*, MethodInfo*))InvokableCall_4_Invoke_m28250_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m28251_gshared (InvokableCall_4_t4141 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_4_Find_m28251(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_4_t4141 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_4_Find_m28251_gshared)(__this, ___targetObj, ___method, method)