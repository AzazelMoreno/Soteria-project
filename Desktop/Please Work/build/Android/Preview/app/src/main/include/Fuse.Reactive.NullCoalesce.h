// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/NullCoalesce.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Compute-2d5dc615.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct NullCoalesce;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NullCoalesce :6
// {
::g::Fuse::Reactive::ComputeExpression_type* NullCoalesce_typeof();
void NullCoalesce__ctor_2_fn(NullCoalesce* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void NullCoalesce__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, NullCoalesce** __retval);
void NullCoalesce__TryCompute_fn(NullCoalesce* __this, uArray* args, uObject** result, bool* __retval);

struct NullCoalesce : ::g::Fuse::Reactive::ComputeExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static NullCoalesce* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
