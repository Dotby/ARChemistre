#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t4142;
// UnityEngine.Object
struct Object_t138;
struct Object_t138_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t164;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m28256_gshared (CachedInvokableCall_1_t4142 * __this, Object_t138 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m28256(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t4142 *, Object_t138 *, MethodInfo_t *, Object_t *, MethodInfo*))CachedInvokableCall_1__ctor_m28256_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m28257_gshared (CachedInvokableCall_1_t4142 * __this, ObjectU5BU5D_t164* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m28257(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t4142 *, ObjectU5BU5D_t164*, MethodInfo*))CachedInvokableCall_1_Invoke_m28257_gshared)(__this, ___args, method)
