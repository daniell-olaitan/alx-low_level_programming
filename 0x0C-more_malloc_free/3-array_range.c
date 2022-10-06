#include "main.h"

/**
 * array_range - creates an array of integer
 * @min: the first element of the array
 * @max: the last element of the array
 *
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int i, num;
	int *int_array;

	if (min > max)
	{
		return (NULL);
	}

	int_array = malloc(sizeof *int * (max - min + 1));
	if (!int_array)
		return (NULL);

	else
	{
		for (i = 0, num = min; num <= max; ++i, ++num)
		{
			*(int_array + i) = num;
		}
	}

	return (int_array);
}
