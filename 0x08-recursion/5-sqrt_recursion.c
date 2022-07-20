#include "main.h"

/**
 * find_root - calculates the square root of a given number
 * @n: given number
 * @d: divisor
 * Return: square root of given number
 */
int find_root(int n, int d)
{
	if (d % (n / d) == 0)
	{
		if (d * (n / d) == n)
			return (d);
		else
			return (-1);
	}
	return (0 + find_root(n, d + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: gvien number
 * Return: -1 if n has no natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_root(n, 2));
}
