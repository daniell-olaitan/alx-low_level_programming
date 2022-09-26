#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the given string
 * @c: the char to be located
 *
 * Return: pointer to the first occurrence to the char
 */
char *_strchr(char *s, char c)
{
	unsigned int i,  = 0;

	for (i = 0; *s; ++i)
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
