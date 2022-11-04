#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: file content
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t wr_cnt;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (*(text_content + len))
			len++;
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	wr_cnt = write(fd, text_content, len);
	if (fd == -1 || wr_cnt == -1)
		return (-1);

	close(fd);
	return (1);
}
