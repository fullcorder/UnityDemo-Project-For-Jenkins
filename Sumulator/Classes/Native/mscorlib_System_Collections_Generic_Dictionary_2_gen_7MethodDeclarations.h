#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1750;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1749;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t534;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2201;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2202;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t936;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1756;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11106_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11106(__this, method) (( void (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2__ctor_m11106_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11108_gshared (Dictionary_2_t1750 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11108(__this, ___comparer, method) (( void (*) (Dictionary_2_t1750 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11108_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11110_gshared (Dictionary_2_t1750 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11110(__this, ___capacity, method) (( void (*) (Dictionary_2_t1750 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11110_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11112_gshared (Dictionary_2_t1750 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11112(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1750 *, SerializationInfo_t534 *, StreamingContext_t535 , const MethodInfo*))Dictionary_2__ctor_m11112_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11114_gshared (Dictionary_2_t1750 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11114(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1750 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11114_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11116_gshared (Dictionary_2_t1750 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11116(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1750 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11116_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11118_gshared (Dictionary_2_t1750 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11118(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1750 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11118_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11120_gshared (Dictionary_2_t1750 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11120(__this, ___key, method) (( bool (*) (Dictionary_2_t1750 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11120_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11122_gshared (Dictionary_2_t1750 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11122(__this, ___key, method) (( void (*) (Dictionary_2_t1750 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11122_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11124_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11124(__this, method) (( bool (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11124_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11126_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11126(__this, method) (( Object_t * (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11126_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11128_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11128(__this, method) (( bool (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11128_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11130_gshared (Dictionary_2_t1750 * __this, KeyValuePair_2_t1752  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11130(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1750 *, KeyValuePair_2_t1752 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11130_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11132_gshared (Dictionary_2_t1750 * __this, KeyValuePair_2_t1752  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11132(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1750 *, KeyValuePair_2_t1752 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11132_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11134_gshared (Dictionary_2_t1750 * __this, KeyValuePair_2U5BU5D_t2201* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11134(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1750 *, KeyValuePair_2U5BU5D_t2201*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11134_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11136_gshared (Dictionary_2_t1750 * __this, KeyValuePair_2_t1752  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11136(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1750 *, KeyValuePair_2_t1752 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11136_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11138_gshared (Dictionary_2_t1750 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11138(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1750 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11138_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11140_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11140(__this, method) (( Object_t * (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11140_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11142_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11142(__this, method) (( Object_t* (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11142_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11144_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11144(__this, method) (( Object_t * (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11144_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11146_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11146(__this, method) (( int32_t (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_get_Count_m11146_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11148_gshared (Dictionary_2_t1750 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11148(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1750 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11148_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11150_gshared (Dictionary_2_t1750 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11150(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1750 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11150_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11152_gshared (Dictionary_2_t1750 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11152(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1750 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11152_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11154_gshared (Dictionary_2_t1750 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11154(__this, ___size, method) (( void (*) (Dictionary_2_t1750 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11154_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11156_gshared (Dictionary_2_t1750 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11156(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1750 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11156_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1752  Dictionary_2_make_pair_m11158_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11158(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1752  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11158_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11160_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11160(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11160_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11162_gshared (Dictionary_2_t1750 * __this, KeyValuePair_2U5BU5D_t2201* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11162(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1750 *, KeyValuePair_2U5BU5D_t2201*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11162_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11164_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11164(__this, method) (( void (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_Resize_m11164_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11166_gshared (Dictionary_2_t1750 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11166(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1750 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11166_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11168_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11168(__this, method) (( void (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_Clear_m11168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11170_gshared (Dictionary_2_t1750 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11170(__this, ___key, method) (( bool (*) (Dictionary_2_t1750 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11170_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11172_gshared (Dictionary_2_t1750 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11172(__this, ___value, method) (( bool (*) (Dictionary_2_t1750 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11172_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11174_gshared (Dictionary_2_t1750 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11174(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1750 *, SerializationInfo_t534 *, StreamingContext_t535 , const MethodInfo*))Dictionary_2_GetObjectData_m11174_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11176_gshared (Dictionary_2_t1750 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11176(__this, ___sender, method) (( void (*) (Dictionary_2_t1750 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11176_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11178_gshared (Dictionary_2_t1750 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11178(__this, ___key, method) (( bool (*) (Dictionary_2_t1750 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11178_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11180_gshared (Dictionary_2_t1750 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11180(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1750 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11180_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1756 * Dictionary_2_get_Values_m11181_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11181(__this, method) (( ValueCollection_t1756 * (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_get_Values_m11181_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11183_gshared (Dictionary_2_t1750 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11183(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1750 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11183_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11185_gshared (Dictionary_2_t1750 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11185(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1750 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11185_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11187_gshared (Dictionary_2_t1750 * __this, KeyValuePair_2_t1752  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11187(__this, ___pair, method) (( bool (*) (Dictionary_2_t1750 *, KeyValuePair_2_t1752 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11187_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1758  Dictionary_2_GetEnumerator_m11188_gshared (Dictionary_2_t1750 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11188(__this, method) (( Enumerator_t1758  (*) (Dictionary_2_t1750 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11188_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t937  Dictionary_2_U3CCopyToU3Em__0_m11190_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11190(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t937  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11190_gshared)(__this /* static, unused */, ___key, ___value, method)
