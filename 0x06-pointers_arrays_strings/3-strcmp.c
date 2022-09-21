#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if equal, -ve if 1st is less and +ve otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int l1 = _strlen(s1);
	int l2 = _strlen(s2);

	int l = l1 < l2 ? l1 : l2;
	for (i = 0; i < l; ++i)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}

	if (l1 == l2)
		return (0);
	else if (l1 < l2)
		return (-1);
	else
		return (1);
}

/**
 * _strlen - strlen
 * @s: str
 *
 * Return: str len
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
