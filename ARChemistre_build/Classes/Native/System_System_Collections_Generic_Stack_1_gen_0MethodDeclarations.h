﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3005;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t208;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m16116_gshared (Stack_1_t3005 * __this, MethodInfo* method);
#define Stack_1__ctor_m16116(__this, method) (( void (*) (Stack_1_t3005 *, MethodInfo*))Stack_1__ctor_m16116_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m16117_gshared (Stack_1_t3005 * __this, MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m16117(__this, method) (( bool (*) (Stack_1_t3005 *, MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m16117_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m16118_gshared (Stack_1_t3005 * __this, MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m16118(__this, method) (( Object_t * (*) (Stack_1_t3005 *, MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m16118_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m16119_gshared (Stack_1_t3005 * __this, Array_t * ___dest, int32_t ___idx, MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m16119(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t3005 *, Array_t *, int32_t, MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m16119_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16120_gshared (Stack_1_t3005 * __this, MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16120(__this, method) (( Object_t* (*) (Stack_1_t3005 *, MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16120_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m16121_gshared (Stack_1_t3005 * __this, MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m16121(__this, method) (( Object_t * (*) (Stack_1_t3005 *, MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m16121_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m16122_gshared (Stack_1_t3005 * __this, MethodInfo* method);
#define Stack_1_Peek_m16122(__this, method) (( Object_t * (*) (Stack_1_t3005 *, MethodInfo*))Stack_1_Peek_m16122_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m16123_gshared (Stack_1_t3005 * __this, MethodInfo* method);
#define Stack_1_Pop_m16123(__this, method) (( Object_t * (*) (Stack_1_t3005 *, MethodInfo*))Stack_1_Pop_m16123_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m16124_gshared (Stack_1_t3005 * __this, Object_t * ___t, MethodInfo* method);
#define Stack_1_Push_m16124(__this, ___t, method) (( void (*) (Stack_1_t3005 *, Object_t *, MethodInfo*))Stack_1_Push_m16124_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m16125_gshared (Stack_1_t3005 * __this, MethodInfo* method);
#define Stack_1_get_Count_m16125(__this, method) (( int32_t (*) (Stack_1_t3005 *, MethodInfo*))Stack_1_get_Count_m16125_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3008  Stack_1_GetEnumerator_m16126_gshared (Stack_1_t3005 * __this, MethodInfo* method);
#define Stack_1_GetEnumerator_m16126(__this, method) (( Enumerator_t3008  (*) (Stack_1_t3005 *, MethodInfo*))Stack_1_GetEnumerator_m16126_gshared)(__this, method)