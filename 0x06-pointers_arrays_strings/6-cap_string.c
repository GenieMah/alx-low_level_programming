#include "main.h"

/**
 * cap_string - function capitalises every letter of a string
 *
 * @s: initial parameter
 *
 * Return: (str)
 */

char *cap_string(char *str);
{
	int i;

	for(i = 0; i != '\0'; i++)
	{
		if (str[i] != 'a' < 'z' || str[i] != 'A' < 'Z')
			_putchar('0' + str[i])
		else
			_putchar('0' + (str[i] + 32))
	return (str);
}
