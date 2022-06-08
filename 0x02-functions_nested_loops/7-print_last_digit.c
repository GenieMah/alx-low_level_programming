#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet function prints the alphabet
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
