#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4333;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m29732_gshared (DefaultComparer_t4333 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m29732(__this, method) (( void (*) (DefaultComparer_t4333 *, MethodInfo*))DefaultComparer__ctor_m29732_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29733_gshared (DefaultComparer_t4333 * __this, Guid_t2301  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m29733(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4333 *, Guid_t2301 , MethodInfo*))DefaultComparer_GetHashCode_m29733_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29734_gshared (DefaultComparer_t4333 * __this, Guid_t2301  ___x, Guid_t2301  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m29734(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4333 *, Guid_t2301 , Guid_t2301 , MethodInfo*))DefaultComparer_Equals_m29734_gshared)(__this, ___x, ___y, method)
