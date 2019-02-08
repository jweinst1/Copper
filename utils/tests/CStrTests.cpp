#include "test_failures.h"
#include "CStr.h"


static void testCStrConstructor()
{
	CStr foo("foo");
	TEST_FAIL_CHECK(foo.getLen() == 3);
}

int main(int argc, char const *argv[])
{
	testCStrConstructor();
	TEST_FAIL_RETURN
}
