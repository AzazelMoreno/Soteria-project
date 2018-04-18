// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Preview.Core/0.1.0/UnoHost.Common/BinaryMessageInbox.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace UnoHost{struct EmptyDisposable;}}}

namespace g{
namespace Outracks{
namespace UnoHost{

// internal sealed class EmptyDisposable :26
// {
struct EmptyDisposable_type : uType
{
    ::g::Uno::IDisposable interface0;
};

EmptyDisposable_type* EmptyDisposable_typeof();
void EmptyDisposable__ctor__fn(EmptyDisposable* __this);
void EmptyDisposable__Dispose_fn(EmptyDisposable* __this);
void EmptyDisposable__New1_fn(EmptyDisposable** __retval);

struct EmptyDisposable : uObject
{
    void ctor_();
    void Dispose();
    static EmptyDisposable* New1();
};
// }

}}} // ::g::Outracks::UnoHost
