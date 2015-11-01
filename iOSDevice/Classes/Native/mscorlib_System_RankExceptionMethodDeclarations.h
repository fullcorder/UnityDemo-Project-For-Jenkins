#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RankException
struct RankException_t1557;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t534;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RankException::.ctor()
extern "C" void RankException__ctor_m9782 (RankException_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RankException::.ctor(System.String)
extern "C" void RankException__ctor_m9783 (RankException_t1557 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RankException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RankException__ctor_m9784 (RankException_t1557 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
