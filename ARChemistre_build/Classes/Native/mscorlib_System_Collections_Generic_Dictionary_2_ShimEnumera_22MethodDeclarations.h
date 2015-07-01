#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct ShimEnumerator_t3811;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Dictionary_2_t902;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m24872_gshared (ShimEnumerator_t3811 * __this, Dictionary_2_t902 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m24872(__this, ___host, method) (( void (*) (ShimEnumerator_t3811 *, Dictionary_2_t902 *, MethodInfo*))ShimEnumerator__ctor_m24872_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m24873_gshared (ShimEnumerator_t3811 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m24873(__this, method) (( bool (*) (ShimEnumerator_t3811 *, MethodInfo*))ShimEnumerator_MoveNext_m24873_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Entry()
extern "C" DictionaryEntry_t1298  ShimEnumerator_get_Entry_m24874_gshared (ShimEnumerator_t3811 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m24874(__this, method) (( DictionaryEntry_t1298  (*) (ShimEnumerator_t3811 *, MethodInfo*))ShimEnumerator_get_Entry_m24874_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m24875_gshared (ShimEnumerator_t3811 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m24875(__this, method) (( Object_t * (*) (ShimEnumerator_t3811 *, MethodInfo*))ShimEnumerator_get_Key_m24875_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m24876_gshared (ShimEnumerator_t3811 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m24876(__this, method) (( Object_t * (*) (ShimEnumerator_t3811 *, MethodInfo*))ShimEnumerator_get_Value_m24876_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m24877_gshared (ShimEnumerator_t3811 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m24877(__this, method) (( Object_t * (*) (ShimEnumerator_t3811 *, MethodInfo*))ShimEnumerator_get_Current_m24877_gshared)(__this, method)
