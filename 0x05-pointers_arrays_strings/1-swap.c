#include "main.h"

/**
 * swap_int - swaps integer values
 *
 *  @a - first int
 *  @b - second int
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
