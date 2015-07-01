#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t4181;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4176;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28717_gshared (Enumerator_t4181 * __this, Dictionary_2_t4176 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m28717(__this, ___dictionary, method) (( void (*) (Enumerator_t4181 *, Dictionary_2_t4176 *, MethodInfo*))Enumerator__ctor_m28717_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28718_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28718(__this, method) (( Object_t * (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28718_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1298  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28719_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28719(__this, method) (( DictionaryEntry_t1298  (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28719_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28720_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28720(__this, method) (( Object_t * (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28720_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28721_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28721(__this, method) (( Object_t * (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28721_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28722_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m28722(__this, method) (( bool (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_MoveNext_m28722_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t4177  Enumerator_get_Current_m28723_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_get_Current_m28723(__this, method) (( KeyValuePair_2_t4177  (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_get_Current_m28723_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m28724_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m28724(__this, method) (( Object_t * (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_get_CurrentKey_m28724_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m28725_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m28725(__this, method) (( uint8_t (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_get_CurrentValue_m28725_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m28726_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m28726(__this, method) (( void (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_VerifyState_m28726_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28727_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m28727(__this, method) (( void (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_VerifyCurrent_m28727_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m28728_gshared (Enumerator_t4181 * __this, MethodInfo* method);
#define Enumerator_Dispose_m28728(__this, method) (( void (*) (Enumerator_t4181 *, MethodInfo*))Enumerator_Dispose_m28728_gshared)(__this, method)
