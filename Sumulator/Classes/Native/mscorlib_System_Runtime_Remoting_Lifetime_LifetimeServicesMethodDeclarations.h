#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern "C" void LifetimeServices__cctor_m7839 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
extern "C" void LifetimeServices_set_LeaseManagerPollTime_m7840 (Object_t * __this /* static, unused */, TimeSpan_t846  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseTime(System.TimeSpan)
extern "C" void LifetimeServices_set_LeaseTime_m7841 (Object_t * __this /* static, unused */, TimeSpan_t846  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_RenewOnCallTime(System.TimeSpan)
extern "C" void LifetimeServices_set_RenewOnCallTime_m7842 (Object_t * __this /* static, unused */, TimeSpan_t846  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_SponsorshipTimeout(System.TimeSpan)
extern "C" void LifetimeServices_set_SponsorshipTimeout_m7843 (Object_t * __this /* static, unused */, TimeSpan_t846  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
