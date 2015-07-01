#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t386;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t3275;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1133;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m2519(__this, method) (( void (*) (UnityEvent_1_t386 *, MethodInfo*))UnityEvent_1__ctor_m16741_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m18918(__this, ___call, method) (( void (*) (UnityEvent_1_t386 *, UnityAction_1_t3275 *, MethodInfo*))UnityEvent_1_AddListener_m16743_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m18919(__this, ___call, method) (( void (*) (UnityEvent_1_t386 *, UnityAction_1_t3275 *, MethodInfo*))UnityEvent_1_RemoveListener_m16745_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m2857(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t386 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m16746_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m2858(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1133 * (*) (UnityEvent_1_t386 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m16747_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m18920(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1133 * (*) (Object_t * /* static, unused */, UnityAction_1_t3275 *, MethodInfo*))UnityEvent_1_GetDelegate_m16749_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m2621(__this, ___arg0, method) (( void (*) (UnityEvent_1_t386 *, String_t*, MethodInfo*))UnityEvent_1_Invoke_m16750_gshared)(__this, ___arg0, method)
