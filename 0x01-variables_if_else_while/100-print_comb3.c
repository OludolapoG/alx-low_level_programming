#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, q;

	for (i = '0'; i < '9'; i++)
	{
		for (q = i + 1; q <= '9'; q++)
		{
			if (q != i)
			{
				putchar(i);
				putchar(q);

				if (i == '8' && q == '9')
					continue;
				putchar (',');
				putchar (' ');
			}
		}
	}
		putchar ('\n');
		return (0);
}
