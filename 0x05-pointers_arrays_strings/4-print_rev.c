#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * @s: the string to be printed in reverse
 *
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = _strlen(s) - 1; i >= 0; --i)
		_putchar(s[i]);

	_putchar('\n');
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
