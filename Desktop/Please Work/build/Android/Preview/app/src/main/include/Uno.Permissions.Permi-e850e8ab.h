// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Uno.Permissions/1.8.0/Permissions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Permissions.IPerm-63840be1.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Uno{namespace Permissions{struct PermissionsPromise;}}}

namespace g{
namespace Uno{
namespace Permissions{

// internal sealed class PermissionsPromise :39
// {
struct PermissionsPromise_type : ::g::Uno::Threading::Future_type
{
    ::g::Uno::Permissions::IPermissionPromise interface1;
};

PermissionsPromise_type* PermissionsPromise_typeof();
void PermissionsPromise__ctor_7_fn(PermissionsPromise* __this, uArray* permissions);
void PermissionsPromise__New5_fn(uArray* permissions, PermissionsPromise** __retval);
void PermissionsPromise__Resolve1_fn(PermissionsPromise* __this);

struct PermissionsPromise : ::g::Uno::Threading::Promise
{
    uStrong<uArray*> _permissions;

    void ctor_7(uArray* permissions);
    void Resolve1();
    static PermissionsPromise* New5(uArray* permissions);
};
// }

}}} // ::g::Uno::Permissions
