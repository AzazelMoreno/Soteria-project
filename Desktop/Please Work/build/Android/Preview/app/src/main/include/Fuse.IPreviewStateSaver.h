// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.8.1/PreviewState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PreviewStateData;}}

namespace g{
namespace Fuse{

// internal abstract interface IPreviewStateSaver :105
// {
uInterfaceType* IPreviewStateSaver_typeof();

struct IPreviewStateSaver
{
    void(*fp_Save)(uObject*, ::g::Fuse::PreviewStateData*);
    static void Save(const uInterface& __this, ::g::Fuse::PreviewStateData* data) { __this.VTable<IPreviewStateSaver>()->fp_Save(__this, data); }
};
// }

}} // ::g::Fuse
