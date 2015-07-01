#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3209;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18288_gshared (Predicate_1_t3209 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m18288(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3209 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m18288_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18289_gshared (Predicate_1_t3209 * __this, UIVertex_t380  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m18289(__this, ___obj, method) (( bool (*) (Predicate_1_t3209 *, UIVertex_t380 , MethodInfo*))Predicate_1_Invoke_m18289_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18290_gshared (Predicate_1_t3209 * __this, UIVertex_t380  ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m18290(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3209 *, UIVertex_t380 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m18290_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18291_gshared (Predicate_1_t3209 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m18291(__this, ___result, method) (( bool (*) (Predicate_1_t3209 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m18291_gshared)(__this, ___result, method)
