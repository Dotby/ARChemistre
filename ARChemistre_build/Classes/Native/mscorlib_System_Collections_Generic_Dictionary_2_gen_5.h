#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t186;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2694;
// Vuforia.Trackable[]
struct TrackableU5BU5D_t3465;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3077;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.DictionaryEntry>
struct Transform_1_t3466;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct  Dictionary_2_t666  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::table
	Int32U5BU5D_t186* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::linkSlots
	LinkU5BU5D_t2694* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::keySlots
	Int32U5BU5D_t186* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::valueSlots
	TrackableU5BU5D_t3465* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::serialization_info
	SerializationInfo_t1123 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t666_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::<>f__am$cacheB
	Transform_1_t3466 * ___U3CU3Ef__am$cacheB_15;
};
