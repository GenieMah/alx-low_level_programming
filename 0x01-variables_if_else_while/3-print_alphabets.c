#include <stdio.h>

/**
 * main - entry point
 *
(* Description - script that prints a-z in lowercase
 * then uppercase)?
 *
 * Return: 0 - Success
 */

int main(void)
{
	char c;
	char a;
	{
	for (c = 'a'; c <= 'z'; ++c)
	putchar(c); }
	{
	for (a = 'A'; a <= 'Z'; ++a)
	putchar(a); }

	putchar('\n');

		return (0);
}
