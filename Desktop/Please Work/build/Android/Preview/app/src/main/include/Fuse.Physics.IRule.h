// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Physics/1.8.1/World.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Physics{struct World;}}}

namespace g{
namespace Fuse{
namespace Physics{

// internal abstract interface IRule :6
// {
uInterfaceType* IRule_typeof();

struct IRule
{
    void(*fp_Update)(uObject*, double*, ::g::Fuse::Physics::World*);
    static void Update(const uInterface& __this, double deltaTime, ::g::Fuse::Physics::World* world) { __this.VTable<IRule>()->fp_Update(__this, &deltaTime, world); }
};
// }

}}} // ::g::Fuse::Physics
