#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4176;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t4179;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t4183;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2860;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t4562;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t4563;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m28600_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m28600(__this, method) (( void (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2__ctor_m28600_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28601_gshared (Dictionary_2_t4176 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m28601(__this, ___comparer, method) (( void (*) (Dictionary_2_t4176 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m28601_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m28603_gshared (Dictionary_2_t4176 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m28603(__this, ___capacity, method) (( void (*) (Dictionary_2_t4176 *, int32_t, MethodInfo*))Dictionary_2__ctor_m28603_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m28605_gshared (Dictionary_2_t4176 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m28605(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4176 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m28605_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m28607_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28607(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4176 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m28607_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m28609_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28609(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4176 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m28609_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m28611_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m28611(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4176 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m28611_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m28613_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m28613(__this, ___key, method) (( void (*) (Dictionary_2_t4176 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m28613_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28615_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28615(__this, method) (( bool (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28617_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28617(__this, method) (( Object_t * (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28619_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28619(__this, method) (( bool (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28621_gshared (Dictionary_2_t4176 * __this, KeyValuePair_2_t4177  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28621(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4176 *, KeyValuePair_2_t4177 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28621_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28623_gshared (Dictionary_2_t4176 * __this, KeyValuePair_2_t4177  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28623(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4176 *, KeyValuePair_2_t4177 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28623_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28625_gshared (Dictionary_2_t4176 * __this, KeyValuePair_2U5BU5D_t4562* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28625(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4176 *, KeyValuePair_2U5BU5D_t4562*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28625_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28627_gshared (Dictionary_2_t4176 * __this, KeyValuePair_2_t4177  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28627(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4176 *, KeyValuePair_2_t4177 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28627_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m28629_gshared (Dictionary_2_t4176 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28629(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4176 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m28629_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28631_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28631(__this, method) (( Object_t * (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28631_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28633_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28633(__this, method) (( Object_t* (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28633_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28635_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28635(__this, method) (( Object_t * (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28635_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m28637_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m28637(__this, method) (( int32_t (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_get_Count_m28637_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m28639_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m28639(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t4176 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m28639_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m28641_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m28641(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4176 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_set_Item_m28641_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m28643_gshared (Dictionary_2_t4176 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m28643(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4176 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m28643_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m28645_gshared (Dictionary_2_t4176 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m28645(__this, ___size, method) (( void (*) (Dictionary_2_t4176 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m28645_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m28647_gshared (Dictionary_2_t4176 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m28647(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4176 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m28647_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4177  Dictionary_2_make_pair_m28649_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m28649(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4177  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_make_pair_m28649_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m28651_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m28651(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_key_m28651_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m28653_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m28653(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_value_m28653_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m28655_gshared (Dictionary_2_t4176 * __this, KeyValuePair_2U5BU5D_t4562* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m28655(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4176 *, KeyValuePair_2U5BU5D_t4562*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m28655_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m28657_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m28657(__this, method) (( void (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_Resize_m28657_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m28658_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m28658(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4176 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_Add_m28658_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m28660_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m28660(__this, method) (( void (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_Clear_m28660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m28662_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m28662(__this, ___key, method) (( bool (*) (Dictionary_2_t4176 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m28662_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m28664_gshared (Dictionary_2_t4176 * __this, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m28664(__this, ___value, method) (( bool (*) (Dictionary_2_t4176 *, uint8_t, MethodInfo*))Dictionary_2_ContainsValue_m28664_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m28666_gshared (Dictionary_2_t4176 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m28666(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4176 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m28666_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m28668_gshared (Dictionary_2_t4176 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m28668(__this, ___sender, method) (( void (*) (Dictionary_2_t4176 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m28668_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m28670_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m28670(__this, ___key, method) (( bool (*) (Dictionary_2_t4176 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m28670_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m28672_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, uint8_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m28672(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4176 *, Object_t *, uint8_t*, MethodInfo*))Dictionary_2_TryGetValue_m28672_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t4179 * Dictionary_2_get_Keys_m28674_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m28674(__this, method) (( KeyCollection_t4179 * (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_get_Keys_m28674_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t4183 * Dictionary_2_get_Values_m28676_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m28676(__this, method) (( ValueCollection_t4183 * (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_get_Values_m28676_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m28678_gshared (Dictionary_2_t4176 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m28678(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4176 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m28678_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m28680_gshared (Dictionary_2_t4176 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m28680(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t4176 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m28680_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m28682_gshared (Dictionary_2_t4176 * __this, KeyValuePair_2_t4177  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m28682(__this, ___pair, method) (( bool (*) (Dictionary_2_t4176 *, KeyValuePair_2_t4177 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m28682_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t4181  Dictionary_2_GetEnumerator_m28684_gshared (Dictionary_2_t4176 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m28684(__this, method) (( Enumerator_t4181  (*) (Dictionary_2_t4176 *, MethodInfo*))Dictionary_2_GetEnumerator_m28684_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1298  Dictionary_2_U3CCopyToU3Em__0_m28686_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m28686(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m28686_gshared)(__this /* static, unused */, ___key, ___value, method)
