#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to a string of 0's and 1's
 *
 * Return: the converted number or 0 if b not binary or be is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned long int i, l, len;

	if (!b)
		return (0);

	for (l = 0; b[l];)
		l++;

	len = l--;
	for (i = 0; i < len; ++i, --l)
	{
		if (b[l] == '1')
			number += (1 << i);

		else if (b[l] != '0')
			return (0);
	}

	return (number);
}
