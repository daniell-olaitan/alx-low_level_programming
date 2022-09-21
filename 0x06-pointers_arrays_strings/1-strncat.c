#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes of the source to be concatenated
 *
 * Return: pointer to the destination string
 */
char *_strncat(char dest[], char *src, int n)
{
	int i, j, len;

	len = _strlen(dest);
	for (i = len, j = 0; j < n && src[j]; ++i, ++j)
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - strlen
 * @s: str
 *
 * Return: strlen
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
	{
	}

	return (i);
}
