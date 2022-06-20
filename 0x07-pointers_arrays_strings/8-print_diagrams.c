#include "main.h"
#include <stdio.h>

/**
 * @a: pointer to int
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, sum1 = 0; {
		sum += a[i];
		sum1 += a[size - i - 1];
		a += size; }
	printf("%i\n%i\n", sum, sum1);
}
