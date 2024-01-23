#include "search_algos.h"

int binary_r(int *arr, size_t low, size_t high, int value);
int binary_h(int *arr, size_t low, size_t high, int value);

/**
 * advanced_binary - searches for the first value occurence using binary search
 * algorithm
 * @array: int array
 * @size: array size
 * @value: value to search for
 *
 * Return: the index of the first occurence of the value in the array
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_r(array, 0, size - 1, value));
}

/**
 * binary_r - solve binary_search recursively
 * @arr:...
 * @low:...
 * @high:...
 * @value:...
 *
 * Return:...
 */
int binary_r(int *arr, size_t low, size_t high, int value)
{
	size_t k, mid;

	if (high < low)
		return (-1);

	printf("Searching in array: %d", arr[low]);
	for (k = low + 1; k <= high; ++k)
		printf(", %d", arr[k]);

	printf("\n");
	mid = (high + low) / 2;
	if (value == arr[mid])
	{
		if (high - low == 1 || binary_h(arr, low, mid - 1, value) == -1)
			return (mid);

		return (binary_r(arr, low, mid, value));
	}
	else if (value < arr[mid])
		return (binary_r(arr, low, mid - 1, value));
	return (binary_r(arr, mid + 1, high, value));
}

/**
 * binary_h - helper funtion for binary_search
 * @arr:...
 * @low:...
 * @high:...
 * @value:...
 *
 * Return:...
 */
int binary_h(int *arr, size_t low, size_t high, int value)
{
	size_t mid;

	if (high < low)
		return (-1);

	mid = (high + low) / 2;
	if (value == arr[mid])
		return (mid);
	else if (value < arr[mid])
		return (binary_h(arr, low, mid - 1, value));
	return (binary_h(arr, mid + 1, high, value));
}
