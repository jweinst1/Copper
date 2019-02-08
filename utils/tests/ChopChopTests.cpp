#include "test_failures.h"
#include "chop_chop_hash.h"

#include <cstdio>

#define PRINT_HASH(str, h) std::printf("The hash of '%s' is %u\n", str, h)

static void test_chop_chop_hash_1(void)
{
	static const char* KEY_TEST_1 = "FooBar";
	static const char* KEY_TEST_2 = "DooBar";
	unsigned hash_1 = chop_chop_hash(KEY_TEST_1);
	unsigned hash_2 = chop_chop_hash(KEY_TEST_2);
	PRINT_HASH(KEY_TEST_1, hash_1);
	PRINT_HASH(KEY_TEST_2, hash_2);
	TEST_FAIL_CHECK(hash_1 != hash_2);
}


int main(int argc, char const *argv[])
{
	test_chop_chop_hash_1();
	TEST_FAIL_RETURN
}
