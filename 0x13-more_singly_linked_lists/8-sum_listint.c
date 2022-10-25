#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint list
 * @head: pointer to the head of the list
 *
 * Return: the calculated sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}

	return (sum);
}
