#include "main.h"
/**
 * function that checks whether number is a digit
 * @c char to check
 * Always return 1 or 0
 */
void print_numbers(void)
{
	char c;
	
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
