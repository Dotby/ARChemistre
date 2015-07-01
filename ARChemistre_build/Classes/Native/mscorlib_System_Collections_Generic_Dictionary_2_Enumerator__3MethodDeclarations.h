#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2880;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2862;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14984_gshared (Enumerator_t2880 * __this, Dictionary_2_t2862 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14984(__this, ___dictionary, method) (( void (*) (Enumerator_t2880 *, Dictionary_2_t2862 *, MethodInfo*))Enumerator__ctor_m14984_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14985_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14985(__this, method) (( Object_t * (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14985_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1298  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14986_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14986(__this, method) (( DictionaryEntry_t1298  (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14986_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14987_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14987(__this, method) (( Object_t * (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14987_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14988_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14988(__this, method) (( Object_t * (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14988_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14989_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14989(__this, method) (( bool (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_MoveNext_m14989_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2863  Enumerator_get_Current_m14990_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14990(__this, method) (( KeyValuePair_2_t2863  (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_get_Current_m14990_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14991_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14991(__this, method) (( Object_t * (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_get_CurrentKey_m14991_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14992_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14992(__this, method) (( Object_t * (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_get_CurrentValue_m14992_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14993_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14993(__this, method) (( void (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_VerifyState_m14993_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14994_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14994(__this, method) (( void (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_VerifyCurrent_m14994_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14995_gshared (Enumerator_t2880 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14995(__this, method) (( void (*) (Enumerator_t2880 *, MethodInfo*))Enumerator_Dispose_m14995_gshared)(__this, method)
