#include <stdio.h>

/**
 * main - prints the first 50 fibonacci series
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long tmp = 2;
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long sum = 2;

	while (tmp <= 4000000)
	{
		tmp = n1 + n2;
		n1 = n2;
		n2 = tmp;
		if (tmp % 2 == 0)
			sum += tmp;
	}

	printf("\n");
	return (0);
}
