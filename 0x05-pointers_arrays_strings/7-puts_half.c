#include "main.h"

/**
 * puts_half - prints half of a given string
 * @str: the given string
 *
 */
void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int start;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = len / 2 + 1;

	for (i = start; str[i]; ++i)
		_putchar(str[i]);

	_putchar('\n');
}
