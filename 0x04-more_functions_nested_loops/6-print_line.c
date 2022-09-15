#include "main.h"

/**
 * print_line - function prints out a line based in inputted value
 *
 * @n: initial parameter
 *
 * No return
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (a = 1; a <= n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
