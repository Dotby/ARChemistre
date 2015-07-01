#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t1719;
// System.Text.Encoding
struct Encoding_t1486;
// System.Byte[]
struct ByteU5BU5D_t669;
// System.Text.Decoder
struct Decoder_t1950;
// System.Char[]
struct CharU5BU5D_t395;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.BinaryReader
struct  BinaryReader_t1951  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1719 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t1486 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t669* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t1950 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t395* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};
