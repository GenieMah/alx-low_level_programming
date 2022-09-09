#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 - Success
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
		putchar('\n');

		return (0);
}
