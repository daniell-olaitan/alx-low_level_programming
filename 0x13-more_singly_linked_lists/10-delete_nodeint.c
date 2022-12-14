#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node from a listint_t list
 * @head: pointer to the head of the list.
 * @index: the index of the node to be deleted
 *
 * Return: 1 if successful, 0 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *next_node;

	if (head != NULL)
	{
		unsigned int i;

		if (temp == NULL)
			return (-1);

		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);

			return (1);
		}

		for (i = 1; temp != NULL; ++i)
		{
			if (i == index)
			{
				next_node = temp->next;
				temp->next = next_node->next;
				free(next_node);

				return (1);
			}

			temp = temp->next;
		}
	}

	return (-1);
}
