#include "lists.h"

/**
 * listint_len - computes and returns
 * the number of elements in a listint_t list
 * @h: head of list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h)
	{
		for (; h != NULL; ++i)
			h = h->next;
	}

	return (i);
}
