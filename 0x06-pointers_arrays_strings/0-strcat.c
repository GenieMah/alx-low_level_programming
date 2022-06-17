#include "main.h"
 /**
  *
  *
  */

char *strcat(char *dest, char *src)
{
int n = 0, len = 0;
while (dest[n++])
	len++;
for (n = 0; src[n]; n++;)
	dest[len++] = src[n];

return (dest);
}
