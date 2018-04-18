// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Cl-f2c14998.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Parameter;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct SimpleTypeMap;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public sealed extern class SimpleTypeMap :19
// {
struct SimpleTypeMap_type : uType
{
    ::g::Outracks::Simulator::Client::ITypeMap interface0;
};

SimpleTypeMap_type* SimpleTypeMap_typeof();
void SimpleTypeMap__ctor__fn(SimpleTypeMap* __this);
void SimpleTypeMap__New1_fn(SimpleTypeMap** __retval);
void SimpleTypeMap__ResolveType_fn(SimpleTypeMap* __this, ::g::Outracks::Simulator::Bytecode::Parameter* parameter, uType** __retval);
void SimpleTypeMap__ResolveType1_fn(SimpleTypeMap* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval);

struct SimpleTypeMap : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _builtins;

    void ctor_();
    uType* ResolveType(::g::Outracks::Simulator::Bytecode::Parameter* parameter);
    uType* ResolveType1(::g::Outracks::Simulator::Bytecode::TypeName* typeName);
    static SimpleTypeMap* New1();
};
// }

}}}} // ::g::Outracks::Simulator::Client
