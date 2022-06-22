#include "main.h"

/**
 * @s: pointer to string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
		return; }
	_putchar(*s);
	_putchar_recursion(s + 1);
}
