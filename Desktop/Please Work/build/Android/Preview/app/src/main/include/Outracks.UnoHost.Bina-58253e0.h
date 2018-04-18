// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Preview.Core/0.1.0/UnoHost.Common/BinaryMessageInbox.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace UnoHost{struct BinaryMessageInbox;}}}

namespace g{
namespace Outracks{
namespace UnoHost{

// public static class BinaryMessageInbox :9
// {
uClassType* BinaryMessageInbox_typeof();
void BinaryMessageInbox__Receive1_fn(uDelegate* onReceive, uObject** __retval);
void BinaryMessageInbox__Send_fn(uObject* message);

struct BinaryMessageInbox : uObject
{
    static uObject* Receive1(uDelegate* onReceive);
    static void Send(uObject* message);
};
// }

}}} // ::g::Outracks::UnoHost
