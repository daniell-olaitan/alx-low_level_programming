#include "search_algos.h"

/**
 * interpolation_search - searches a value in a sorted array of int using the
 * interpolation search algorithm
 * @array: sorted int array
 * @size: size of array
 * @value: value to find
 *
 * Return: first index where value is located, or -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	char str[] = "Value checked array";

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while (high >= low)
	{
		pos = (low + (((double)(high - low) /
			       (array[high] - array[low])) *
			      (value - array[low])));
		if (pos >= size)
		{
			printf("%s[%lu] is out of range\n", str, pos);
			break;
		}

		printf("%s[%lu] = [%d]\n", str, pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
