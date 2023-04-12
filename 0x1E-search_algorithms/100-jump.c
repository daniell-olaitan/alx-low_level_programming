#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of int using the
 * jump search
 * @array: int array
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index where the value is located if found, or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, m;

	if (array == NULL)
		return (-1);

	m = sqrt(size);
	for (b = 0; b < size; b += m)
	{
		if (array[b] >= value)
			break;

		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
	}

	a = b - m;
	printf("Value found between indexes [%lu] and [%lu]\n", b - m, b);
	for (; a <= b && a < size; ++a)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}

	return (-1);
}
