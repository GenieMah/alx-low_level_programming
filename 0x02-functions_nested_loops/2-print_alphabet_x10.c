#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet function prints the alphabet
 *
 * Return: 0 - success
 */

void print_alphabet(void)
{
	int i = 0
	char a = 'a';

	while (i < 10)
	{
		while (a <= 'z')
	{
		_putchar(a);
		a++; }
	 _putchar('\n'); }
	i++;
	
}
