﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>
struct InvokableCall_1_t3062;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t3061;
// System.Object[]
struct ObjectU5BU5D_t164;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m16759(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3062 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m16751_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m16760(__this, ___callback, method) (( void (*) (InvokableCall_1_t3062 *, UnityAction_1_t3061 *, MethodInfo*))InvokableCall_1__ctor_m16752_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m16761(__this, ___args, method) (( void (*) (InvokableCall_1_t3062 *, ObjectU5BU5D_t164*, MethodInfo*))InvokableCall_1_Invoke_m16753_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m16762(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3062 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m16754_gshared)(__this, ___targetObj, ___method, method)