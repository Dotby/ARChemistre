#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3212;
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

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18298_gshared (Comparison_1_t3212 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m18298(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3212 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m18298_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18299_gshared (Comparison_1_t3212 * __this, UIVertex_t380  ___x, UIVertex_t380  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m18299(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3212 *, UIVertex_t380 , UIVertex_t380 , MethodInfo*))Comparison_1_Invoke_m18299_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18300_gshared (Comparison_1_t3212 * __this, UIVertex_t380  ___x, UIVertex_t380  ___y, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m18300(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3212 *, UIVertex_t380 , UIVertex_t380 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m18300_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18301_gshared (Comparison_1_t3212 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m18301(__this, ___result, method) (( int32_t (*) (Comparison_1_t3212 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m18301_gshared)(__this, ___result, method)
