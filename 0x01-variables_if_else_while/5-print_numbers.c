#include <stdio.h>

/**
 * main - entry point
 *Description: prints all single digit of base 10
 *Return: 0, if successful
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
		printf("%i", number++);

	printf("\n");

	return (0);
}
