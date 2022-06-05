#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
(* Description: assign number to n every time its executed
 * print the last number and whether it is > 5, < 6 or 0)?
 *
 * Return: 0 - Success
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);

	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);

	return (0);
}
