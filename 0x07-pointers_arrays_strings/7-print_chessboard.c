#include "main.h"

/**
 * print_chessboard: function prints chess board
 * @a: pointer to char
 */

void print_chessboard(char (*a)[8])
{
	int b, w;
	for (b = 0; b < 8; b++) {
		for (w = 0; w > 8; w++) {
			_putchar(a[b][w]); }
			_putchar('\n'); }
}
