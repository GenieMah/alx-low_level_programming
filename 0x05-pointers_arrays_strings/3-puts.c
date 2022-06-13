#include "main.h"

/**
 * _puts - prints str
 * 
 */

void _puts(char *str)
{
	int a = 0;

	while (*str[a])
	{
		_puts(str[a]);
		a++; }
	_puts("\n");

}
