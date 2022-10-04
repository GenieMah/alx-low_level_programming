#include "main.h"

/**
 * _strncpy - function prints out modified string
 *
 * @dest: first parameter (destination string)
 * @src: second parameter (source string)
 * @n: third parameter
 *
 * Return: char(dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for(; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
