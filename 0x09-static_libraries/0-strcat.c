#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the destination string
 */
char *_strcat(char dest[], char *src)
{
	int i, j, len;

	len = _strlen(dest);

	for (i = len, j = 0; src[j]; ++i, ++j)
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - computes the length of a given string
 * @s: the given string
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
