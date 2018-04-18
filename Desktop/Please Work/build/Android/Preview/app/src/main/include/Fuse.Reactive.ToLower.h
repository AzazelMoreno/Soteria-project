// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/StringFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ToLower;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ToLower :21
// {
::g::Fuse::Reactive::UnaryOperator_type* ToLower_typeof();
void ToLower__ctor_4_fn(ToLower* __this, ::g::Fuse::Reactive::Expression* value);
void ToLower__New1_fn(::g::Fuse::Reactive::Expression* value, ToLower** __retval);
void ToLower__TryCompute1_fn(ToLower* __this, uObject* s, uObject** result, bool* __retval);

struct ToLower : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* value);
    static ToLower* New1(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
