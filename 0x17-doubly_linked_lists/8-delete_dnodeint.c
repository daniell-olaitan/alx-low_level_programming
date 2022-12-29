#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index of a list
 * @head: pointer to the head of the list
 * @index: the index to delete
 *
 * Return: 1 if successful, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *current = *head;

	while (current != NULL)
	{
		if (idx == index)
		{
			if (
