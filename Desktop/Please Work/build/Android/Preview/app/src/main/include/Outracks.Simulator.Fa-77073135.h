// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Preview.Core/0.1.0/ProxyClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{struct FailedToConnectToProxy;}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class FailedToConnectToProxy :11
// {
::g::Uno::Exception_type* FailedToConnectToProxy_typeof();
void FailedToConnectToProxy__ctor_3_fn(FailedToConnectToProxy* __this, uObject* innerExceptions);
void FailedToConnectToProxy__New4_fn(uObject* innerExceptions, FailedToConnectToProxy** __retval);

struct FailedToConnectToProxy : ::g::Uno::Exception
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> InnerExceptions;

    void ctor_3(uObject* innerExceptions);
    static FailedToConnectToProxy* New4(uObject* innerExceptions);
};
// }

}}} // ::g::Outracks::Simulator
