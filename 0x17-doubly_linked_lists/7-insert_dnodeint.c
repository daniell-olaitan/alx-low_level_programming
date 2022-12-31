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
 * insert_node - inserts a given node at the given index
 * @h: pointer to the head of the list
 * @c: pointer to the current node in the list
 * @p: pointer to the previous node in the list
 * @n: pointer the node to be inserted
 * @i: index
 *
 * Return: pointer to the inserted node
 */
dlistint_t *insert_node(dlistint_t **h, dlistint_t *c, dlistint_t *p, dlistint_t *n, unsigned int i)
{
	n->next = c;
	if (c == NULL)
	{
		n->prev = p;
		p->next = n;
	}
	else
	{
		n->prev = c->prev;
		if (i == 0)
			*h = n;
		else
			c->prev->next = n;

		c->prev = n;
	}

	return (n);
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
	unsigned int i;
	dlistint_t *node, *current = *h, *prev = NULL;

	node = _create_node();
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (h != NULL)
	{
		if (idx == 0 && *h == NULL)
		{
			*h = node;
			node->prev = NULL;
			node->next = NULL;
			return (node);
		}
		for (i = 0; current != NULL || idx == i; ++i)
		{
			if (idx == i)
				return (insert_node(h, current, prev, node, i));

			prev = current;
			if (current != NULL)
				current = current->next;
		}
	}
	return (NULL);
}
