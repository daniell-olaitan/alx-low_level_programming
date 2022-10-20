#include "func_def.h"

/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to head of list
 * @str: data of node
 *
 * Return: pointer to added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;

	if (head != NULL && str != NULL)
	{
		list_t *new = malloc(sizeof(list_t));
		list_t *temp;

		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen(str);;
		new->next =  NULL;

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
