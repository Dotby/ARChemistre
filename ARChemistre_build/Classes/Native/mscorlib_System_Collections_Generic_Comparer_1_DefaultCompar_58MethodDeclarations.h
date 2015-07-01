﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4323;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m29685_gshared (DefaultComparer_t4323 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m29685(__this, method) (( void (*) (DefaultComparer_t4323 *, MethodInfo*))DefaultComparer__ctor_m29685_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29686_gshared (DefaultComparer_t4323 * __this, DateTime_t31  ___x, DateTime_t31  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m29686(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4323 *, DateTime_t31 , DateTime_t31 , MethodInfo*))DefaultComparer_Compare_m29686_gshared)(__this, ___x, ___y, method)