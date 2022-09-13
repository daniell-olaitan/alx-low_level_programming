#include <stdio.h>

/**
 * print_to_98 - prints numbers from a given number to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; ++i)
	{
		printf("%d", i);
		if (i < 98)
			printf(", ");
	}
}
