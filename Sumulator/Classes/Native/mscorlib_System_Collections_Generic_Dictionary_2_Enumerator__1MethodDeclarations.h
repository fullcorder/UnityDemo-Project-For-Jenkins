#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1778;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11542_gshared (Enumerator_t1785 * __this, Dictionary_2_t1778 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11542(__this, ___dictionary, method) (( void (*) (Enumerator_t1785 *, Dictionary_2_t1778 *, const MethodInfo*))Enumerator__ctor_m11542_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11543_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11543(__this, method) (( Object_t * (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11543_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t937  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11544_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11544(__this, method) (( DictionaryEntry_t937  (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11544_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11545_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11545(__this, method) (( Object_t * (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11545_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11546_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11546(__this, method) (( Object_t * (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11547_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11547(__this, method) (( bool (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_MoveNext_m11547_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1781  Enumerator_get_Current_m11548_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11548(__this, method) (( KeyValuePair_2_t1781  (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_get_Current_m11548_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11549_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11549(__this, method) (( Object_t * (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_get_CurrentKey_m11549_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11550_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11550(__this, method) (( int32_t (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_get_CurrentValue_m11550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m11551_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11551(__this, method) (( void (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_VerifyState_m11551_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11552_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11552(__this, method) (( void (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_VerifyCurrent_m11552_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11553_gshared (Enumerator_t1785 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11553(__this, method) (( void (*) (Enumerator_t1785 *, const MethodInfo*))Enumerator_Dispose_m11553_gshared)(__this, method)
