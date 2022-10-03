#include "main.h"

/**
 * _print_rev_recursion - function prints str in reverse
 *
 * @s: pointer to string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
