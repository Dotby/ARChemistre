#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>
struct Enumerator_t3585;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3580;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m22404_gshared (Enumerator_t3585 * __this, Dictionary_2_t3580 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m22404(__this, ___dictionary, method) (( void (*) (Enumerator_t3585 *, Dictionary_2_t3580 *, MethodInfo*))Enumerator__ctor_m22404_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m22405_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m22405(__this, method) (( Object_t * (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m22405_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1298  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22406_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22406(__this, method) (( DictionaryEntry_t1298  (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22406_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22407_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22407(__this, method) (( Object_t * (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22407_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22408_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22408(__this, method) (( Object_t * (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22408_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool Enumerator_MoveNext_m22409_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m22409(__this, method) (( bool (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_MoveNext_m22409_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_Current()
extern "C" KeyValuePair_2_t3581  Enumerator_get_Current_m22410_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_get_Current_m22410(__this, method) (( KeyValuePair_2_t3581  (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_get_Current_m22410_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m22411_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m22411(__this, method) (( Object_t * (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_get_CurrentKey_m22411_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentValue()
extern "C" uint16_t Enumerator_get_CurrentValue_m22412_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m22412(__this, method) (( uint16_t (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_get_CurrentValue_m22412_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyState()
extern "C" void Enumerator_VerifyState_m22413_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m22413(__this, method) (( void (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_VerifyState_m22413_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m22414_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m22414(__this, method) (( void (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_VerifyCurrent_m22414_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::Dispose()
extern "C" void Enumerator_Dispose_m22415_gshared (Enumerator_t3585 * __this, MethodInfo* method);
#define Enumerator_Dispose_m22415(__this, method) (( void (*) (Enumerator_t3585 *, MethodInfo*))Enumerator_Dispose_m22415_gshared)(__this, method)
