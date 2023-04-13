#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of int using the
 * jump search
 * @list: pointer to the head of the list
 * @size: size of array
 * @value: value to search for
 *
 * Return: pointer to the first occurence of the index where the value
 * is located if found, or NULL otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t m, b, a, p;
	listint_t *current, *prev;

	if (list == NULL)
		return (NULL);
	current = list;
	prev = current;
	m = sqrt(size);
	b = 0;
	p = 0;
	while (current != NULL)
	{
		for (a = 0; a < m && current->next != NULL; ++a)
		{
			b++;
			current = current->next;
		}

		printf("Value checked at index [%lu] = [%d]\n", b, current->n);
		if (current->n >= value || current->next == NULL)
			break;
		p = b;
		prev = current;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", p, b);
	for (; p <= b; ++p)
	{
		printf("Value checked at index [%lu] = [%d]\n", p, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
