#include "main.h"

/**
 * main - entry point
 *
 * islower: function prints the 1 if conditions arre met
 *
 * Return: 0 - success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	_putchar(1); }
	else
	{
	_putchar(0); }
}
