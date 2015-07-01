#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Dictionary_2_t1549;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1547;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1551;
// System.Collections.Generic.Dictionary`2/KeyCollection<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct KeyCollection_t4224;
// System.Collections.Generic.Dictionary`2/ValueCollection<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct ValueCollection_t4228;
// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>
struct IEqualityComparer_1_t1553;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>[]
struct KeyValuePair_2U5BU5D_t4566;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>
struct IEnumerator_1_t4567;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_33.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__33.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_28MethodDeclarations.h"
#define Dictionary_2__ctor_m28964(__this, method) (( void (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2__ctor_m14804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m8422(__this, ___comparer, method) (( void (*) (Dictionary_2_t1549 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14805_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Int32)
#define Dictionary_2__ctor_m28965(__this, ___capacity, method) (( void (*) (Dictionary_2_t1549 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14807_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m28966(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1549 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m14809_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28967(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1549 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14811_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28968(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1549 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14813_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m28969(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1549 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m28970(__this, ___key, method) (( void (*) (Dictionary_2_t1549 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14817_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28971(__this, method) (( bool (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14819_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28972(__this, method) (( Object_t * (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14821_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28973(__this, method) (( bool (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14823_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28974(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1549 *, KeyValuePair_2_t4218 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14825_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28975(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1549 *, KeyValuePair_2_t4218 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14827_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28976(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1549 *, KeyValuePair_2U5BU5D_t4566*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14829_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28977(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1549 *, KeyValuePair_2_t4218 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14831_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28978(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1549 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14833_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28979(__this, method) (( Object_t * (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14835_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28980(__this, method) (( Object_t* (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14837_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28981(__this, method) (( Object_t * (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14839_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Count()
#define Dictionary_2_get_Count_m28982(__this, method) (( int32_t (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_get_Count_m14841_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Item(TKey)
#define Dictionary_2_get_Item_m28983(__this, ___key, method) (( Dispatcher_t1547 * (*) (Dictionary_2_t1549 *, DispatcherKey_t1551 *, MethodInfo*))Dictionary_2_get_Item_m14843_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m28984(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1549 *, DispatcherKey_t1551 *, Dispatcher_t1547 *, MethodInfo*))Dictionary_2_set_Item_m14844_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m28985(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1549 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14846_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m28986(__this, ___size, method) (( void (*) (Dictionary_2_t1549 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14848_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m28987(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1549 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14850_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m28988(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4218  (*) (Object_t * /* static, unused */, DispatcherKey_t1551 *, Dispatcher_t1547 *, MethodInfo*))Dictionary_2_make_pair_m14852_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m28989(__this /* static, unused */, ___key, ___value, method) (( DispatcherKey_t1551 * (*) (Object_t * /* static, unused */, DispatcherKey_t1551 *, Dispatcher_t1547 *, MethodInfo*))Dictionary_2_pick_key_m14854_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m28990(__this /* static, unused */, ___key, ___value, method) (( Dispatcher_t1547 * (*) (Object_t * /* static, unused */, DispatcherKey_t1551 *, Dispatcher_t1547 *, MethodInfo*))Dictionary_2_pick_value_m14856_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m28991(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1549 *, KeyValuePair_2U5BU5D_t4566*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14858_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Resize()
#define Dictionary_2_Resize_m28992(__this, method) (( void (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_Resize_m14860_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Add(TKey,TValue)
#define Dictionary_2_Add_m8424(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1549 *, DispatcherKey_t1551 *, Dispatcher_t1547 *, MethodInfo*))Dictionary_2_Add_m14862_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Clear()
#define Dictionary_2_Clear_m28993(__this, method) (( void (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_Clear_m14864_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m28994(__this, ___key, method) (( bool (*) (Dictionary_2_t1549 *, DispatcherKey_t1551 *, MethodInfo*))Dictionary_2_ContainsKey_m14866_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m28995(__this, ___value, method) (( bool (*) (Dictionary_2_t1549 *, Dispatcher_t1547 *, MethodInfo*))Dictionary_2_ContainsValue_m14868_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m28996(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1549 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m14870_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m28997(__this, ___sender, method) (( void (*) (Dictionary_2_t1549 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14872_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Remove(TKey)
#define Dictionary_2_Remove_m28998(__this, ___key, method) (( bool (*) (Dictionary_2_t1549 *, DispatcherKey_t1551 *, MethodInfo*))Dictionary_2_Remove_m14874_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m8423(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1549 *, DispatcherKey_t1551 *, Dispatcher_t1547 **, MethodInfo*))Dictionary_2_TryGetValue_m14875_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Keys()
#define Dictionary_2_get_Keys_m28999(__this, method) (( KeyCollection_t4224 * (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_get_Keys_m14877_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Values()
#define Dictionary_2_get_Values_m29000(__this, method) (( ValueCollection_t4228 * (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_get_Values_m14878_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m29001(__this, ___key, method) (( DispatcherKey_t1551 * (*) (Dictionary_2_t1549 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14880_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m29002(__this, ___value, method) (( Dispatcher_t1547 * (*) (Dictionary_2_t1549 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14882_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m29003(__this, ___pair, method) (( bool (*) (Dictionary_2_t1549 *, KeyValuePair_2_t4218 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14884_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m29004(__this, method) (( Enumerator_t4226  (*) (Dictionary_2_t1549 *, MethodInfo*))Dictionary_2_GetEnumerator_m14886_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m29005(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, DispatcherKey_t1551 *, Dispatcher_t1547 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14888_gshared)(__this /* static, unused */, ___key, ___value, method)
