#include "chop_chop_hash.h"

/**
 * This acts as a jump table for mixed state chop chop function
 * For example [8] -> 0 as opposed to 16.
 * this mixes up the degree of entropy.
 */
static const int CC_MSTATE_TABLE[] = {
	16, 0, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	24, 0, 0, 0,
	0, 0, 0, 0,
	8
};

unsigned chop_chop_hash(const char* text)
{
	unsigned chop_word = CHOP_HASH_START_32B;
	int state = 0;
	while(*text) {
		chop_word = chop_word ^ ((*text++) << state);
		state += (state == 24 ? -24 : 8);
	}
	return chop_word;
}

unsigned chop_chop_mstate_hash(const char* text)
{
	unsigned chop_word = CHOP_HASH_START_32B;
	int state = 0;
	while(*text) {
		chop_word = chop_word ^ ((*text++) << state);
		state = CC_MSTATE_TABLE[state];
	}
	return chop_word;	
}
