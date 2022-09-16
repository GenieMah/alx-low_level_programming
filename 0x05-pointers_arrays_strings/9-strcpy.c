#include "main.h"

/**
 * _strcpy - fuction copies the string
 *
 * @dest: initial parameter (where string will be copied to)
 * @src: secondary parameter (where string will be copied from)
 *
 * Return: dest string
 */

char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a]; }
	while (src[a] != '\0');
	return (dest);
}
