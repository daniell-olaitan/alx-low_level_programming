#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: head of list
 * @n: element to be added
 *
 * Return: pointer to the address to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head != NULL)
	{
		listint_t *new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}

	return (NULL);
}
