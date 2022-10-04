#include "main.h"
#include "funcdef.h"

/**
 * create_array - creates an array and initialize it with a given char
 * @size: the size of the array
 * @c: the char to inotialize the array
 *
 * Return: pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (str)
	{
		for (i = 0; i < size; ++i)
		{
			*(str + i) = c;
		}

		*(str + i) = '\0';
	}

	return (str);
}
