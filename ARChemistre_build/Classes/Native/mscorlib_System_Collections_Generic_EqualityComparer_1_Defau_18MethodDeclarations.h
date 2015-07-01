#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t3208;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m18285_gshared (DefaultComparer_t3208 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m18285(__this, method) (( void (*) (DefaultComparer_t3208 *, MethodInfo*))DefaultComparer__ctor_m18285_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18286_gshared (DefaultComparer_t3208 * __this, UIVertex_t380  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m18286(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3208 *, UIVertex_t380 , MethodInfo*))DefaultComparer_GetHashCode_m18286_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18287_gshared (DefaultComparer_t3208 * __this, UIVertex_t380  ___x, UIVertex_t380  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m18287(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3208 *, UIVertex_t380 , UIVertex_t380 , MethodInfo*))DefaultComparer_Equals_m18287_gshared)(__this, ___x, ___y, method)
