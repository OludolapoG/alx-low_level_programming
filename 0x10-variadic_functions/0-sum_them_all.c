#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: number of parameters
 * Return:sum, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parlist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(parlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(parlist, int);

	va_end(parlist);

	return (sum);
}
