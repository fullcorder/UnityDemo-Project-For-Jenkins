#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1829;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12162_gshared (Enumerator_t1835 * __this, Dictionary_2_t1829 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12162(__this, ___dictionary, method) (( void (*) (Enumerator_t1835 *, Dictionary_2_t1829 *, const MethodInfo*))Enumerator__ctor_m12162_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12163_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12163(__this, method) (( Object_t * (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12163_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t937  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12164_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12164(__this, method) (( DictionaryEntry_t937  (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12164_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12165_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12165(__this, method) (( Object_t * (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12165_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12166_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12166(__this, method) (( Object_t * (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12167_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12167(__this, method) (( bool (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_MoveNext_m12167_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1831  Enumerator_get_Current_m12168_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12168(__this, method) (( KeyValuePair_2_t1831  (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_get_Current_m12168_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12169_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12169(__this, method) (( Object_t * (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_get_CurrentKey_m12169_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12170_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12170(__this, method) (( Object_t * (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_get_CurrentValue_m12170_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12171_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12171(__this, method) (( void (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_VerifyState_m12171_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12172_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12172(__this, method) (( void (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_VerifyCurrent_m12172_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12173_gshared (Enumerator_t1835 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12173(__this, method) (( void (*) (Enumerator_t1835 *, const MethodInfo*))Enumerator_Dispose_m12173_gshared)(__this, method)
