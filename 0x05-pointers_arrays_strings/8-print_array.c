#include "main.h"
#include <stdio.h>

/**
 * print_array - fucntion frints elements of an array
 *
 */

void print_array(int *a, int n)
{
	int i = 0;
	 for (i < n; i++;)
	 {
	 	printf("%d", *(a + 1));
	 if (i != (n - 1))
	 	printf(", "); }
	 printf("\n");
}
