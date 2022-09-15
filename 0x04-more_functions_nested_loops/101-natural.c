#include <stdio.h>

/**
 * main - computes the sum of multiples of 5 or 3 to 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int rem;
	int sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		rem = i % 3;
		if (rem == 0)
		{
			sum += i;
			continue;
		}
		else
		{
			rem = i % 5;
			if (rem == 0)
				sum += i;
		}
	}

	printf("%d\n", sum);
	return (0);
}
