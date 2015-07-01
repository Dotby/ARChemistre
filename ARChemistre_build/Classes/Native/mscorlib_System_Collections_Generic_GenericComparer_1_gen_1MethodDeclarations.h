#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t2379;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m14131_gshared (GenericComparer_1_t2379 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m14131(__this, method) (( void (*) (GenericComparer_1_t2379 *, MethodInfo*))GenericComparer_1__ctor_m14131_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m29718_gshared (GenericComparer_1_t2379 * __this, Guid_t2301  ___x, Guid_t2301  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m29718(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2379 *, Guid_t2301 , Guid_t2301 , MethodInfo*))GenericComparer_1_Compare_m29718_gshared)(__this, ___x, ___y, method)
