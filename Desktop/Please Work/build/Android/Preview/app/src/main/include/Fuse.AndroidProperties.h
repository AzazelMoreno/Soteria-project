// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Android/1.8.1/AndroidProperties.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct AndroidProperties;}}

namespace g{
namespace Fuse{

// public static extern class AndroidProperties :9
// {
uClassType* AndroidProperties_typeof();
void AndroidProperties__get_BuildVersion_fn(int32_t* __retval);
void AndroidProperties__GetBuildVersion_fn(int32_t* __retval);
void AndroidProperties__GetReleaseVersion_fn(uString** __retval);
void AndroidProperties__get_ReleaseVersion_fn(uString** __retval);

struct AndroidProperties : uObject
{
    static int32_t GetBuildVersion();
    static uString* GetReleaseVersion();
    static int32_t BuildVersion();
    static uString* ReleaseVersion();
};
// }

}} // ::g::Fuse
