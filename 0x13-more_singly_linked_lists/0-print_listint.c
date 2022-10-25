#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h)
	{
		for (; h != NULL; ++i)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}

	return (i);
}
