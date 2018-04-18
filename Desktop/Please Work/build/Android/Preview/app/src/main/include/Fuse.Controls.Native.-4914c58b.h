// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.8.1/Android/DateTimeConverterHelpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct DateTimeConverterHelpers;}}}}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal static extern class DateTimeConverterHelpers :5
// {
uClassType* DateTimeConverterHelpers_typeof();
void DateTimeConverterHelpers__ConvertDateTimeToMsSince1970InUtc_fn(::g::Uno::DateTime* dt, int64_t* __retval);
void DateTimeConverterHelpers__ConvertMsSince1970InUtcToDateTime_fn(int64_t* msSince1970InUtc, ::g::Uno::DateTime* __retval);

struct DateTimeConverterHelpers : uObject
{
    static int64_t ConvertDateTimeToMsSince1970InUtc(::g::Uno::DateTime dt);
    static ::g::Uno::DateTime ConvertMsSince1970InUtcToDateTime(int64_t msSince1970InUtc);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
