#include "main.h"
#include "funcdef.h"

/**
 * argstostr - concatenates all the args to main
 * @ac: argc
 * @av: argv
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	unsigned int i, l = 0, size, argc;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	argc = (int) ac;
	size = argc + 1;
	for (i = 0; i < argc; ++i)
		size += _strlen(av[i]);

	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);

	for (i = 0; i < argc; ++i)
	{
		int j;
		int len = _strlen(av[i]);

		for (j = 0; j < len; ++j)
		{
			*(str + l) = av[i][j];
			l++;
		}

		*(str + l) = '\n';
		l++;
	}

	*(str + l) = '\0';
	return (str);
}
