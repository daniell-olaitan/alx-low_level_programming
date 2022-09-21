#include

/**
 * cap_string - capitalizes a given string
 * @str: the given string
 *
 * Return: the pointer to the updated string
 */
char *cap_string(char *str)
{
	int i = 0;
	char separator[] = " \t\n,;.!?\"(){}";
	int adder = 'A' - 'a';

	while (str[i])
	{
		if (!item_in(separator, str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] += adder;
		}
		i++;
	}
}

/**
 * item_in - checks if a char is in a given str
 * @str: the given str
 * @c: the given char
 *
 * Return: 1 if true, 0 otherwise
 */
int item_in(char *str, char c)
{
	int i;

	for (i = 0; str[i]; ++i)
	{
		if (str[i] == c)
			return (1);
	}

	return (0);
}
