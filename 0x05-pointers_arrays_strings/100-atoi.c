#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: the given string
 *
 * Return: the int converted to
 */
int _atoi(char *s)
{
	int i;
	int number_of_sign = 0;
	int integer = 0;

	for (i = 0; s[i]; ++i)
	{
		if (s[i] == '-')
			number_of_sign++;

		else if (s[i] >= '0' && s[i] <= '9')
			integer = integer * 10 + (s[i] - '0');
	}

	if (number_of_sign % 2 == 1)
		return (-integer);

	return (integer);
}
