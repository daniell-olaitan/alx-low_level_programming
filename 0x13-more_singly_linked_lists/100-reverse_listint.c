#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node, *next_node;

	if (head != NULL && *head != NULL)
	{
		previous_node = NULL;
		while ((*head)->next != NULL)
		{
			next_node = (*head)->next;
			(*head)->next = previous_node;
			previous_node = *head;
			*head = next_node;
		}

		(*head)->next = previous_node;

		return (*head);
	}

	return (NULL);
}
