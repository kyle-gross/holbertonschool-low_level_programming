#include <unistd.h>
/**
 * main - uses write() function to print a string
 *
 * Return: 1
 */
int main(void)
{

	write(1, "and that peice of art is useful\" - Dora Korpar, 2015-10-19\n", 58);

	return (1);
}
