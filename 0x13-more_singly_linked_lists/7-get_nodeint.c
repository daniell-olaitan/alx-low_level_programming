#include "lists.h"

/**
 * get_nodeint_at_index - gets and returns the nth node of a listint list
 * @head: pointer to the head of the list
 * @index: the index which node is to be fetched
 *
 * Return: the fetched node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head != NULL)
	{
		unsigned int i;
		listint_t *temp = head;

		for (i = 0; temp != NULL; ++i)
		{
			if (i == index)
				return (temp);

			temp = temp->next;
		}
	}

	return (NULL);
}
