﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MemoryStream
struct MemoryStream_t1751;
// System.Byte[]
struct ByteU5BU5D_t669;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.MemoryStream::.ctor()
extern "C" void MemoryStream__ctor_m9569 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C" void MemoryStream__ctor_m9590 (MemoryStream_t1751 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C" void MemoryStream__ctor_m9591 (MemoryStream_t1751 * __this, ByteU5BU5D_t669* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::InternalConstructor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" void MemoryStream_InternalConstructor_m11407 (MemoryStream_t1751 * __this, ByteU5BU5D_t669* ___buffer, int32_t ___index, int32_t ___count, bool ___writable, bool ___publicallyVisible, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::CheckIfClosedThrowDisposed()
extern "C" void MemoryStream_CheckIfClosedThrowDisposed_m11408 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanRead()
extern "C" bool MemoryStream_get_CanRead_m11409 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanSeek()
extern "C" bool MemoryStream_get_CanSeek_m9589 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanWrite()
extern "C" bool MemoryStream_get_CanWrite_m11410 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Capacity(System.Int32)
extern "C" void MemoryStream_set_Capacity_m11411 (MemoryStream_t1751 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Length()
extern "C" int64_t MemoryStream_get_Length_m9578 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Position()
extern "C" int64_t MemoryStream_get_Position_m9577 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Position(System.Int64)
extern "C" void MemoryStream_set_Position_m9581 (MemoryStream_t1751 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Dispose(System.Boolean)
extern "C" void MemoryStream_Dispose_m11412 (MemoryStream_t1751 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Flush()
extern "C" void MemoryStream_Flush_m9593 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t MemoryStream_Read_m9579 (MemoryStream_t1751 * __this, ByteU5BU5D_t669* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::ReadByte()
extern "C" int32_t MemoryStream_ReadByte_m11413 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t MemoryStream_Seek_m9582 (MemoryStream_t1751 * __this, int64_t ___offset, int32_t ___loc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::CalculateNewCapacity(System.Int32)
extern "C" int32_t MemoryStream_CalculateNewCapacity_m11414 (MemoryStream_t1751 * __this, int32_t ___minimum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Expand(System.Int32)
extern "C" void MemoryStream_Expand_m11415 (MemoryStream_t1751 * __this, int32_t ___newSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::SetLength(System.Int64)
extern "C" void MemoryStream_SetLength_m9583 (MemoryStream_t1751 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::ToArray()
extern "C" ByteU5BU5D_t669* MemoryStream_ToArray_m9592 (MemoryStream_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void MemoryStream_Write_m9580 (MemoryStream_t1751 * __this, ByteU5BU5D_t669* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::WriteByte(System.Byte)
extern "C" void MemoryStream_WriteByte_m11416 (MemoryStream_t1751 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;