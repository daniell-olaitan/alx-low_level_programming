#include "create_node.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index in the zero-indexd list where the new node should be added
 * @n: the data of the new node
 *
 * Return: pointer to the new node, or NULL if unsuccessful
 */
dlistint_t *insert_dnodeint_at_index(dlistint **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node, *current = *h;

	node = create_node();
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		if (idx == 0)
		{
			node->prev = NULL;
			node->next = NULL;
			*head = node;

			return (node);
		}
	}

	while (current != NULL)
	{
		if (idx == i)
		{
			node->next = current;
			node->prev = current->prev;
			current->prev = node;
			if (idx == 0)
				*head = node;

			return (node);
		}

		current = current->next;
	}

	return (NULL);
}
