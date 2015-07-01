#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t4102;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m28016_gshared (Comparison_1_t4102 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m28016(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4102 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m28016_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m28017_gshared (Comparison_1_t4102 * __this, UILineInfo_t510  ___x, UILineInfo_t510  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m28017(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4102 *, UILineInfo_t510 , UILineInfo_t510 , MethodInfo*))Comparison_1_Invoke_m28017_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m28018_gshared (Comparison_1_t4102 * __this, UILineInfo_t510  ___x, UILineInfo_t510  ___y, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m28018(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4102 *, UILineInfo_t510 , UILineInfo_t510 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m28018_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m28019_gshared (Comparison_1_t4102 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m28019(__this, ___result, method) (( int32_t (*) (Comparison_1_t4102 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m28019_gshared)(__this, ___result, method)
