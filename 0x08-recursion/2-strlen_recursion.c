#include "main.h"
/**
 * _strlen_recursion - Returns length of the string
 * @s: the characters in the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	return 1 + _strlen_recursion(s + 1);
}
