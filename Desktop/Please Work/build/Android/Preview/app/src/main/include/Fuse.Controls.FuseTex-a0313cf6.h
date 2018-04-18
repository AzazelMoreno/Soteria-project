// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.8.1/TextControls/FuseTextRenderer/CacheState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct Tolerances;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal struct Tolerances :54
// {
uStructType* Tolerances_typeof();
void Tolerances__ctor__fn(Tolerances* __this, int32_t* dummy);
void Tolerances__New1_fn(int32_t* dummy, Tolerances* __retval);

struct Tolerances
{
    static float Epsilon_;
    static float& Epsilon() { return Tolerances_typeof()->Init(), Epsilon_; }
    float MinWrap;
    float MaxWrap;
    float MinTruncation;
    float MaxTruncation;

    void ctor_(int32_t dummy);
};

Tolerances Tolerances__New1(int32_t dummy);
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
