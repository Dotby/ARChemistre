#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t367;
// System.Object
struct Object_t;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t503;
// UnityEngine.Canvas
struct Canvas_t356;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct KeyCollection_t3258;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_t3262;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Canvas>
struct IEqualityComparer_1_t3239;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>[]
struct KeyValuePair_2U5BU5D_t4401;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
struct IEnumerator_1_t4402;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_28MethodDeclarations.h"
#define Dictionary_2__ctor_m2465(__this, method) (( void (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2__ctor_m14804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18605(__this, ___comparer, method) (( void (*) (Dictionary_2_t367 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14805_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18606(__this, ___capacity, method) (( void (*) (Dictionary_2_t367 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14807_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18607(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t367 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m14809_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18608(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t367 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14811_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18609(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t367 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14813_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18610(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t367 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18611(__this, ___key, method) (( void (*) (Dictionary_2_t367 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14817_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18612(__this, method) (( bool (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14819_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18613(__this, method) (( Object_t * (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14821_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18614(__this, method) (( bool (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14823_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18615(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t367 *, KeyValuePair_2_t3241 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14825_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18616(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t367 *, KeyValuePair_2_t3241 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14827_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18617(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t367 *, KeyValuePair_2U5BU5D_t4401*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14829_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18618(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t367 *, KeyValuePair_2_t3241 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14831_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18619(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t367 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14833_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18620(__this, method) (( Object_t * (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14835_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18621(__this, method) (( Object_t* (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14837_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18622(__this, method) (( Object_t * (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14839_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Count()
#define Dictionary_2_get_Count_m18623(__this, method) (( int32_t (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_get_Count_m14841_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Item(TKey)
#define Dictionary_2_get_Item_m18624(__this, ___key, method) (( IndexedSet_1_t503 * (*) (Dictionary_2_t367 *, Canvas_t356 *, MethodInfo*))Dictionary_2_get_Item_m14843_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18625(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t367 *, Canvas_t356 *, IndexedSet_1_t503 *, MethodInfo*))Dictionary_2_set_Item_m14844_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18626(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t367 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14846_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18627(__this, ___size, method) (( void (*) (Dictionary_2_t367 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14848_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18628(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t367 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14850_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18629(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3241  (*) (Object_t * /* static, unused */, Canvas_t356 *, IndexedSet_1_t503 *, MethodInfo*))Dictionary_2_make_pair_m14852_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18630(__this /* static, unused */, ___key, ___value, method) (( Canvas_t356 * (*) (Object_t * /* static, unused */, Canvas_t356 *, IndexedSet_1_t503 *, MethodInfo*))Dictionary_2_pick_key_m14854_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18631(__this /* static, unused */, ___key, ___value, method) (( IndexedSet_1_t503 * (*) (Object_t * /* static, unused */, Canvas_t356 *, IndexedSet_1_t503 *, MethodInfo*))Dictionary_2_pick_value_m14856_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18632(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t367 *, KeyValuePair_2U5BU5D_t4401*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14858_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Resize()
#define Dictionary_2_Resize_m18633(__this, method) (( void (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_Resize_m14860_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Add(TKey,TValue)
#define Dictionary_2_Add_m2469(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t367 *, Canvas_t356 *, IndexedSet_1_t503 *, MethodInfo*))Dictionary_2_Add_m14862_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Clear()
#define Dictionary_2_Clear_m18634(__this, method) (( void (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_Clear_m14864_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18635(__this, ___key, method) (( bool (*) (Dictionary_2_t367 *, Canvas_t356 *, MethodInfo*))Dictionary_2_ContainsKey_m14866_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18636(__this, ___value, method) (( bool (*) (Dictionary_2_t367 *, IndexedSet_1_t503 *, MethodInfo*))Dictionary_2_ContainsValue_m14868_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18637(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t367 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m14870_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18638(__this, ___sender, method) (( void (*) (Dictionary_2_t367 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14872_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Remove(TKey)
#define Dictionary_2_Remove_m18639(__this, ___key, method) (( bool (*) (Dictionary_2_t367 *, Canvas_t356 *, MethodInfo*))Dictionary_2_Remove_m14874_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m2466(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t367 *, Canvas_t356 *, IndexedSet_1_t503 **, MethodInfo*))Dictionary_2_TryGetValue_m14875_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Keys()
#define Dictionary_2_get_Keys_m18640(__this, method) (( KeyCollection_t3258 * (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_get_Keys_m14877_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Values()
#define Dictionary_2_get_Values_m18641(__this, method) (( ValueCollection_t3262 * (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_get_Values_m14878_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18642(__this, ___key, method) (( Canvas_t356 * (*) (Dictionary_2_t367 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14880_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18643(__this, ___value, method) (( IndexedSet_1_t503 * (*) (Dictionary_2_t367 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14882_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18644(__this, ___pair, method) (( bool (*) (Dictionary_2_t367 *, KeyValuePair_2_t3241 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14884_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18645(__this, method) (( Enumerator_t3260  (*) (Dictionary_2_t367 *, MethodInfo*))Dictionary_2_GetEnumerator_m14886_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18646(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, Canvas_t356 *, IndexedSet_1_t503 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14888_gshared)(__this /* static, unused */, ___key, ___value, method)
