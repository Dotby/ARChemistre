#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t4301;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m29482_gshared (InternalEnumerator_1_t4301 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m29482(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4301 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m29482_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29483_gshared (InternalEnumerator_1_t4301 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29483(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4301 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29483_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m29484_gshared (InternalEnumerator_1_t4301 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m29484(__this, method) (( void (*) (InternalEnumerator_1_t4301 *, MethodInfo*))InternalEnumerator_1_Dispose_m29484_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m29485_gshared (InternalEnumerator_1_t4301 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m29485(__this, method) (( bool (*) (InternalEnumerator_1_t4301 *, MethodInfo*))InternalEnumerator_1_MoveNext_m29485_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1567  InternalEnumerator_1_get_Current_m29486_gshared (InternalEnumerator_1_t4301 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m29486(__this, method) (( Decimal_t1567  (*) (InternalEnumerator_1_t4301 *, MethodInfo*))InternalEnumerator_1_get_Current_m29486_gshared)(__this, method)
