#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
(* Description: assign number to n every time its executed
 * print string "Lst digit is n is %i 
 * and is greater than 5" if greater than 5, "0" if 0,
 * or "less and not 0" if less than 6 or not 0.
 *
 * Return 0 - (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of n is %i\n", n);
	else if (n = 0)
		printf(Last digit of n is %i\n)
	return (0);
}
