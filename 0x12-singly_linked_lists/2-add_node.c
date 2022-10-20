#include "func_def.h"

/**
 * add_node - adds a node to a list
 * @head: the head of the list
 * @str: data of the node
 *
 * Return: pointer to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head != NULL && str != NULL)
	{
		unsigned int len;
		list_t *new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		len = _strlen(str) + 1;
		new->str = malloc(sizeof(char) * len);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}

		new->str = _strcpy(new->str, str);
		new->len = len - 1;

		new->next = (*head);

		return (new);
	}

	return (NULL);
}
