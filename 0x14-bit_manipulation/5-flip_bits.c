#include "main.h"

/**
 * flip_bits - returns the number of bits need to be flipped
 * to get from one number to another
 * @n: the destination number
 * @m: the source number
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r1, r2;
	unsigned long int temp, n1, m1;
	unsigned int number_of_flips = 0;

	if (m > n)
	{
		temp = m;
		m = n;
		n = temp;
	}

	while (n != 0)
	{
		n1 = n >> 1;
		m1 = m >> 1;
		r1 = n - (2 * n1);
		r2 = m - (2 * m1);

		if (r1 != r2)
			number_of_flips++;

		n = n1;
		m = m1;
	}

	return (number_of_flips);
}
