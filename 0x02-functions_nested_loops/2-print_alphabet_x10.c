#include "main.h"

/**
 * print_alphabet - function prints the alphabet
 *
 * Return: alphabet 10 times
 */

void print_alphabet(void)
{
	int i;
	char a = 'a';

        for (i = 0; i <= 10; i++)
	{
		while (a <= 'z')
        	{
                	_putchar(a);
                	a++;
			_putchar('\n');
        	}
	}
}
