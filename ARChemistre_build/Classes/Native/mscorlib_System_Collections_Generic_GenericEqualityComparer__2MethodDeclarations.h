#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t2382;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m14146_gshared (GenericEqualityComparer_1_t2382 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m14146(__this, method) (( void (*) (GenericEqualityComparer_1_t2382 *, MethodInfo*))GenericEqualityComparer_1__ctor_m14146_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m29742_gshared (GenericEqualityComparer_1_t2382 * __this, TimeSpan_t150  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m29742(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2382 *, TimeSpan_t150 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m29742_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m29743_gshared (GenericEqualityComparer_1_t2382 * __this, TimeSpan_t150  ___x, TimeSpan_t150  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m29743(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2382 *, TimeSpan_t150 , TimeSpan_t150 , MethodInfo*))GenericEqualityComparer_1_Equals_m29743_gshared)(__this, ___x, ___y, method)
