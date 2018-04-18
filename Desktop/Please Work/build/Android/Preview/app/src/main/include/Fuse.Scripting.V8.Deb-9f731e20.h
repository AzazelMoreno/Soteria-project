// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.8.1/V8/Debugger.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Deb-7a245152.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger__Connected;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace IO{struct TextReader;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private sealed class Debugger.Connected :237
// {
struct Debugger__Connected_type : uType
{
    ::g::Fuse::Scripting::V8::Debugger__State interface0;
};

Debugger__Connected_type* Debugger__Connected_typeof();
void Debugger__Connected__ctor__fn(Debugger__Connected* __this, ::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader);
void Debugger__Connected__Dispose_fn(Debugger__Connected* __this);
void Debugger__Connected__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader, Debugger__Connected** __retval);
void Debugger__Connected__ProcessMessages_fn(Debugger__Connected* __this, ::g::Fuse::Scripting::Context* context);
void Debugger__Connected__ReadExactly_fn(Debugger__Connected* __this, uArray* buffer, int32_t* start, int32_t* count, bool* __retval);
void Debugger__Connected__Reconnect_fn(Debugger__Connected* __this);
void Debugger__Connected__Run_fn(Debugger__Connected* __this, uObject** __retval);

struct Debugger__Connected : uObject
{
    uStrong< ::g::Fuse::Scripting::V8::Debugger*> _parent;
    uStrong< ::g::Uno::IO::TextReader*> _reader;
    uStrong< ::g::Uno::Net::Sockets::Socket*> _socket;
    bool _reconnect;

    void ctor_(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader);
    void Dispose();
    void ProcessMessages(::g::Fuse::Scripting::Context* context);
    bool ReadExactly(uArray* buffer, int32_t start, int32_t count);
    void Reconnect();
    uObject* Run();
    static Debugger__Connected* New1(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader);
};
// }

}}}} // ::g::Fuse::Scripting::V8
