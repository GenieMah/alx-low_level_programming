# include <stdlib.h>

# include <time.h>
/* more headers go there */
# include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  main - Entry point
 *
 * Description - assign random number to variable n
 *
 * Return - 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes here */
	return (0);
}