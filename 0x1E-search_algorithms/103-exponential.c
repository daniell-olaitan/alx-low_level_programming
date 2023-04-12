#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of ints
 * using the exponential search algorithm
 * @array: pointer to the first element of the array
 * @size: array size
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, k, low, mid, high;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = i >= size ? size - 1 : i;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (high >= low)
	{
		printf("Searching in array: %d", array[low]);
		for (k = low + 1; k <= high; ++k)
			printf(", %d", array[k]);

		printf("\n");
		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
