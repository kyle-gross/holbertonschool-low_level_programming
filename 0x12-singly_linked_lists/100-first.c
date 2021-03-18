#include <stdio.h>
/**
 * premain - prints a string before main executes
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
