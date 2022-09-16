#include "main.h"

/**
 * print_diagonal - function prints out diagonal line on the console using '\'
 *
 * @n: initial parameter
 *
 * No return
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int a, b;

		for (a = 0; a < n; a++)
		{

			for (b = 0; b < n; b++)
			{
				if (b == a)
					_putchar('\\');

				else if (b < a)
					_putchar(' ');
			}

		_putchar('\n');
		}
	}
}
