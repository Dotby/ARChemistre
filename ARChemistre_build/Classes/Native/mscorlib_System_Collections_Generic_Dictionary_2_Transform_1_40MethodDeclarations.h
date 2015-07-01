#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image/PIXEL_FORMAT>
struct Transform_1_t3441;
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
// Vuforia.Image/PIXEL_FORMAT
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image/PIXEL_FORMAT>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
#define Transform_1__ctor_m20657(__this, ___object, ___method, method) (( void (*) (Transform_1_t3441 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17078_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image/PIXEL_FORMAT>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20658(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t3441 *, int32_t, Image_t621 *, MethodInfo*))Transform_1_Invoke_m17079_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image/PIXEL_FORMAT>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20659(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3441 *, int32_t, Image_t621 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17080_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image/PIXEL_FORMAT>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20660(__this, ___result, method) (( int32_t (*) (Transform_1_t3441 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17081_gshared)(__this, ___result, method)
