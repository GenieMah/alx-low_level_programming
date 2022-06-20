#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 *
 * @s: pointer
 * @b: constant byte
 * @n: bytes of memory
 * Return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
        for (n > 0; i++, n--) {
                s[i] = b; }
        return (s);
}

