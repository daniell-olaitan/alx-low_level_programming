#include "lists.h"

/**
 * pop_listint - deletes the head of a listint_t list and returns its data
 * @head: pointer to the head of the list
 *
 * Return: head's data
 */
int pop_listint(listint_t **head)
{
	if (*head != NULL)
	{
		listint_t *head_node = *head;
		listint_t *next_node;
		int data = head_node->n;

		next_node = head_node->next;
		head_node->next = next_node->next;
		head_node->n = next_node->n;
		free(next_node);

		return (data);
	}

	return (0);
}
