#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1778;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1780;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t534;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2203;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2204;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t936;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1783;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11468_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11468(__this, method) (( void (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2__ctor_m11468_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11469_gshared (Dictionary_2_t1778 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11469(__this, ___comparer, method) (( void (*) (Dictionary_2_t1778 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11469_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11470_gshared (Dictionary_2_t1778 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11470(__this, ___capacity, method) (( void (*) (Dictionary_2_t1778 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11470_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11471_gshared (Dictionary_2_t1778 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11471(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1778 *, SerializationInfo_t534 *, StreamingContext_t535 , const MethodInfo*))Dictionary_2__ctor_m11471_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11472_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11472(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1778 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11472_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11473_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11473(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1778 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11473_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11474_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11474(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1778 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11474_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11475_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11475(__this, ___key, method) (( bool (*) (Dictionary_2_t1778 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11475_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11476_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11476(__this, ___key, method) (( void (*) (Dictionary_2_t1778 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11476_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11477_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11477(__this, method) (( bool (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11477_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11478_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11478(__this, method) (( Object_t * (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11478_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11479_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11479(__this, method) (( bool (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11479_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11480_gshared (Dictionary_2_t1778 * __this, KeyValuePair_2_t1781  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11480(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1778 *, KeyValuePair_2_t1781 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11480_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11481_gshared (Dictionary_2_t1778 * __this, KeyValuePair_2_t1781  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11481(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1778 *, KeyValuePair_2_t1781 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11481_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11482_gshared (Dictionary_2_t1778 * __this, KeyValuePair_2U5BU5D_t2203* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11482(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1778 *, KeyValuePair_2U5BU5D_t2203*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11482_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11483_gshared (Dictionary_2_t1778 * __this, KeyValuePair_2_t1781  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11483(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1778 *, KeyValuePair_2_t1781 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11483_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11484_gshared (Dictionary_2_t1778 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11484(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1778 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11484_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11485_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11485(__this, method) (( Object_t * (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11485_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11486_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11486(__this, method) (( Object_t* (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11486_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11487_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11487(__this, method) (( Object_t * (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11488_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11488(__this, method) (( int32_t (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_get_Count_m11488_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11489_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11489(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1778 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11489_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11490_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11490(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1778 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11490_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11491_gshared (Dictionary_2_t1778 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11491(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1778 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11491_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11492_gshared (Dictionary_2_t1778 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11492(__this, ___size, method) (( void (*) (Dictionary_2_t1778 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11492_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11493_gshared (Dictionary_2_t1778 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11493(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1778 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11493_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1781  Dictionary_2_make_pair_m11494_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11494(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1781  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11494_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11495_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11495(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11495_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11496_gshared (Dictionary_2_t1778 * __this, KeyValuePair_2U5BU5D_t2203* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11496(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1778 *, KeyValuePair_2U5BU5D_t2203*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11496_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11497_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11497(__this, method) (( void (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_Resize_m11497_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11498_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11498(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1778 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11498_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11499_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11499(__this, method) (( void (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_Clear_m11499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11500_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11500(__this, ___key, method) (( bool (*) (Dictionary_2_t1778 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11500_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11501_gshared (Dictionary_2_t1778 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11501(__this, ___value, method) (( bool (*) (Dictionary_2_t1778 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11501_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11502_gshared (Dictionary_2_t1778 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11502(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1778 *, SerializationInfo_t534 *, StreamingContext_t535 , const MethodInfo*))Dictionary_2_GetObjectData_m11502_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11503_gshared (Dictionary_2_t1778 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11503(__this, ___sender, method) (( void (*) (Dictionary_2_t1778 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11503_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11504_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11504(__this, ___key, method) (( bool (*) (Dictionary_2_t1778 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11504_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11505_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11505(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1778 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11505_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1783 * Dictionary_2_get_Values_m11506_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11506(__this, method) (( ValueCollection_t1783 * (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_get_Values_m11506_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11507_gshared (Dictionary_2_t1778 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11507(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1778 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11507_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11508_gshared (Dictionary_2_t1778 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11508(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1778 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11508_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11509_gshared (Dictionary_2_t1778 * __this, KeyValuePair_2_t1781  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11509(__this, ___pair, method) (( bool (*) (Dictionary_2_t1778 *, KeyValuePair_2_t1781 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11509_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1785  Dictionary_2_GetEnumerator_m11510_gshared (Dictionary_2_t1778 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11510(__this, method) (( Enumerator_t1785  (*) (Dictionary_2_t1778 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11510_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t937  Dictionary_2_U3CCopyToU3Em__0_m11511_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11511(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t937  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11511_gshared)(__this /* static, unused */, ___key, ___value, method)
