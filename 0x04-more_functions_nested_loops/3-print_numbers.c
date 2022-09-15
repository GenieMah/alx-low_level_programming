#include "main.h"

/**
 *
 * print_numbers - function prints numbers onto the console
 *
 * No Return
 */

void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
