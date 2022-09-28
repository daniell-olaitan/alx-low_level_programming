#include "main.h"

int palindrome(char *, int);
int _strlen(char *);

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: the given string
 *
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s, 0) - 1;

	if (len < 2)
		return (1);

	return (palindrome(s, len));
}

/**
 * palindrome - determines if a string is a palindrome
 * @str: the given string
 * @l: len of string
 *
 * Return: 1 if str is palindromw, 0 otherwise
 */
int palindrome(char *str, int l)
{
	if (l < 2)
		return (1);

	if (*s == *(s + l) && palindrome(s + 1, l - 1))
		return (1);

	return (0);
}

/**
 * _strlen - computes strlen
 * @str: given str
 * @l: strlen
 *
 * Return: len of str
 */
int _strlen(char *str, int l)
{
	if (!(*str))
		return (l);

	return (_strlen(str + 1, l + 1));
}
