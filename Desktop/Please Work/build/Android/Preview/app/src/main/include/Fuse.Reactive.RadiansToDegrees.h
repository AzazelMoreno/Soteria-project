// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct RadiansToDegrees;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class RadiansToDegrees :327
// {
::g::Fuse::Reactive::UnaryOperator_type* RadiansToDegrees_typeof();
void RadiansToDegrees__ctor_5_fn(RadiansToDegrees* __this, ::g::Fuse::Reactive::Expression* operand);
void RadiansToDegrees__New1_fn(::g::Fuse::Reactive::Expression* operand, RadiansToDegrees** __retval);

struct RadiansToDegrees : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static RadiansToDegrees* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
