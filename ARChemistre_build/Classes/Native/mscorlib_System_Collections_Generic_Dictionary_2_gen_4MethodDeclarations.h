#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t662;
// System.Object
struct Object_t;
// Vuforia.Image
struct Image_t621;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct KeyCollection_t3438;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct ValueCollection_t857;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t3432;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>[]
struct KeyValuePair_2U5BU5D_t4433;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>>
struct IEnumerator_1_t4434;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1295;
// Vuforia.Image/PIXEL_FORMAT
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
#define Dictionary_2__ctor_m4778(__this, method) (( void (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2__ctor_m6919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20568(__this, ___comparer, method) (( void (*) (Dictionary_2_t662 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m16957_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::.ctor(System.Int32)
#define Dictionary_2__ctor_m20569(__this, ___capacity, method) (( void (*) (Dictionary_2_t662 *, int32_t, MethodInfo*))Dictionary_2__ctor_m16959_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m20570(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t662 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2__ctor_m16961_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20571(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t662 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16963_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20572(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t662 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16965_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m20573(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t662 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16967_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m20574(__this, ___key, method) (( void (*) (Dictionary_2_t662 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16969_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20575(__this, method) (( bool (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16971_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20576(__this, method) (( Object_t * (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16973_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20577(__this, method) (( bool (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20578(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t662 *, KeyValuePair_2_t3434 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16977_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20579(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t662 *, KeyValuePair_2_t3434 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16979_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20580(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t662 *, KeyValuePair_2U5BU5D_t4433*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16981_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20581(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t662 *, KeyValuePair_2_t3434 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16983_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20582(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t662 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16985_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20583(__this, method) (( Object_t * (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16987_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20584(__this, method) (( Object_t* (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16989_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20585(__this, method) (( Object_t * (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16991_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::get_Count()
#define Dictionary_2_get_Count_m4922(__this, method) (( int32_t (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_get_Count_m16993_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::get_Item(TKey)
#define Dictionary_2_get_Item_m4776(__this, ___key, method) (( Image_t621 * (*) (Dictionary_2_t662 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m16995_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m20586(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t662 *, int32_t, Image_t621 *, MethodInfo*))Dictionary_2_set_Item_m6921_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m20587(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t662 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m16998_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m20588(__this, ___size, method) (( void (*) (Dictionary_2_t662 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17000_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m20589(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t662 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17002_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m20590(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3434  (*) (Object_t * /* static, unused */, int32_t, Image_t621 *, MethodInfo*))Dictionary_2_make_pair_m17004_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m20591(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Image_t621 *, MethodInfo*))Dictionary_2_pick_key_m17006_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m20592(__this /* static, unused */, ___key, ___value, method) (( Image_t621 * (*) (Object_t * /* static, unused */, int32_t, Image_t621 *, MethodInfo*))Dictionary_2_pick_value_m17008_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m20593(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t662 *, KeyValuePair_2U5BU5D_t4433*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17010_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::Resize()
#define Dictionary_2_Resize_m20594(__this, method) (( void (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_Resize_m17012_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::Add(TKey,TValue)
#define Dictionary_2_Add_m4773(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t662 *, int32_t, Image_t621 *, MethodInfo*))Dictionary_2_Add_m17013_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::Clear()
#define Dictionary_2_Clear_m4785(__this, method) (( void (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_Clear_m17014_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m4770(__this, ___key, method) (( bool (*) (Dictionary_2_t662 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m17016_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m20595(__this, ___value, method) (( bool (*) (Dictionary_2_t662 *, Image_t621 *, MethodInfo*))Dictionary_2_ContainsValue_m17018_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m20596(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t662 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))Dictionary_2_GetObjectData_m17020_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m20597(__this, ___sender, method) (( void (*) (Dictionary_2_t662 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17022_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::Remove(TKey)
#define Dictionary_2_Remove_m4775(__this, ___key, method) (( bool (*) (Dictionary_2_t662 *, int32_t, MethodInfo*))Dictionary_2_Remove_m17023_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m20598(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t662 *, int32_t, Image_t621 **, MethodInfo*))Dictionary_2_TryGetValue_m6920_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::get_Keys()
#define Dictionary_2_get_Keys_m20599(__this, method) (( KeyCollection_t3438 * (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_get_Keys_m17025_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::get_Values()
#define Dictionary_2_get_Values_m4946(__this, method) (( ValueCollection_t857 * (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_get_Values_m17026_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m20600(__this, ___key, method) (( int32_t (*) (Dictionary_2_t662 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17028_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m20601(__this, ___value, method) (( Image_t621 * (*) (Dictionary_2_t662 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17030_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m20602(__this, ___pair, method) (( bool (*) (Dictionary_2_t662 *, KeyValuePair_2_t3434 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17032_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m20603(__this, method) (( Enumerator_t3440  (*) (Dictionary_2_t662 *, MethodInfo*))Dictionary_2_GetEnumerator_m17033_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m20604(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Object_t * /* static, unused */, int32_t, Image_t621 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17035_gshared)(__this /* static, unused */, ___key, ___value, method)
