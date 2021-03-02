#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid created by alloc_grid
 * @grid: the grid
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	(void)height;
	free(grid);
}
