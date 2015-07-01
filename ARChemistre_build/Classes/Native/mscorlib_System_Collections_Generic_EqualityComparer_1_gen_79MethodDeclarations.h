﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTime>
struct EqualityComparer_1_t4324;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
extern "C" void EqualityComparer_1__ctor_m29689_gshared (EqualityComparer_1_t4324 * __this, MethodInfo* method);
#define EqualityComparer_1__ctor_m29689(__this, method) (( void (*) (EqualityComparer_1_t4324 *, MethodInfo*))EqualityComparer_1__ctor_m29689_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
extern "C" void EqualityComparer_1__cctor_m29690_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define EqualityComparer_1__cctor_m29690(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))EqualityComparer_1__cctor_m29690_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29691_gshared (EqualityComparer_1_t4324 * __this, Object_t * ___obj, MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29691(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t4324 *, Object_t *, MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29691_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29692_gshared (EqualityComparer_1_t4324 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29692(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t4324 *, Object_t *, Object_t *, MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29692_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
extern "C" EqualityComparer_1_t4324 * EqualityComparer_1_get_Default_m29693_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define EqualityComparer_1_get_Default_m29693(__this /* static, unused */, method) (( EqualityComparer_1_t4324 * (*) (Object_t * /* static, unused */, MethodInfo*))EqualityComparer_1_get_Default_m29693_gshared)(__this /* static, unused */, method)