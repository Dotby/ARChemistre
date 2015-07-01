﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t3130;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3123;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17495_gshared (Enumerator_t3130 * __this, Dictionary_2_t3123 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m17495(__this, ___dictionary, method) (( void (*) (Enumerator_t3130 *, Dictionary_2_t3123 *, MethodInfo*))Enumerator__ctor_m17495_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17496_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17496(__this, method) (( Object_t * (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17496_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1298  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17497_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17497(__this, method) (( DictionaryEntry_t1298  (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17497_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17498_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17498(__this, method) (( Object_t * (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17498_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17499_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17499(__this, method) (( Object_t * (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17500_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m17500(__this, method) (( bool (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_MoveNext_m17500_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3126  Enumerator_get_Current_m17501_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_get_Current_m17501(__this, method) (( KeyValuePair_2_t3126  (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_get_Current_m17501_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17502_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m17502(__this, method) (( Object_t * (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_get_CurrentKey_m17502_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m17503_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m17503(__this, method) (( int32_t (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_get_CurrentValue_m17503_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m17504_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m17504(__this, method) (( void (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_VerifyState_m17504_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17505_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m17505(__this, method) (( void (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_VerifyCurrent_m17505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m17506_gshared (Enumerator_t3130 * __this, MethodInfo* method);
#define Enumerator_Dispose_m17506(__this, method) (( void (*) (Enumerator_t3130 *, MethodInfo*))Enumerator_Dispose_m17506_gshared)(__this, method)