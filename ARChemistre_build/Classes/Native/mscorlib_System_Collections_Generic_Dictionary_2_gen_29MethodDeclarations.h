#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3123;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t3128;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3132;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2860;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4380;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t4381;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m17420_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m17420(__this, method) (( void (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2__ctor_m17420_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17421_gshared (Dictionary_2_t3123 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m17421(__this, ___comparer, method) (( void (*) (Dictionary_2_t3123 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17421_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17422_gshared (Dictionary_2_t3123 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m17422(__this, ___capacity, method) (( void (*) (Dictionary_2_t3123 *, int32_t, MethodInfo*))Dictionary_2__ctor_m17422_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17423_gshared (Dictionary_2_t3123 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m17423(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3123 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m17423_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17424_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17424(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3123 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17424_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17425_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17425(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3123 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17425_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17426_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17426(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3123 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17426_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17427_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17427(__this, ___key, method) (( void (*) (Dictionary_2_t3123 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17427_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17428_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17428(__this, method) (( bool (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17428_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17429_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17429(__this, method) (( Object_t * (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17429_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17430_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17430(__this, method) (( bool (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17430_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17431_gshared (Dictionary_2_t3123 * __this, KeyValuePair_2_t3126  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17431(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3123 *, KeyValuePair_2_t3126 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17431_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17432_gshared (Dictionary_2_t3123 * __this, KeyValuePair_2_t3126  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17432(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3123 *, KeyValuePair_2_t3126 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17432_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17433_gshared (Dictionary_2_t3123 * __this, KeyValuePair_2U5BU5D_t4380* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17433(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3123 *, KeyValuePair_2U5BU5D_t4380*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17433_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17434_gshared (Dictionary_2_t3123 * __this, KeyValuePair_2_t3126  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17434(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3123 *, KeyValuePair_2_t3126 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17434_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17435_gshared (Dictionary_2_t3123 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17435(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3123 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17435_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17436_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17436(__this, method) (( Object_t * (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17436_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17437_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17437(__this, method) (( Object_t* (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17437_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17438_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17438(__this, method) (( Object_t * (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17438_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17439_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m17439(__this, method) (( int32_t (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_get_Count_m17439_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m17440_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m17440(__this, ___key, method) (( int32_t (*) (Dictionary_2_t3123 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m17440_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17441_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m17441(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3123 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_set_Item_m17441_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17442_gshared (Dictionary_2_t3123 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m17442(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3123 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m17442_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17443_gshared (Dictionary_2_t3123 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m17443(__this, ___size, method) (( void (*) (Dictionary_2_t3123 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17443_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17444_gshared (Dictionary_2_t3123 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17444(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3123 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17444_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3126  Dictionary_2_make_pair_m17445_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m17445(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3126  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_make_pair_m17445_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17446_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m17446(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_pick_key_m17446_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m17447_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m17447(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_pick_value_m17447_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17448_gshared (Dictionary_2_t3123 * __this, KeyValuePair_2U5BU5D_t4380* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m17448(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3123 *, KeyValuePair_2U5BU5D_t4380*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17448_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m17449_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m17449(__this, method) (( void (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_Resize_m17449_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17450_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m17450(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3123 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_Add_m17450_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m17451_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m17451(__this, method) (( void (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_Clear_m17451_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17452_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m17452(__this, ___key, method) (( bool (*) (Dictionary_2_t3123 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m17452_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17453_gshared (Dictionary_2_t3123 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m17453(__this, ___value, method) (( bool (*) (Dictionary_2_t3123 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m17453_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17454_gshared (Dictionary_2_t3123 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m17454(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3123 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m17454_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17455_gshared (Dictionary_2_t3123 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17455(__this, ___sender, method) (( void (*) (Dictionary_2_t3123 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17455_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17456_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m17456(__this, ___key, method) (( bool (*) (Dictionary_2_t3123 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m17456_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17457_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m17457(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3123 *, Object_t *, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m17457_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t3128 * Dictionary_2_get_Keys_m17458_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m17458(__this, method) (( KeyCollection_t3128 * (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_get_Keys_m17458_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t3132 * Dictionary_2_get_Values_m17459_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m17459(__this, method) (( ValueCollection_t3132 * (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_get_Values_m17459_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17460_gshared (Dictionary_2_t3123 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m17460(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3123 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17460_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m17461_gshared (Dictionary_2_t3123 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m17461(__this, ___value, method) (( int32_t (*) (Dictionary_2_t3123 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17461_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17462_gshared (Dictionary_2_t3123 * __this, KeyValuePair_2_t3126  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17462(__this, ___pair, method) (( bool (*) (Dictionary_2_t3123 *, KeyValuePair_2_t3126 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17462_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3130  Dictionary_2_GetEnumerator_m17463_gshared (Dictionary_2_t3123 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17463(__this, method) (( Enumerator_t3130  (*) (Dictionary_2_t3123 *, MethodInfo*))Dictionary_2_GetEnumerator_m17463_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1298  Dictionary_2_U3CCopyToU3Em__0_m17464_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17464(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17464_gshared)(__this /* static, unused */, ___key, ___value, method)
