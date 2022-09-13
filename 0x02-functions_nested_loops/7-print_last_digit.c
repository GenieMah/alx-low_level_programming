#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number
 *
 * @n: initial parameter
 *
 * Return: value of the last digit (last)
 *
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
