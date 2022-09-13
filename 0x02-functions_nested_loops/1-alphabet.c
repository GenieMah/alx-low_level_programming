#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet() function: prints the alphabet
 *
 * Return: 0 - success
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
