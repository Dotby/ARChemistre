﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t274;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t295;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t258;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1MethodDeclarations.h"
#define EventFunction_1__ctor_m2222(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t274 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m15948_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m16769(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t274 *, Object_t *, BaseEventData_t258 *, MethodInfo*))EventFunction_1_Invoke_m15950_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m16770(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t274 *, Object_t *, BaseEventData_t258 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m15952_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m16771(__this, ___result, method) (( void (*) (EventFunction_1_t274 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m15954_gshared)(__this, ___result, method)