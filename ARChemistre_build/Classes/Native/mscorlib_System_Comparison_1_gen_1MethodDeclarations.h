#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t259;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2193_gshared (Comparison_1_t259 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m2193(__this, ___object, ___method, method) (( void (*) (Comparison_1_t259 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m2193_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15945_gshared (Comparison_1_t259 * __this, RaycastResult_t264  ___x, RaycastResult_t264  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m15945(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t259 *, RaycastResult_t264 , RaycastResult_t264 , MethodInfo*))Comparison_1_Invoke_m15945_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15946_gshared (Comparison_1_t259 * __this, RaycastResult_t264  ___x, RaycastResult_t264  ___y, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m15946(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t259 *, RaycastResult_t264 , RaycastResult_t264 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m15946_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15947_gshared (Comparison_1_t259 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m15947(__this, ___result, method) (( int32_t (*) (Comparison_1_t259 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m15947_gshared)(__this, ___result, method)
