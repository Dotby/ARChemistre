#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4335;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m29740_gshared (DefaultComparer_t4335 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m29740(__this, method) (( void (*) (DefaultComparer_t4335 *, MethodInfo*))DefaultComparer__ctor_m29740_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29741_gshared (DefaultComparer_t4335 * __this, TimeSpan_t150  ___x, TimeSpan_t150  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m29741(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4335 *, TimeSpan_t150 , TimeSpan_t150 , MethodInfo*))DefaultComparer_Compare_m29741_gshared)(__this, ___x, ___y, method)
