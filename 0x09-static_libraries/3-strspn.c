#include "main.h"

/**
 * _strspn - find # of bytes in s from bytes of accept
 *
 * @s: pointer to character
 * @accept: bytes of the initial segment
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, c;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (c = 0; accept[c] != s[a]; c++)
		{
			if (accept[c] == '\0')
			return (a);
		}
	}
	return (a);
}
