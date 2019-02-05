#ifndef _UTIL_CSTR_H
#define _UTIL_CSTR_H

#include <cstring>
#include <cstdlib>

/*
 * String class that uses malloc/rellaoc/free for memory management.
 * Faster performance is primary purpose
 */

class CStr 
{
public:
	CStr();
private:
	size_t _cap;
	size_t _len;
	char* _str;
};

#endif // _UTIL_MSTR_H
