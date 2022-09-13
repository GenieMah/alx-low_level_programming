#include "main.h"

/**
 * _islower: function prints the 1 if conditions are met
 *
 * Return 1 if 'c' is lower case
 * Return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
