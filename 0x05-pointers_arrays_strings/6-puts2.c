#include "main.h"

/**
 * puts2 - function outputs the string twice
 *
 * @str: initial parameter to be assessed
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]); }
		i++; }
	_putchar('\n');
}
