#include <stdio.h>

/**
 * main - the entry point of the program
 *Description: prints the English alphabet in lower-case
 *Return: 0, if successful
 */
int main(void)
{
	int ascii_value;
	int ascii_n_line;

	ascii_value = 'a';
	ascii_n_line = '\n';

	while (ascii_value <= 'z')
	{
		if ((ascii_value == 'q') || (ascii_value == 'e'))
			continue;

		putchar(ascii_value++);
	}

	putchar(ascii_n_line);
	return (0);
}
