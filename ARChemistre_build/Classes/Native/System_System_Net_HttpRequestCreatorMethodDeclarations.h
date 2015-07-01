#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1328;
// System.Net.WebRequest
struct WebRequest_t1317;
// System.Uri
struct Uri_t1318;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m7202 (HttpRequestCreator_t1328 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1317 * HttpRequestCreator_Create_m7203 (HttpRequestCreator_t1328 * __this, Uri_t1318 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
