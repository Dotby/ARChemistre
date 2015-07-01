#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t3136;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3123;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17542_gshared (ShimEnumerator_t3136 * __this, Dictionary_2_t3123 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m17542(__this, ___host, method) (( void (*) (ShimEnumerator_t3136 *, Dictionary_2_t3123 *, MethodInfo*))ShimEnumerator__ctor_m17542_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17543_gshared (ShimEnumerator_t3136 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m17543(__this, method) (( bool (*) (ShimEnumerator_t3136 *, MethodInfo*))ShimEnumerator_MoveNext_m17543_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1298  ShimEnumerator_get_Entry_m17544_gshared (ShimEnumerator_t3136 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m17544(__this, method) (( DictionaryEntry_t1298  (*) (ShimEnumerator_t3136 *, MethodInfo*))ShimEnumerator_get_Entry_m17544_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17545_gshared (ShimEnumerator_t3136 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m17545(__this, method) (( Object_t * (*) (ShimEnumerator_t3136 *, MethodInfo*))ShimEnumerator_get_Key_m17545_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17546_gshared (ShimEnumerator_t3136 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m17546(__this, method) (( Object_t * (*) (ShimEnumerator_t3136 *, MethodInfo*))ShimEnumerator_get_Value_m17546_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17547_gshared (ShimEnumerator_t3136 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m17547(__this, method) (( Object_t * (*) (ShimEnumerator_t3136 *, MethodInfo*))ShimEnumerator_get_Current_m17547_gshared)(__this, method)
