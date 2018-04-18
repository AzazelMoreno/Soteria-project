// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Permissions.Inter-b7b0d7de.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{
namespace Uno{
namespace Permissions{
namespace Internal{

// C:\Users\rudy0\AppData\Local\Fusetools\Packages\Uno.Permissions\1.8.0\AndroidPermissionsInternal.uno
// ----------------------------------------------------------------------------------------------------

// internal sealed extern class Android :10
// {
static void Android_build(uType* type)
{
    ::STRINGS[0] = uString::Const("android.permission.ACCESS_COARSE_LOCATION");
    ::STRINGS[1] = uString::Const("android.permission.ACCESS_FINE_LOCATION");
    ::STRINGS[2] = uString::Const("android.permission.INTERNET");
    ::STRINGS[3] = uString::Const("android.permission.READ_EXTERNAL_STORAGE");
    ::STRINGS[4] = uString::Const("android.permission.WRITE_EXTERNAL_STORAGE");
}

uType* Android_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Permissions.Internal.Android", options);
    type->fp_build_ = Android_build;
    return type;
}

// internal static extern Uno.Permissions.PlatformPermission _access_coarse_location() :18
void Android___access_coarse_location_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_access_coarse_location();
}

// internal static extern Uno.Permissions.PlatformPermission _access_fine_location() :23
void Android___access_fine_location_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_access_fine_location();
}

// internal static extern Uno.Permissions.PlatformPermission _internet() :363
void Android___internet_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_internet();
}

// internal static extern Uno.Permissions.PlatformPermission _read_external_storage() :453
void Android___read_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_read_external_storage();
}

// internal static extern Uno.Permissions.PlatformPermission _write_external_storage() :713
void Android___write_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_write_external_storage();
}

// internal static extern Uno.Permissions.PlatformPermission _access_coarse_location() [static] :18
::g::Uno::Permissions::PlatformPermission Android::_access_coarse_location()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[0/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _access_fine_location() [static] :23
::g::Uno::Permissions::PlatformPermission Android::_access_fine_location()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[1/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _internet() [static] :363
::g::Uno::Permissions::PlatformPermission Android::_internet()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[2/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _read_external_storage() [static] :453
::g::Uno::Permissions::PlatformPermission Android::_read_external_storage()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[3/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _write_external_storage() [static] :713
::g::Uno::Permissions::PlatformPermission Android::_write_external_storage()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[4/*"android.per...*/]);
}
// }

}}}} // ::g::Uno::Permissions::Internal
