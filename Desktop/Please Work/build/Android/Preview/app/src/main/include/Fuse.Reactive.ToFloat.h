// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/ConversionFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ToFloat;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ToFloat :8
// {
::g::Fuse::Reactive::UnaryOperator_type* ToFloat_typeof();
void ToFloat__ctor_5_fn(ToFloat* __this, ::g::Fuse::Reactive::Expression* operand);
void ToFloat__New1_fn(::g::Fuse::Reactive::Expression* operand, ToFloat** __retval);
void ToFloat__Op_fn(double* v, double* __retval);

struct ToFloat : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static ToFloat* New1(::g::Fuse::Reactive::Expression* operand);
    static double Op(double v);
};
// }

}}} // ::g::Fuse::Reactive
