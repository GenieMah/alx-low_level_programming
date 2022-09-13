#include "main.h"

/**
 * print_sign - function prints the sign if certain conditions are met
 *
 * @n: first parameter
 *
 * Return: 1, 0, -1 - if n is an higher, equal or lower than '0', respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
