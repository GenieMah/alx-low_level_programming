#include "main.h"

/**
 * reverse_array - function prints out reversed array
 *
 * @a: first parameter
 * @n: second parameter (elements of an array)
 */

void reverse_array(int *a, int n);
{
	int j = 0;

	while (j < n)
	{
		if (j != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar('0' + a[j]);
		j--;
	}
}
