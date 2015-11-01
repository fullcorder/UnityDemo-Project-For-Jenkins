#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1750;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11231_gshared (Enumerator_t1758 * __this, Dictionary_2_t1750 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11231(__this, ___dictionary, method) (( void (*) (Enumerator_t1758 *, Dictionary_2_t1750 *, const MethodInfo*))Enumerator__ctor_m11231_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11232_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11232(__this, method) (( Object_t * (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11232_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t937  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11233_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11233(__this, method) (( DictionaryEntry_t937  (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11233_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11234_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11234(__this, method) (( Object_t * (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11234_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11235_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11235(__this, method) (( Object_t * (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11235_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11236_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11236(__this, method) (( bool (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_MoveNext_m11236_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1752  Enumerator_get_Current_m11237_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11237(__this, method) (( KeyValuePair_2_t1752  (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_get_Current_m11237_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m11238_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11238(__this, method) (( int32_t (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_get_CurrentKey_m11238_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m11239_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11239(__this, method) (( Object_t * (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_get_CurrentValue_m11239_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m11240_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11240(__this, method) (( void (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_VerifyState_m11240_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11241_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11241(__this, method) (( void (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_VerifyCurrent_m11241_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m11242_gshared (Enumerator_t1758 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11242(__this, method) (( void (*) (Enumerator_t1758 *, const MethodInfo*))Enumerator_Dispose_m11242_gshared)(__this, method)
