#include "funcdef.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements of the array
 * @size: size of each member
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);
	if (!mem)
	{
		free(mem);
		return (NULL);
	}

	else
	{
		return (_memset(mem, 0, nmemb * size);
	}
}
