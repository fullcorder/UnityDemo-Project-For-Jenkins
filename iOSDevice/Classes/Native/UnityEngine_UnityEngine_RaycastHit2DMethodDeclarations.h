#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider2D
struct Collider2D_t297;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t432;
// UnityEngine.Transform
struct Transform_t189;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t43  RaycastHit2D_get_point_m1500 (RaycastHit2D_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t43  RaycastHit2D_get_normal_m1501 (RaycastHit2D_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m1696 (RaycastHit2D_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t297 * RaycastHit2D_get_collider_m1494 (RaycastHit2D_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t432 * RaycastHit2D_get_rigidbody_m2513 (RaycastHit2D_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t189 * RaycastHit2D_get_transform_m1498 (RaycastHit2D_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
