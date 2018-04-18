// This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/Fuse.ImageTools/1.8.1/Android/Commands.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ImageTools.PCommand.h>
namespace g{namespace Fuse{namespace ImageTools{struct CropCommand;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal sealed extern class CropCommand :73
// {
::g::Fuse::ImageTools::PCommand_type* CropCommand_typeof();
void CropCommand__ctor_1_fn(CropCommand* __this, uString* path, int32_t* x, int32_t* y, int32_t* desiredWidth, int32_t* desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool* inPlace);
void CropCommand__New1_fn(uString* path, int32_t* x, int32_t* y, int32_t* desiredWidth, int32_t* desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool* inPlace, CropCommand** __retval);
void CropCommand__OnGranted_fn(CropCommand* __this);
void CropCommand__OnRejected_fn(CropCommand* __this, ::g::Uno::Exception* e);

struct CropCommand : ::g::Fuse::ImageTools::PCommand
{
    uStrong<uString*> _path;
    int32_t _x;
    int32_t _y;
    int32_t _width;
    int32_t _height;
    bool _inPlace;
    uStrong<uDelegate*> _resolve;
    uStrong<uDelegate*> _reject;

    void ctor_1(uString* path, int32_t x, int32_t y, int32_t desiredWidth, int32_t desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool inPlace);
    static CropCommand* New1(uString* path, int32_t x, int32_t y, int32_t desiredWidth, int32_t desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool inPlace);
};
// }

}}} // ::g::Fuse::ImageTools
