﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
#define Dictionary_2__ctor_m12747(__this, method) (( void (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2__ctor_m11468_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m12748(__this, ___comparer, method) (( void (*) (Dictionary_2_t152 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11469_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m1798(__this, ___capacity, method) (( void (*) (Dictionary_2_t152 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11470_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m12749(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t152 *, SerializationInfo_t534 *, StreamingContext_t535 , const MethodInfo*))Dictionary_2__ctor_m11471_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12750(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t152 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11472_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12751(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t152 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11473_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m12752(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t152 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11474_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m12753(__this, ___key, method) (( bool (*) (Dictionary_2_t152 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11475_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m12754(__this, ___key, method) (( void (*) (Dictionary_2_t152 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11476_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12755(__this, method) (( bool (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11477_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12756(__this, method) (( Object_t * (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11478_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12757(__this, method) (( bool (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11479_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12758(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t152 *, KeyValuePair_2_t1876 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11480_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12759(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t152 *, KeyValuePair_2_t1876 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11481_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12760(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t152 *, KeyValuePair_2U5BU5D_t2220*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11482_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12761(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t152 *, KeyValuePair_2_t1876 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11483_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12762(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t152 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11484_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12763(__this, method) (( Object_t * (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11485_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12764(__this, method) (( Object_t* (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11486_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12765(__this, method) (( Object_t * (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m12766(__this, method) (( int32_t (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_get_Count_m11488_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m12767(__this, ___key, method) (( int32_t (*) (Dictionary_2_t152 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m11489_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m12768(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t152 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11490_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m12769(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t152 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11491_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m12770(__this, ___size, method) (( void (*) (Dictionary_2_t152 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11492_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m12771(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t152 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11493_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m12772(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1876  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11494_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m12773(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11495_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m12774(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t152 *, KeyValuePair_2U5BU5D_t2220*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11496_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m12775(__this, method) (( void (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_Resize_m11497_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m12776(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t152 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_Add_m11498_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m12777(__this, method) (( void (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_Clear_m11499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m12778(__this, ___key, method) (( bool (*) (Dictionary_2_t152 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m11500_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m12779(__this, ___value, method) (( bool (*) (Dictionary_2_t152 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11501_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m12780(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t152 *, SerializationInfo_t534 *, StreamingContext_t535 , const MethodInfo*))Dictionary_2_GetObjectData_m11502_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m12781(__this, ___sender, method) (( void (*) (Dictionary_2_t152 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11503_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m12782(__this, ___key, method) (( bool (*) (Dictionary_2_t152 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m11504_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m12783(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t152 *, String_t*, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11505_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m12784(__this, method) (( ValueCollection_t1877 * (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_get_Values_m11506_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m12785(__this, ___key, method) (( String_t* (*) (Dictionary_2_t152 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11507_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m12786(__this, ___value, method) (( int32_t (*) (Dictionary_2_t152 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11508_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m12787(__this, ___pair, method) (( bool (*) (Dictionary_2_t152 *, KeyValuePair_2_t1876 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11509_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m12788(__this, method) (( Enumerator_t1878  (*) (Dictionary_2_t152 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11510_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m12789(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t937  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11511_gshared)(__this /* static, unused */, ___key, ___value, method)
