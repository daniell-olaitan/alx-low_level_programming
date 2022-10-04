#include "main.h"
#include "funcdef.h"

/**
 * alloc_grid - constructs a pointer to a 2-dimentional array of ints
 * @width: length of column
 * @height: length of row
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;
	int *row;
	int init = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	else
	{
		grid = malloc(sizeof(int) * width * height);
		if (!grid)
		{
			free(grid);
			return (NULL);
		}

		for (; i < height; ++i)
		{
			row = malloc(sizeof(int) * width);
			if (!row)
			{
				free(row);
				return (NULL);
			}

			for (j = 0; j < width; ++j)
			{
				*(row + j) = init;
			}

			*(grid + i) = row;
		}
	}

	return (grid);
}
