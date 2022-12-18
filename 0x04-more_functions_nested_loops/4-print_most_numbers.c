#include "main.h"
/**
 * Function prints numbers from 0 to 9
 * does not print 2 and 4
 * Returns void
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' || c != '4')
			_putchar(c);
	}
	_putchar('\n');
