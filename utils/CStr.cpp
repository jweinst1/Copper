#include "CStr.h"

#ifndef MSTR_DEFAULT_CAP
#define MSTR_DEFAULT_CAP 60
#endif

CStr::CStr(): _cap(MSTR_DEFAULT_CAP),
              _len(0),
              _str(static_cast<char*>(std::malloc(_cap)))
{

}
