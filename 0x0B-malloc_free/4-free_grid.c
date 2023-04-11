#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: double pointer
 * @height: height parameter
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int z;

	z = 0;
	while (z < height)
	{
		free(grid[z]);
		z++;
	}
	free(grid);
}
