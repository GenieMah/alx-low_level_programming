#include "main.h"

/**
 * is_prime_number - function detects if n is a prime number
 *
 * @n: initial parameter
 *
 * Return: 1 if n == prime number, else 0
 */

int is_prime_number(int n)
{
	while (n > 0)
	{
		if (n / 1 == n && n / n == 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
