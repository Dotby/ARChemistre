#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t3121;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t336;
// System.Object[]
struct ObjectU5BU5D_t164;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m17390_gshared (InvokableCall_1_t3121 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m17390(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3121 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m17390_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m17391_gshared (InvokableCall_1_t3121 * __this, UnityAction_1_t336 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m17391(__this, ___callback, method) (( void (*) (InvokableCall_1_t3121 *, UnityAction_1_t336 *, MethodInfo*))InvokableCall_1__ctor_m17391_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m17392_gshared (InvokableCall_1_t3121 * __this, ObjectU5BU5D_t164* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m17392(__this, ___args, method) (( void (*) (InvokableCall_1_t3121 *, ObjectU5BU5D_t164*, MethodInfo*))InvokableCall_1_Invoke_m17392_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m17393_gshared (InvokableCall_1_t3121 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m17393(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3121 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m17393_gshared)(__this, ___targetObj, ___method, method)
