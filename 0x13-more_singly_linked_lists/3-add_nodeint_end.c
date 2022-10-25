#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: the data of the node to be added
 *
 * Return: The address of the new node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (head != NULL)
	{
		listint_t *temp;
		listint_t *new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		temp = *head;
		while (temp)
		{
			if (temp->next == NULL)
			{
				temp->next = new;
				return (new);
			}
			else
				temp = temp->next;
		}
	}

	return (NULL);
}
