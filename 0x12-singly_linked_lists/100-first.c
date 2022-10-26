#include <stdio.h>

/**
 *first_func - runs before main
 *
 */
void first_func(void)__attribute__((constructor));

void first_func(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!\n");
}
