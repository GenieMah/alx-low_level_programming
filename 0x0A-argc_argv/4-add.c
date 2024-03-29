#include <stdio.h>
#include <stdlib.h>

/**
 * main - program's starting point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 - Success; 1 - Error
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else if (argv[i][j] == '\0')
                        {
                            printf("0\n");
                        }
		sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
