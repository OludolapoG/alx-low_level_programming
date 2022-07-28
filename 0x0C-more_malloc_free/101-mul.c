#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count - number of arguments
 * @argv: argument vector - arguments in the program
 * Return: Alway 0 (Success)
 */
int main(int argc, char **argv)
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;

		printf("%d\n", prod);
		return (0);
	}
}
