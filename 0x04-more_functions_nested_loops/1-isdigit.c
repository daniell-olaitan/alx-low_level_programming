#include "main.h"

/**
 * _isdigit - checks if a given char is a digit
 * @c: the char being checked
 *
 * Return: 1 if true, otherwise 0
 */
int _isdigit(int c)
{
	char ch = c;

	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
