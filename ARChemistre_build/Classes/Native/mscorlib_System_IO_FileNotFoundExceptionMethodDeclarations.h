﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileNotFoundException
struct FileNotFoundException_t1961;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileNotFoundException::.ctor()
extern "C" void FileNotFoundException__ctor_m11343 (FileNotFoundException_t1961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
extern "C" void FileNotFoundException__ctor_m11344 (FileNotFoundException_t1961 * __this, String_t* ___message, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileNotFoundException__ctor_m11345 (FileNotFoundException_t1961 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::get_Message()
extern "C" String_t* FileNotFoundException_get_Message_m11346 (FileNotFoundException_t1961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileNotFoundException_GetObjectData_m11347 (FileNotFoundException_t1961 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::ToString()
extern "C" String_t* FileNotFoundException_ToString_m11348 (FileNotFoundException_t1961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;