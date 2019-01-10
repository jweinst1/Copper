#include "char_buf.h"

#ifndef CHAR_BUF_START_SIZE
#define CHAR_BUF_START_SIZE 500
#endif // CHAR_BUF_START_SIZE

void char_buf_init(char_buf_t* buf)
{
	buf->buf = malloc(CHAR_BUF_START_SIZE);
	buf->len = 0;
	buf->cap = CHAR_BUF_START_SIZE;
	memset(buf->buf, 0, CHAR_BUF_START_SIZE);
}

void char_buf_de_init(char_buf_t* buf)
{
	free(buf->buf);
	buf->len = 0;
	buf->cap = 0;
}

char_buf_t* char_buf_new(void)
{
	char_buf_t* newbuf = malloc(sizeof(char_buf_t));
	char_buf_init(newbuf);
	return newbuf;
}

void char_buf_del(char_buf_t* buf)
{
	free(buf->buf);
	free(buf);
}
