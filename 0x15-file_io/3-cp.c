#include "main.h"
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * main - copies the content of a file to another file
 * @argc: the number of cmdl args
 * @argv: array of the cmdl args
 *
 * Return: 0 if successful, a positive int value describing an error otherwise
 */
int main(int argc, char *argv[])
{
	char *buff;
	mode_t permissions;
	ssize_t rd_cnt, wr_cnt;
	int fd_file_from, fd_file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	buff = create_buffer(argv[2]);
	fd_file_from = open(argv[1], O_RDONLY);
	fd_file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	rd_cnt = read(fd_file_from, buff, 1024);

	while (1)
	{
		if (fd_file_from == -1 || rd_cnt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr_cnt = write(fd_file_to, buff, rd_cnt);
		if (wr_cnt == -1 || fd_file_to == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd_cnt = read(fd_file_from, buff, 1024);
		fd_file_to = open(argv[2], O_WRONLY | O_APPEND);
		if (rd_cnt == 0)
			break;
	}

	free(buff);
	close_file(fd_file_from);
	close_file(fd_file_to);

	return (0);
}

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
