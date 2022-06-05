#include <stdio.h>

/**
 * main - entry point
 *
(* Description : script that prints A-Z in lowercase
 * using the putchar function)?
 *
 * Return: 0 - Success
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; --a)
		putchar(a);

	putchar('\n');

	return (0);
}
