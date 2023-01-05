#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number whose square root is returned.
 *
 * Return: square root of a number.
 */
int _sqrt_recursion(int n)
{
	return _sqrt_recursion_helper(n, 1, n);
}

int _sqrt_recursion_helper(int n, int min, int max)
{
	if (min > max)
	{
		return (-1);
	}
	int mid = (min + max) / 2;
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return _sqrt_recursion_helper(n, mid + 1, max);
	}
	else
	{
		return _sqrt_recursion_helper(n, min, mid - 1);
	}
}
