#include "main.h"

/**
 *
 * Description: function prints out numbers
 *
 */

void print_numbers(void)
{
	char a = 0;
		while (a <= 9)
		{
		_putchar('0' + a);
			a++;}
	_putchar('\n');
}
