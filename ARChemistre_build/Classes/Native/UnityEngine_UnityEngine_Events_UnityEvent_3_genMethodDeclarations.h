#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t4169;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1133;

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_3__ctor_m28560_gshared (UnityEvent_3_t4169 * __this, MethodInfo* method);
#define UnityEvent_3__ctor_m28560(__this, method) (( void (*) (UnityEvent_3_t4169 *, MethodInfo*))UnityEvent_3__ctor_m28560_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m28561_gshared (UnityEvent_3_t4169 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m28561(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_3_t4169 *, String_t*, Object_t *, MethodInfo*))UnityEvent_3_FindMethod_Impl_m28561_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1133 * UnityEvent_3_GetDelegate_m28562_gshared (UnityEvent_3_t4169 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_3_GetDelegate_m28562(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1133 * (*) (UnityEvent_3_t4169 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_3_GetDelegate_m28562_gshared)(__this, ___target, ___theFunction, method)
