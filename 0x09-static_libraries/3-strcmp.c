#include "main.h"

/**
 * _strcmp - function compares two strings
 *
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: 0 if 's1' is equal to, 1 if 's1' is greater than
 * and -1 if 's1' if less than 's2'
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
		return (-1);
	else if (s1 < s2)
		return (1);
	else
		return (0);
}
