#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet_x10: function prints the alphabet
 *
 * Return: 0 - success
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char a = 'a';

	while (times < 11)
	{
		times = 'a';
		while (a <= 'z')
	{
		_putchar(a);
		a++; }
	 _putchar('\n'); }

	++times;
}
