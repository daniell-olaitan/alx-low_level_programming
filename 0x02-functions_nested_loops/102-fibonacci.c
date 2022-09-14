#include <stdio.h>

/**
 * main - prints the first 50 fibonacci series
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int n1 = 1;
	int n2 = 2;

	printf("1, 2, ");
	for (i = 0; i <= 48; ++i)
	{
		tmp = n1 + n2;
		n1 = n2;
		n2 = tmp;
		printf("%d", tmp);
		if (i < 48)
			printf(", ");
	}

	printf("\n");
	return (0);
}