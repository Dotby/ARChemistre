#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>
struct Predicate_1_t853;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m4914_gshared (Predicate_1_t853 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m4914(__this, ___object, ___method, method) (( void (*) (Predicate_1_t853 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m4914_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21983_gshared (Predicate_1_t853 * __this, TrackableResultData_t698  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m21983(__this, ___obj, method) (( bool (*) (Predicate_1_t853 *, TrackableResultData_t698 , MethodInfo*))Predicate_1_Invoke_m21983_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21984_gshared (Predicate_1_t853 * __this, TrackableResultData_t698  ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m21984(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t853 *, TrackableResultData_t698 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m21984_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21985_gshared (Predicate_1_t853 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m21985(__this, ___result, method) (( bool (*) (Predicate_1_t853 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m21985_gshared)(__this, ___result, method)
