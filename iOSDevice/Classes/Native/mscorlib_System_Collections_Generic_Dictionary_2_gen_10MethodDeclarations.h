#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2099;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1780;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t534;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2250;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2251;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t936;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2104;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m15502_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15502(__this, method) (( void (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2__ctor_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15503_gshared (Dictionary_2_t2099 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15503(__this, ___comparer, method) (( void (*) (Dictionary_2_t2099 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15503_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15505_gshared (Dictionary_2_t2099 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15505(__this, ___capacity, method) (( void (*) (Dictionary_2_t2099 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15505_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15507_gshared (Dictionary_2_t2099 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15507(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2099 *, SerializationInfo_t534 *, StreamingContext_t535 , const MethodInfo*))Dictionary_2__ctor_m15507_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15509_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15509(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15509_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15511_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15511(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15511_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15513_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15513(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15513_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15515_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15515(__this, ___key, method) (( bool (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15515_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15517_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15517(__this, ___key, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15517_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15519_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15519(__this, method) (( bool (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15519_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15521_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15521(__this, method) (( Object_t * (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15523_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15523(__this, method) (( bool (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15525_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2_t2101  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15525(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2099 *, KeyValuePair_2_t2101 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15525_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15527_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2_t2101  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15527(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2099 *, KeyValuePair_2_t2101 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15527_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15529_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2U5BU5D_t2250* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15529(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2099 *, KeyValuePair_2U5BU5D_t2250*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15529_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15531_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2_t2101  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15531(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2099 *, KeyValuePair_2_t2101 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15531_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15533_gshared (Dictionary_2_t2099 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15533(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2099 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15533_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15535_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15535(__this, method) (( Object_t * (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15535_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15537_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15537(__this, method) (( Object_t* (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15537_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15539_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15539(__this, method) (( Object_t * (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15539_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15541_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15541(__this, method) (( int32_t (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_get_Count_m15541_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m15543_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15543(__this, ___key, method) (( bool (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15543_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15545_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15545(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m15545_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15547_gshared (Dictionary_2_t2099 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15547(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2099 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15547_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15549_gshared (Dictionary_2_t2099 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15549(__this, ___size, method) (( void (*) (Dictionary_2_t2099 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15549_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15551_gshared (Dictionary_2_t2099 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15551(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2099 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15551_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2101  Dictionary_2_make_pair_m15553_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15553(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2101  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m15553_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m15555_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15555(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m15555_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15557_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2U5BU5D_t2250* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15557(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2099 *, KeyValuePair_2U5BU5D_t2250*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15557_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m15559_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15559(__this, method) (( void (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_Resize_m15559_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15561_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15561(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m15561_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m15563_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15563(__this, method) (( void (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_Clear_m15563_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15565_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15565(__this, ___key, method) (( bool (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m15565_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15567_gshared (Dictionary_2_t2099 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15567(__this, ___value, method) (( bool (*) (Dictionary_2_t2099 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m15567_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15569_gshared (Dictionary_2_t2099 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15569(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2099 *, SerializationInfo_t534 *, StreamingContext_t535 , const MethodInfo*))Dictionary_2_GetObjectData_m15569_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15571_gshared (Dictionary_2_t2099 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15571(__this, ___sender, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15571_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15573_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15573(__this, ___key, method) (( bool (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m15573_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15575_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15575(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2099 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m15575_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2104 * Dictionary_2_get_Values_m15577_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15577(__this, method) (( ValueCollection_t2104 * (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_get_Values_m15577_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m15579_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15579(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15579_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m15581_gshared (Dictionary_2_t2099 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15581(__this, ___value, method) (( bool (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15581_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15583_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2_t2101  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15583(__this, ___pair, method) (( bool (*) (Dictionary_2_t2099 *, KeyValuePair_2_t2101 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15583_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2106  Dictionary_2_GetEnumerator_m15585_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15585(__this, method) (( Enumerator_t2106  (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15585_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t937  Dictionary_2_U3CCopyToU3Em__0_m15587_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15587(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t937  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15587_gshared)(__this /* static, unused */, ___key, ___value, method)
