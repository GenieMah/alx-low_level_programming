#include <stdio.h>

/**
 * main - program's starting point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
