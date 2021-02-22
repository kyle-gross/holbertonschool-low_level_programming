#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: the board
 *
 * Return: void
 */
void print_chessboard(char(*a)[8])
{
	/* Variables */
	int i, ii;

	/* Loop for columns */
	for (i = 0; i < 8; i++)
	{
		/* Loop for rows */
		for (ii = 0; ii < 8; ii++)
		{
			_putchar(a[i][ii]);
		}
		_putchar('\n');
	}
}
