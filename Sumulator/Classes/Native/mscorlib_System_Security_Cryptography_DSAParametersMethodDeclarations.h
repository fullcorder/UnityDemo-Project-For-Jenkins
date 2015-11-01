#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


extern "C" void DSAParameters_t737_marshal(const DSAParameters_t737& unmarshaled, DSAParameters_t737_marshaled& marshaled);
extern "C" void DSAParameters_t737_marshal_back(const DSAParameters_t737_marshaled& marshaled, DSAParameters_t737& unmarshaled);
extern "C" void DSAParameters_t737_marshal_cleanup(DSAParameters_t737_marshaled& marshaled);
