#include "main.h"

/**
 * clear_bit - clears the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (n == NULL || index >= sizeof(unsigned long int) * 8))
		return (-1);

	bitmask = 1 << index;
	bitmask = ~bitmask;
	*n = *n & bitmask;

	return (1);
}
