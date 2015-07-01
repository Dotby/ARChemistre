#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4329;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m29711_gshared (DefaultComparer_t4329 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m29711(__this, method) (( void (*) (DefaultComparer_t4329 *, MethodInfo*))DefaultComparer__ctor_m29711_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29712_gshared (DefaultComparer_t4329 * __this, DateTimeOffset_t2278  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m29712(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4329 *, DateTimeOffset_t2278 , MethodInfo*))DefaultComparer_GetHashCode_m29712_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29713_gshared (DefaultComparer_t4329 * __this, DateTimeOffset_t2278  ___x, DateTimeOffset_t2278  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m29713(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4329 *, DateTimeOffset_t2278 , DateTimeOffset_t2278 , MethodInfo*))DefaultComparer_Equals_m29713_gshared)(__this, ___x, ___y, method)
