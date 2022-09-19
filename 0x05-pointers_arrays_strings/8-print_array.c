#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a number of elements of a array of int
 * @a: the array of integer
 * @n: the number of elements to be printed from the array
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
