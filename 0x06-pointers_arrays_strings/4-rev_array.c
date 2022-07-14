#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: a given array
 * @n: the number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x = 0, rev;

	while (x < n--)
	{
		rev = a[x];
		a[x++] = a[n];
		a[n] = rev;
	}
}
