#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns the pointer to duplication of
 * a string given as a parameter (dup)
 *
 * @str: initial parameter (string to be copied)
 *
 * Return: pointer to (dup)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, j;
		if (str == NULL)
			return (NULL);

		for (i = 0; str[i] != '\0'; i++)
		j++;

		dup = malloc(sizeof(char) * (i + 1));

		if (dup == NULL)
			return (NULL);

		for (j = 0; j <= i; j++)
				dup[j] = str[j];
		return (dup);
}
