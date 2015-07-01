#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Enumerator_t3805;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Dictionary_2_t902;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m24825_gshared (Enumerator_t3805 * __this, Dictionary_2_t902 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m24825(__this, ___dictionary, method) (( void (*) (Enumerator_t3805 *, Dictionary_2_t902 *, MethodInfo*))Enumerator__ctor_m24825_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24826_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24826(__this, method) (( Object_t * (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24826_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1298  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24827_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24827(__this, method) (( DictionaryEntry_t1298  (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24827_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24828_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24828(__this, method) (( Object_t * (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24828_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24829_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24829(__this, method) (( Object_t * (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24829_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m24830_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m24830(__this, method) (( bool (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_MoveNext_m24830_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Current()
extern "C" KeyValuePair_2_t3801  Enumerator_get_Current_m24831_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_get_Current_m24831(__this, method) (( KeyValuePair_2_t3801  (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_get_Current_m24831_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m24832_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m24832(__this, method) (( int32_t (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_get_CurrentKey_m24832_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_CurrentValue()
extern "C" TrackableResultData_t698  Enumerator_get_CurrentValue_m24833_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m24833(__this, method) (( TrackableResultData_t698  (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_get_CurrentValue_m24833_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::VerifyState()
extern "C" void Enumerator_VerifyState_m24834_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m24834(__this, method) (( void (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_VerifyState_m24834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m24835_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m24835(__this, method) (( void (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_VerifyCurrent_m24835_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::Dispose()
extern "C" void Enumerator_Dispose_m24836_gshared (Enumerator_t3805 * __this, MethodInfo* method);
#define Enumerator_Dispose_m24836(__this, method) (( void (*) (Enumerator_t3805 *, MethodInfo*))Enumerator_Dispose_m24836_gshared)(__this, method)
