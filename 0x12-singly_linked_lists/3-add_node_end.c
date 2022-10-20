#include "func_def.c"

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

		len = _strlen(str) + 1;
		new->str = malloc(sizeof(char) * len);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}

		new->str = strdup(str);
		new->len = len - 1;
		new-> NULL;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		temp = *head;
		while (temp)
		{
			if (temp->next == NULL)
				temp->next = new;

			temp = temp->next;
		}

		return (new);
	}

	return (NULL);
}
