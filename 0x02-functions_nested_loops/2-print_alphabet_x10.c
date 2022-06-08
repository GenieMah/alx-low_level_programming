#include "main.h"

/**
 * main - entry point
 *
 * Description: function prints the alphabet 10 times
 *
 * Return: 0 - success
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char a = 'a';

	while (times < 10)
	{
		times = 'a';
		while (a <= 'z')
	{
		_putchar(a);
		a++; }
	 _putchar('\n'); }

	++times;
}
