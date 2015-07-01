#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t4187;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4176;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m28764_gshared (ShimEnumerator_t4187 * __this, Dictionary_2_t4176 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m28764(__this, ___host, method) (( void (*) (ShimEnumerator_t4187 *, Dictionary_2_t4176 *, MethodInfo*))ShimEnumerator__ctor_m28764_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m28765_gshared (ShimEnumerator_t4187 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m28765(__this, method) (( bool (*) (ShimEnumerator_t4187 *, MethodInfo*))ShimEnumerator_MoveNext_m28765_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1298  ShimEnumerator_get_Entry_m28766_gshared (ShimEnumerator_t4187 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m28766(__this, method) (( DictionaryEntry_t1298  (*) (ShimEnumerator_t4187 *, MethodInfo*))ShimEnumerator_get_Entry_m28766_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m28767_gshared (ShimEnumerator_t4187 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m28767(__this, method) (( Object_t * (*) (ShimEnumerator_t4187 *, MethodInfo*))ShimEnumerator_get_Key_m28767_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m28768_gshared (ShimEnumerator_t4187 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m28768(__this, method) (( Object_t * (*) (ShimEnumerator_t4187 *, MethodInfo*))ShimEnumerator_get_Value_m28768_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m28769_gshared (ShimEnumerator_t4187 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m28769(__this, method) (( Object_t * (*) (ShimEnumerator_t4187 *, MethodInfo*))ShimEnumerator_get_Current_m28769_gshared)(__this, method)
