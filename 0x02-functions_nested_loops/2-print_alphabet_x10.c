#include "main.h"

/**
 * print_alphabet_x10 -  a function that prints the alphabet, starting with 'a'
 *
 * Return: alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
