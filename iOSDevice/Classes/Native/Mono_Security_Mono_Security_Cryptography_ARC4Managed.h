#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t576;
// Mono.Security.Cryptography.RC4
#include "Mono_Security_Mono_Security_Cryptography_RC4.h"
// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t613  : public RC4_t614
{
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t576* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t576* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;
};
