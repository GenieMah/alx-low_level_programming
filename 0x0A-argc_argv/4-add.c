#include <stdio.h>

int main(int argc, int* argv[])
{
	int i, j;
	int sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{	if (argv[i][j] < '\0' || argv [i][j] > 9)
			{
				printf("Error\n");
				return (1); }
		sum += arg[i]; }
	printf("%d\n", sum);
	return (0);
}
