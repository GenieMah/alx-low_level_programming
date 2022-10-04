#include <stdio.h>

/**
 * main - program's starting point
 *
 * @argc: argument count
 * @__attribute__((unused)) argv: arguement vector
 *
 * Return: 0 - Success
 */

int main(int argc, char *__attribute__((unused)) argv[])
{
	int c;

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			printf("%d", c);
		}
	return (0);
}
