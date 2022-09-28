#include "main.h"

/**
 * _print_rev_recursion - print the string in reverse
 * @s: the given string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
