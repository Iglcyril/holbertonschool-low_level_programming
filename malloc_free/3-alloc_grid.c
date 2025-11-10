#include <stdlib.h>
/**
 * *alloc_grid - return pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: success or NULL
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(x[j]);
			free(x);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			x[i][j] = 0;
	}
	return (x);
}
