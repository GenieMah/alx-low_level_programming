#include "main.h"

/**
 * @s: pointer to string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
