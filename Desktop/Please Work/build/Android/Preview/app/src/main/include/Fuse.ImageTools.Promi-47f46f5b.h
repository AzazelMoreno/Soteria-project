// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.ImageTools/1.8.1/PromiseCallbacks.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace ImageTools{struct PromiseCallback;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal sealed class PromiseCallback<T> :46
// {
uType* PromiseCallback_typeof();
void PromiseCallback__ctor__fn(PromiseCallback* __this, ::g::Uno::Threading::Promise* p);
void PromiseCallback__New1_fn(uType* __type, ::g::Uno::Threading::Promise* p, PromiseCallback** __retval);
void PromiseCallback__Reject_fn(PromiseCallback* __this, uString* reason);
void PromiseCallback__Resolve_fn(PromiseCallback* __this, void* v);

struct PromiseCallback : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _p;

    void ctor_(::g::Uno::Threading::Promise* p);
    void Reject(uString* reason);
    template<class T>
    void Resolve(T v) { PromiseCallback__Resolve_fn(this, uConstrain(__type->T(0), v)); }
    static PromiseCallback* New1(uType* __type, ::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::ImageTools
