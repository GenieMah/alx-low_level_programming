#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, sum1 = 0; {
		sum += a[i];
		sum1 += a[size - i - 1];
		a += size; }
	printf("%d\n", sum);
	printf("%d\n", sum1);
}
