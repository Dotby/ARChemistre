#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>
struct ShimEnumerator_t3591;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3580;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m22451_gshared (ShimEnumerator_t3591 * __this, Dictionary_2_t3580 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m22451(__this, ___host, method) (( void (*) (ShimEnumerator_t3591 *, Dictionary_2_t3580 *, MethodInfo*))ShimEnumerator__ctor_m22451_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m22452_gshared (ShimEnumerator_t3591 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m22452(__this, method) (( bool (*) (ShimEnumerator_t3591 *, MethodInfo*))ShimEnumerator_MoveNext_m22452_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Entry()
extern "C" DictionaryEntry_t1298  ShimEnumerator_get_Entry_m22453_gshared (ShimEnumerator_t3591 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m22453(__this, method) (( DictionaryEntry_t1298  (*) (ShimEnumerator_t3591 *, MethodInfo*))ShimEnumerator_get_Entry_m22453_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m22454_gshared (ShimEnumerator_t3591 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m22454(__this, method) (( Object_t * (*) (ShimEnumerator_t3591 *, MethodInfo*))ShimEnumerator_get_Key_m22454_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m22455_gshared (ShimEnumerator_t3591 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m22455(__this, method) (( Object_t * (*) (ShimEnumerator_t3591 *, MethodInfo*))ShimEnumerator_get_Value_m22455_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m22456_gshared (ShimEnumerator_t3591 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m22456(__this, method) (( Object_t * (*) (ShimEnumerator_t3591 *, MethodInfo*))ShimEnumerator_get_Current_m22456_gshared)(__this, method)
