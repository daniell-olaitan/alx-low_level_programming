#include <stdio.h>

/**
 * main - calculate largest prime factor
 * Return: 0 always
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i < n; ++i)
	{
		if (n % i == 0)
			n = n / i;

	}

	printf("%ld\n", i);
	return (0);
}
