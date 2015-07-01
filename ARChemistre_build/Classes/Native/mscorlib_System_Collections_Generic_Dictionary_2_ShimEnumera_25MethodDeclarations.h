#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
struct ShimEnumerator_t3892;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3880;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25767_gshared (ShimEnumerator_t3892 * __this, Dictionary_2_t3880 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m25767(__this, ___host, method) (( void (*) (ShimEnumerator_t3892 *, Dictionary_2_t3880 *, MethodInfo*))ShimEnumerator__ctor_m25767_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25768_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m25768(__this, method) (( bool (*) (ShimEnumerator_t3892 *, MethodInfo*))ShimEnumerator_MoveNext_m25768_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Entry()
extern "C" DictionaryEntry_t1298  ShimEnumerator_get_Entry_m25769_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m25769(__this, method) (( DictionaryEntry_t1298  (*) (ShimEnumerator_t3892 *, MethodInfo*))ShimEnumerator_get_Entry_m25769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25770_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m25770(__this, method) (( Object_t * (*) (ShimEnumerator_t3892 *, MethodInfo*))ShimEnumerator_get_Key_m25770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25771_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m25771(__this, method) (( Object_t * (*) (ShimEnumerator_t3892 *, MethodInfo*))ShimEnumerator_get_Value_m25771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25772_gshared (ShimEnumerator_t3892 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m25772(__this, method) (( Object_t * (*) (ShimEnumerator_t3892 *, MethodInfo*))ShimEnumerator_get_Current_m25772_gshared)(__this, method)
