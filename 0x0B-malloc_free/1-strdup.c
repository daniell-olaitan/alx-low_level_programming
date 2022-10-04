#include "main.h"
#include "funcdef.h"

/**
 * _strdup - creates a memory space and cooies a string to the memory
 * @str: the string to be duplicated
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *str_dup;

	if (str == NULL)
	{
		return (str);
	}
	else
	{
		size = _strlen(str) + 1;
		str_dup = malloc(sizeof(char) * size);
		if (str_dup)
		{
			for (i = 0; i < size; ++i)
			{
				*(str_dup + i) = *(str + i);
			}

			*(str_dup + i) = '\0';
		}

		return (str_dup);
	}
}
