#include "main.h"

/**
 * _strcpy - copies a string from source to destination
 * @dest: the destination
 * @src: the source
 *
 * Return: the destination
 */
char *_strcpy(char dest[], char *src)
{
	int i;
	int len = _strlen(s);

	for (i = 0; src[i]; ++i)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
