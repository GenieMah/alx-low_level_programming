#include "main.h"

/**
 * times_table - a function that prints out the 9 times table
 *
 * Return: 0 - success
 */


void times_table(void)
{
	int i, n, t;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (n = 1; n <= 9; n++)
		{
		t = 1 * n;
			if ((t / 10) > 0)
			{
				_putchar((t/10) + '0');
			}
			else
			{
				_putchar(' ');
			}

		_putchar((t % 10) + '0');

			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
}}
