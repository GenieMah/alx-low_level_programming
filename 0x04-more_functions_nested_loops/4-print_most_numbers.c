#include "main.h"

/**
 *
 * Description: function prints out numbers but 2 and 4
 *
 */

void print_numbers(void)
{
	int a;
		for (a = 0; a <= 10; a++)
	{
		if ((a == 2) || (a == 4))
		{
			continue; }
		_putchar('0' + a); }
	_putchar('\n');
}
