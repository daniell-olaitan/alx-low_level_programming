#include "main.h"

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of allocated space for ptr
 * @new_size: the new size of the new memory block
 *
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);

		return (new_ptr);
	}

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	else
	{
		for (i = 0; i < old_size && i < new_size; ++i)
		{
			*(new_ptr + i) = ((char *)ptr)[i];
		}

		free(ptr);
		return (new_ptr);
	}
}
