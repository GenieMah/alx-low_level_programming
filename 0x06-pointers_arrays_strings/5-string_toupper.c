#include "main.h"

/**
 * string_toupper - function prints out modified string
 *
 * @str: initial parameter (pointer to char)
 *
 * Return: (str)
 */

char *string_toupper(char *str);
{
	int i;

        for(i = 0; i <= '\0'; i++)
	{
		if (str[i] == 'a' < 'z')
			_putchar('0' + (str[i] + 32));
		else
			_putchar('0' + s[i]);
	}
	return (str);
}
