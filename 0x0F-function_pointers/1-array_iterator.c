#include "function_pointers.h"

/**
 * array_iterator - executes a func parameter on array elements
 * @array: the given array
 * @size: the array size
 * @action: pointer to func
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i< size; ++i)
		{
			action(array[i]);
		}
	}
}
