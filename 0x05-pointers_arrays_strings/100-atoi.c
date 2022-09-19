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
	int sign = 1;
	int integer = 0;
	int num = 0;

	for (i = 0; s[i]; ++i)
	{
		if (s[i] == '-')
		{
			if (num)
				break;

			sign *= -1;
		}

		else if (s[i] >= '0' && s[i] <= '9')
		{
			integer = sign * integer * 10 + (s[i] - '0');
			num = 1;
		}

		else
		{
			if (num)
				break;
		}
	}
}
