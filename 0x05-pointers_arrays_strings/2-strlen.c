#include "main.h"

/**
 * _strlen - prints out string length
 *
 */

int _strlen(char *s)
{
	int c = 0;
	while (*s != '\0')
	{
	
	c++;
	s++; }
	return (c);
}
