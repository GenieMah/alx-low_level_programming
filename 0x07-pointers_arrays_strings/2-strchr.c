#include "main.h"

/**
 * @s: pointer to character
 * @c: constant
 * 
 * Return \0
 */

char *_strchr(char *s, char c)
{
	int n;
		for (n = 0; s[n] >= '\0'; n++) {
			if (s[n] == c) {
	return (s + n); }
	}
	return ('\0');
}
