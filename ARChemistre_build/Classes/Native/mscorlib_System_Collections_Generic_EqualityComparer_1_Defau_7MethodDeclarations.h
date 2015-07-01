#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t3031;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m16438_gshared (DefaultComparer_t3031 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m16438(__this, method) (( void (*) (DefaultComparer_t3031 *, MethodInfo*))DefaultComparer__ctor_m16438_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16439_gshared (DefaultComparer_t3031 * __this, RaycastResult_t264  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m16439(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3031 *, RaycastResult_t264 , MethodInfo*))DefaultComparer_GetHashCode_m16439_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16440_gshared (DefaultComparer_t3031 * __this, RaycastResult_t264  ___x, RaycastResult_t264  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m16440(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3031 *, RaycastResult_t264 , RaycastResult_t264 , MethodInfo*))DefaultComparer_Equals_m16440_gshared)(__this, ___x, ___y, method)
