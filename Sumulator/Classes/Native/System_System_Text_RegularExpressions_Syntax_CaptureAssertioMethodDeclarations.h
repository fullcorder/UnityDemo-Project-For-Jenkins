#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t912;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t914;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t907;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t939;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t913;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m4752 (CaptureAssertion_t912 * __this, Literal_t914 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m4753 (CaptureAssertion_t912 * __this, CapturingGroup_t907 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m4754 (CaptureAssertion_t912 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m4755 (CaptureAssertion_t912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t913 * CaptureAssertion_get_Alternate_m4756 (CaptureAssertion_t912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
