// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Text/1.8.1/Implementation/Util.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct Memory;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class Memory :9
// {
uClassType* Memory_typeof();
void Memory__Copy_fn(uArray* dst, void** src, int32_t* len);

struct Memory : uObject
{
    static void Copy(uArray* dst, void* src, int32_t len);
};
// }

}}}} // ::g::Fuse::Text::Implementation
