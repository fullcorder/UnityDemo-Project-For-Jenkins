﻿#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t742;
// System.IO.Stream
struct Stream_t687;
// System.Byte[]
struct ByteU5BU5D_t576;
// System.Char[]
struct CharU5BU5D_t151;
// System.IO.StreamWriter
struct StreamWriter_t1137;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StreamWriter
struct  StreamWriter_t1137  : public TextWriter_t951
{
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t742 * ___internalEncoding_2;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t687 * ___internalStream_3;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_4;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t576* ___byte_buf_5;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_6;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t151* ___decode_buf_7;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_8;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_9;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_10;
};
struct StreamWriter_t1137_StaticFields{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1137 * ___Null_11;
};
