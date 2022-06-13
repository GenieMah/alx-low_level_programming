#include "main.h"

/**
 * _puts - prints str
 * 
 */

void _puts(char *str)
{
	int a = 0;

	while (*str > '\0')
	{
		_putchar(*str);
		a++;
       		str++; }
	_putchar("\n");

}
