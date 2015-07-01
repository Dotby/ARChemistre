#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t481;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t258;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m15948_gshared (EventFunction_1_t481 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define EventFunction_1__ctor_m15948(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t481 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m15948_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m15950_gshared (EventFunction_1_t481 * __this, Object_t * ___handler, BaseEventData_t258 * ___eventData, MethodInfo* method);
#define EventFunction_1_Invoke_m15950(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t481 *, Object_t *, BaseEventData_t258 *, MethodInfo*))EventFunction_1_Invoke_m15950_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m15952_gshared (EventFunction_1_t481 * __this, Object_t * ___handler, BaseEventData_t258 * ___eventData, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define EventFunction_1_BeginInvoke_m15952(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t481 *, Object_t *, BaseEventData_t258 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m15952_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m15954_gshared (EventFunction_1_t481 * __this, Object_t * ___result, MethodInfo* method);
#define EventFunction_1_EndInvoke_m15954(__this, ___result, method) (( void (*) (EventFunction_1_t481 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m15954_gshared)(__this, ___result, method)
