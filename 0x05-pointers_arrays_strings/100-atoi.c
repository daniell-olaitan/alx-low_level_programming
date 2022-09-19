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
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (num == 1)
				integer = (sign * integer * 10) + sign *  (s[i] - '0');
			else
				integer = integer * 10 + sign * (s[i] - '0');

			num++;
		}

		else
		{
			if (num)
				break;
		}
	}

	return (integer);
}
