#include "main.h"

/**
 * _islower: function prints letters in lower case
 *
 * @c: first parameter
 *
 * Return 1 if @c is lower case
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
