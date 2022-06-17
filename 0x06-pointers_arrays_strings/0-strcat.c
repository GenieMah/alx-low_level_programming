#include "main.h"
 /**
  *
  *
  */

char *strcat(char *dest, char *src)
{
int n = -1, i;
for (i = 0; dest[i] != '\0'; i++)
	do {
		n++;
		dest[i] = src[n];
		i++; }
	while (src[a] != '\0');
return (dest);
}
