// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/IReflection.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct MemberNotFound;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class MemberNotFound :7
// {
::g::Uno::Exception_type* MemberNotFound_typeof();
void MemberNotFound__ctor_3_fn(MemberNotFound* __this, uString* type, uString* member);
void MemberNotFound__New4_fn(uString* type, uString* member, MemberNotFound** __retval);

struct MemberNotFound : ::g::Uno::Exception
{
    uStrong<uString*> Type;
    uStrong<uString*> Member;

    void ctor_3(uString* type, uString* member);
    static MemberNotFound* New4(uString* type, uString* member);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
