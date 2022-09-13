#include "main.h"

/**
 * print_alphabet -  a function that prints the alphabet, starting with 'a'
 *
 * Return: alphabet
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
