#include "main.h"

/**
 * _strncat - function concatenates two strings
 *
 * @dest: first parameter (destination string)
 * @src: second parameter (source string)
 * @n: third parameter
 *
 * Return: char(dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < i && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];

		dest[len] = '\0';
	return (dest);
	}
}
