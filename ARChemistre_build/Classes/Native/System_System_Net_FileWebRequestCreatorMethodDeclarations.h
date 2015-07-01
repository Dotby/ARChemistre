#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1322;
// System.Net.WebRequest
struct WebRequest_t1317;
// System.Uri
struct Uri_t1318;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m7194 (FileWebRequestCreator_t1322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1317 * FileWebRequestCreator_Create_m7195 (FileWebRequestCreator_t1322 * __this, Uri_t1318 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
