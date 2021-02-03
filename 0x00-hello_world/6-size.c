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

	printf("Size of a char: ", sizeof(char), " byte(s)\n");
	printf("Size of an int: ", sizeof(int), " byte(s)\n");
	printf("Size of a long int: ", sizeof(long int), " byte(s)\n");
	printf("Size of a long long int: ", sizeof(long long int), " byte(s)\n");
	printf("Size of a float: ", sizeof(float), " byte(s)\n");

	return (0);

}
