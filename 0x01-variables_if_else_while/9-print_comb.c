#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar (',');/*adds a space between each digit*/
			putchar (' ');/*adds a comma between each digit*/
		}
	}
	putchar ('\n');
	return (0);
}
