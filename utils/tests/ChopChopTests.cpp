#include "test_failures.h"
#include "chop_chop_hash.h"

#include <cstdio>

#define PRINT_HASH(str, h) std::printf("The hash of '%s' is %u\n", str, h)

// Used for testing to ensure no collisions upon an easy set of words.
static const char* STRINGS_BIN[] = {
	"hello", "goodbye", "blue", "red",
	"yellow", "green", "orange", "foo",
	"bar", "blue", "California", "Kentucky",
	"skies", "C++", "Coding", "Programming",
	"engineering", "ice cream"
};

static const unsigned STRINGS_BIN_SIZE = sizeof(STRINGS_BIN) / sizeof(const char*);

static void test_chop_chop_hash_1()
{
	static const char* KEY_TEST_1 = "FooBar";
	static const char* KEY_TEST_2 = "DooBar";
	unsigned hash_1 = chop_chop_hash(KEY_TEST_1);
	unsigned hash_2 = chop_chop_hash(KEY_TEST_2);
	PRINT_HASH(KEY_TEST_1, hash_1);
	PRINT_HASH(KEY_TEST_2, hash_2);
	TEST_FAIL_CHECK(hash_1 != hash_2);
}

static void test_chop_chop_mstate_hash()
{
	unsigned hash_bin[STRINGS_BIN_SIZE];
	for(unsigned i = 0; i < STRINGS_BIN_SIZE; i++) {
		hash_bin[i] = chop_chop_mstate_hash(STRINGS_BIN[i]);
	}

	for(unsigned j = 0; j < STRINGS_BIN_SIZE - 1; j++) {
		TEST_FAIL_CHECK(hash_bin[j] != hash_bin[j + 1]);
	}
}


int main(int argc, char const *argv[])
{
	test_chop_chop_hash_1();
	test_chop_chop_mstate_hash();
	TEST_FAIL_RETURN
}
