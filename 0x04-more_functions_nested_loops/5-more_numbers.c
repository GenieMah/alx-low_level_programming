#include "main.h"

/**
 * more_numbers - function prints a set of numbers 10 times onto the console
 *
 * No Return
 */

void more_numbers(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b <= 14; b++)
			_putchar(b);
	}
	_putchar(a);
	_putchar('\n');
}
