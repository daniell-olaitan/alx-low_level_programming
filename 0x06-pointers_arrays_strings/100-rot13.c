#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the given string
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *encode0 = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char *encode1 = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

	for (i = 0; str[i]; ++i)
	{
		for (j = 0; encode0[j]; ++j)
		{
			if (str[i] == encode0[j])
			{
				str[i] = encode1[j];
				break;
			}
		}
	}

	return (str);
}
