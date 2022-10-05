#include "main.h"

/**
 * _strncpy - copies n characters of src string to dest buffer
 * @dest: destination buffer
 * @src: source string
 * @n: the no of char to print from src
 *
 * Return: pointer to dest buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; ++i)
		dest[i] = src[i];

	for (; i < n; ++i)
		dest[i] = '\0';

	return (dest);
}
