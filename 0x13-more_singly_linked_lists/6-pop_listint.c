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
		listint_t *temp;
		int data = (*head)->n;

		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (data);
	}

	return (0);
}
