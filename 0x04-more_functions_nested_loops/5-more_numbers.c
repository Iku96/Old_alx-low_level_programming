#include "main.h"
/**
 * function more_numbers prints 10 times numbers 0 - 14
 * @c char to check
 * Returns void
 */

void more_numbers(void)
{
	char c, d;

	for (c = '0'; c < '10'; c++)
	{
		for (d = '0'; d <= '14'; d++)
		{
			_putchar(d);
	}
	_putchar('\n');
