ssize_t _getline(char **line, int fd)
{
	char *tmp;
	int i, j, n1, l, len;
	static char buffer[BUF_SIZE];
	static int n;
	ssize_t nread, read_status;

	*line = NULL;
	while (1)
	{
		n1 = n;
		while (buffer[n])
		{
			if (buffer[n] == '\n' || n == BUF_SIZE - 1)
			{
				if (*line == NULL)
					l = 0;
				else
					l = strlen(*line);

				len = l + (n - n1 + 2);
				tmp = realloc(*line, sizeof(char) * len);
				if (tmp == NULL)
				{
					free(*line);
					return (-1);
				}

				for (i = l, j = n1; j <= n; ++i, ++j)
					tmp[i] = buffer[j];

				tmp[i] = '\0';
				*line = tmp;
				if (buffer[n] == '\n')
				{
					if (n == BUF_SIZE - 1)
					{
						n = 0;
						buffer[0] = '\0';
					}
					else
						n++;

					return (len - 1);
				}

				if (n == BUF_SIZE - 1)
					break;
			}
			n++;
		}
		nread = read(fd, buffer, BUF_SIZE);
		if (nread < 1)
		{
			n = 0;
			return (-1);
		}

		n = 0;
	}
}
