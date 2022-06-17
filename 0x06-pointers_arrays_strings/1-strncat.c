$include "main.h"
/**
 * 
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
int len, n;
	len = 0;
	while (dest[len] != '\0')
	{
	len++; }
	for (n = 0; n < n && src[n] != '\0'; n++, len++)
	{
	dest[len] = src[n]; }
	dest[len] = '\0';
	return (dest);
}
