#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3580;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t3583;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t3587;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2860;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t4459;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t4460;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m22287_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m22287(__this, method) (( void (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2__ctor_m22287_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22289_gshared (Dictionary_2_t3580 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m22289(__this, ___comparer, method) (( void (*) (Dictionary_2_t3580 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m22289_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m22291_gshared (Dictionary_2_t3580 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m22291(__this, ___capacity, method) (( void (*) (Dictionary_2_t3580 *, int32_t, MethodInfo*))Dictionary_2__ctor_m22291_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22293_gshared (Dictionary_2_t3580 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m22293(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3580 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m22293_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22295_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22295(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3580 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22295_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m22297_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22297(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3580 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22297_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m22299_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m22299(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3580 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22299_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m22301_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m22301(__this, ___key, method) (( void (*) (Dictionary_2_t3580 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22301_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22303_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22303(__this, method) (( bool (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22305_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22305(__this, method) (( Object_t * (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22305_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22307_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22307(__this, method) (( bool (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22307_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22309_gshared (Dictionary_2_t3580 * __this, KeyValuePair_2_t3581  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22309(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3580 *, KeyValuePair_2_t3581 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22309_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22311_gshared (Dictionary_2_t3580 * __this, KeyValuePair_2_t3581  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22311(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3580 *, KeyValuePair_2_t3581 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22311_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22313_gshared (Dictionary_2_t3580 * __this, KeyValuePair_2U5BU5D_t4459* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22313(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3580 *, KeyValuePair_2U5BU5D_t4459*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22313_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22315_gshared (Dictionary_2_t3580 * __this, KeyValuePair_2_t3581  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22315(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3580 *, KeyValuePair_2_t3581 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22315_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m22317_gshared (Dictionary_2_t3580 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22317(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3580 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22317_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22319_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22319(__this, method) (( Object_t * (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22319_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22321_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22321(__this, method) (( Object_t* (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22321_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22323_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22323(__this, method) (( Object_t * (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m22325_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m22325(__this, method) (( int32_t (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_get_Count_m22325_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m22326_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m22326(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t3580 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m22326_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m22328_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m22328(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3580 *, Object_t *, uint16_t, MethodInfo*))Dictionary_2_set_Item_m22328_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22330_gshared (Dictionary_2_t3580 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m22330(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3580 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m22330_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22332_gshared (Dictionary_2_t3580 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m22332(__this, ___size, method) (( void (*) (Dictionary_2_t3580 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m22332_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22334_gshared (Dictionary_2_t3580 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22334(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3580 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m22334_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3581  Dictionary_2_make_pair_m22336_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m22336(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3581  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, MethodInfo*))Dictionary_2_make_pair_m22336_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m22338_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m22338(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, MethodInfo*))Dictionary_2_pick_key_m22338_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m22340_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m22340(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, MethodInfo*))Dictionary_2_pick_value_m22340_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22342_gshared (Dictionary_2_t3580 * __this, KeyValuePair_2U5BU5D_t4459* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m22342(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3580 *, KeyValuePair_2U5BU5D_t4459*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m22342_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m22344_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m22344(__this, method) (( void (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_Resize_m22344_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m22345_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m22345(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3580 *, Object_t *, uint16_t, MethodInfo*))Dictionary_2_Add_m22345_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m22347_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m22347(__this, method) (( void (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_Clear_m22347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m22349_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m22349(__this, ___key, method) (( bool (*) (Dictionary_2_t3580 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m22349_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22351_gshared (Dictionary_2_t3580 * __this, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m22351(__this, ___value, method) (( bool (*) (Dictionary_2_t3580 *, uint16_t, MethodInfo*))Dictionary_2_ContainsValue_m22351_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m22353_gshared (Dictionary_2_t3580 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m22353(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3580 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m22353_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m22355_gshared (Dictionary_2_t3580 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m22355(__this, ___sender, method) (( void (*) (Dictionary_2_t3580 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m22355_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m22357_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m22357(__this, ___key, method) (( bool (*) (Dictionary_2_t3580 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m22357_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m22359_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, uint16_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m22359(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3580 *, Object_t *, uint16_t*, MethodInfo*))Dictionary_2_TryGetValue_m22359_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t3583 * Dictionary_2_get_Keys_m22361_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m22361(__this, method) (( KeyCollection_t3583 * (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_get_Keys_m22361_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t3587 * Dictionary_2_get_Values_m22363_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m22363(__this, method) (( ValueCollection_t3587 * (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_get_Values_m22363_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m22365_gshared (Dictionary_2_t3580 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m22365(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3580 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m22365_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m22367_gshared (Dictionary_2_t3580 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m22367(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t3580 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m22367_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22369_gshared (Dictionary_2_t3580 * __this, KeyValuePair_2_t3581  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22369(__this, ___pair, method) (( bool (*) (Dictionary_2_t3580 *, KeyValuePair_2_t3581 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22369_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t3585  Dictionary_2_GetEnumerator_m22371_gshared (Dictionary_2_t3580 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22371(__this, method) (( Enumerator_t3585  (*) (Dictionary_2_t3580 *, MethodInfo*))Dictionary_2_GetEnumerator_m22371_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1298  Dictionary_2_U3CCopyToU3Em__0_m22373_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m22373(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22373_gshared)(__this /* static, unused */, ___key, ___value, method)
