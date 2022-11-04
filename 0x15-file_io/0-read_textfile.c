#include "main.h"

/**
 * read_textfile - reads txtfile from disk and prints it to the stdout
 * @filename: filename of txtfile
 * @letters: number of chars to be read and printed
 *
 * Return: actual letters read and printed
 * 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int err, err1;
	ssize_t rd_cnt, wr_cnt;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd_cnt = read(fd, buffer, letters);
	wr_cnt = write(STDOUT_FILENO, buffer, rd_cnt);

	err = fd == -1 || rd_cnt == -1;
	err1 = wr_cnt == -1 || wr_cnt != rd_cnt;
	free(buffer);
	if (err || err1)
		return (0);

	close(fd);
	return (wr_cnt);
}
