#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>
struct Dictionary_2_t740;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>
struct KeyCollection_t3597;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>
struct ValueCollection_t3601;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t3577;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t4457;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>
struct IEnumerator_1_t4458;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_30MethodDeclarations.h"
#define Dictionary_2__ctor_m4996(__this, method) (( void (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2__ctor_m22287_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22288(__this, ___comparer, method) (( void (*) (Dictionary_2_t740 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m22289_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor(System.Int32)
#define Dictionary_2__ctor_m22290(__this, ___capacity, method) (( void (*) (Dictionary_2_t740 *, int32_t, MethodInfo*))Dictionary_2__ctor_m22291_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m22292(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t740 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m22293_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22294(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t740 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22295_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22296(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t740 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22297_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m22298(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t740 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22299_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m22300(__this, ___key, method) (( void (*) (Dictionary_2_t740 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22301_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22302(__this, method) (( bool (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22304(__this, method) (( Object_t * (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22305_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22306(__this, method) (( bool (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22307_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22308(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t740 *, KeyValuePair_2_t3595 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22309_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22310(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t740 *, KeyValuePair_2_t3595 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22311_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22312(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t740 *, KeyValuePair_2U5BU5D_t4457*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22313_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22314(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t740 *, KeyValuePair_2_t3595 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22315_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22316(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t740 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22317_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22318(__this, method) (( Object_t * (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22319_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22320(__this, method) (( Object_t* (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22321_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22322(__this, method) (( Object_t * (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::get_Count()
#define Dictionary_2_get_Count_m22324(__this, method) (( int32_t (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_get_Count_m22325_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::get_Item(TKey)
#define Dictionary_2_get_Item_m4995(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t740 *, Type_t *, MethodInfo*))Dictionary_2_get_Item_m22326_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m22327(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t740 *, Type_t *, uint16_t, MethodInfo*))Dictionary_2_set_Item_m22328_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m22329(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t740 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m22330_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m22331(__this, ___size, method) (( void (*) (Dictionary_2_t740 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m22332_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m22333(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t740 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m22334_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m22335(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3595  (*) (Object_t * /* static, unused */, Type_t *, uint16_t, MethodInfo*))Dictionary_2_make_pair_m22336_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m22337(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Type_t *, uint16_t, MethodInfo*))Dictionary_2_pick_key_m22338_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m22339(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Type_t *, uint16_t, MethodInfo*))Dictionary_2_pick_value_m22340_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m22341(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t740 *, KeyValuePair_2U5BU5D_t4457*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m22342_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Resize()
#define Dictionary_2_Resize_m22343(__this, method) (( void (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_Resize_m22344_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Add(TKey,TValue)
#define Dictionary_2_Add_m4997(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t740 *, Type_t *, uint16_t, MethodInfo*))Dictionary_2_Add_m22345_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Clear()
#define Dictionary_2_Clear_m22346(__this, method) (( void (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_Clear_m22347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m22348(__this, ___key, method) (( bool (*) (Dictionary_2_t740 *, Type_t *, MethodInfo*))Dictionary_2_ContainsKey_m22349_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m22350(__this, ___value, method) (( bool (*) (Dictionary_2_t740 *, uint16_t, MethodInfo*))Dictionary_2_ContainsValue_m22351_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m22352(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t740 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m22353_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m22354(__this, ___sender, method) (( void (*) (Dictionary_2_t740 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m22355_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Remove(TKey)
#define Dictionary_2_Remove_m22356(__this, ___key, method) (( bool (*) (Dictionary_2_t740 *, Type_t *, MethodInfo*))Dictionary_2_Remove_m22357_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m22358(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t740 *, Type_t *, uint16_t*, MethodInfo*))Dictionary_2_TryGetValue_m22359_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::get_Keys()
#define Dictionary_2_get_Keys_m22360(__this, method) (( KeyCollection_t3597 * (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_get_Keys_m22361_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::get_Values()
#define Dictionary_2_get_Values_m22362(__this, method) (( ValueCollection_t3601 * (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_get_Values_m22363_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m22364(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t740 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m22365_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m22366(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t740 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m22367_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m22368(__this, ___pair, method) (( bool (*) (Dictionary_2_t740 *, KeyValuePair_2_t3595 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22369_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m22370(__this, method) (( Enumerator_t3599  (*) (Dictionary_2_t740 *, MethodInfo*))Dictionary_2_GetEnumerator_m22371_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m22372(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, Type_t *, uint16_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22373_gshared)(__this /* static, unused */, ___key, ___value, method)
