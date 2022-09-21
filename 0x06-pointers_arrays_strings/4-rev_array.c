#include "main.h"

/**
 * reverse_array - reverse a given int array
 * @a: the array to be reversed
 * @n: the number of elements
 *
 */
void reverse_array(int a[], int n)
{
	int i;
	int j = n - 1;
	int l = n / 2;
	int temp;

	for (i = 0; i < l; ++i)
	{
		temp = a[j];
		a[j] = a[i];
		s[i] = temp;
		j--;
	}
}

/**
 * _strlen - computes and returns the length of a given string
 *@s: the given string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
	{
	}

	return (i);
}
