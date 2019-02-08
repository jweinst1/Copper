#ifndef _UTIL_CHOP_CHOP_HASH_H
#define _UTIL_CHOP_CHOP_HASH_H

/**
 * This file contains utilities for chop chop hashing.
 * The chop chop hash is a speical algorithm I developed
 * to maximize both speed and entropy
 */

// The starting value of the chop chop hash for 32bit
#ifndef CHOP_HASH_START_32B
#define CHOP_HASH_START_32B 0x4F3F28DB
#endif

typedef struct
{
	unsigned word;
	int state;
} chop_state_t;

#ifdef __cplusplus
extern "C" {
#endif

unsigned chop_chop_hash(const char* text);

unsigned chop_chop_mstate_hash(const char* text);

#ifdef __cplusplus
}
#endif

#endif // _UTIL_CHOP_CHOP_HASH_H
