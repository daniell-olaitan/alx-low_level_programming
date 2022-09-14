#include <stdio.h>

/**
 * main - prints the first 50 fibonacci series
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long tmp;
	unsigned long n1 = 1;
	unsigned long n2 = 2;

	printf("1, 2, ");
	for (i = 0; i <= 96; ++i)
	{
		tmp = n1 + n2;
		n1 = n2;
		n2 = tmp;
		printf("%ld", tmp);
		if (i < 96)
			printf(", ");
	}

	printf("\n");
	return (0);
}
