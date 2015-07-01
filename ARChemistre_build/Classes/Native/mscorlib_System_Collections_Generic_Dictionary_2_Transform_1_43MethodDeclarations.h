#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>>
struct Transform_1_t3443;
// System.Object
struct Object_t;
// Vuforia.Image
struct Image_t621;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// Vuforia.Image/PIXEL_FORMAT
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44MethodDeclarations.h"
#define Transform_1__ctor_m20685(__this, ___object, ___method, method) (( void (*) (Transform_1_t3443 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20686_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20687(__this, ___key, ___value, method) (( KeyValuePair_2_t3434  (*) (Transform_1_t3443 *, int32_t, Image_t621 *, MethodInfo*))Transform_1_Invoke_m20688_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20689(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3443 *, int32_t, Image_t621 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20690_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20691(__this, ___result, method) (( KeyValuePair_2_t3434  (*) (Transform_1_t3443 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20692_gshared)(__this, ___result, method)
