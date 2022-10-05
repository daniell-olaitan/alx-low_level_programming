#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the given str
 * @accept: the substr
 *
 * Return: the no of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, len = 0;

	while (*accept)
	{
		for (i = 0; s[i] != ' '; ++i)
		{
			if (s[i] == *accept)
				len++;
		}

		accept++;
	}

	return (len);
}
