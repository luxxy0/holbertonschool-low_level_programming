#include "main.h"
/**
 * alloc_grid - devuelve un puntero a una array bidimensional de n�m� entero
 * @width: array
 * @height: array
 * Return: de puntero a una array bidimensional de nú entero
 */
int **alloc_grid(int width, int height)
{

	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (!grid)
	{
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (!grid[i])
		{
			while (i > 0)
			{
				free(grid[--i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
