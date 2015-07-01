#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t2376;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m14119_gshared (GenericEqualityComparer_1_t2376 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m14119(__this, method) (( void (*) (GenericEqualityComparer_1_t2376 *, MethodInfo*))GenericEqualityComparer_1__ctor_m14119_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m29687_gshared (GenericEqualityComparer_1_t2376 * __this, DateTime_t31  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m29687(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2376 *, DateTime_t31 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m29687_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m29688_gshared (GenericEqualityComparer_1_t2376 * __this, DateTime_t31  ___x, DateTime_t31  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m29688(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2376 *, DateTime_t31 , DateTime_t31 , MethodInfo*))GenericEqualityComparer_1_Equals_m29688_gshared)(__this, ___x, ___y, method)
