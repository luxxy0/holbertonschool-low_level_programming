#include "main.h"
/**
 * free_grid - memoria libre
 * @grid: funcion anterior
 * @height: altura
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
