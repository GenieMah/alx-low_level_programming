#include "main.h"

/**
 * _puts - prints the value of str
 *
 * @str: initial parameter to be assessed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
