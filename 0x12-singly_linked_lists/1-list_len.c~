#include "lists.h"

/**
 * print_list - prints the content of a list
 * @h: the head of the list
 *
 * Return: number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h)
	{
		for (i = 0; h; ++i)
		{
			if (h->str)
				printf("[%u] %s\n", h->len, h->str);
			else
				printf("[0] (nil)\n");
			h = h->next;
		}
	}

	return (i);
}
