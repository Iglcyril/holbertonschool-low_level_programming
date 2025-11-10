#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2D grid previously allocated by alloc_grid
 * @grid: 2D grid
 * @height: number
 * Return: success or NULL
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
