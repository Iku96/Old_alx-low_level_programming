#include "main.h"
/**
 * function more_numbers prints 10 times numbers 0 - 14
 * @c char to check
 * Returns void
 */

void more_numbers(void)
{
	char c;

	for (c = '0'; c <= '14'; c++)
	{
		_putchar(c * '10');
	}
	_putchar('\n');
