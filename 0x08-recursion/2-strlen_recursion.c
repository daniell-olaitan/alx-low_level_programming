#include "main.h"

/**
 * _strlen_recursion - computes the lenght of a string
 * @s: the given str
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));

	return (0);
}