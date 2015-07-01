#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t1174;
// UnityEngine.Object
struct Object_t138;
struct Object_t138_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t164;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m6957_gshared (CachedInvokableCall_1_t1174 * __this, Object_t138 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m6957(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1174 *, Object_t138 *, MethodInfo_t *, int32_t, MethodInfo*))CachedInvokableCall_1__ctor_m6957_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m28259_gshared (CachedInvokableCall_1_t1174 * __this, ObjectU5BU5D_t164* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m28259(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1174 *, ObjectU5BU5D_t164*, MethodInfo*))CachedInvokableCall_1_Invoke_m28259_gshared)(__this, ___args, method)
