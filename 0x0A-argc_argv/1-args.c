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
	printf("%d\n", argc - 1);
	return (0);
}
