#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet: function prints the alphabet
 *
 * Return: 0 - success
 */

void print_alphabet(void)
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
