#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s - pointer to string
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c])
		c++;
	while (c--) {
		_putchar(s[c]); }

	_putchar('\n')
}
