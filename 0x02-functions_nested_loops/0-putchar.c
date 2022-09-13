#include "main.h"

/**
 * main - entry point
 * Return: 0 if successful
 */
int main(void)
{
	char str[] = "_putchar";
	_puts(str);

	return (0);
}

/**
 * _puts -  prints the given string on stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	char *s = str;
	while (*s != '\0')
		_putchar(*(s++));
}
