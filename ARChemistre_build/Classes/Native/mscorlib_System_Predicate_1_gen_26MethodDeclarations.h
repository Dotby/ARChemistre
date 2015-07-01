#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Vuforia.VirtualButton>
struct Predicate_1_t3426;
// System.Object
struct Object_t;
// Vuforia.VirtualButton
struct VirtualButton_t655;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Vuforia.VirtualButton>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m20554(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3426 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m15369_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.VirtualButton>::Invoke(T)
#define Predicate_1_Invoke_m20555(__this, ___obj, method) (( bool (*) (Predicate_1_t3426 *, VirtualButton_t655 *, MethodInfo*))Predicate_1_Invoke_m15370_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.VirtualButton>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m20556(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3426 *, VirtualButton_t655 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m15371_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.VirtualButton>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m20557(__this, ___result, method) (( bool (*) (Predicate_1_t3426 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m15372_gshared)(__this, ___result, method)
