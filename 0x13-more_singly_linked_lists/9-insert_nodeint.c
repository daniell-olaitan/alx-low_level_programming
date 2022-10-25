#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a givrn index
 * @head: pointer to the head of the list
 * @idx: the given index
 * @n: the data of the new node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (*head != NULL)
	{
		unsigned int i;
		listint_t *new;
		listint_t *temp = *head;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (new);

		new->n = n;
		if (idx == 0)
		{
			*head = new;
			(*head)->next = temp;

			return (new);
		}

		for (i = 1; temp != NULL; ++i)
		{
			if (i == idx)
			{
				new->next = temp->next;
				temp->next = new;

				return (new);
			}

			temp = temp->next;
		}
	}

	return (NULL);
}
