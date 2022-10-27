#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index
 *
 * Return: 1 if successful, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bitmask = 1 << index;
	*n = *n | bitmask;

	return (1);
}
