// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/Object.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.SimpleV-1e1b52a3.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Object :16
// {
::g::Fuse::Reactive::SimpleVarArgFunction_type* Object_typeof();
void Object__ctor_3_fn(Object* __this);
void Object__New1_fn(Object** __retval);
void Object__OnNewArguments_fn(Object* __this, uArray* args, uObject* listener);

struct Object : ::g::Fuse::Reactive::SimpleVarArgFunction
{
    void ctor_3();
    static Object* New1();
};
// }

}}} // ::g::Fuse::Reactive
