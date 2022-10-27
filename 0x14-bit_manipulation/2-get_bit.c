#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the given number
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int num;

	if (n == 0 || n == 1)
	{
		if (index == 0)
			return (n);

		return (-1);
	}

	for (i = 0; i < index; ++i)
	{
		n = n >> 1;
		if (n == 0)
			return (-1);
	}

	num = n >> 1;
	return (n - 2 * num);
}
