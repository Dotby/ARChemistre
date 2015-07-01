#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>
struct Comparison_1_t3850;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m25305_gshared (Comparison_1_t3850 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m25305(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3850 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m25305_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m25306_gshared (Comparison_1_t3850 * __this, TargetSearchResult_t789  ___x, TargetSearchResult_t789  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m25306(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3850 *, TargetSearchResult_t789 , TargetSearchResult_t789 , MethodInfo*))Comparison_1_Invoke_m25306_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m25307_gshared (Comparison_1_t3850 * __this, TargetSearchResult_t789  ___x, TargetSearchResult_t789  ___y, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m25307(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3850 *, TargetSearchResult_t789 , TargetSearchResult_t789 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m25307_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m25308_gshared (Comparison_1_t3850 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m25308(__this, ___result, method) (( int32_t (*) (Comparison_1_t3850 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m25308_gshared)(__this, ___result, method)
