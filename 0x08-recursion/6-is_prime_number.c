#include "main.h"

/**
 * find_prime - computes the prime number of a given integer
 * @n: given integer
 * @d: divisor
 * Return: 1 if n is prime, 0 otherwise
 */
int find_prime(unsigned int n, unsigned int d)
{
	if (n % d == 0)
	{
		if (n == d)
			return (1);
		else
			return (0);
	}
	return (0 + find_prime(n, d + 1));
}

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: given integer
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1)
		return (0);
	return (find_prime(n, 2));
}
