#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory space to be filled
 * @b: the const byte to be used
 * @n: the number of bytes to be filled
 *
 * Return: pointer to the filled memory space
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		*(s + i) = b;

	return (s);
}
