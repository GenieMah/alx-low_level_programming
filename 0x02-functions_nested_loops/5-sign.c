#include "main.h"

/**
 *
(* Description: function prints the sign and return value 
 * if conditions are met)?
 * 
 */

int print_sign(int n)
{
	if (n > 0)
	{_putchar('+');
		return (1);}

	else if (n < 0)
	{_putchar('-');
		return (-1);}

	else
	{_putchar(0);
		return (0);}
}
