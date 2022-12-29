#include "lists.h"

/**
 * _create_node - creates a dlistint_t node
 *
 * Return: pointer to the newly created node, or NULL if unsuccessful
 */
dlistint_t *_create_node(void)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->next = malloc(sizeof(dlistint_t));
	if (node->next == NULL)
	{
		free(node);
		return (NULL);
	}

	node->prev = malloc(sizeof(dlistint_t));
	if (node->prev == NULL)
	{
		free(node->next);
		free(node);
		return (NULL);
	}

	return (node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index in the zero-indexd list where the new node should be added
 * @n: the data of the new node
 *
 * Return: pointer to the new node, or NULL if unsuccessful
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node, *current = *h;

	node = _create_node();
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			node->prev = NULL;
			node->next = NULL;
			*h = node;

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
				*h = node;

			return (node);
		}

		current = current->next;
	}

	return (NULL);
}
