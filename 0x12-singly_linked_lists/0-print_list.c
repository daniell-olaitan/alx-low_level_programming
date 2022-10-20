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
		list_t *node;

		node = malloc(sizeof(list_t));
		if (node != NULL)
		{
			node = h;
			for (i = 0; node; ++i)
			{
				if (node->str)
					printf("[%u] %s\n", node->len, node->str);
				else
					printf("[0] (nil)\n");
				node = node->next;
			}

			free(node);
		}
	}

	return (i);
}
