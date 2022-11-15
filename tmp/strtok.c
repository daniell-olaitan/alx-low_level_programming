#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strtok(char *str, const char *delim)
{
	char *tmp;
	unsigned int j, c, len;
	static unsigned int i;
	static char *strptr;

	if (str)
	{
		i = 0;
		strptr = str;
	}

	if (str == NULL)
	{
		if (strptr == NULL)
			return (NULL);
	}

	j = i;
	for (; strptr[i]; ++i)
	{
		for (c = 0; delim[c]; ++c)
		{
			if (delim[c] == strptr[i])
				break;
		}

		if (delim[c] == strptr[i])
			break;
	}

	len = i - j;
	if (len == 0)
		return (NULL);

	tmp = malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);

	for (c = 0; j < i; ++j, ++c)
		tmp[c] = strptr[j];

	tmp[c] = '\0';
	if (strptr[i] == '\0')
	{
		i = 0;
		strptr = NULL;
	}
	else
		i++;

	return (tmp);
}

int main()
{
	unsigned int i;
	char *str = "*I.am a/programmer!";
	char *sstr;

	for (i = 0; ; ++i, str = NULL)
	{
		sstr = _strtok(str, " *./!");
		if (sstr == NULL)
			break;

		printf("%s\n", sstr);
	}

	return (0);
}
