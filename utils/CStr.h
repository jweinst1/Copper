#ifndef _UTIL_CSTR_H
#define _UTIL_CSTR_H

#include <cstdlib>

/*
 * String class that uses malloc/rellaoc/free for memory management.
 * Additionally, this string class will attempt to reuse existing memory,
 * such as if a new string is written into an old string.
 */

class CStr 
{
public:
	CStr();
	explicit CStr(const char* string);
	CStr(const CStr& other);
	virtual ~CStr();

	size_t getLen() const { return _len; }
	size_t getCap() const { return _cap; }
	const char* getStr() const { return _str; }
private:
	size_t _cap;
	size_t _len;
	char* _str;
};

#endif // _UTIL_MSTR_H
