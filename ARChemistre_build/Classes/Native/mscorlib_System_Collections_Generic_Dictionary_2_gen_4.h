﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t186;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2694;
// Vuforia.Image/PIXEL_FORMAT[]
struct PIXEL_FORMATU5BU5D_t3430;
// Vuforia.Image[]
struct ImageU5BU5D_t3431;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t3432;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,System.Collections.DictionaryEntry>
struct Transform_1_t3433;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct  Dictionary_2_t662  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::table
	Int32U5BU5D_t186* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::linkSlots
	LinkU5BU5D_t2694* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::keySlots
	PIXEL_FORMATU5BU5D_t3430* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::valueSlots
	ImageU5BU5D_t3431* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::serialization_info
	SerializationInfo_t1123 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t662_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>::<>f__am$cacheB
	Transform_1_t3433 * ___U3CU3Ef__am$cacheB_15;
};