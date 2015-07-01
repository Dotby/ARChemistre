#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t1000;
struct Gradient_t1000_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m5881 (Gradient_t1000 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m5882 (Gradient_t1000 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m5883 (Gradient_t1000 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m5884 (Gradient_t1000 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t1000_marshal(const Gradient_t1000& unmarshaled, Gradient_t1000_marshaled& marshaled);
void Gradient_t1000_marshal_back(const Gradient_t1000_marshaled& marshaled, Gradient_t1000& unmarshaled);
void Gradient_t1000_marshal_cleanup(Gradient_t1000_marshaled& marshaled);
