#include "main.h"

/**
 * _puts - prints a given string to the stdout
 * @str: the string to be printed
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; ++i)
		_putchar(str[i]);

	_putchar('\n');
}
