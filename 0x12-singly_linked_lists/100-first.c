#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Print executed b4 the main function
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
