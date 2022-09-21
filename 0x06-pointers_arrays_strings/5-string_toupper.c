#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @str: the given string
 *
 * Return: the updated string
 */
char *string_toupper(char *str)
{
	int i = 0;
	int adder = 'A' - 'a';

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += adder;

		i++;
	}

	return (str);
}
