#include "main.h"

/**
 * _strstr - finds first appearance of needle in haystack
 *
 * @haystack: string
 * @needle: pointer
 *
 * Return: NULL if str not found, else a pointer to the
 * beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i]) {
				break;
			}
		}

		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
