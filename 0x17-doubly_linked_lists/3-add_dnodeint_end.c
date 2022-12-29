#include "create_node.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: data of the new node
 *
 * Return: pointer to the new node or NULL if unsuccessful
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current = *head;

	node = create_node();
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	while (1)
	{
		if (current->next == NULL)
		{
			current->next = node;
			node->prev = current;

			return (node);
		}

		current = current->next;
	}
}
