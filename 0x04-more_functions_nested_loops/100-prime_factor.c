#include <stdio.h>

/**
 * isprime - checks if a number is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if number is a prime number, 0 otherwise
 */
int isprime(unsigned long n)
{
	int i;

	if (n <= 1)
		return (0);

	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);

		i++;
	}

	return (1);
}

/**
 * main - prints the largest prime factor of a number
 * Return: Always 0
 */
int main(void)
{
	long long n = 612852475143LL;
	long div = 2L;

	while (1)
	{
		if (n % div == 0)
		{
			n = n / div;
			if (isprime(n))
				break;
		}
		else
		{
			while (1)
			{
				div++;
				if (isprime(div))
					break;
			}
		}
	}

	printf("%llu\n", n);
}
