// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Alternate;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Alternate :98
// {
::g::Fuse::Reactive::BinaryOperator_type* Alternate_typeof();
void Alternate__ctor_4_fn(Alternate* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Alternate__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Alternate** __retval);
void Alternate__TryCompute1_fn(Alternate* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct Alternate : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Alternate* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
