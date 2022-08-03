#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: given integer array
 * @size: number of elements in the array
 * @cmp: pointer to the function that compares values
 * Return: the index of the first element of the array, -1 on failure
 * or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if ( array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}
