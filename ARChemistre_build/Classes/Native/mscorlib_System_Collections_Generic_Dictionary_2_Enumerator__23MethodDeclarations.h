#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
struct Enumerator_t3821;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
struct Dictionary_2_t903;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m24963_gshared (Enumerator_t3821 * __this, Dictionary_2_t903 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m24963(__this, ___dictionary, method) (( void (*) (Enumerator_t3821 *, Dictionary_2_t903 *, MethodInfo*))Enumerator__ctor_m24963_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24964_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24964(__this, method) (( Object_t * (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24964_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1298  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24965_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24965(__this, method) (( DictionaryEntry_t1298  (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24965_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24966_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24966(__this, method) (( Object_t * (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24966_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24967_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24967(__this, method) (( Object_t * (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24967_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m24968_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m24968(__this, method) (( bool (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_MoveNext_m24968_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Current()
extern "C" KeyValuePair_2_t3816  Enumerator_get_Current_m24969_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_get_Current_m24969(__this, method) (( KeyValuePair_2_t3816  (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_get_Current_m24969_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m24970_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m24970(__this, method) (( int32_t (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_get_CurrentKey_m24970_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_CurrentValue()
extern "C" VirtualButtonData_t699  Enumerator_get_CurrentValue_m24971_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m24971(__this, method) (( VirtualButtonData_t699  (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_get_CurrentValue_m24971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::VerifyState()
extern "C" void Enumerator_VerifyState_m24972_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m24972(__this, method) (( void (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_VerifyState_m24972_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m24973_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m24973(__this, method) (( void (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_VerifyCurrent_m24973_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Dispose()
extern "C" void Enumerator_Dispose_m24974_gshared (Enumerator_t3821 * __this, MethodInfo* method);
#define Enumerator_Dispose_m24974(__this, method) (( void (*) (Enumerator_t3821 *, MethodInfo*))Enumerator_Dispose_m24974_gshared)(__this, method)
