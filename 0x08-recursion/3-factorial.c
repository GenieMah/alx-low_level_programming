#include "main.h"

/**
 * factorial - function prints out the factorial of n
 *
 * @n: int block
 *
 * Return: -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
