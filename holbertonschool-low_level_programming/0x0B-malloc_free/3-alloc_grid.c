#include "holberton.h"

/**
 * alloc_grid - creates 2D array
 * @width: width of grid
 * @height: hight of grid
 * Return: pointer to array, NULL if fails
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	w = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (w < height)
	{
		grid[w] = malloc(width * sizeof(**grid));
		if (grid[w] == NULL)
		{
			w--;
			while (w >= 0)
			{
				free(grid[w]);
				w--;
			}
			free(grid);
			return (NULL);
		}
		h = 0;
		while (h < width)
		{
			grid[w][h] = 0;
			h++;
		}
		w++;
		}
		w = 0;
		return (grid);
}
