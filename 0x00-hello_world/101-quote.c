#include <unistd.h>
/**
 * main - uses write() function to print a string
 *
 * Return: 1
 */
int main(void)
{

	write(2, "and that peice of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);

}
