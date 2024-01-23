#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * binary search algorithm
 * @array: array of int
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index of the array that has the value, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, mid, k;

	if (array == NULL)
		return (-1);

	while (j >= i)
	{
		printf("Searching in array: %d", array[i]);
		for (k = i + 1; k <= j; ++k)
			printf(", %d", array[k]);

		printf("\n");
		mid = (i + j) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			j = mid - 1;
		else
			i = mid + 1;
	}

	return (-1);
}
