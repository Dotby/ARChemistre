#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
struct Predicate_1_t3847;
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

// System.Void System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25295_gshared (Predicate_1_t3847 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m25295(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3847 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m25295_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25296_gshared (Predicate_1_t3847 * __this, TargetSearchResult_t789  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m25296(__this, ___obj, method) (( bool (*) (Predicate_1_t3847 *, TargetSearchResult_t789 , MethodInfo*))Predicate_1_Invoke_m25296_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25297_gshared (Predicate_1_t3847 * __this, TargetSearchResult_t789  ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m25297(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3847 *, TargetSearchResult_t789 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m25297_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25298_gshared (Predicate_1_t3847 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m25298(__this, ___result, method) (( bool (*) (Predicate_1_t3847 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m25298_gshared)(__this, ___result, method)
