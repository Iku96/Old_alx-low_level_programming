#include "main.h"
/**
 * int _pow_recursion - function that returns the value of x raised to the power of y
 * @x: The number to be raised.
 * @y: The power
 *
 * Return: the value of x raised to the power of y
 */
/* main.c */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
