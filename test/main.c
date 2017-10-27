// Simplistic example of a test framework.
#include <stdio.h>
#include <assert.h>

// Compiled only under debug release.
#ifndef NDEBUG

#define RUN_TEST(fnName)     \
	printf("%s\n", #fnName); \
	fnName()

// Stupid sample tests.
void testFoo() {
	assert(1 < 2);
}

void testBar() {
	assert(NULL == (void *)0);
}

int main(void) {
	RUN_TEST(testFoo);
	RUN_TEST(testBar);
	puts("\nOK");
}

#else

int main(void) {
	puts("Nothing to do.");
}

#endif
