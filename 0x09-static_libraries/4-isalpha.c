#include "main.h"

/**
 * _isalpha - function prints 1 if conditions are met
 *
 * @c: first parameter
 *
 * Return: 1 - if c is an alphabet
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
