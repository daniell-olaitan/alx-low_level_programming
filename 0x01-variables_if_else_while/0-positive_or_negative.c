#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 *Description: prints random whole number and its sign
 *
 *Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%i is negative", n);
	else if (n > 0)
		printf("%i is positive", n);
	else
		printf("%i is zero", n);

	printf("\n");
	return (0);
}
