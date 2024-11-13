#include <stdlib.h>

/**
 * free_grid - freed grid of int
 * @grid: add of 2d grid
 * @height: of the grid
 * Return: nothing because void fnc
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
