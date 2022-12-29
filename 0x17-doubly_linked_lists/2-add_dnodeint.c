#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: the data of the node
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = create_node();
	if (node == NULL)
		return NULL;

	node->n = n;
	(*head)->prev = node;
	node->next = *head;
	node->prev = NULL;
	*head = node;

	return (node);
}
