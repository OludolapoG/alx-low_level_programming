#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, q, l;

	for (i = '0'; i < '9'; i++)
	{
		for (q = i + 1; q <= '9'; q++)
		{
			for (l = q + 1; l <= '9'; l++)
			{
				if ((q != i) != l)
				{
					putchar(i);
					putchar(q);
					putchar(l);
					if (i == '7' && q == '8')
						continue;
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
