#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to func to be used to compare values
 *
 * Return: the first index of the array where the int is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; ++i)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
