#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}

	return (len);
}
