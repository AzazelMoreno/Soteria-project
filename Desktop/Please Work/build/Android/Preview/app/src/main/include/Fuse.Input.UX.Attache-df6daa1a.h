// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.8.1/Input/UX/AttachedKeyboardMembers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{namespace UX{struct AttachedKeyboardMembers;}}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{
namespace UX{

// public static class AttachedKeyboardMembers :5
// {
uClassType* AttachedKeyboardMembers_typeof();
void AttachedKeyboardMembers__AddKeyPressedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedKeyboardMembers__AddKeyReleasedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedKeyboardMembers__RemoveKeyPressedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedKeyboardMembers__RemoveKeyReleasedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);

struct AttachedKeyboardMembers : uObject
{
    static void AddKeyPressedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void AddKeyReleasedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemoveKeyPressedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemoveKeyReleasedHandler(::g::Fuse::Visual* node, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Input::UX
