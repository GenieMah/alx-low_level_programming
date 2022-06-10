#include "main.h"

/**
 *
(* Description: function prints out character b
 * amount of times)?
 *
 */

void print_line(int n)
{
	int a;
	if (n <= 0)
	{
	_putchar('\n'); }
	else
	{
		for (a = 1; a <= n; a++)
		_putchar('_'); }
}
