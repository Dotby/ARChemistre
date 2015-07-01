#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4337;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m29749_gshared (DefaultComparer_t4337 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m29749(__this, method) (( void (*) (DefaultComparer_t4337 *, MethodInfo*))DefaultComparer__ctor_m29749_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29750_gshared (DefaultComparer_t4337 * __this, TimeSpan_t150  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m29750(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4337 *, TimeSpan_t150 , MethodInfo*))DefaultComparer_GetHashCode_m29750_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29751_gshared (DefaultComparer_t4337 * __this, TimeSpan_t150  ___x, TimeSpan_t150  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m29751(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4337 *, TimeSpan_t150 , TimeSpan_t150 , MethodInfo*))DefaultComparer_Equals_m29751_gshared)(__this, ___x, ___y, method)
