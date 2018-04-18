// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Asin;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Asin :222
// {
::g::Fuse::Reactive::UnaryOperator_type* Asin_typeof();
void Asin__ctor_5_fn(Asin* __this, ::g::Fuse::Reactive::Expression* operand);
void Asin__New1_fn(::g::Fuse::Reactive::Expression* operand, Asin** __retval);

struct Asin : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Asin* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
