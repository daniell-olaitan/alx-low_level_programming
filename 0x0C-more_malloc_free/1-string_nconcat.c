#include "funcdef.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2 to be copied
 *
 * Return: pointer to a concatenated string or NULL if failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, l1, l2, mem_size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n < l2)
	{
		l2 = n;
	}

	mem_size = l1 + l2 + 1;
	str = malloc(sizeof(char) * mem_size);
	if (!str)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; *(s1 + i); ++i)
			*(str + i) = *(s1 + i);

		for (j = 0; j < l2; ++j, ++i)
			*(str + i) = *(s2 + j);
	}

	*(str + i) = '\0';
	return (str);
}
