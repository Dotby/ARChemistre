#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
struct DefaultComparer_t3846;
// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void DefaultComparer__ctor_m25292_gshared (DefaultComparer_t3846 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m25292(__this, method) (( void (*) (DefaultComparer_t3846 *, MethodInfo*))DefaultComparer__ctor_m25292_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25293_gshared (DefaultComparer_t3846 * __this, TargetSearchResult_t789  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m25293(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3846 *, TargetSearchResult_t789 , MethodInfo*))DefaultComparer_GetHashCode_m25293_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25294_gshared (DefaultComparer_t3846 * __this, TargetSearchResult_t789  ___x, TargetSearchResult_t789  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m25294(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3846 *, TargetSearchResult_t789 , TargetSearchResult_t789 , MethodInfo*))DefaultComparer_Equals_m25294_gshared)(__this, ___x, ___y, method)
