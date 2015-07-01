#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t2381;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m14145_gshared (GenericComparer_1_t2381 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m14145(__this, method) (( void (*) (GenericComparer_1_t2381 *, MethodInfo*))GenericComparer_1__ctor_m14145_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m29735_gshared (GenericComparer_1_t2381 * __this, TimeSpan_t150  ___x, TimeSpan_t150  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m29735(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2381 *, TimeSpan_t150 , TimeSpan_t150 , MethodInfo*))GenericComparer_1_Compare_m29735_gshared)(__this, ___x, ___y, method)
