#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1144;
// System.IO.Stream
struct Stream_t687;
// System.Text.Encoding
struct Encoding_t742;
// System.Char[]
struct CharU5BU5D_t151;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m7135 (UnexceptionalStreamWriter_t1144 * __this, Stream_t687 * ___stream, Encoding_t742 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m7136 (UnexceptionalStreamWriter_t1144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m7137 (UnexceptionalStreamWriter_t1144 * __this, CharU5BU5D_t151* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m7138 (UnexceptionalStreamWriter_t1144 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m7139 (UnexceptionalStreamWriter_t1144 * __this, CharU5BU5D_t151* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m7140 (UnexceptionalStreamWriter_t1144 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
