#include <stdio.h>

/**
 *
 *
 *
 */

int main(int argc, int* argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
	return (1); }

	i = argv[1];
	j = argv[2];
	mul = i * j;

		printf("%d\n", mul);
		return (0);

}
