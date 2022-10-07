#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates array of char
 *
 * @size: initial parameter
 * @c: secondary parameter (char)
 *
 * Returng: NULL if size == 0, else return *n
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n;

	if (size == 0)
		return (NULL);

	n = malloc(size * sizeof(char));
	if (n == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		n[i] = c;
	return (n);
}
