#include "main.h"

/**
 * _strpbrk - finds first appearance of s in any bytes of accept
 *
 * @s: pointer to char
 * @accept: bytes
 *
 * Return: NULL if no matches are found, pointer to char of the first str
 * that matches char of second str
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			return (s);
		}
			s++;
	}
	return ('\0');
}
