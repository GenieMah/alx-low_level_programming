#include<unistd.h>

/**
 * main: code entry/starting point
 *
 * Description: code outputs the quote to the console
 *
 * Return 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
