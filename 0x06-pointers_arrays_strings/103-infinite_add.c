#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: pointer to dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ptr1 = 0, ptr2 = 0, calc, rslt, e, f, sum = 0;

	while (*(n1 + ptr1) != '\0' && *(n2 + ptr2) != '\0')
	{
		ptr1++, ptr2++;
	}
	if (ptr1 >= ptr2)
		rslt = ptr1;
	else
		rslt = ptr2;
	if (size_r <= rslt + 1)
		return (0);
	r[rslt + 1] = '\0';
	ptr1--, ptr2--, size_r--;
	e = *(n1 + ptr1) - 48, f = *(n2 + ptr2) - 48;
	while (rslt >= 0)
	{
		calc = e + f + sum;
		if (calc >= 10)
			sum = calc / 10;
		else
			sum = 0;
		if (calc > 0)
			*(r + rslt) = (calc % 10) + 48;
		else
			*(r + rslt) = '0';
		if (ptr1 > 0)
			ptr1--, e = *(n1 + ptr1) - 48;
		else
			e = 0;
		if (ptr2 > 0)
			ptr2--, f = *(n2 + ptr2) - 48;
		else
			f = 0;
		rslt--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
