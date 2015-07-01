#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t3032;
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

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16441_gshared (Predicate_1_t3032 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m16441(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3032 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m16441_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16442_gshared (Predicate_1_t3032 * __this, RaycastResult_t264  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m16442(__this, ___obj, method) (( bool (*) (Predicate_1_t3032 *, RaycastResult_t264 , MethodInfo*))Predicate_1_Invoke_m16442_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16443_gshared (Predicate_1_t3032 * __this, RaycastResult_t264  ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m16443(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3032 *, RaycastResult_t264 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m16443_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16444_gshared (Predicate_1_t3032 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m16444(__this, ___result, method) (( bool (*) (Predicate_1_t3032 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m16444_gshared)(__this, ___result, method)
