#include "main.h"
#include <stdio.h>

/**
 * print_array - fucntion prints elements of an array
 *
 * @a: initial parameter (pointer to an integer)
 * @n: seecondary parameter
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
