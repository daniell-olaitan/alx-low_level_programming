#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the result of the addition
 * @size_r: the size of the result
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1);
	int l2 = _strlen(n2);

	if (size_r <= l1 + 1 || size_r <= l2 + 1)
		return (0);
	r[size_r] = '\0';
	return (add_digits(n1 + l1 - 1, n2 + l2 - 1, r, --size_r));
}

/**
 * add_digits - add two number arrays
 * @n1: the first number array
 * @n2: the 2nd number array
 * @r: the result buffer
 * @n: the buffer length
 *
 * Return: pointer to result buffer
 */
char *add_digits(char *n1, char *n2, char *r, int n)
{
	int result, carry = 0;

	for (; *n1 && *n2; --n1, --n2, --n)
	{
		result = (*n1 - '0') + (*n2 - '0');
		result += carry;
		carry = result / 10;
		*(r + n) = (result % 10) + '0';
	}

	for (; *n1; --n1, --n)
	{
		result = (*n1 - '0') + carry;
		carry = result / 10;
		*(r + n) = (result % 10) + '0';
	}

	for (; *n2; --n2, --n)
	{
		result = (*n2 - '0') + carry;
		carry = result / 10;
		*(r + n) = (result % 10) + '0';
	}

	if (carry && n >= 0)
	{
		*(r + n) = carry + '0';
		return (r + n);
	}
	else if (carry && n < 0)
		return (0);
	return (r + n + 1);
}

/**
 * _strlen - computes strlen
 * @str: str
 *
 * Return: len of str
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; ++i)
	{
	}

	return (i);
}
