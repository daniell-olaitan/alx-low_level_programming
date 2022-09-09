#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of the program
 *Description: finds the last digit of a random no.
 *Return: 0, if successful
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %i is %i and is ", n, last_digit);
	if (last_digit > 5)
		printf("greater than 5");
	else if (last_digit == 0)
		printf("0");
	else if (last_digit < 6 && last_digit != 0)
		printf("less than 6 and not 0");

	printf("\n");
	return (0);
}
