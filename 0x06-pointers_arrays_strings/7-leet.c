#include "main.h"

/**
 * leet - encodes a string in 1337
 * @str: the given string
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char *alphas = "aeotlAEOTL";
	char *code = "4307143071";

	for (i = 0; str[i]; ++i)
	{
		for (j = 0; alphas[j]; ++j)
		{
			if (str[i] == alphas[j])
			{
				str[i] = code[j];
			}
		}
	}
	return (str);
}
