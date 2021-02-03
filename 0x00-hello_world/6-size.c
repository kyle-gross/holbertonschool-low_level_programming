#include <stdio.h>
/**
 * main - uses printf() to print strings
 *
 * Prints 5 strings on 5 lines using sizeof() function to
 * display variable's sizes in bytes
 * Return: 0
 */
int main(void)
{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);

}
