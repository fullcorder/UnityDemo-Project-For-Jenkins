﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t910;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t903;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t939;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t921;

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C" void Repetition__ctor_m4739 (Repetition_t910 * __this, int32_t ___min, int32_t ___max, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C" Expression_t903 * Repetition_get_Expression_m4740 (Repetition_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Repetition_set_Expression_m4741 (Repetition_t910 * __this, Expression_t903 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C" int32_t Repetition_get_Minimum_m4742 (Repetition_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Repetition_Compile_m4743 (Repetition_t910 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern "C" void Repetition_GetWidth_m4744 (Repetition_t910 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t921 * Repetition_GetAnchorInfo_m4745 (Repetition_t910 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
