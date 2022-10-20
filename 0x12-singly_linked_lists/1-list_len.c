#include "lists.h"

/**
 * list_len - computes number of elements in the lit
 * @h: the head of the list
 *
 * Return: number of nodes of the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h)
	{
		for (i = 0; h; ++i)
			h = h->next;
	}

	return (i);
}
