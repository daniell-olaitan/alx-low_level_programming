#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *to_be_freed = head;

	if (head != NULL)
	{
		head = head->next;
		while (1)
		{
			free(to_be_freed->next);
			free(to_be_freed->prev);
			free(to_be_freed);
			to_be_freed = head;
			if (head == NULL)
				break;

			head = head->next;
		}
	}
}
