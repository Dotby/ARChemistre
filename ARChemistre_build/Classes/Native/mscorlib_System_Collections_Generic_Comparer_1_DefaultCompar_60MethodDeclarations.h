#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4331;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m29723_gshared (DefaultComparer_t4331 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m29723(__this, method) (( void (*) (DefaultComparer_t4331 *, MethodInfo*))DefaultComparer__ctor_m29723_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29724_gshared (DefaultComparer_t4331 * __this, Guid_t2301  ___x, Guid_t2301  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m29724(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4331 *, Guid_t2301 , Guid_t2301 , MethodInfo*))DefaultComparer_Compare_m29724_gshared)(__this, ___x, ___y, method)
