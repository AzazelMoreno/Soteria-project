// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.ImageTools/1.8.1/Android/Commands.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ImageTools.PCommand.h>
namespace g{namespace Fuse{namespace ImageTools{struct ResizeCommand;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal sealed extern class ResizeCommand :44
// {
::g::Fuse::ImageTools::PCommand_type* ResizeCommand_typeof();
void ResizeCommand__ctor_1_fn(ResizeCommand* __this, uString* path, int32_t* desiredWidth, int32_t* desiredHeight, int32_t* mode, uDelegate* Resolve, uDelegate* Reject, bool* inPlace);
void ResizeCommand__New1_fn(uString* path, int32_t* desiredWidth, int32_t* desiredHeight, int32_t* mode, uDelegate* Resolve, uDelegate* Reject, bool* inPlace, ResizeCommand** __retval);
void ResizeCommand__OnGranted_fn(ResizeCommand* __this);
void ResizeCommand__OnRejected_fn(ResizeCommand* __this, ::g::Uno::Exception* e);

struct ResizeCommand : ::g::Fuse::ImageTools::PCommand
{
    uStrong<uString*> _path;
    int32_t _desiredWidth;
    int32_t _desiredHeight;
    int32_t _mode;
    bool _inPlace;
    uStrong<uDelegate*> _resolve;
    uStrong<uDelegate*> _reject;

    void ctor_1(uString* path, int32_t desiredWidth, int32_t desiredHeight, int32_t mode, uDelegate* Resolve, uDelegate* Reject, bool inPlace);
    static ResizeCommand* New1(uString* path, int32_t desiredWidth, int32_t desiredHeight, int32_t mode, uDelegate* Resolve, uDelegate* Reject, bool inPlace);
};
// }

}}} // ::g::Fuse::ImageTools
