#include <stdio.h>

/**
 * first - function executes before main
 */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
