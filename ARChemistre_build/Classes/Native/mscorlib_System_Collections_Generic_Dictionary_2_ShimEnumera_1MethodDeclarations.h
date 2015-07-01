#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3090;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1106;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17113_gshared (ShimEnumerator_t3090 * __this, Dictionary_2_t1106 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m17113(__this, ___host, method) (( void (*) (ShimEnumerator_t3090 *, Dictionary_2_t1106 *, MethodInfo*))ShimEnumerator__ctor_m17113_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17114_gshared (ShimEnumerator_t3090 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m17114(__this, method) (( bool (*) (ShimEnumerator_t3090 *, MethodInfo*))ShimEnumerator_MoveNext_m17114_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1298  ShimEnumerator_get_Entry_m17115_gshared (ShimEnumerator_t3090 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m17115(__this, method) (( DictionaryEntry_t1298  (*) (ShimEnumerator_t3090 *, MethodInfo*))ShimEnumerator_get_Entry_m17115_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17116_gshared (ShimEnumerator_t3090 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m17116(__this, method) (( Object_t * (*) (ShimEnumerator_t3090 *, MethodInfo*))ShimEnumerator_get_Key_m17116_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17117_gshared (ShimEnumerator_t3090 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m17117(__this, method) (( Object_t * (*) (ShimEnumerator_t3090 *, MethodInfo*))ShimEnumerator_get_Value_m17117_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17118_gshared (ShimEnumerator_t3090 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m17118(__this, method) (( Object_t * (*) (ShimEnumerator_t3090 *, MethodInfo*))ShimEnumerator_get_Current_m17118_gshared)(__this, method)
