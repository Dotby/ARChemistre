﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t1173;
// UnityEngine.Object
struct Object_t138;
struct Object_t138_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t164;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m6956_gshared (CachedInvokableCall_1_t1173 * __this, Object_t138 * ___target, MethodInfo_t * ___theFunction, float ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m6956(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1173 *, Object_t138 *, MethodInfo_t *, float, MethodInfo*))CachedInvokableCall_1__ctor_m6956_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m28258_gshared (CachedInvokableCall_1_t1173 * __this, ObjectU5BU5D_t164* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m28258(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1173 *, ObjectU5BU5D_t164*, MethodInfo*))CachedInvokableCall_1_Invoke_m28258_gshared)(__this, ___args, method)