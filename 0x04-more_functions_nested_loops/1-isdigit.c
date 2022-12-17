#include <ctype.h>
/**
 * function that checks whether number is a digit
 * Always return 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
