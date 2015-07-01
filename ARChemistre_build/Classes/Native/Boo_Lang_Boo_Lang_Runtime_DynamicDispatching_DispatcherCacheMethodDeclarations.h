#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1548;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1547;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern "C" void DispatcherFactory__ctor_m8376 (DispatcherFactory_t1548 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C" Dispatcher_t1547 * DispatcherFactory_Invoke_m8377 (DispatcherFactory_t1548 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern TypeInfo Dispatcher_t1547_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispatcher.h"
extern "C" Dispatcher_t1547 * pinvoke_delegate_wrapper_DispatcherFactory_t1548(Il2CppObject* delegate);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DispatcherFactory_BeginInvoke_m8378 (DispatcherFactory_t1548 * __this, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern "C" Dispatcher_t1547 * DispatcherFactory_EndInvoke_m8379 (DispatcherFactory_t1548 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
