#include <stdio.h>

/**
 * 'main' : entry point
 *
(* Description : script that prints A-Z in lowercase
 * using the putchar function)?
 *
 * Return : 0 Success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar(\n);

	return (0);
}
