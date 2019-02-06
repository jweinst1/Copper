#include <cstring>
#include "CStr.h"

#ifndef MSTR_DEFAULT_CAP
#define MSTR_DEFAULT_CAP 60
#endif

CStr::CStr(): _cap(MSTR_DEFAULT_CAP),
              _len(0),
              _str(static_cast<char*>(std::malloc(_cap + 1))) /* + 1 for null char*/
{
	std::memset(_str, 0, _cap + 1);
}

CStr::CStr(const char* string)
{
	_len = std::strlen(string);
	_cap = _len + MSTR_DEFAULT_CAP;
	_str = static_cast<char*>(std::malloc(_cap + 1));
	std::strncpy(_str, string, _cap + 1);
}

CStr::CStr(const CStr& other): _cap(other.getCap()),
                               _len(other.getLen()),
                               _str(static_cast<char*>(std::malloc(_cap + 1)))
{
	std::strncpy(_str, other.getStr(), _cap + 1);
}

CStr::~CStr()
{
		std::free(_str);
}
