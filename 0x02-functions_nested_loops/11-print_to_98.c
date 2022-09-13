#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function prints number to 98
 *
 * @n: initial parameter
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
			printf("%i", n);

		while (n < 98)
		{
			printf(", ");
		}
		
	}
	else if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%i", n);
			while (n > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");

}
