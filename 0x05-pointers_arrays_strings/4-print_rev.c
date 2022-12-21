#include "main.h"

/**
 * Function print_rev: Prints number in reverse.
 *
 * @s - this is my input string
 *
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0';
			index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
