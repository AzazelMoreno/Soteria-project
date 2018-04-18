// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.Maps/1.8.1/MarkerIconCache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Maps{struct MarkerIconCache;}}}
namespace g{namespace Fuse{namespace Maps{struct MarkerSource;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Maps{

// internal sealed class MarkerSource :41
// {
uType* MarkerSource_typeof();
void MarkerSource__ctor__fn(MarkerSource* __this, uString* name, ::g::Uno::UX::FileSource* input, ::g::Fuse::Maps::MarkerIconCache* cache);
void MarkerSource__get_Name_fn(MarkerSource* __this, uString** __retval);
void MarkerSource__set_Name_fn(MarkerSource* __this, uString* value);
void MarkerSource__New1_fn(uString* name, ::g::Uno::UX::FileSource* input, ::g::Fuse::Maps::MarkerIconCache* cache, MarkerSource** __retval);
void MarkerSource__OnDataChanged_fn(MarkerSource* __this, uObject* sender, ::g::Uno::EventArgs* args);
void MarkerSource__get_Path_fn(MarkerSource* __this, uString** __retval);

struct MarkerSource : uObject
{
    uStrong< ::g::Uno::UX::FileSource*> _src;
    uStrong< ::g::Fuse::Maps::MarkerIconCache*> _cache;
    bool dirty;
    uStrong<uString*> _path;
    uStrong<uString*> _Name;

    void ctor_(uString* name, ::g::Uno::UX::FileSource* input, ::g::Fuse::Maps::MarkerIconCache* cache);
    uString* Name();
    void Name(uString* value);
    void OnDataChanged(uObject* sender, ::g::Uno::EventArgs* args);
    uString* Path();
    static MarkerSource* New1(uString* name, ::g::Uno::UX::FileSource* input, ::g::Fuse::Maps::MarkerIconCache* cache);
};
// }

}}} // ::g::Fuse::Maps
