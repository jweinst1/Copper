#ifndef UTILS_CHAR_BUF_H
#define UTILS_CHAR_BUF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char* buf;
	size_t len;
	size_t cap;
} char_buf_t;

extern void char_buf_init(char_buf_t* buf);

extern void char_buf_de_init(char_buf_t* buf);

extern char_buf_t* char_buf_new(void);

extern void char_buf_del(char_buf_t* buf);

#endif // UTILS_CHAR_BUF_H
