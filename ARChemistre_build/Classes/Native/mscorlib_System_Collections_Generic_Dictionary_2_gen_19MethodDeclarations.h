#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
struct Dictionary_2_t795;
// System.Object
struct Object_t;
// Vuforia.ImageTarget
struct ImageTarget_t632;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>
struct KeyCollection_t3857;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>
struct ValueCollection_t912;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3077;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>[]
struct KeyValuePair_2U5BU5D_t4501;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
struct IEnumerator_1_t4502;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
#define Dictionary_2__ctor_m5304(__this, method) (( void (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2__ctor_m6919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25309(__this, ___comparer, method) (( void (*) (Dictionary_2_t795 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m16957_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Int32)
#define Dictionary_2__ctor_m25310(__this, ___capacity, method) (( void (*) (Dictionary_2_t795 *, int32_t, MethodInfo*))Dictionary_2__ctor_m16959_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m25311(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t795 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m16961_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25312(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t795 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16963_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25313(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t795 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16965_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m25314(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t795 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16967_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25315(__this, ___key, method) (( void (*) (Dictionary_2_t795 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16969_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25316(__this, method) (( bool (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16971_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25317(__this, method) (( Object_t * (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16973_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25318(__this, method) (( bool (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25319(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t795 *, KeyValuePair_2_t3852 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16977_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25320(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t795 *, KeyValuePair_2_t3852 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16979_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25321(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t795 *, KeyValuePair_2U5BU5D_t4501*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16981_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25322(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t795 *, KeyValuePair_2_t3852 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16983_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25323(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t795 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16985_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25324(__this, method) (( Object_t * (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16987_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25325(__this, method) (( Object_t* (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16989_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25326(__this, method) (( Object_t * (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16991_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Count()
#define Dictionary_2_get_Count_m25327(__this, method) (( int32_t (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_get_Count_m16993_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Item(TKey)
#define Dictionary_2_get_Item_m25328(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t795 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m16995_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m5319(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t795 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m6921_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25329(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t795 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m16998_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25330(__this, ___size, method) (( void (*) (Dictionary_2_t795 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17000_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25331(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t795 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17002_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25332(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3852  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m17004_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25333(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m17006_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25334(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m17008_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25335(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t795 *, KeyValuePair_2U5BU5D_t4501*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17010_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Resize()
#define Dictionary_2_Resize_m25336(__this, method) (( void (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_Resize_m17012_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Add(TKey,TValue)
#define Dictionary_2_Add_m25337(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t795 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_Add_m17013_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Clear()
#define Dictionary_2_Clear_m5324(__this, method) (( void (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_Clear_m17014_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25338(__this, ___key, method) (( bool (*) (Dictionary_2_t795 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m17016_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25339(__this, ___value, method) (( bool (*) (Dictionary_2_t795 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m17018_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25340(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t795 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m17020_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25341(__this, ___sender, method) (( void (*) (Dictionary_2_t795 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17022_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Remove(TKey)
#define Dictionary_2_Remove_m5322(__this, ___key, method) (( bool (*) (Dictionary_2_t795 *, int32_t, MethodInfo*))Dictionary_2_Remove_m17023_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25342(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t795 *, int32_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m6920_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Keys()
#define Dictionary_2_get_Keys_m25343(__this, method) (( KeyCollection_t3857 * (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_get_Keys_m17025_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Values()
#define Dictionary_2_get_Values_m5326(__this, method) (( ValueCollection_t912 * (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_get_Values_m17026_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25344(__this, ___key, method) (( int32_t (*) (Dictionary_2_t795 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17028_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25345(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t795 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17030_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25346(__this, ___pair, method) (( bool (*) (Dictionary_2_t795 *, KeyValuePair_2_t3852 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17032_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m25347(__this, method) (( Enumerator_t3859  (*) (Dictionary_2_t795 *, MethodInfo*))Dictionary_2_GetEnumerator_m17033_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m25348(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17035_gshared)(__this /* static, unused */, ___key, ___value, method)
