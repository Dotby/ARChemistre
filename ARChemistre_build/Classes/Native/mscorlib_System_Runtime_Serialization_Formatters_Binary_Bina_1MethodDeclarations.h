﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t2127;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2103;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t2139;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1719;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t2140;
// System.IO.BinaryReader
struct BinaryReader_t1951;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C" void BinaryFormatter__ctor_m12364 (BinaryFormatter_t2127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void BinaryFormatter__ctor_m12365 (BinaryFormatter_t2127 * __this, Object_t * ___selector, StreamingContext_t1124  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern "C" Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m12366 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C" void BinaryFormatter_set_AssemblyFormat_m12367 (BinaryFormatter_t2127 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C" SerializationBinder_t2139 * BinaryFormatter_get_Binder_m12368 (BinaryFormatter_t2127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C" StreamingContext_t1124  BinaryFormatter_get_Context_m12369 (BinaryFormatter_t2127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C" Object_t * BinaryFormatter_get_SurrogateSelector_m12370 (BinaryFormatter_t2127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C" int32_t BinaryFormatter_get_FilterLevel_m12371 (BinaryFormatter_t2127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C" Object_t * BinaryFormatter_Deserialize_m12372 (BinaryFormatter_t2127 * __this, Stream_t1719 * ___serializationStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern "C" Object_t * BinaryFormatter_NoCheckDeserialize_m12373 (BinaryFormatter_t2127 * __this, Stream_t1719 * ___serializationStream, HeaderHandler_t2140 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C" void BinaryFormatter_ReadBinaryHeader_m12374 (BinaryFormatter_t2127 * __this, BinaryReader_t1951 * ___reader, bool* ___hasHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
