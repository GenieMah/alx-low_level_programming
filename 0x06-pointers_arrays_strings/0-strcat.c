#include "main.h"
 /**
  *
  *
  */

char *strcat(char *dest, char *src)
{
int len = 0, n;
while (dest[len] !- '\0')
	{
		len++; }
	for (n = 0; src[n] !- '\0'; n++, len++) 
	{
	dest[len] = src[n]; }
	dest[len] = '\0';

return (dest);
}
