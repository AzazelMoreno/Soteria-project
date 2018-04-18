// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/StringFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ToUpper;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ToUpper :6
// {
::g::Fuse::Reactive::UnaryOperator_type* ToUpper_typeof();
void ToUpper__ctor_4_fn(ToUpper* __this, ::g::Fuse::Reactive::Expression* value);
void ToUpper__New1_fn(::g::Fuse::Reactive::Expression* value, ToUpper** __retval);
void ToUpper__TryCompute1_fn(ToUpper* __this, uObject* s, uObject** result, bool* __retval);

struct ToUpper : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* value);
    static ToUpper* New1(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
