#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.DateTime>
struct GenericComparer_1_t2375;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern "C" void GenericComparer_1__ctor_m14118_gshared (GenericComparer_1_t2375 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m14118(__this, method) (( void (*) (GenericComparer_1_t2375 *, MethodInfo*))GenericComparer_1__ctor_m14118_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m29680_gshared (GenericComparer_1_t2375 * __this, DateTime_t31  ___x, DateTime_t31  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m29680(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2375 *, DateTime_t31 , DateTime_t31 , MethodInfo*))GenericComparer_1_Compare_m29680_gshared)(__this, ___x, ___y, method)
