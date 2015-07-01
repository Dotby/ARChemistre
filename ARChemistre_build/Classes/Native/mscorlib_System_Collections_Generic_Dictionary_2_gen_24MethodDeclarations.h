#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1106;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t3082;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3086;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3077;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t4372;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t4373;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m6919_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m6919(__this, method) (( void (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2__ctor_m6919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16957_gshared (Dictionary_2_t1106 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m16957(__this, ___comparer, method) (( void (*) (Dictionary_2_t1106 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m16957_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16959_gshared (Dictionary_2_t1106 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m16959(__this, ___capacity, method) (( void (*) (Dictionary_2_t1106 *, int32_t, MethodInfo*))Dictionary_2__ctor_m16959_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16961_gshared (Dictionary_2_t1106 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m16961(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1106 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m16961_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16963_gshared (Dictionary_2_t1106 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16963(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1106 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16963_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16965_gshared (Dictionary_2_t1106 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16965(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1106 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16965_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16967_gshared (Dictionary_2_t1106 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16967(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1106 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16967_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16969_gshared (Dictionary_2_t1106 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16969(__this, ___key, method) (( void (*) (Dictionary_2_t1106 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16969_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16971_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16971(__this, method) (( bool (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16971_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16973_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16973(__this, method) (( Object_t * (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16973_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16975_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16975(__this, method) (( bool (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16977_gshared (Dictionary_2_t1106 * __this, KeyValuePair_2_t3080  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16977(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1106 *, KeyValuePair_2_t3080 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16977_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16979_gshared (Dictionary_2_t1106 * __this, KeyValuePair_2_t3080  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16979(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1106 *, KeyValuePair_2_t3080 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16979_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16981_gshared (Dictionary_2_t1106 * __this, KeyValuePair_2U5BU5D_t4372* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16981(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1106 *, KeyValuePair_2U5BU5D_t4372*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16981_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16983_gshared (Dictionary_2_t1106 * __this, KeyValuePair_2_t3080  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16983(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1106 *, KeyValuePair_2_t3080 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16983_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16985_gshared (Dictionary_2_t1106 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16985(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1106 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16985_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16987_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16987(__this, method) (( Object_t * (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16987_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16989_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16989(__this, method) (( Object_t* (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16989_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16991_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16991(__this, method) (( Object_t * (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16991_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16993_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m16993(__this, method) (( int32_t (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_get_Count_m16993_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m16995_gshared (Dictionary_2_t1106 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m16995(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1106 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m16995_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m6921_gshared (Dictionary_2_t1106 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m6921(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1106 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m6921_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16998_gshared (Dictionary_2_t1106 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m16998(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1106 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m16998_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17000_gshared (Dictionary_2_t1106 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m17000(__this, ___size, method) (( void (*) (Dictionary_2_t1106 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17000_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17002_gshared (Dictionary_2_t1106 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17002(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1106 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17002_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3080  Dictionary_2_make_pair_m17004_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m17004(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3080  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m17004_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m17006_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m17006(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m17006_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m17008_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m17008(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m17008_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17010_gshared (Dictionary_2_t1106 * __this, KeyValuePair_2U5BU5D_t4372* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m17010(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1106 *, KeyValuePair_2U5BU5D_t4372*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17010_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m17012_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m17012(__this, method) (( void (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_Resize_m17012_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17013_gshared (Dictionary_2_t1106 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m17013(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1106 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_Add_m17013_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m17014_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m17014(__this, method) (( void (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_Clear_m17014_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17016_gshared (Dictionary_2_t1106 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m17016(__this, ___key, method) (( bool (*) (Dictionary_2_t1106 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m17016_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17018_gshared (Dictionary_2_t1106 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m17018(__this, ___value, method) (( bool (*) (Dictionary_2_t1106 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m17018_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17020_gshared (Dictionary_2_t1106 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m17020(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1106 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m17020_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17022_gshared (Dictionary_2_t1106 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17022(__this, ___sender, method) (( void (*) (Dictionary_2_t1106 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17022_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17023_gshared (Dictionary_2_t1106 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m17023(__this, ___key, method) (( bool (*) (Dictionary_2_t1106 *, int32_t, MethodInfo*))Dictionary_2_Remove_m17023_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m6920_gshared (Dictionary_2_t1106 * __this, int32_t ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m6920(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1106 *, int32_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m6920_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t3082 * Dictionary_2_get_Keys_m17025_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m17025(__this, method) (( KeyCollection_t3082 * (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_get_Keys_m17025_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t3086 * Dictionary_2_get_Values_m17026_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m17026(__this, method) (( ValueCollection_t3086 * (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_get_Values_m17026_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17028_gshared (Dictionary_2_t1106 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m17028(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1106 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17028_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m17030_gshared (Dictionary_2_t1106 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m17030(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1106 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17030_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17032_gshared (Dictionary_2_t1106 * __this, KeyValuePair_2_t3080  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17032(__this, ___pair, method) (( bool (*) (Dictionary_2_t1106 *, KeyValuePair_2_t3080 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17032_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t3084  Dictionary_2_GetEnumerator_m17033_gshared (Dictionary_2_t1106 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17033(__this, method) (( Enumerator_t3084  (*) (Dictionary_2_t1106 *, MethodInfo*))Dictionary_2_GetEnumerator_m17033_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1298  Dictionary_2_U3CCopyToU3Em__0_m17035_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17035(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17035_gshared)(__this /* static, unused */, ___key, ___value, method)
