#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2886;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2862;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15032_gshared (ShimEnumerator_t2886 * __this, Dictionary_2_t2862 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m15032(__this, ___host, method) (( void (*) (ShimEnumerator_t2886 *, Dictionary_2_t2862 *, MethodInfo*))ShimEnumerator__ctor_m15032_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15033_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m15033(__this, method) (( bool (*) (ShimEnumerator_t2886 *, MethodInfo*))ShimEnumerator_MoveNext_m15033_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1298  ShimEnumerator_get_Entry_m15034_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m15034(__this, method) (( DictionaryEntry_t1298  (*) (ShimEnumerator_t2886 *, MethodInfo*))ShimEnumerator_get_Entry_m15034_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15035_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m15035(__this, method) (( Object_t * (*) (ShimEnumerator_t2886 *, MethodInfo*))ShimEnumerator_get_Key_m15035_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15036_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m15036(__this, method) (( Object_t * (*) (ShimEnumerator_t2886 *, MethodInfo*))ShimEnumerator_get_Value_m15036_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15037_gshared (ShimEnumerator_t2886 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m15037(__this, method) (( Object_t * (*) (ShimEnumerator_t2886 *, MethodInfo*))ShimEnumerator_get_Current_m15037_gshared)(__this, method)
