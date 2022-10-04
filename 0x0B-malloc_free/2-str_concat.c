#include "main.h"
#include "funcdef.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size;
	char *str;

	size = _strlen(s1) + _strlen(s2) + 1;
	str = malloc(sizeof(char) * size);

	if (str)
	{
		if (s1)
		{
			for (; s1[i]; ++i)
			{
				*(str + i) = *(s1 + i);
			}
		}

		if (s2)
		{
			for (; s2[j]; ++j, ++i)
			{
				*(str + i) = *(s2 + j);
			}
		}

		*(str + i) = '\0';
	}

	return (str);
}
