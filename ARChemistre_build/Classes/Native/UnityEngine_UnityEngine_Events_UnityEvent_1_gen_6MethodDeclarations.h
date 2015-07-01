﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t3327;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t3328;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1133;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m19422_gshared (UnityEvent_1_t3327 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m19422(__this, method) (( void (*) (UnityEvent_1_t3327 *, MethodInfo*))UnityEvent_1__ctor_m19422_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m19424_gshared (UnityEvent_1_t3327 * __this, UnityAction_1_t3328 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m19424(__this, ___call, method) (( void (*) (UnityEvent_1_t3327 *, UnityAction_1_t3328 *, MethodInfo*))UnityEvent_1_AddListener_m19424_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m19426_gshared (UnityEvent_1_t3327 * __this, UnityAction_1_t3328 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m19426(__this, ___call, method) (( void (*) (UnityEvent_1_t3327 *, UnityAction_1_t3328 *, MethodInfo*))UnityEvent_1_RemoveListener_m19426_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m19427_gshared (UnityEvent_1_t3327 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m19427(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t3327 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m19427_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1133 * UnityEvent_1_GetDelegate_m19428_gshared (UnityEvent_1_t3327 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m19428(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1133 * (*) (UnityEvent_1_t3327 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m19428_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1133 * UnityEvent_1_GetDelegate_m19430_gshared (Object_t * __this /* static, unused */, UnityAction_1_t3328 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m19430(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1133 * (*) (Object_t * /* static, unused */, UnityAction_1_t3328 *, MethodInfo*))UnityEvent_1_GetDelegate_m19430_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m19431_gshared (UnityEvent_1_t3327 * __this, uint8_t ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m19431(__this, ___arg0, method) (( void (*) (UnityEvent_1_t3327 *, uint8_t, MethodInfo*))UnityEvent_1_Invoke_m19431_gshared)(__this, ___arg0, method)