#include "main.h"

/**
 * _isupper - function prints out whether the inputted value is upper case
 *
 * @c: initial parameter to be checked
 *
 * Return: 1 if c is uppercase otherwize return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
