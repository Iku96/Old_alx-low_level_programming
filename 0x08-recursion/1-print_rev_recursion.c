#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 */
void print_string_reverse(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	print_string_reverse(s + 1);
	_putchar(*s);
}
