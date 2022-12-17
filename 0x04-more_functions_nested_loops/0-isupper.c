#include <ctype.h>
/**
 * _isupper - check the code.
 * @c: character to check
 * Return: Always 1 or 0
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
