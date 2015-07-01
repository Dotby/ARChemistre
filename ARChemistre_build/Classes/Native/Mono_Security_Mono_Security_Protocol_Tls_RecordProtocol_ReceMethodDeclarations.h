#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1735;
// System.IO.Stream
struct Stream_t1719;
// System.Byte[]
struct ByteU5BU5D_t669;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t154;
// System.Threading.WaitHandle
struct WaitHandle_t1736;
// System.AsyncCallback
struct AsyncCallback_t244;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m9111 (ReceiveRecordAsyncResult_t1735 * __this, AsyncCallback_t244 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t669* ___initialBuffer, Stream_t1719 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1719 * ReceiveRecordAsyncResult_get_Record_m9112 (ReceiveRecordAsyncResult_t1735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t669* ReceiveRecordAsyncResult_get_ResultingBuffer_m9113 (ReceiveRecordAsyncResult_t1735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t669* ReceiveRecordAsyncResult_get_InitialBuffer_m9114 (ReceiveRecordAsyncResult_t1735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m9115 (ReceiveRecordAsyncResult_t1735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t154 * ReceiveRecordAsyncResult_get_AsyncException_m9116 (ReceiveRecordAsyncResult_t1735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m9117 (ReceiveRecordAsyncResult_t1735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1736 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m9118 (ReceiveRecordAsyncResult_t1735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m9119 (ReceiveRecordAsyncResult_t1735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m9120 (ReceiveRecordAsyncResult_t1735 * __this, Exception_t154 * ___ex, ByteU5BU5D_t669* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m9121 (ReceiveRecordAsyncResult_t1735 * __this, Exception_t154 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m9122 (ReceiveRecordAsyncResult_t1735 * __this, ByteU5BU5D_t669* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
