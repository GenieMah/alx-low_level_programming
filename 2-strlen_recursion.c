#include "main.h"

/**
 * @s: pointer to string
 *
 * REturn: length of str
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') {
		return (0); }
	else {
		return (1 + _strlen_recursion(s + 1)); }
}
