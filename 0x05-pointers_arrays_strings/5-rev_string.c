#include "main.h"

/**
 * rev_string - reverse a given string
 * @s: the string to be reversed
 *
 */
void rev_string(char s[])
{
	int i;
	int len = _strlen(s);
	int j = len - 1;
	int l = len / 2;
	char temp;

	for (i = 0; i < l; ++i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j--;
	}

	s[len] = '\0';
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
