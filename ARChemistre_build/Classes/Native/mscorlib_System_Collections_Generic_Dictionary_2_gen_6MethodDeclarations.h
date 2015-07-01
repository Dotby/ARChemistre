#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>
struct Dictionary_2_t673;
// System.Object
struct Object_t;
// Vuforia.VirtualButton
struct VirtualButton_t655;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButton>
struct KeyCollection_t3493;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButton>
struct ValueCollection_t845;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3077;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>[]
struct KeyValuePair_2U5BU5D_t4444;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>>
struct IEnumerator_1_t4445;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButton>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
#define Dictionary_2__ctor_m4829(__this, method) (( void (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2__ctor_m6919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21255(__this, ___comparer, method) (( void (*) (Dictionary_2_t673 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m16957_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor(System.Int32)
#define Dictionary_2__ctor_m21256(__this, ___capacity, method) (( void (*) (Dictionary_2_t673 *, int32_t, MethodInfo*))Dictionary_2__ctor_m16959_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m21257(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t673 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m16961_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21258(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t673 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16963_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21259(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t673 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16965_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m21260(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t673 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16967_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m21261(__this, ___key, method) (( void (*) (Dictionary_2_t673 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16969_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21262(__this, method) (( bool (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16971_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21263(__this, method) (( Object_t * (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16973_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21264(__this, method) (( bool (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21265(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t673 *, KeyValuePair_2_t3491 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16977_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21266(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t673 *, KeyValuePair_2_t3491 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16979_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21267(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t673 *, KeyValuePair_2U5BU5D_t4444*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16981_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21268(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t673 *, KeyValuePair_2_t3491 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16983_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21269(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t673 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16985_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21270(__this, method) (( Object_t * (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16987_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21271(__this, method) (( Object_t* (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16989_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21272(__this, method) (( Object_t * (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16991_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::get_Count()
#define Dictionary_2_get_Count_m21273(__this, method) (( int32_t (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_get_Count_m16993_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::get_Item(TKey)
#define Dictionary_2_get_Item_m4841(__this, ___key, method) (( VirtualButton_t655 * (*) (Dictionary_2_t673 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m16995_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m21274(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t673 *, int32_t, VirtualButton_t655 *, MethodInfo*))Dictionary_2_set_Item_m6921_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m21275(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t673 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m16998_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m21276(__this, ___size, method) (( void (*) (Dictionary_2_t673 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17000_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m21277(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t673 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17002_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m21278(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3491  (*) (Object_t * /* static, unused */, int32_t, VirtualButton_t655 *, MethodInfo*))Dictionary_2_make_pair_m17004_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m21279(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, VirtualButton_t655 *, MethodInfo*))Dictionary_2_pick_key_m17006_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m21280(__this /* static, unused */, ___key, ___value, method) (( VirtualButton_t655 * (*) (Object_t * /* static, unused */, int32_t, VirtualButton_t655 *, MethodInfo*))Dictionary_2_pick_value_m17008_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m21281(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t673 *, KeyValuePair_2U5BU5D_t4444*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17010_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Resize()
#define Dictionary_2_Resize_m21282(__this, method) (( void (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_Resize_m17012_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Add(TKey,TValue)
#define Dictionary_2_Add_m4840(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t673 *, int32_t, VirtualButton_t655 *, MethodInfo*))Dictionary_2_Add_m17013_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Clear()
#define Dictionary_2_Clear_m21283(__this, method) (( void (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_Clear_m17014_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m4839(__this, ___key, method) (( bool (*) (Dictionary_2_t673 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m17016_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m21284(__this, ___value, method) (( bool (*) (Dictionary_2_t673 *, VirtualButton_t655 *, MethodInfo*))Dictionary_2_ContainsValue_m17018_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m21285(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t673 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m17020_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m21286(__this, ___sender, method) (( void (*) (Dictionary_2_t673 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17022_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Remove(TKey)
#define Dictionary_2_Remove_m4836(__this, ___key, method) (( bool (*) (Dictionary_2_t673 *, int32_t, MethodInfo*))Dictionary_2_Remove_m17023_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m21287(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t673 *, int32_t, VirtualButton_t655 **, MethodInfo*))Dictionary_2_TryGetValue_m6920_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::get_Keys()
#define Dictionary_2_get_Keys_m21288(__this, method) (( KeyCollection_t3493 * (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_get_Keys_m17025_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::get_Values()
#define Dictionary_2_get_Values_m4846(__this, method) (( ValueCollection_t845 * (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_get_Values_m17026_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m21289(__this, ___key, method) (( int32_t (*) (Dictionary_2_t673 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17028_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m21290(__this, ___value, method) (( VirtualButton_t655 * (*) (Dictionary_2_t673 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17030_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m21291(__this, ___pair, method) (( bool (*) (Dictionary_2_t673 *, KeyValuePair_2_t3491 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17032_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m21292(__this, method) (( Enumerator_t3495  (*) (Dictionary_2_t673 *, MethodInfo*))Dictionary_2_GetEnumerator_m17033_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m21293(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, int32_t, VirtualButton_t655 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17035_gshared)(__this /* static, unused */, ___key, ___value, method)
