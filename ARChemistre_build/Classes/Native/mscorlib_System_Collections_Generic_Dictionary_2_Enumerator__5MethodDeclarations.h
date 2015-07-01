#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t3084;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1106;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17066_gshared (Enumerator_t3084 * __this, Dictionary_2_t1106 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m17066(__this, ___dictionary, method) (( void (*) (Enumerator_t3084 *, Dictionary_2_t1106 *, MethodInfo*))Enumerator__ctor_m17066_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17067_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17067(__this, method) (( Object_t * (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17067_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1298  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17068_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17068(__this, method) (( DictionaryEntry_t1298  (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17068_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17069_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17069(__this, method) (( Object_t * (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17069_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17070_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17070(__this, method) (( Object_t * (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17071_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m17071(__this, method) (( bool (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_MoveNext_m17071_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3080  Enumerator_get_Current_m17072_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_get_Current_m17072(__this, method) (( KeyValuePair_2_t3080  (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_get_Current_m17072_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m17073_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m17073(__this, method) (( int32_t (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_get_CurrentKey_m17073_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17074_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m17074(__this, method) (( Object_t * (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_get_CurrentValue_m17074_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17075_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m17075(__this, method) (( void (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_VerifyState_m17075_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17076_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m17076(__this, method) (( void (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_VerifyCurrent_m17076_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17077_gshared (Enumerator_t3084 * __this, MethodInfo* method);
#define Enumerator_Dispose_m17077(__this, method) (( void (*) (Enumerator_t3084 *, MethodInfo*))Enumerator_Dispose_m17077_gshared)(__this, method)
