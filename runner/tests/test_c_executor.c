#include "test_failures.h"
#include "c_executor.h"

void test_c_executor_compile_run(void)
{
	static const char* c_program = ("#include<stdio.h> \n\n int main(int argc, const char * const *argv)"
	                               "{ puts(\"foo\"); }\n");
	TEST_FAIL_CHECK(c_executor_compile_run(c_program));
}


int main(int argc, char const *argv[])
{
	test_c_executor_compile_run();
	TEST_FAIL_RETURN
}
