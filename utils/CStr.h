#ifndef _UTIL_CSTR_H
#define _UTIL_CSTR_H

#include <cstdlib>
#include <cstring>

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

	CStr& operator=(const CStr& other);
	CStr& operator=(const char* string);

	size_t getLen() const { return _len; }
	size_t getCap() const { return _cap; }
	size_t getSpace() const { return _cap - _len; }
	const char* getStr() const { return _str; }
	/**
	 * up to _cap, rewrites the contents of _str.
	 * if string is smaller than cap, remaining
	 * space is padded with null chars.
	 */
	void rewrite(const char* string);
private:
	/**
	 * This is a method not meant to be called directly.
	 * it allows a C - string to be written into the CStr object,
	 * but will continously expand if not enough capacity is present.
	 */
	void rewriteAndExpand(const char* string);
	/**
	 * Changes the capacity of the string using std::realloc.
	 * if newSize is less than current length, it will trim
	 * the encapsulated string.
	 */
	void changeSize(size_t newSize);
private:
	size_t _cap;
	size_t _len;
	char* _str;
};

#endif // _UTIL_MSTR_H
