#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>
struct InternalEnumerator_1_t3840;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m25210_gshared (InternalEnumerator_1_t3840 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m25210(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3840 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m25210_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25211_gshared (InternalEnumerator_1_t3840 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25211(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3840 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25211_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m25212_gshared (InternalEnumerator_1_t3840 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m25212(__this, method) (( void (*) (InternalEnumerator_1_t3840 *, MethodInfo*))InternalEnumerator_1_Dispose_m25212_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m25213_gshared (InternalEnumerator_1_t3840 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m25213(__this, method) (( bool (*) (InternalEnumerator_1_t3840 *, MethodInfo*))InternalEnumerator_1_MoveNext_m25213_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::get_Current()
extern "C" TargetSearchResult_t789  InternalEnumerator_1_get_Current_m25214_gshared (InternalEnumerator_1_t3840 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m25214(__this, method) (( TargetSearchResult_t789  (*) (InternalEnumerator_1_t3840 *, MethodInfo*))InternalEnumerator_1_get_Current_m25214_gshared)(__this, method)
