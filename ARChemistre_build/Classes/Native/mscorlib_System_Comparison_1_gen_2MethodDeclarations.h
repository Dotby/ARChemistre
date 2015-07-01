#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t330;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2353_gshared (Comparison_1_t330 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m2353(__this, ___object, ___method, method) (( void (*) (Comparison_1_t330 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m2353_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17377_gshared (Comparison_1_t330 * __this, RaycastHit_t137  ___x, RaycastHit_t137  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m17377(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t330 *, RaycastHit_t137 , RaycastHit_t137 , MethodInfo*))Comparison_1_Invoke_m17377_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17378_gshared (Comparison_1_t330 * __this, RaycastHit_t137  ___x, RaycastHit_t137  ___y, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m17378(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t330 *, RaycastHit_t137 , RaycastHit_t137 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m17378_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17379_gshared (Comparison_1_t330 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m17379(__this, ___result, method) (( int32_t (*) (Comparison_1_t330 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m17379_gshared)(__this, ___result, method)
