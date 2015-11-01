#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t685;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t576;
// System.IO.Stream
struct Stream_t687;
// System.Exception
struct Exception_t287;
// System.Threading.WaitHandle
struct WaitHandle_t738;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3546 (ReceiveRecordAsyncResult_t685 * __this, AsyncCallback_t141 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t576* ___initialBuffer, Stream_t687 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t687 * ReceiveRecordAsyncResult_get_Record_m3547 (ReceiveRecordAsyncResult_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t576* ReceiveRecordAsyncResult_get_ResultingBuffer_m3548 (ReceiveRecordAsyncResult_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t576* ReceiveRecordAsyncResult_get_InitialBuffer_m3549 (ReceiveRecordAsyncResult_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3550 (ReceiveRecordAsyncResult_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t287 * ReceiveRecordAsyncResult_get_AsyncException_m3551 (ReceiveRecordAsyncResult_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3552 (ReceiveRecordAsyncResult_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t738 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3553 (ReceiveRecordAsyncResult_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3554 (ReceiveRecordAsyncResult_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3555 (ReceiveRecordAsyncResult_t685 * __this, Exception_t287 * ___ex, ByteU5BU5D_t576* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3556 (ReceiveRecordAsyncResult_t685 * __this, Exception_t287 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3557 (ReceiveRecordAsyncResult_t685 * __this, ByteU5BU5D_t576* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
